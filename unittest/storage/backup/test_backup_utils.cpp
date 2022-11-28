/**
 * Copyright (c) 2021 OceanBase
 * OceanBase CE is licensed under Mulan PubL v2.
 * You can use this software according to the terms and conditions of the Mulan PubL v2.
 * You may obtain a copy of Mulan PubL v2 at:
 *          http://license.coscl.org.cn/MulanPubL-2.0
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PubL v2 for more details.
 */

#define USING_LOG_PREFIX STORAGE
#include <gtest/gtest.h>
#define private public
#define protected public

#include <thread>
#include <vector>
#include <gtest/gtest.h>
#include "test_backup.h"
#include "storage/backup/ob_backup_utils.h"
#include "storage/blocksstable/ob_logic_macro_id.h"

using namespace oceanbase;
using namespace oceanbase::common;
using namespace oceanbase::share;
using namespace oceanbase::backup;
using namespace oceanbase::blocksstable;

namespace oceanbase {
namespace backup {

class ObFakeBackupTabletProvider : public ObIBackupTabletProvider {
public:
  ObFakeBackupTabletProvider();
  virtual ~ObFakeBackupTabletProvider();
  int init(const int64_t total_item_count);
  void reset() override;
  void reuse() override;
  bool is_run_out() override;
  void set_backup_data_type(const share::ObBackupDataType &backup_data_type)
  {
    UNUSED(backup_data_type);
  }
  share::ObBackupDataType get_backup_data_type() const override
  {
    ObBackupDataType type;
    return type;
  }
  int get_next_batch_items(common::ObIArray<ObBackupProviderItem> &items, int64_t &task_id) override;
  ObBackupTabletProviderType get_type() const override
  {
    return BACKUP_TABLET_PROVIDER;
  }

private:
  bool is_inited_;
  lib::ObMutex mutex_;
  int64_t task_id_;
  int64_t supplied_item_count_;
  int64_t total_item_count_;
  DISALLOW_COPY_AND_ASSIGN(ObFakeBackupTabletProvider);
};

ObFakeBackupTabletProvider::ObFakeBackupTabletProvider()
    : is_inited_(false), mutex_(), task_id_(-1), supplied_item_count_(0), total_item_count_(0)
{}

ObFakeBackupTabletProvider::~ObFakeBackupTabletProvider()
{}

int ObFakeBackupTabletProvider::init(const int64_t total_item_count)
{
  int ret = OB_SUCCESS;
  if (IS_INIT) {
    ret = OB_INIT_TWICE;
    LOG_WARN("init twice", K(ret));
  } else if (total_item_count <= 0) {
    ret = OB_INVALID_ARGUMENT;
    LOG_WARN("get invalid args", K(ret), K(total_item_count));
  } else {
    task_id_ = 0;
    supplied_item_count_ = 0;
    total_item_count_ = total_item_count;
    is_inited_ = true;
  }
  return ret;
}

void ObFakeBackupTabletProvider::reset()
{
  is_inited_ = false;
}

void ObFakeBackupTabletProvider::reuse()
{
  task_id_ = 0;
  supplied_item_count_ = 0;
}

bool ObFakeBackupTabletProvider::is_run_out()
{
  bool run_out = false;
  lib::ObMutexGuard guard(mutex_);
  run_out = supplied_item_count_ >= total_item_count_;
  return run_out;
}

int ObFakeBackupTabletProvider::get_next_batch_items(common::ObIArray<ObBackupProviderItem> &items, int64_t &task_id)
{
  int ret = OB_SUCCESS;
  items.reset();
  lib::ObMutexGuard guard(mutex_);
  if (supplied_item_count_ >= total_item_count_) {
    ret = OB_ITER_END;
  } else {
    int64_t i = 0;
    int64_t total = random(256, 1024);
    while (OB_SUCC(ret) && i < total) {
      blocksstable::ObLogicMacroBlockId fake_logic_id;
      blocksstable::MacroBlockId fake_macro_block_id;
      storage::ObITable::TableKey fake_table_key;
      common::ObTabletID tablet_id(supplied_item_count_ + 1);
      ObBackupProviderItem item;
      if (OB_FAIL(item.set(PROVIDER_ITEM_TABLET_META, fake_logic_id, fake_macro_block_id, fake_table_key, tablet_id))) {
        LOG_WARN("failed to set item", K(ret));
      } else if (OB_FAIL(items.push_back(item))) {
        LOG_WARN("failed to push back", K(ret), K(item));
      } else {
        i++;
        supplied_item_count_++;
      }
    }
  }
  if (OB_SUCC(ret)) {
    task_id = task_id_;
    ++task_id_;
  }
  return ret;
}

void process(ObIBackupTabletProvider *provider, ObBackupMacroBlockTaskMgr *task_mgr)
{
  int ret = OB_SUCCESS;
  int64_t task_id = 0;
  ObArray<ObBackupProviderItem> item_list;
  while (OB_SUCC(ret)) {
    const bool is_run_out = provider->is_run_out();
    if (!is_run_out) {
      if (OB_FAIL(provider->get_next_batch_items(item_list, task_id))) {
        if (OB_ITER_END == ret) {
          ret = OB_SUCCESS;
        } else {
          LOG_WARN("failed to get next batch");
        }
      } else if (OB_FAIL(task_mgr->receive(task_id, item_list))) {
        LOG_WARN("failed to receive from task mgr", K(ret));
      }
    }
    if (OB_SUCC(ret)) {
      ObArray<ObBackupProviderItem> items;
      const bool has_remain = task_mgr->has_remain();
      int64_t file_id = 0;
      if (OB_FAIL(task_mgr->deliver(items, file_id))) {
        if (OB_EAGAIN == ret) {
          if (has_remain && !is_run_out) {
            continue;
          } else if (is_run_out) {
            LOG_INFO("run out", K(items));
            break;
          }
        }
      } else {
        const ObTabletID &first = items.at(0).tablet_id_;
        const ObTabletID &last = items.at(items.count() - 1).tablet_id_;
        LOG_INFO("backup items infos", K(first), K(last), K(items.count()));
      }
    }
  }
}

void test_task_mgr(const int64_t batch_count, const int64_t total_item_count, const int64_t concurrency)
{
  int ret = OB_SUCCESS;
  const int64_t thread_count = concurrency;
  share::ObBackupDataType backup_data_type;
  backup_data_type.set_minor_data_backup();
  ObBackupMacroBlockTaskMgr *task_mgr = new ObBackupMacroBlockTaskMgr;
  ObFakeBackupTabletProvider *provider = new ObFakeBackupTabletProvider;
  ret = task_mgr->init(backup_data_type, batch_count);
  EXPECT_EQ(OB_SUCCESS, ret);
  ret = provider->init(total_item_count);
  EXPECT_EQ(OB_SUCCESS, ret);
  std::vector<std::thread> workers;
  for (int64_t i = 0; i < thread_count; ++i) {
    std::thread th(process, provider, task_mgr);
    workers.push_back(std::move(th));
  }
  for (auto &it : workers) {
    it.join();
  }
  delete task_mgr;
  delete provider;
}

TEST(TestBackupUtils, test_task_mgr)
{
  test_task_mgr(1024, 10240, 1);
}

void make_macro_block_id_array(const int64_t tablet_id, const int64_t logic_version,
    const common::ObIArray<int64_t> &data_seq_list, common::ObIArray<ObBackupMacroBlockIDPair> &id_list)
{
  int ret = OB_SUCCESS;
  ObBackupMacroBlockIDPair macro_id;
  for (int64_t i = 0; OB_SUCC(ret) && i < data_seq_list.count(); ++i) {
    const int64_t data_seq = data_seq_list.at(i);
    macro_id.logic_id_ = ObLogicMacroBlockId(data_seq, logic_version, tablet_id);
    ret = id_list.push_back(macro_id);
    ASSERT_EQ(OB_SUCCESS, ret);
  }
}

TEST(TestBackupUtils, test_check_macro_block_reuse)
{
  int ret = OB_SUCCESS;
  ObBackupTabletProvider provider;
  bool need_skip = false;
  const int64_t tablet_id = 200001;
  const int64_t logic_version_1 = 100;
  common::ObArray<int64_t> data_seq_list;
  ret = data_seq_list.push_back(0);
  ASSERT_EQ(OB_SUCCESS, ret);
  ret = data_seq_list.push_back(1);
  ASSERT_EQ(OB_SUCCESS, ret);
  ret = data_seq_list.push_back(2);
  ASSERT_EQ(OB_SUCCESS, ret);
  ret = data_seq_list.push_back(3);
  ASSERT_EQ(OB_SUCCESS, ret);
  ret = data_seq_list.push_back(5);
  ASSERT_EQ(OB_SUCCESS, ret);
  common::ObArray<ObBackupMacroBlockIDPair> id_pair_list_1;

  make_macro_block_id_array(tablet_id, logic_version_1, data_seq_list, id_pair_list_1);

  blocksstable::ObLogicMacroBlockId logic_id_1(0/*data_seq*/, 100/*logic_version*/, tablet_id);
  provider.inner_check_macro_block_need_skip_(logic_id_1, id_pair_list_1, need_skip);
  ASSERT_TRUE(need_skip);

  logic_id_1 = ObLogicMacroBlockId(1/*data_seq*/, 100/*logic_version*/, tablet_id);
  provider.inner_check_macro_block_need_skip_(logic_id_1, id_pair_list_1, need_skip);
  ASSERT_TRUE(need_skip);

  logic_id_1 = ObLogicMacroBlockId(2/*data_seq*/, 100/*logic_version*/, tablet_id);
  provider.inner_check_macro_block_need_skip_(logic_id_1, id_pair_list_1, need_skip);
  ASSERT_TRUE(need_skip);

  logic_id_1 = ObLogicMacroBlockId(3/*data_seq*/, 100/*logic_version*/, tablet_id);
  provider.inner_check_macro_block_need_skip_(logic_id_1, id_pair_list_1, need_skip);
  ASSERT_TRUE(need_skip);

  logic_id_1 = ObLogicMacroBlockId(4/*data_seq*/, 100/*logic_version*/, tablet_id);
  provider.inner_check_macro_block_need_skip_(logic_id_1, id_pair_list_1, need_skip);
  ASSERT_FALSE(need_skip);

  logic_id_1 = ObLogicMacroBlockId(5/*data_seq*/, 100/*logic_version*/, tablet_id);
  provider.inner_check_macro_block_need_skip_(logic_id_1, id_pair_list_1, need_skip);
  ASSERT_TRUE(need_skip);

  logic_id_1 = ObLogicMacroBlockId(6/*data_seq*/, 100/*logic_version*/, tablet_id);
  provider.inner_check_macro_block_need_skip_(logic_id_1, id_pair_list_1, need_skip);
  ASSERT_FALSE(need_skip);

  logic_id_1 = ObLogicMacroBlockId(0/*data_seq*/, 200/*logic_version*/, tablet_id);
  provider.inner_check_macro_block_need_skip_(logic_id_1, id_pair_list_1, need_skip);
  ASSERT_FALSE(need_skip);
}

}  // namespace backup
}  // namespace oceanbase

int main(int argc, char **argv)
{
  system("rm -f test_backup_utils.log*");
  ObLogger &logger = ObLogger::get_logger();
  logger.set_file_name("test_backup_utils.log", true);
  logger.set_log_level("info");
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
