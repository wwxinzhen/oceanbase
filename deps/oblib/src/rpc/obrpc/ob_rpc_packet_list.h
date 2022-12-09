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

#define MAX_PCODE 0xFFFF

// for initialization
PCODE_DEF(OB_TEST_PCODE, 0x001)
PCODE_DEF(OB_TEST2_PCODE, 0x002)
PCODE_DEF(OB_TEST3_PCODE, 0x003)
PCODE_DEF(OB_TEST4_PCODE, 0x004)
PCODE_DEF(OB_TEST5_PCODE, 0x005)
PCODE_DEF(OB_TEST6_PCODE, 0x006)
PCODE_DEF(OB_TEST7_PCODE, 0x007)
PCODE_DEF(OB_TEST8_PCODE, 0x008)
PCODE_DEF(OB_TEST9_PCODE, 0x009)

// INVALID REQUEST PCODE, no such rpc
PCODE_DEF(OB_ERROR_PACKET, 0x010)

//for test rpc stream compress
PCODE_DEF(OB_RPC_STREAM_TEST_DECODE_COMPRESS_PCODE, 0x011)
PCODE_DEF(OB_RPC_STREAM_TEST_DECODE_RAW_PCODE, 0x012)
PCODE_DEF(OB_RPC_STREAM_TEST_ENCODE_SEGMENT_PCODE, 0x013)
PCODE_DEF(OB_RPC_STREAM_TEST_ENCODE_RAW_PCODE, 0x014)
PCODE_DEF(OB_RPC_STREAM_TEST_INIT_CTX_PCODE, 0x015)

// core, manager
PCODE_DEF(OB_BOOTSTRAP, 0x101)
PCODE_DEF(OB_RENEW_LEASE, 0x102)
PCODE_DEF(OB_IS_EMPTY_SERVER, 0x103)
PCODE_DEF(OB_SET_ROLE, 0x104)
PCODE_DEF(OB_GET_ROOT_SERVER_ROLE, 0x105)
PCODE_DEF(OB_SET_CONFIG, 0x106)
PCODE_DEF(OB_GET_CONFIG, 0x107)
PCODE_DEF(OB_EXECUTE_BOOTSTRAP, 0x108)
PCODE_DEF(OB_REFRESH_CONFIG, 0x109)
PCODE_DEF(OB_ROOT_MAJOR_FREEZE, 0x10A)
PCODE_DEF(OB_ADD_SERVER, 0x10B)
PCODE_DEF(OB_DELETE_SERVER, 0x10C)
PCODE_DEF(OB_CANCEL_DELETE_SERVER, 0x10D)
PCODE_DEF(OB_ADD_ZONE, 0x10E)
PCODE_DEF(OB_DELETE_ZONE, 0x10F)
PCODE_DEF(OB_START_ZONE, 0x110)
PCODE_DEF(OB_STOP_ZONE, 0x111)

PCODE_DEF(OB_TENANT_MGR, 0x113)
PCODE_DEF(OB_MERGE_FINISH, 0x114)
//PCODE_DEF(OB_MERGE_ERROR, 0x115)      // 4.0 not supported
PCODE_DEF(OB_START_SERVER, 0x116)
PCODE_DEF(OB_STOP_SERVER, 0x117)
PCODE_DEF(OB_BROADCAST_DS_ACTION, 0x118)
PCODE_DEF(OB_GET_FROZEN_VERSION, 0x119)
PCODE_DEF(OB_GET_FROZEN_STATUS, 0x11A)
PCODE_DEF(OB_FETCH_ALIVE_SERVER, 0x11B)
PCODE_DEF(OB_ROOT_MINOR_FREEZE, 0x11C)
PCODE_DEF(OB_ALTER_ZONE, 0x11D)
//PCODE_DEF(OB_GET_CLUSTER_INFO, 0x11F) // 4.0 not supported
//PCODE_DEF(OB_CLUSTER_HB, 0x120)// 4.0 not supported
PCODE_DEF(OB_NOTIFY_TENANT_SERVER_UNIT_RESOURCE, 0x121)
//PCODE_DEF(OB_LOG_DDL_NOP_OPERATOR, 0x122) // 4.0 not supported
PCODE_DEF(OB_GET_TENANT_SCHEMA_VERSIONS, 0x123)
PCODE_DEF(OB_BROADCAST_SCHEMA, 0x124)
//PCODE_DEF(OB_CLUSTER_REGIST, 0x125)// 4.0 not supported
//PCODE_DEF(OB_UPDATE_CLUSTER_INFO, 0x126)// 4.0 not supported
PCODE_DEF(OB_GET_SCHEMA_SNAPSHOT, 0x127)
//PCODE_DEF(OB_FINISH_SCHEMA_SPLIT, 0x13A)
PCODE_DEF(OB_GET_TENANT_REFRESHED_SCHEMA_VERSION, 0x13B)
//PCODE_DEF(OB_RESTORE_PARTITIONS, 0x13D)
//PCODE_DEF(OB_GET_MASTER_RS, 0x13E)
PCODE_DEF(OB_GET_TENANT_UNIT_DIST, 0x13F) // compat only
//PCODE_DEF(OB_CHECK_STANDBY_CAN_ACCESS, 0x140)// 4.0 not supported
PCODE_DEF(OB_REFRESH_MEMORY_STAT, 0x141)
PCODE_DEF(OB_CHECK_DEPLOYMENT_MODE, 0x143)
// PCODE_DEF(OB_UPDATE_FREEZE_SCHEMA_VERSIONS, 0x144)
//PCODE_DEF(OB_GET_CLUSTER_INFO_IN_STRICT_MODE, 0x145)// 4.0 not supported
//PCODE_DEF(OB_GET_CLUSTER_STATS, 0x146)// 4.0 not supported
PCODE_DEF(OB_WAIT_MASTER_KEY_IN_SYNC, 0x147)
PCODE_DEF(OB_GET_REGION_BW, 0x148)
PCODE_DEF(OB_FETCH_ACTIVE_SERVER_STATUS, 0x149)
PCODE_DEF(OB_DETECT_MASTER_RS_LS, 0x14A)
//PCODE_DEF(OB_DETECT_MASTER_RS_LOG_STREAM, 0x14B)  // for rpc_log_stream_table's get
PCODE_DEF(OB_BATCH_BROADCAST_SCHEMA, 0x14C)
PCODE_DEF(OB_TENANT_MAJOR_FREEZE, 0x14D)
PCODE_DEF(OB_SET_TENANT_CONFIG, 0x14E)
PCODE_DEF(OB_TENANT_ADMIN_MERGE, 0x14F)

PCODE_DEF(OB_WASH_MEMORY_FRAGMENTATION, 0x150)
PCODE_DEF(OB_GET_TENANT_TABLE_SCHEMA, 0x151)
// remote interrupt call
PCODE_DEF(OB_REMOTE_INTERRUPT_CALL, 0x1EE)

PCODE_DEF(OB_GET_DIAGNOSE_ARGS, 0x1FF)

// DDL relating pcode
PCODE_DEF(OB_FETCH_SCHEMA, 0x201)
PCODE_DEF(OB_SWITCH_SCHEMA, 0x202)
PCODE_DEF(OB_CREATE_TABLE, 0x203)
PCODE_DEF(OB_DROP_TABLE, 0x204)
PCODE_DEF(OB_ALTER_TABLE, 0x205)
PCODE_DEF(OB_CREATE_TENANT, 0x206)
PCODE_DEF(OB_DROP_TENANT, 0x207)
PCODE_DEF(OB_CREATE_DATABASE, 0x208)
PCODE_DEF(OB_DROP_DATABASE, 0x209)
//PCODE_DEF(OB_CREATE_PARTITION, 0x20A)     // 4.0 not supported
PCODE_DEF(OB_SWITCH_LEADER, 0x20B)
PCODE_DEF(OB_CREATE_TABLEGROUP, 0x20C)
PCODE_DEF(OB_DROP_TABLEGROUP, 0x20D)
PCODE_DEF(OB_CREATE_INDEX, 0x20E)
PCODE_DEF(OB_DROP_INDEX, 0x20F)
PCODE_DEF(OB_MODIFY_TENANT, 0x210)
PCODE_DEF(OB_LOCK_TENANT, 0x211)
PCODE_DEF(OB_CREATE_RESOURCE_UNIT, 0x212)
PCODE_DEF(OB_DROP_RESOURCE_UNIT, 0x213)
PCODE_DEF(OB_CREATE_RESOURCE_POOL, 0x214)
PCODE_DEF(OB_ALTER_RESOURCE_POOL, 0x215)
PCODE_DEF(OB_DROP_RESOURCE_POOL, 0x216)
PCODE_DEF(OB_CREATE_VIEW, 0x217)
PCODE_DEF(OB_ALTER_VIEW, 0x218)
PCODE_DEF(OB_DROP_VIEW, 0x219)
PCODE_DEF(OB_ALTER_TABLEGROUP, 0x21A)
PCODE_DEF(OB_UPDATE_INDEX_TABLE_STATUS, 0x21B)
PCODE_DEF(OB_RENAME_TABLE, 0x21C)
PCODE_DEF(OB_TRUNCATE_TABLE, 0x21D)
PCODE_DEF(OB_ALTER_DATABASE, 0x21E)
PCODE_DEF(OB_CREATE_TABLE_LIKE, 0x21F)
//PCODE_DEF(OB_GET_LEADER_CANDIDATES, 0x220) // 4.0 not supported
PCODE_DEF(OB_REQUEST_HEARTBEAT, 0x221)
//PCODE_DEF(OB_BROADCAST_SYS_SCHEMA, 0x222)
PCODE_DEF(OB_ALTER_RESOURCE_UNIT, 0x223)
//PCODE_DEF(OB_CREATE_PARTITION_BATCH, 0x224)   // 4.0 not supported
PCODE_DEF(OB_TRUNCATE_TABLE_V2, 0x225)
PCODE_DEF(OB_GET_PARTITION_COUNT, 0x226)
//PCODE_DEF(OB_SWITCH_LEADER_LIST, 0x227)       // 4.0 not supported
PCODE_DEF(OB_FLASHBACK_TABLE_FROM_RECYCLEBIN, 0x228)
PCODE_DEF(OB_PURGE_TABLE, 0x229)
PCODE_DEF(OB_FLASHBACK_DATABASE, 0x22A)
PCODE_DEF(OB_PURGE_DATABASE, 0x22B)
PCODE_DEF(OB_PURGE_EXPIRE_RECYCLE_OBJECTS, 0x22C)
//PCODE_DEF(OB_SWITCH_LEADER_LIST_ASYNC, 0x22D)     // 4.0 not supported
//PCODE_DEF(OB_GET_LEADER_CANDIDATES_ASYNC, 0x22E) // 4.0 not supported
PCODE_DEF(OB_COMMIT_ALTER_TENANT_LOCALITY, 0x22F)
//PCODE_DEF(OB_COMMIT_ALTER_TABLE_LOCALITY, 0x230) //not used on ver 4.0
PCODE_DEF(OB_SET_GLOBAL_VARIABLE, 0x231)
PCODE_DEF(OB_UPDATE_SYS_VAR_VERSION, 0x232)
PCODE_DEF(OB_ALTER_TABLE_V2, 0x233)
PCODE_DEF(OB_ADD_SYSVAR, 0x234)
PCODE_DEF(OB_MODIFY_SYSVAR, 0x235)
PCODE_DEF(OB_FLASHBACK_INDEX, 0x236)
PCODE_DEF(OB_PURGE_INDEX, 0x237)
//PCODE_DEF(OB_CHECK_UNIQUE_INDEX_REQUEST, 0x238)     // 4.0 not supported
//PCODE_DEF(OB_CHECK_UNIQUE_INDEX_RESPONSE, 0x239)    // 4.0 not supported
//PCODE_DEF(OB_CHECK_SINGLE_REPLICA_MAJOR_SSTABLE_EXIST, 0x23A) // 4.0 not supported
//PCODE_DEF(OB_CHECK_ALL_REPLICA_MAJOR_SSTABLE_EXIST, 0x23B) // 4.0 not supported
//PCODE_DEF(OB_COMMIT_ALTER_TABLEGROUP_LOCALITY, 0x23C)//not used on ver 4.0
//PCODE_DEF(OB_QUERY_MAX_DECIDED_TRANS_VERSION, 0x23D)    // 4.0 not supported
//PCODE_DEF(OB_QUERY_IS_VALID_MEMBER, 0x23E)
//PCODE_DEF(OB_GET_LEADER_CANDIDATES_ASYNC_V2, 0x23F) // 4.0 not supported
PCODE_DEF(OB_SPLIT_RESOURCE_POOL, 0x240)
//PCODE_DEF(OB_CHECK_SINGLE_REPLICA_MAJOR_SSTABLE_EXIST_WITH_TIME, 0x241) // 4.0 not supported
//PCODE_DEF(OB_CHECK_ALL_REPLICA_MAJOR_SSTABLE_EXIST_WITH_TIME, 0x242)    // 4.0 not supported
PCODE_DEF(OB_CALC_COLUMN_CHECKSUM_REQUEST, 0x243)
PCODE_DEF(OB_CALC_COLUMN_CHECKSUM_RESPONSE, 0x244)
PCODE_DEF(OB_DO_SEQUENCE_DDL, 0x245)
//PCODE_DEF(OB_ALTER_CLUSTER_ATTR_DDL, 0x246) // 4.0 not supported
//PCODE_DEF(OB_ALTER_CLUSTER, 0x247)// 4.0 not supported
PCODE_DEF(OB_CREATE_TENANT_END, 0x248)
//PCODE_DEF(OB_REACH_PARTITION_LIMIT, 0x24A)
//PCODE_DEF(OB_ALTER_CLUSTER_INFO, 0x24B)// 4.0 not supported
PCODE_DEF(OB_CHECK_MERGE_FINISH, 0x24C)
//PCODE_DEF(OB_CHECK_CLUSTER_VALID_TO_ADD, 0x24D)// 4.0 not supported
PCODE_DEF(OB_FLASHBACK_TABLE_TO_SCN, 0x24E)
//PCODE_DEF(OB_GET_STANDBY_CLUSTER_STATISTIC, 0x24F)// 4.0 not supported

// Privilege relating pcode
PCODE_DEF(OB_CREATE_USER, 0x250)
PCODE_DEF(OB_DROP_USER, 0x251)
PCODE_DEF(OB_RENAME_USER, 0x252)
PCODE_DEF(OB_SET_PASSWD, 0x253)
PCODE_DEF(OB_GRANT, 0x254)
PCODE_DEF(OB_REVOKE_USER, 0x255)
PCODE_DEF(OB_LOCK_USER, 0x256)
PCODE_DEF(OB_REVOKE_DB, 0x257)
PCODE_DEF(OB_REVOKE_TABLE, 0x258)
PCODE_DEF(OB_OPTIMIZE_TABLE, 0x259)
//PCODE_DEF(OB_BATCH_SET_MEMBER_LIST, 0x25A)    // 4.0 not supported
//PCODE_DEF(OB_GET_SWITCHOVER_STATUS, 0x25B)    // 4.0 not supported

PCODE_DEF(OB_DO_TABLESPACE_DDL, 0x25C)
//profile
PCODE_DEF(OB_DO_PROFILE_DDL, 0x25D)
PCODE_DEF(OB_ALTER_USER_PROFILE, 0x25E)
//audit
PCODE_DEF(OB_SECURITY_AUDIT, 0x25F)

PCODE_DEF(OB_DO_KEYSTORE_DDL, 0x260)
//PCODE_DEF(OB_STANDBY_GRANT, 0x261)
//PCODE_DEF(OB_FORCE_DROP_SCHEMA, 0x262)
//PCODE_DEF(OB_BATCH_WAIT_LEADER, 0x263)              // 4.0 not supported
//PCODE_DEF(OB_UPGRADE_STANDBY_SCHEMA, 0x264)
PCODE_DEF(OB_MERGE_RESOURCE_POOL, 0x265)
//PCODE_DEF(OB_BATCH_WRITE_CUTDATA_CLOG, 0x266)       // 4.0 not supported
PCODE_DEF(OB_CLEAN_SEQUENCE_CACHE, 0x267)
PCODE_DEF(OB_ALTER_RESOURCE_TENANT, 0x268)

PCODE_DEF(OB_REVOKE_SYSPRIV, 0x270)

// auto part ddl
//PCODE_DEF(OB_EXECUTE_RANGE_PART_SPLIT, 0x271)     // 4.0 not supported
// Alter role ddl
PCODE_DEF(OB_ALTER_ROLE, 0x272)
//PCODE_DEF(OB_CLUSTER_ACTION_VERIFY, 0x273)     // 4.0 not supported
PCODE_DEF(OB_SUBMIT_BUILD_INDEX_TASK, 0x274)
PCODE_DEF(OB_FETCH_SSTABLE_SIZE, 0x275)

// system admin command
PCODE_DEF(OB_ADMIN_SWITCH_REPLICA_ROLE, 0x280)
PCODE_DEF(OB_ADMIN_DROP_REPLICA, 0x281)
PCODE_DEF(OB_ADMIN_MIGRATE_REPLICA, 0x282)
PCODE_DEF(OB_ADMIN_REPORT_REPLICA, 0x283)
PCODE_DEF(OB_ADMIN_RECYCLE_REPLICA, 0x284)
PCODE_DEF(OB_ADMIN_MERGE, 0x285)
PCODE_DEF(OB_ADMIN_CLEAR_ROOTTABLE, 0x286)
PCODE_DEF(OB_ADMIN_REFRESH_SCHEMA, 0x287)
PCODE_DEF(OB_ADMIN_SET_CONFIG, 0x288)
PCODE_DEF(OB_ADMIN_CLEAR_LOCATION_CACHE, 0x289)
PCODE_DEF(OB_ADMIN_RELOAD_UNIT, 0x28A)
PCODE_DEF(OB_ADMIN_RELOAD_SERVER, 0x28B)
PCODE_DEF(OB_ADMIN_RELOAD_ZONE, 0x28C)
PCODE_DEF(OB_ADMIN_CLEAR_MERGE_ERROR, 0x28D)
PCODE_DEF(OB_ADMIN_MIGRATE_UNIT, 0x28E)
PCODE_DEF(OB_ADMIN_UPGRADE_VIRTUAL_SCHEMA, 0x28F)
PCODE_DEF(OB_RUN_JOB, 0x290)
PCODE_DEF(OB_ADMIN_SWITCH_RS_ROLE, 0x291)
PCODE_DEF(OB_ADMIN_FLUSH_CACHE, 0x292)
PCODE_DEF(OB_ADMIN_UPGRADE_CMD, 0x293)
PCODE_DEF(OB_ADMIN_SET_MERGE_LIST, 0x294)
PCODE_DEF(OB_ADMIN_CHANGE_REPLICA, 0x295)
//PCODE_DEF(OB_BATCH_START_ELECTION, 0X296)     // 4.0 not supported
//PCODE_DEF(OB_BATCH_FLASHBACK, 0x297)     // 4.0 not supported
PCODE_DEF(OB_PARTITION_STOP_WRITE, 0x298)
PCODE_DEF(OB_PARTITION_CHECK_LOG, 0x299)
PCODE_DEF(OB_GET_WRS_INFO, 0x29B)
PCODE_DEF(OB_ADMIN_RELOAD_GTS, 0x29C)
//PCODE_DEF(OB_BATCH_PREPARE_FLASHBACK, 0x29D)     // 4.0 not supported
PCODE_DEF(OB_ADMIN_REFRESH_MEMORY_STAT, 0x29E)
PCODE_DEF(OB_ADMIN_ROLLING_UPGRADE_CMD, 0x29F)
PCODE_DEF(OB_BATCH_SWITCH_RS_LEADER, 0x2A0)
PCODE_DEF(OB_RUN_UPGRADE_JOB, 0x2A1)
PCODE_DEF(OB_ADMIN_WASH_MEMORY_FRAGMENTATION, 0x2A2)
PCODE_DEF(OB_CHECKPOINT_SLOG, 0x2A3)
PCODE_DEF(OB_UPGRADE_TABLE_SCHEMA, 0x2A4)
//PCODE_DEF(OB_ADMIN_ADD_ARBITRATION_SERVICE, 0x2A5)
//PCODE_DEF(OB_ADMIN_REMOVE_ARBITRATION_SERVICE, 0x2A6)
//PCODE_DEF(OB_ADMIN_REPLACE_ARBITRATION_SERVICE, 0x2A7)
//PCODE_DEF(OB_CHANGE_TENANT_ARB_SERVICE_STATUS, 0x2A8)

PCODE_DEF(OB_CREATE_OUTLINE, 0x350)
PCODE_DEF(OB_DROP_OUTLINE, 0x351)
PCODE_DEF(OB_ALTER_OUTLINE, 0x352)
PCODE_DEF(OB_RS_SET_TP, 0x353)
PCODE_DEF(OB_SET_TP, 0x354)
PCODE_DEF(OB_REFRESH_TIME_ZONE_INFO, 0x355)
PCODE_DEF(OB_REQUEST_TIME_ZONE_INFO, 0x356)
PCODE_DEF(OB_CREATE_SYNONYM, 0x357)
PCODE_DEF(OB_DROP_SYNONYM, 0x358)
// 0x359, 0x360, 0x361 is delete
PCODE_DEF(OB_LOAD_BASELINE, 0x362)
PCODE_DEF(OB_ADMIN_LOAD_BASELINE, 0x363)
PCODE_DEF(OB_CREATE_ROUTINE, 0x364)
PCODE_DEF(OB_DROP_ROUTINE, 0x365)
PCODE_DEF(OB_CREATE_PACKAGE, 0x366)
PCODE_DEF(OB_ALTER_PACKAGE, 0x367)
PCODE_DEF(OB_DROP_PACKAGE, 0x368)
PCODE_DEF(OB_CREATE_USER_DEFINED_FUNCTION, 0x369)
PCODE_DEF(OB_DROP_USER_DEFINED_FUNCTION, 0x370)
PCODE_DEF(OB_ALTER_ROUTINE, 0x371)
PCODE_DEF(OB_CREATE_UDT, 0x372)
PCODE_DEF(OB_DROP_UDT, 0x373)
PCODE_DEF(OB_CREATE_TRIGGER, 0x374)
PCODE_DEF(OB_ALTER_TRIGGER, 0x375)
PCODE_DEF(OB_DROP_TRIGGER, 0x376)
PCODE_DEF(OB_CREATE_DBLINK, 0x377)
PCODE_DEF(OB_DROP_DBLINK, 0x378)
PCODE_DEF(OB_ALTER_DBLINK, 0x379)
PCODE_DEF(OB_FLASHBACK_TENANT, 0x37A)
PCODE_DEF(OB_PURGE_TENANT, 0x37B)
PCODE_DEF(OB_ADMIN_RECOVERY, 0x37C)
PCODE_DEF(OB_CREATE_RESTORE_POINT, 0x37D)
PCODE_DEF(OB_DROP_RESTORE_POINT, 0x37E)
PCODE_DEF(OB_GET_RECYCLE_SCHEMA_VERSIONS, 0x37F)
PCODE_DEF(OB_SCHEMA_REVISE, 0x380)
PCODE_DEF(OB_CREATE_DIRECTORY, 0x381)
PCODE_DEF(OB_DROP_DIRECTORY, 0x382)
PCODE_DEF(OB_UPDATE_MAX_USED_TENANT_ID, 0x383)
PCODE_DEF(OB_REFRESH_SCHEMA, 0x384)
//PCODE_DEF(OB_PROMOTE_ARBITRATION_SERVICE_STATUS_DDL, 0x385)

// ob server
//PCODE_DEF(OB_MIGRATE_OVER, 0x402)
//PCODE_DEF(OB_CLEAR_REBUILD_ROOT_PARTITION, 0x403): not supported on 4.0
PCODE_DEF(OB_FETCH_SYS_LS, 0x405)
//PCODE_DEF(OB_REMOVE_ROOT_PARTITION, 0x407)// not supported on 4.0
//PCODE_DEF(OB_GET_PARTITION_STAT, 0x408) //  not supported on 4.0
//PCODE_DEF(OB_GET_MEMBER_LIST, 0x409)
PCODE_DEF(OB_QUERY_MAJOR_FREEZE_STATUS, 0x40A)
PCODE_DEF(OB_PREPARE_MAJOR_FREEZE, 0x40B)
PCODE_DEF(OB_COMMIT_MAJOR_FREEZE, 0x40C)
PCODE_DEF(OB_ABORT_MAJOR_FREEZE, 0x40D)
PCODE_DEF(OB_FETCH_LOCATION, 0x40E)
//PCODE_DEF(OB_CLONE_PARTITION, 0x40F)
PCODE_DEF(OB_REFRESH_SYNC_VALUE, 0x410)
PCODE_DEF(OB_REPORT_REPLICA, 0x411)
PCODE_DEF(OB_RECYCLE_REPLICA, 0x412)
PCODE_DEF(OB_CLEAR_LOCATION_CACHE, 0x413)
//PCODE_DEF(OB_DROP_REPLICA, 0x414)
PCODE_DEF(OB_CLEAR_AUTOINC_CACHE, 0x415)
PCODE_DEF(OB_SYNC_AUTO_INCREMENT, 0x416)
PCODE_DEF(OB_SET_DS_ACTION, 0x417)
PCODE_DEF(OB_CHECK_PARTITION_TABLE, 0x418)
//PCODE_DEF(OB_REBUILD_ROOT_PARTITION, 0x419): not supported on 4.0
PCODE_DEF(OB_SYNC_PARTITION_TABLE, 0x420)
//PCODE_DEF(OB_SYNC_PT_FINISH, 0x421): not supported on 4.0
PCODE_DEF(OB_INCREMENTAL_COPY_DATA, 0x422)
PCODE_DEF(OB_CHECK_SWITCH_ALL_LEADER_OUT, 0x423)
//PCODE_DEF(OB_REPORT_SINGLE_REPLICA, 0x424)
PCODE_DEF(OB_CHECK_SCHEMA_VERSION_ELAPSED, 0x425)
//partition online/offline
//PCODE_DEF(OB_ADD_TEMPORARY_REPLICA, 0x425)
//PCODE_DEF(OB_ADD_REPLICA, 0x426)
//PCODE_DEF(OB_REMOVE_REPLICA, 0x427)
//PCODE_DEF(OB_MIGRATE_REPLICA, 0x428)
//PCODE_DEF(OB_ADD_REPLICA_RES, 0x429): not used on 4.0
PCODE_DEF(OB_CHECK_MODIFY_TIME_ELAPSED, 0x42A)
//PCODE_DEF(OB_MIGRATE_REPLICA_RES, 0x430): not used on 4.0
//PCODE_DEF(OB_ADD_TEMPORARY_REPLICA_RES, 0x431)
//PCODE_DEF(OB_REMOVE_MEMBER, 0x432)
//PCODE_DEF(OB_REBUILD_REPLICA, 0x433)
PCODE_DEF(OB_SYNC_FROZEN_STATUS, 0x434)
//PCODE_DEF(OB_FETCH_BASE_DATA_META, 0x435) //used for 1.4x upgrade to 2.1 when rebuild
//PCODE_DEF(OB_FETCH_MACRO_BLOCK_OLD, 0x436)
PCODE_DEF(OB_CANCEL_SYS_TASK, 0x437)
//PCODE_DEF(OB_ADMIN_REBUILD_REPLICA, 0x438)
//PCODE_DEF(OB_REBUILD_REPLICA_RES, 0x439)
//PCODE_DEF(OB_CHANGE_REPLICA, 0x440)
//PCODE_DEF(OB_CHANGE_REPLICA_RES, 0x441)
//PCODE_DEF(OB_REMOVE_NON_PAXOS_REPLICA, 0x442)
PCODE_DEF(OB_SET_DISK_VALID, 0x443)
PCODE_DEF(OB_ADMIN_FLUSH_BALANCE_INFO, 0x444)
//PCODE_DEF(OB_GET_ROOT_SERVICE_STATUS, 0x445)

// partition batch online/offline
//PCODE_DEF(OB_ADD_REPLICA_BATCH, 0x446)
//PCODE_DEF(OB_REMOVE_NON_PAXOS_REPLICA_BATCH, 0x447)
//PCODE_DEF(OB_REMOVE_MEMBER_BATCH, 0x448)
//PCODE_DEF(OB_MIGRATE_REPLICA_BATCH, 0x449)
//PCODE_DEF(OB_CHANGE_REPLICA_BATCH, 0x44A)
//PCODE_DEF(OB_REBUILD_REPLICA_BATCH, 0x44B)
//PCODE_DEF(OB_ADD_REPLICA_BATCH_RES, 0x44C)
//PCODE_DEF(OB_REBUILD_REPLICA_BATCH_RES, 0x44D)
//PCODE_DEF(OB_MIGRATE_REPLICA_BATCH_RES, 0x44E)
//PCODE_DEF(OB_CHANGE_REPLICA_BATCH_RES, 0x44F)
//PCODE_DEF(OB_CHECK_MIGRATE_TASK_EXIST, 0x450)
//PCODE_DEF(OB_BATCH_REMOVE_MEMBER, 0x451)
//PCODE_DEF(OB_BATCH_ADD_MEMBER, 0x452)
//PCODE_DEF(OB_BATCH_MEMBER_CHANGE_DONE, 0x453)
//PCODE_DEF(OB_RESTORE_REPLICA, 0x454)
//PCODE_DEF(OB_RESTORE_REPLICA_RES, 0x455)
//PCODE_DEF(OB_MODIFY_QUORUM_BATCH, 0x456)
PCODE_DEF(OB_CHECK_DANGLING_REPLICA_EXIST, 0x457)
PCODE_DEF(OB_CHECK_DANGLING_REPLICA_FINISH, 0x458)
// 2.0 partition migration related
//PCODE_DEF(OB_FETCH_PARTITION_INFO, 0x459)
//PCODE_DEF(OB_FETCH_CONSISTENT_CUT, 0x45A)
//PCODE_DEF(OB_FETCH_TABLE_INFO, 0x45B)
//PCODE_DEF(OB_FETCH_LOGIC_BASE_META, 0x45C)
//PCODE_DEF(OB_FETCH_PHYSICAL_BASE_META, 0x45D)
//PCODE_DEF(OB_FETCH_LOGIC_ROW, 0x45E)
//PCODE_DEF(OB_COPY_LOCAL_INDEX_SSTABLE_BATCH, 0x45F)
//PCODE_DEF(OB_COPY_GLOBAL_INDEX_SSTABLE_BATCH, 0x460)
//PCODE_DEF(OB_FETCH_MIGRATE_STORAGE_INFO, 0x461)
//PCODE_DEF(OB_FETCH_RANGE_INFO, 0x462)
//PCODE_DEF(OB_ROOT_SPLIT_PARTITION, 0x463)
//PCODE_DEF(OB_SPLIT_PARTITION, 0x464)
PCODE_DEF(OB_FETCH_SNAPSHOT_ROW, 0x465)
PCODE_DEF(OB_FETCH_MEMSTORE_INFO, 0x466)
//PCODE_DEF(OB_COPY_GLOBAL_INDEX_RES, 0x467)
//PCODE_DEF(OB_COPY_LOCAL_INDEX_RES, 0x468)
// TODO(wenduo): should remove this rpc after global and local index builder integrated
PCODE_DEF(OB_TMP_OBSERVER_COPY_LOCAL_INDEX_SSTABLE, 0x469)
//PCODE_DEF(OB_FETCH_LOGIC_DATA_CHECKSUM, 0x46A)
//PCODE_DEF(OB_COPY_SSTABLE_BATCH, 0x46B)
//PCODE_DEF(OB_COPY_SSTABLE_BATCH_RES, 0x46C)
//PCODE_DEF(OB_CHECK_SYS_TASK_EXIST, 0x46D)
//PCODE_DEF(OB_FETCH_LOGIC_DATA_CHECKSUM_SLICE, 0x46E)
//PCODE_DEF(OB_FETCH_LOGIC_ROW_SLICE, 0x46F)
//PCODE_DEF(OB_BATCH_SPLIT_PARTITION, 0x470)
//PCODE_DEF(OB_FETCH_MACRO_BLOCK, 0x471)
//PCODE_DEF(OB_FETCH_PARTITION_GROUP_INFO, 0x472)
//PCODE_DEF(OB_FETCH_PG_PARTITION_INFO, 0x473)
PCODE_DEF(OB_ADD_DISK, 0x474)
PCODE_DEF(OB_DROP_DISK, 0x475)
//PCODE_DEF(OB_CHECK_MEMBER_PG_MAJOR_SSTABLE_ENOUGH, 0x476)
//PCODE_DEF(OB_FETCH_PUBLISH_VERSION, 0x477)
PCODE_DEF(OB_UPDATE_BASELINE_SCHEMA_VERSION, 0x478)
//PCODE_DEF(OB_SYNC_PG_PT_FINISH, 0x47A)
//PCODE_DEF(OB_SYNC_PG_PARTITION_TABLE, 0x47B)
PCODE_DEF(OB_CHECK_FROZEN_SCN, 0x47C)
//PCODE_DEF(OB_CHECK_PHYSICAL_FLASHBACK_SUCC, 0x47D)
//PCODE_DEF(OB_BACKUP_REPLICA_BATCH, 0x47E)
//PCODE_DEF(OB_BACKUP_REPLICA_BATCH_RES, 0x47F)
PCODE_DEF(OB_CHECK_BACKUP_TASK_EXIST, 0x480)
//PCODE_DEF(OB_FETCH_OFS_MACRO_BLOCK, 0x481)
//PCODE_DEF(OB_MIGRATE_SUSPEND_PARTITION, 0x482)
//PCODE_DEF(OB_GET_MIGRATE_OUT_STATUS, 0x483)
PCODE_DEF(OB_BROADCAST_RS_LIST, 0x484)
PCODE_DEF(OB_HANDOVER_PARTITION, 0x485)
PCODE_DEF(OB_GET_MIN_SSTABLE_SCHEMA_VERSION, 0x486)
PCODE_DEF(OB_GET_RECOVERY_POINT_META_INFO, 0x487)
PCODE_DEF(OB_BUILD_ONLY_IN_MEMBER_LIST_BATCH, 0x488)
PCODE_DEF(OB_BUILD_ONLY_IN_MEMBER_LIST_BATCH_RES, 0x489)
PCODE_DEF(OB_GET_FREE_BLOCKS_LIST, 0x48A)
PCODE_DEF(OB_CONFIRM_FREE_BLOCKS_LIST, 0x48B)
PCODE_DEF(OB_CHECK_LEAKED_BLOCKS_LIST, 0x48C)
PCODE_DEF(OB_DDL_BUILD_SINGLE_REPLICA_REQUEST, 0x48D)
PCODE_DEF(OB_DDL_BUILD_SINGLE_REPLICA_RESPONSE, 0x48E)
//PCODE_DEF(OB_STANDBY_CUTDATA_BATCH_TASK, 0x490)
PCODE_DEF(OB_FETCH_REUSED_BLOCKS, 0x491)
PCODE_DEF(OB_WRITE_DDL_SSTABLE_COMMIT_LOG, 0x492)
//PCODE_DEF(OB_DDL_CHECK_MINOR, 0x493)    // 4.0 not supported
// log stream related
PCODE_DEF(OB_REPORT_SYS_LS, 0x494)
PCODE_DEF(OB_HA_FETCH_MACRO_BLOCK, 0x495)
PCODE_DEF(OB_HA_FETCH_TABLET_INFO, 0x496)
PCODE_DEF(OB_HA_FETCH_SSTABLE_INFO, 0x497)
PCODE_DEF(OB_HA_FETCH_LS_INFO, 0x498)
PCODE_DEF(OB_REMOVE_SYS_LS, 0x499)
PCODE_DEF(OB_HA_NOTIFY_RESTORE_TABLETS, 0x4A0)
PCODE_DEF(OB_HA_NOTIFY_FOLLOWER_RESTORE, 0x4A1)
PCODE_DEF(OB_HA_UPDATE_LS_META, 0x4A2)
PCODE_DEF(OB_CANCEL_DDL_TASK, 0x4A3)
PCODE_DEF(OB_HA_FETCH_SSTABLE_MACRO_INFO, 0x4A4)
PCODE_DEF(OB_HA_FETCH_LS_MEMBER_LIST, 0x4A5)
PCODE_DEF(OB_HA_FETCH_LS_META_INFO, 0x4A6)
PCODE_DEF(OB_NOTIFY_CREATE_TENANT_USER_LS, 0x4A7)

//PCODE_DEF(OB_INIT_TENANT_CONFIG, 0x4A8)
// sql, including executor

// sql
PCODE_DEF(OB_SQL_PCODE_START, 0x500) // psudo pcode, as a guardian
PCODE_DEF(OB_PHY_PLAN_EXECUTE, 0x501)
PCODE_DEF(OB_REMOTE_EXECUTE, 0x502)
PCODE_DEF(OB_DIST_EXECUTE, 0x503)
PCODE_DEF(OB_TASK_COMPLETE, 0x504)
PCODE_DEF(OB_TASK_NOTIFY_FETCH, 0x505)
PCODE_DEF(OB_TASK_FETCH_RESULT, 0x506) // Abandoned
PCODE_DEF(OB_TASK_KILL, 0x507)
PCODE_DEF(OB_CLOSE_RESULT, 0x508)
PCODE_DEF(OB_KILL_SESSION, 0x509)
PCODE_DEF(OB_AP_DIST_EXECUTE, 0x50A)
PCODE_DEF(OB_TASK_FETCH_INTERM_RESULT, 0x50B)
PCODE_DEF(OB_MINI_TASK_EXECUTE, 0x50C)
PCODE_DEF(OB_AP_MINI_DIST_EXECUTE, 0x50D)
PCODE_DEF(OB_PX_INIT_SQC, 0x50E)
PCODE_DEF(OB_PX_INIT_TASK, 0x50F)
PCODE_DEF(OB_PX_INTP_SQC, 0x510)
PCODE_DEF(OB_PX_INTP_QC, 0x511)
PCODE_DEF(OB_LOAD_DATA_EXECUTE, 0x512)
PCODE_DEF(OB_BKGD_DIST_EXECUTE, 0x513)
PCODE_DEF(OB_BKGD_TASK_COMPLETE, 0x514)
PCODE_DEF(OB_ESTIMATE_PARTITION_ROWS, 0x515)
PCODE_DEF(OB_ESTIMATE_PARTITION_ROWS_MOCK, 0x516) // mock for 1473 OB_ESTIMATE_PARTITION_ROWS
PCODE_DEF(OB_FETCH_INTERM_RESULT_ITEM, 0x517)
PCODE_DEF(OB_PX_ASYNC_INIT_SQC, 0x518) // ob px async init sqc
PCODE_DEF(OB_LOAD_DATA_SHUFFLE, 0x519)
PCODE_DEF(OB_LOAD_DATA_INSERT, 0x51A)
PCODE_DEF(OB_AP_PING_SQL_TASK, 0x51B)
PCODE_DEF(OB_REMOTE_SYNC_EXECUTE, 0x51C) //remote sync execute with sql
PCODE_DEF(OB_PX_FAST_INIT_SQC, 0x51F)
PCODE_DEF(OB_CHECK_BUILD_INDEX_TASK_EXIST, 0x520) // check build index task exist
PCODE_DEF(OB_DAS_SYNC_ACCESS, 0x521) //access execute with sync rpc
PCODE_DEF(OB_ERASE_DTL_INTERM_RESULT, 0x522) //erase dtl interm result with async rpc
PCODE_DEF(OB_PX_TARGET_REQUEST, 0x523) // px admission
PCODE_DEF(OB_INNER_SQL_SYNC_TRANSMIT, 0x524) // inner sql transmit with sync rpc
PCODE_DEF(OB_DO_CONTEXT_DDL, 0x525)
PCODE_DEF(OB_ESTIMATE_TABLET_BLOCK_COUNT, 0x526)
PCODE_DEF(OB_DAS_SYNC_FETCH_ID, 0x527) //fetch das id with sync rpc
PCODE_DEF(OB_DAS_SYNC_FETCH_RESULT, 0x528) //fetch das result with sync rpc
PCODE_DEF(OB_DAS_ASYNC_ERASE_RESULT, 0x529) //erase das result with async rpc
PCODE_DEF(OB_SQL_PCODE_END, 0x54F) // as a guardian

// for test schema
PCODE_DEF(OB_GET_LATEST_SCHEMA_VERSION, 0x550)
PCODE_DEF(OB_GET_ALL_SCHEMA, 0x551)

PCODE_DEF(OB_SERVER_UPDATE_STAT_CACHE, 0x560)
PCODE_DEF(OB_RS_UPDATE_STAT_CACHE, 0x561)
PCODE_DEF(OB_SERVER_FLUSH_OPT_STAT_MONITORING_INFO, 0x562)
PCODE_DEF(OB_RS_FLUSH_OPT_STAT_MONITORING_INFO, 0x563)
// for ls disaster recovery
PCODE_DEF(OB_LS_MIGRATE_REPLICA, 0x570)
PCODE_DEF(OB_LS_ADD_REPLICA, 0x571)
PCODE_DEF(OB_LS_TYPE_TRANSFORM, 0x572)
PCODE_DEF(OB_LS_REMOVE_PAXOS_REPLICA, 0x573)
PCODE_DEF(OB_LS_REMOVE_NONPAXOS_REPLICA, 0x574)
PCODE_DEF(OB_LS_MODIFY_PAXOS_REPLICA_NUMBER, 0x575)
PCODE_DEF(OB_DISASTER_RECOVERY_TASK_REPLY, 0x576)
PCODE_DEF(OB_LS_CHECK_DR_TASK_EXIST, 0x577)

PCODE_DEF(OB_SERVER_ACCEPT_PLAN_BASELINE, 0x578)
PCODE_DEF(OB_RS_ACCEPT_PLAN_BASELINE, 0x579)
PCODE_DEF(OB_SERVER_CANCEL_EVOLVE_TASK, 0x57A)
PCODE_DEF(OB_RS_CANCEL_EVOLVE_TASK, 0x57B)

// reserve for transfer
// PCODE_DEF(OB_START_TRANSFER_TASK, 0x57C)
// PCODE_DEF(OB_FINISH_TRANSFER_TASK, 0x57D)

// reserve for arb replica
// PCODE_DEF(OB_ADD_ARB, 0x57E)
// PCODE_DEF(OB_REMOVE_ARB, 0x57F)

//// DTL
//
// Channel operations
PCODE_DEF(OB_DTL_CREATE_CHANNEL, 0x5A0)
PCODE_DEF(OB_DTL_DESTROY_CHANNEL, 0x5A1)
// Task operations
PCODE_DEF(OB_DTL_START_TASK, 0x5B0)
PCODE_DEF(OB_DTL_START_TASKS, 0x5B1)
PCODE_DEF(OB_DTL_CANCEL_TASK, 0x5B2)
// Data transfer
PCODE_DEF(OB_DTL_SEND, 0x5C0)
PCODE_DEF(OB_DTL_FETCH, 0x5C1)
PCODE_DEF(OB_DTL_BC_SEND, 0x5C2)
PCODE_DEF(OB_PX_SEND_BLOOM_FILTER, 0x5C3)
// election
PCODE_DEF(OB_ELECTION, 0x601)
PCODE_DEF(OB_ELECTION_RESPONSE, 0x602)

PCODE_DEF(OB_TX_COMMIT, 0x650)
PCODE_DEF(OB_TX_COMMIT_RESP, 0x651)
PCODE_DEF(OB_TX_ABORT, 0x652)
PCODE_DEF(OB_TX_2PC_PREPARE, 0x653)
PCODE_DEF(OB_TX_2PC_PREPARE_RESP, 0x654)
PCODE_DEF(OB_TX_2PC_COMMIT, 0x655)
PCODE_DEF(OB_TX_2PC_COMMIT_RESP, 0x656)
PCODE_DEF(OB_TX_2PC_CLEAR, 0x657)
PCODE_DEF(OB_TX_2PC_CLEAR_RESP, 0x658)
PCODE_DEF(OB_TX_ROLLBACK_SAVEPOINT, 0x659)
PCODE_DEF(OB_TX_KEEPALIVE, 0x65A)
PCODE_DEF(OB_REGISTER_TX_DATA, 0x65B)
PCODE_DEF(OB_TX_KEEPALIVE_RESP, 0x65C)

// trans id
PCODE_DEF(OB_GET_GTI_REQUEST, 0x660)

// tx sub 2pc
PCODE_DEF(OB_TX_SUB_PREPARE, 0x670)
PCODE_DEF(OB_TX_SUB_PREPARE_RESP, 0x671)
PCODE_DEF(OB_TX_SUB_COMMIT, 0x672)
PCODE_DEF(OB_TX_SUB_COMMIT_RESP, 0x673)
PCODE_DEF(OB_TX_SUB_ROLLBACK, 0x674)
PCODE_DEF(OB_TX_SUB_ROLLBACK_RESP, 0x675)

// transaction
PCODE_DEF(OB_TRANS, 0x701)
PCODE_DEF(OB_DUMP_MEMTABLE, 0x702)
PCODE_DEF(OB_TRANS_CHECK, 0x703)
PCODE_DEF(OB_TRANS_RESP, 0x706)
PCODE_DEF(OB_DUP_TABLE_LEASE_REQUEST, 0x707)
// transaction check for change leader by rpc
PCODE_DEF(OB_CHANGE_LEADER, 0x708)
PCODE_DEF(OB_GET_GTS_REQUEST, 0x710)
PCODE_DEF(OB_GET_GTS_RESPONSE, 0x711)
PCODE_DEF(OB_GET_GTS_ERR_RESPONSE, 0x712)
PCODE_DEF(OB_REDO_LOG_SYNC_REQUEST, 0x713)
PCODE_DEF(OB_REDO_LOG_SYNC_RESPONSE, 0x714)
PCODE_DEF(OB_DUP_TABLE_LEASE_RESPONSE, 0x715)
PCODE_DEF(OB_WRS_GET_CLUSTER_VERSION, 0x716)
PCODE_DEF(OB_WRS_CLUSTER_HEARTBEAT, 0x717)
PCODE_DEF(OB_HA_GTS_PING_REQUEST, 0x718)
PCODE_DEF(OB_HA_GTS_GET_REQUEST, 0x719)
PCODE_DEF(OB_HA_GTS_GET_RESPONSE, 0x71A)
PCODE_DEF(OB_HA_GTS_HEARTBEAT, 0x71B)
PCODE_DEF(OB_HA_GTS_UPDATE_META, 0x71C)
PCODE_DEF(OB_HA_GTS_CHANGE_MEMBER, 0x71D)
PCODE_DEF(OB_DUP_TABLE_PRE_COMMIT_REQ, 0x71E)
PCODE_DEF(OB_DUP_TABLE_PRE_COMMIT_RESP, 0x71F)

// sys admin
//PCODE_DEF(OB_FORCE_SET_AS_SINGLE_REPLICA, 0x720)
PCODE_DEF(OB_FLUSH_CACHE, 0x721)
PCODE_DEF(OB_FORCE_PURGE_MEMTABLE, 0x722)
PCODE_DEF(OB_FORCE_PURGE_MEMTABLE_ASYNC, 0x723)
//PCODE_DEF(OB_FORCE_RESET_PARENT, 0x724)
//PCODE_DEF(OB_FORCE_SET_PARENT, 0x725)     // not used on 4.0
//PCODE_DEF(OB_FORCE_SET_REPLICA_NUM, 0x726)    // not used on 4.0
PCODE_DEF(OB_STORAGE_HANDLE, 0x727)
PCODE_DEF(OB_STORAGE_SYNC_HANDLE, 0x728)
PCODE_DEF(OB_FORCE_SWITCH_ILOG_FILE, 0x729)
PCODE_DEF(OB_FORCE_SET_ALL_AS_SINGLE_REPLICA, 0x72A)
//PCODE_DEF(OB_FORCE_REMOVE_REPLICA, 0x72B)
PCODE_DEF(OB_FORCE_CREATE_SYS_TABLE, 0x72C)
PCODE_DEF(OB_FORCE_DISABLE_BLACKLIST, 0x72D)
PCODE_DEF(OB_FORCE_ENABLE_BLACKLIST, 0x72E)
PCODE_DEF(OB_FORCE_CLEAR_BLACKLIST, 0x72F)
PCODE_DEF(OB_UPDATE_TENANT_MEMORY, 0x730)
PCODE_DEF(OB_FORCE_SET_SERVER_LIST, 0x731)
PCODE_DEF(OB_FORCE_ALTER_TABLE_SUBPARTITION, 0x732)
PCODE_DEF(OB_FORCE_SET_LOCALITY, 0x733)
PCODE_DEF(OB_PRE_PROCESS_SERVER, 0x734)
//PCODE_DEF(OB_RECOVER_PG_FILE, 0x735)
//PCODE_DEF(OB_PRE_PROCESS_SERVER_REPLY, 0x736): not used on 4.0
//PCODE_DEF(OB_RECOVER_PG_FILE_REPLY, 0x737): not used on 4.0
PCODE_DEF(OB_RENEW_IN_ZONE_HB, 0x738)
//PCODE_DEF(OB_MOVE_REPLICA_CONTROL, 0x739) // not supported on 4.0
PCODE_DEF(OB_PRE_BOOTSTRAP_CREATE_SERVER_WORKING_DIR, 0x73A)
//PCODE_DEF(OB_OBS_DISCONNECT_CLUSTER, 0x73B) // 4.0 not supported
PCODE_DEF(OB_DUMP_TX_DATA_MEMTABLE, 0x73C)
PCODE_DEF(OB_ADMIN_REFRESH_IO_CALIBRATION, 0x73D)
PCODE_DEF(OB_REFRESH_IO_CALIBRATION, 0x73E)
PCODE_DEF(OB_EXECUTE_IO_BENCHMARK, 0x73F)
PCODE_DEF(OB_GET_LS_SYNC_SCN, 0x740)
PCODE_DEF(OB_FLASHBACK_CLOG, 0x741)
PCODE_DEF(OB_DUMP_SINGLE_TX_DATA, 0x742)

// BatchRpc
PCODE_DEF(OB_BATCH, 0x750)
// Server black list
PCODE_DEF(OB_SERVER_BLACKLIST_REQ, 0x751)
PCODE_DEF(OB_SERVER_BLACKLIST_RESP, 0x752)

// xa trans
PCODE_DEF(OB_XA_PREPARE, 0x760)
PCODE_DEF(OB_XA_COMMIT, 0x761)
PCODE_DEF(OB_XA_HB_REQ, 0x765)
PCODE_DEF(OB_XA_HB_RESP, 0x766)
PCODE_DEF(OB_XA_START_REQ, 0x767)
PCODE_DEF(OB_XA_START_RESP, 0x768)
PCODE_DEF(OB_XA_END_REQ, 0x769)
PCODE_DEF(OB_XA_START_STMT_REQ, 0x770)
PCODE_DEF(OB_XA_START_STMT_RESP, 0x771)
PCODE_DEF(OB_XA_END_STMT_REQ, 0x772)
PCODE_DEF(OB_XA_ROLLBACK, 0x773)
PCODE_DEF(OB_XA_TERMINATE, 0x774)

// clog
PCODE_DEF(OB_CLOG, 0x801)

PCODE_DEF(OB_LOG_GET_MC_TS, 0x805)
PCODE_DEF(OB_LOG_GET_FOLLOWER_SYNC_INFO, 0x806)
PCODE_DEF(OB_LOG_GET_MC_CTX_ARRAY, 0x807)
PCODE_DEF(OB_LOG_GET_PRIORITY_ARRAY, 0x808)
PCODE_DEF(OB_LOG_GET_REMOTE_LOG, 0x809)
PCODE_DEF(OB_LOG_GET_NEXT_LOG_TS, 0x80A)
PCODE_DEF(OB_CHECK_ALL_PART_LOG_RES, 0x80B)
//PCODE_DEF(OB_QUERY_MAX_FLUSHED_ILOG_ID, 0x80C)
PCODE_DEF(OB_LOG_GET_PHYSICAL_RESTORE_STATE, 0x80D)

/* New Interface. To Replace Dying Rpc. */
// TODO remove some unused @qianxi
PCODE_DEF(OB_LOG_REQ_START_LOG_ID_BY_TS, 0x850)
PCODE_DEF(OB_LS_FETCH_MISSING_LOG, 0x851)
PCODE_DEF(OB_LOG_FETCH_LOG_EXTERNAL, 0x852)
PCODE_DEF(OB_LS_FETCH_LOG2, 0x853)
PCODE_DEF(OB_LOG_REQ_START_LOG_ID_BY_TS_WITH_BREAKPOINT, 0x854)
PCODE_DEF(OB_LOG_REQ_START_LSN_BY_TS, 0x855)
PCODE_DEF(OB_LOG_OPEN_STREAM, 0x856)
PCODE_DEF(OB_LS_FETCH_LOG, 0x857)
PCODE_DEF(OB_LOG_LEADER_HEARTBEAT, 0x858)
PCODE_DEF(OB_GET_MASTER_KEY, 0x859)
PCODE_DEF(OB_DUMP_TENANT_CACHE_MASTER_KEY, 0x85A)
//PCODE_DEF(OB_KILL_PART_TRANS_CTX, 0x85B)  // 4.0 not supported
//PCODE_DEF(OB_LOG_REQ_LOAD_PROXY, 0x85C)
//PCODE_DEF(OB_LOG_REQ_UNLOAD_PROXY, 0x85D)
//PCODE_DEF(OB_LOG_REQ_LOAD_PROXY_PROGRESS, 0x85E)
PCODE_DEF(OB_HANDLE_PART_TRANS_CTX, 0x85F)


//partition service
//PCODE_DEF(OB_PTS_FETCH_INFO, 0x901)
PCODE_DEF(OB_PTS_MEMBER_CHANGE, 0x902)
PCODE_DEF(OB_GET_LEADER_MEMBER_LIST, 0x903)
PCODE_DEF(OB_MINOR_FREEZE, 0x904) // reused by ObService
//PCODE_DEF(OB_PTS_ADD_REPLICA, 0x905)
//PCODE_DEF(OB_PTS_REMOVE_REPLICA, 0x906)
//PCODE_DEF(OB_GET_MEMBER_LIST_AND_LEADER, 0x907)
//PCODE_DEF(OB_WARM_UP_REQUEST, 0x908)
PCODE_DEF(OB_IN_MEMBER_CHANGE_DONE, 0x909)
PCODE_DEF(OB_PTS_REMOVE_PARTITION, 0x90A)
PCODE_DEF(OB_GET_ELECTION_LEADER, 0x90B)
PCODE_DEF(OB_SPLIT_DEST_PARTITION_REQUEST, 0x90C)
PCODE_DEF(OB_REPLICA_SPLIT_PROGRESS_REQUEST, 0x90D)
PCODE_DEF(OB_CHECK_MEMBER_MAJOR_SSTABLE_ENOUGH, 0x90E)
PCODE_DEF(OB_BATCH_REMOVE_PARTITION, 0x90F)
//PCODE_DEF(OB_BATCH_GET_MEMBER_LIST_AND_LEADER, 0x910)   // 4.0 not supported
PCODE_DEF(OB_BATCH_GET_ROLE, 0x911)
//PCODE_DEF(OB_BATCH_GET_PROTECTION_LEVEL, 0x912)     // not supported on 4.0
//PCODE_DEF(OB_UPDATE_STANDBY_CLUSTER_INFO, 0x913)   // 4.0 not supported
//PCODE_DEF(OB_CHECK_NEED_OFFLINE_REPLICA, 0x914)    //4.0 not supported
//PCODE_DEF(OB_CHECK_FLASHBACK_INFO_DUMP, 0x916) // not supported on 4.0
//PCODE_DEF(OB_BROADCAST_LOCATIONS, 0x917): not used on 4.0

// table lock
PCODE_DEF(OB_OUT_TRANS_LOCK_TABLE, 0x918)
PCODE_DEF(OB_OUT_TRANS_UNLOCK_TABLE, 0x919)
PCODE_DEF(OB_TABLE_LOCK_TASK, 0x920)
PCODE_DEF(OB_SET_MEMBER_LIST, 0x921)
PCODE_DEF(OB_CREATE_LS, 0x922)
PCODE_DEF(OB_CREATE_TABLET, 0x923)
PCODE_DEF(OB_FETCH_TABLET_AUTOINC_SEQ_CACHE, 0x924)
PCODE_DEF(OB_DROP_TABLET, 0x925)
PCODE_DEF(OB_CHECK_LS_CAN_OFFLINE, 0x926)
PCODE_DEF(OB_GET_LS_ACCESS_MODE, 0x927)
PCODE_DEF(OB_CHANGE_LS_ACCESS_MODE, 0x928)
PCODE_DEF(OB_IN_TRANS_LOCK_TABLE, 0x929)
PCODE_DEF(OB_IN_TRANS_LOCK_TABLET, 0x92A)
PCODE_DEF(OB_HIGH_PRIORITY_TABLE_LOCK_TASK, 0x92B)
//PCODE_DEF(OB_CREATE_ARB, 0x92C)
//PCODE_DEF(OB_DELETE_ARB, 0x92D)

// ddl
PCODE_DEF(OB_REMOTE_WRITE_DDL_REDO_LOG, 0x950)
PCODE_DEF(OB_REMOTE_WRITE_DDL_COMMIT_LOG, 0x951)
PCODE_DEF(OB_BATCH_GET_TABLET_AUTOINC_SEQ, 0x952)
PCODE_DEF(OB_BATCH_SET_TABLET_AUTOINC_SEQ, 0x953)
PCODE_DEF(OB_REMOTE_WRITE_DDL_PREPARE_LOG, 0x954)

PCODE_DEF(OB_DDL_CHECK_TABLET_MERGE_STATUS, 0x957)

// Depedency Detector
PCODE_DEF(OB_DETECTOR_LCL_MESSAGE, 0x9F0)
PCODE_DEF(OB_DETECTOR_COLLECT_INFO_MESSAGE, 0x9F1)
PCODE_DEF(OB_DETECTOR_NOTIFY_PARENT_MESSAGE, 0x9F2)

PCODE_DEF(OB_RPC_ASSEMBLE, 0x1000)

// Table API (by zhuweng.yzf)
PCODE_DEF(OB_TABLE_API_LOGIN, 0x1101)
PCODE_DEF(OB_TABLE_API_EXECUTE, 0x1102)
PCODE_DEF(OB_TABLE_API_BATCH_EXECUTE, 0x1103)
PCODE_DEF(OB_TABLE_API_EXECUTE_QUERY, 0x1104)
PCODE_DEF(OB_TABLE_API_QUERY_AND_MUTATE, 0x1105)
PCODE_DEF(OB_TABLE_API_EXECUTE_QUERY_SYNC, 0x1106)
PCODE_DEF(OB_TABLE_TTL, 0x1107)
PCODE_DEF(OB_TTL_REQUEST, 0x1108)
PCODE_DEF(OB_TTL_RESPONSE, 0x1109)

// Event Job API
PCODE_DEF(OB_RUN_EVENT_JOB, 0x1201)
PCODE_DEF(OB_CREATE_EVENT_JOB, 0x1202)
PCODE_DEF(OB_ALTER_EVENT_JOB, 0x1203)
PCODE_DEF(OB_DROP_EVENT_JOB, 0x1204)

// DBMS Job API
PCODE_DEF(OB_RUN_DBMS_JOB, 0x1205)
// DBMS Scheduler API
PCODE_DEF(OB_RUN_DBMS_SCHED_JOB, 0x1206)

// label security
PCODE_DEF(OB_HANDLE_LABEL_SE_POLICY_DDL, 0x1301)
PCODE_DEF(OB_HANDLE_LABEL_SE_COMPONENT_DDL, 0x1302)
PCODE_DEF(OB_HANDLE_LABEL_SE_LABEL_DDL, 0x1303)
PCODE_DEF(OB_HANDLE_LABEL_SE_USER_LEVEL_DDL, 0x1304)
// row level security
PCODE_DEF(OB_HANDLE_RLS_POLICY_DDL, 0x1305)
PCODE_DEF(OB_HANDLE_RLS_GROUP_DDL, 0x1306)
PCODE_DEF(OB_HANDLE_RLS_CONTEXT_DDL, 0x1307)

// backup and restore
PCODE_DEF(OB_GET_TENANT_LOG_ARCHIVE_STATUS, 0x1401)
PCODE_DEF(OB_ARCHIVE_LOG, 0x1402)
PCODE_DEF(OB_BACKUP_DATABASE, 0x1403)
PCODE_DEF(OB_BACKUP_MANAGE, 0x1404)
PCODE_DEF(OB_PHYSICAL_RESTORE_TENANT, 0x1405)
PCODE_DEF(OB_REBUILD_INDEX_IN_RESTORE, 0x1406)
PCODE_DEF(OB_PHYSICAL_RESTORE_REPLICA, 0x1407)
//PCODE_DEF(OB_PHYSICAL_RESTORE_REPLICA_RES, 0x1408): not used on 4.0
//PCODE_DEF(OB_MODIFY_SCHEMA_IN_RESTORE, 0x1409)//not used on ver 4.0
PCODE_DEF(OB_CHECK_BACKUP_SCHEDULER_WORKING, 0x140A)
PCODE_DEF(OB_PHYSICAL_RESTORE_RES, 0x140B)
//PCODE_DEF(OB_VALIDATE_BACKUP_BATCH, 0x140C)
//PCODE_DEF(OB_VALIDATE_BACKUP_RES, 0x140D)
//PCODE_DEF(OB_VALIDATE_BACKUP_BATCH_RES, 0x140E)
//PCODE_DEF(OB_BACKUP_BACKUPSET, 0x140F)
//PCODE_DEF(OB_BACKUP_BACKUPSET_BATCH, 0x1410)
//PCODE_DEF(OB_BACKUP_BACKUPSET_BATCH_RES, 0x1411)
//PCODE_DEF(OB_BACKUP_ARCHIVE_LOG, 0x1412)
//PCODE_DEF(OB_BACKUP_ARCHIVE_LOG_BATCH, 0x1413)
//PCODE_DEF(OB_BACKUP_ARCHIVE_LOG_BATCH_RES, 0x1414)
//PCODE_DEF(OB_STANDBY_CUTDATA_BATCH_TASK_RES, 0x1415)
//PCODE_DEF(OB_BACKUP_BACKUPPIECE, 0x1416)
//PCODE_DEF(OB_GET_TENANT_LOG_ARCHIVE_STATUS_V2, 0x1417)
PCODE_DEF(OB_EXECUTE_DDL_TASK, 0x1418)
PCODE_DEF(OB_MAINTAIN_OBJ_DEPENDENCY_INFO, 0x1419)
//PCODE_DEF(OB_BACKUP_VALIDATE, 0x141A)
PCODE_DEF(OB_BACKUP_LS_DATA, 0x141B)
PCODE_DEF(OB_BACKUP_LS_DATA_RES, 0x141C)
PCODE_DEF(OB_BACKUP_COMPL_LOG, 0x141D)
PCODE_DEF(OB_BACKUP_COMPL_LOG_RES, 0x141E)
PCODE_DEF(OB_BACKUP_BUILD_INDEX, 0x141F)
PCODE_DEF(OB_BACKUP_CLEAN, 0x1420)
PCODE_DEF(OB_DELETE_BACKUP_LS_TASK, 0x1421)
PCODE_DEF(OB_DELETE_BACKUP_LS_TASK_RES, 0x1422)
PCODE_DEF(OB_CHECK_BACKUP_DEST_CONNECTIVITY, 0x1423)
PCODE_DEF(OB_BACKUP_META, 0x1424)
PCODE_DEF(OB_BACKUP_CHECK_TABLET_CREATE_TS, 0x1425)
PCODE_DEF(OB_DELETE_POLICY, 0x1426)
// 0x1427 for OB_RECOVER_TABLE
// backup and restore end 0x14ff

// logservice
PCODE_DEF(OB_LOG_PUSH_REQ, 0x1501)
PCODE_DEF(OB_LOG_PUSH_RESP, 0x1502)
PCODE_DEF(OB_LOG_FETCH_REQ, 0x1503)
PCODE_DEF(OB_LOG_PREPARE_REQ, 0x1504)
PCODE_DEF(OB_LOG_PREPARE_RESP, 0x1505)
PCODE_DEF(OB_LOG_CHANGE_CONFIG_META_REQ, 0x1506)
PCODE_DEF(OB_LOG_CHANGE_CONFIG_META_RESP, 0x1507)
PCODE_DEF(OB_LOG_ELECTION_PREPARE_REQUEST, 0x1508)
PCODE_DEF(OB_LOG_ELECTION_PREPARE_RESPONSE, 0x1509)
PCODE_DEF(OB_LOG_ELECTION_ACCEPT_REQUEST, 0x150A)
PCODE_DEF(OB_LOG_ELECTION_ACCEPT_RESPONSE, 0x150B)
PCODE_DEF(OB_LOG_ELECTION_CHANGE_LEADER_REQUEST, 0x150C)
PCODE_DEF(OB_LOG_NOTIFY_REBUILD_REQ, 0x150D)
PCODE_DEF(OB_LOG_GET_MC_ST, 0x150E)
PCODE_DEF(OB_LOG_CONFIG_CHANGE_CMD, 0x150F)
PCODE_DEF(OB_QUERY_LS_IS_VALID_MEMBER, 0x1510)
PCODE_DEF(OB_REMOTE_FETCH_LOG, 0x1511)
PCODE_DEF(OB_LOG_REGISTER_PARENT_REQ, 0x1513)
PCODE_DEF(OB_LOG_REGISTER_PARENT_RESP, 0x1514)
PCODE_DEF(OB_LOG_LEARNER_REQ, 0x1515)
PCODE_DEF(OB_LOG_COMMITTED_INFO, 0x1516)
PCODE_DEF(OB_LOG_CHANGE_MODE_META_REQ, 0x1517)
PCODE_DEF(OB_LOG_CHANGE_MODE_META_RESP, 0x1518)
PCODE_DEF(OB_LOG_GET_PALF_STAT, 0x1519)
PCODE_DEF(OB_LOG_ARB_PROBE_MSG, 0x151A)

// 1531-1550 for obesi
// PCODE_DEF(OB_ESI_IS_EXIST, 0x1531)
// PCODE_DEF(OB_ESI_GET_FILE_LEN, 0x1532)
// PCODE_DEF(OB_ESI_DEL_FILE, 0x1533)
// PCODE_DEF(OB_ESI_WRITE_SINGLE_FILE, 0x1534)
// PCODE_DEF(OB_ESI_READ_SINGLE_FILE, 0x1535)
// PCODE_DEF(OB_ESI_READ_PART_FILE, 0x1536)
// PCODE_DEF(OB_ESI_MKDIR, 0x1537)
// PCODE_DEF(OB_ESI_UPDATE_MTIME, 0x1538)
// PCODE_DEF(OB_ESI_LIST_FILES_OPEN, 0x1539)
// PCODE_DEF(OB_ESI_FETCH_LIST_NAME, 0x153A)
// PCODE_DEF(OB_ESI_LIST_FILES_CLOSE, 0x153B)
// PCODE_DEF(OB_ESI_DEL_DIR, 0x153C)
// PCODE_DEF(OB_ESI_GET_PARTATION_KEY, 0x153D)
// PCODE_DEF(OB_ESI_DEL_TMP_FILE, 0x153E)
// PCODE_DEF(OB_ESI_IS_EMP_DIR, 0x153F)
// PCODE_DEF(OB_ESI_APPENDER_OPEN, 0x1540)
// PCODE_DEF(OB_ESI_APPENDER_CLOSE, 0x1541)
// PCODE_DEF(OB_ESI_APPENDER_PWRITE, 0x1542)
// PCODE_DEF(OB_ESI_APPENDER_GET_LEN, 0x1543)
// PCODE_DEF(OB_ESI_GET_INFO, 0x1544)
// PCODE_DEF(OB_ESI_GET_STATUS, 0x1545)
// PCODE_DEF(OB_ESI_RELOAD_CONFIG, 0x1546)

// global auto_increment service
PCODE_DEF(OB_GAIS_NEXT_AUTO_INC_REQUEST, 0x1551)
PCODE_DEF(OB_GAIS_CURR_AUTO_INC_REQUEST, 0x1552)
PCODE_DEF(OB_GAIS_PUSH_AUTO_INC_REQUEST, 0x1553)
PCODE_DEF(OB_GAIS_CLEAR_AUTO_INC_CACHE,  0x1554)
// PCODE_DEF(OB_CHECK_SERVER_HAS_TENANT_UNIT,  0x1555)
PCODE_DEF(OB_SYNC_REWRITE_RULES,  0x1556)
PCODE_DEF(OB_ADMIN_SYNC_REWRITE_RULES,  0x1557)
