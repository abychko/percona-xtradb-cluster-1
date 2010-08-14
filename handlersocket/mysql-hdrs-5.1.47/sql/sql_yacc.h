
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABORT_SYM = 258,
     ACCESSIBLE_SYM = 259,
     ACTION = 260,
     ADD = 261,
     ADDDATE_SYM = 262,
     AFTER_SYM = 263,
     AGAINST = 264,
     AGGREGATE_SYM = 265,
     ALGORITHM_SYM = 266,
     ALL = 267,
     ALTER = 268,
     ANALYZE_SYM = 269,
     AND_AND_SYM = 270,
     AND_SYM = 271,
     ANY_SYM = 272,
     AS = 273,
     ASC = 274,
     ASCII_SYM = 275,
     ASENSITIVE_SYM = 276,
     AT_SYM = 277,
     AUTHORS_SYM = 278,
     AUTOEXTEND_SIZE_SYM = 279,
     AUTO_INC = 280,
     AVG_ROW_LENGTH = 281,
     AVG_SYM = 282,
     BACKUP_SYM = 283,
     BEFORE_SYM = 284,
     BEGIN_SYM = 285,
     BETWEEN_SYM = 286,
     BIGINT = 287,
     BINARY = 288,
     BINLOG_SYM = 289,
     BIN_NUM = 290,
     BIT_AND = 291,
     BIT_OR = 292,
     BIT_SYM = 293,
     BIT_XOR = 294,
     BLOB_SYM = 295,
     BLOCK_SYM = 296,
     BOOLEAN_SYM = 297,
     BOOL_SYM = 298,
     BOTH = 299,
     BTREE_SYM = 300,
     BY = 301,
     BYTE_SYM = 302,
     CACHE_SYM = 303,
     CALL_SYM = 304,
     CASCADE = 305,
     CASCADED = 306,
     CASE_SYM = 307,
     CAST_SYM = 308,
     CHAIN_SYM = 309,
     CHANGE = 310,
     CHANGED = 311,
     CHARSET = 312,
     CHAR_SYM = 313,
     CHECKSUM_SYM = 314,
     CHECK_SYM = 315,
     CIPHER_SYM = 316,
     CLIENT_SYM = 317,
     CLOSE_SYM = 318,
     COALESCE = 319,
     CODE_SYM = 320,
     COLLATE_SYM = 321,
     COLLATION_SYM = 322,
     COLUMNS = 323,
     COLUMN_SYM = 324,
     COMMENT_SYM = 325,
     COMMITTED_SYM = 326,
     COMMIT_SYM = 327,
     COMPACT_SYM = 328,
     COMPLETION_SYM = 329,
     COMPRESSED_SYM = 330,
     CONCURRENT = 331,
     CONDITION_SYM = 332,
     CONNECTION_SYM = 333,
     CONSISTENT_SYM = 334,
     CONSTRAINT = 335,
     CONTAINS_SYM = 336,
     CONTEXT_SYM = 337,
     CONTINUE_SYM = 338,
     CONTRIBUTORS_SYM = 339,
     CONVERT_SYM = 340,
     COUNT_SYM = 341,
     CPU_SYM = 342,
     CREATE = 343,
     CROSS = 344,
     CUBE_SYM = 345,
     CURDATE = 346,
     CURRENT_USER = 347,
     CURSOR_SYM = 348,
     CURTIME = 349,
     DATABASE = 350,
     DATABASES = 351,
     DATAFILE_SYM = 352,
     DATA_SYM = 353,
     DATETIME = 354,
     DATE_ADD_INTERVAL = 355,
     DATE_SUB_INTERVAL = 356,
     DATE_SYM = 357,
     DAY_HOUR_SYM = 358,
     DAY_MICROSECOND_SYM = 359,
     DAY_MINUTE_SYM = 360,
     DAY_SECOND_SYM = 361,
     DAY_SYM = 362,
     DEALLOCATE_SYM = 363,
     DECIMAL_NUM = 364,
     DECIMAL_SYM = 365,
     DECLARE_SYM = 366,
     DEFAULT = 367,
     DEFINER_SYM = 368,
     DELAYED_SYM = 369,
     DELAY_KEY_WRITE_SYM = 370,
     DELETE_SYM = 371,
     DESC = 372,
     DESCRIBE = 373,
     DES_KEY_FILE = 374,
     DETERMINISTIC_SYM = 375,
     DIRECTORY_SYM = 376,
     DISABLE_SYM = 377,
     DISCARD = 378,
     DISK_SYM = 379,
     DISTINCT = 380,
     DIV_SYM = 381,
     DOUBLE_SYM = 382,
     DO_SYM = 383,
     DROP = 384,
     DUAL_SYM = 385,
     DUMPFILE = 386,
     DUPLICATE_SYM = 387,
     DYNAMIC_SYM = 388,
     EACH_SYM = 389,
     ELSE = 390,
     ELSEIF_SYM = 391,
     ENABLE_SYM = 392,
     ENCLOSED = 393,
     END = 394,
     ENDS_SYM = 395,
     END_OF_INPUT = 396,
     ENGINES_SYM = 397,
     ENGINE_SYM = 398,
     ENUM = 399,
     EQ = 400,
     EQUAL_SYM = 401,
     ERRORS = 402,
     ESCAPED = 403,
     ESCAPE_SYM = 404,
     EVENTS_SYM = 405,
     EVENT_SYM = 406,
     EVERY_SYM = 407,
     EXECUTE_SYM = 408,
     EXISTS = 409,
     EXIT_SYM = 410,
     EXPANSION_SYM = 411,
     EXTENDED_SYM = 412,
     EXTENT_SIZE_SYM = 413,
     EXTRACT_SYM = 414,
     FALSE_SYM = 415,
     FAST_SYM = 416,
     FAULTS_SYM = 417,
     FETCH_SYM = 418,
     FILE_SYM = 419,
     FIRST_SYM = 420,
     FIXED_SYM = 421,
     FLOAT_NUM = 422,
     FLOAT_SYM = 423,
     FLUSH_SYM = 424,
     FORCE_SYM = 425,
     FOREIGN = 426,
     FOR_SYM = 427,
     FOUND_SYM = 428,
     FRAC_SECOND_SYM = 429,
     FROM = 430,
     FULL = 431,
     FULLTEXT_SYM = 432,
     FUNCTION_SYM = 433,
     GE = 434,
     GEOMETRYCOLLECTION = 435,
     GEOMETRY_SYM = 436,
     GET_FORMAT = 437,
     GLOBAL_SYM = 438,
     GRANT = 439,
     GRANTS = 440,
     GROUP_SYM = 441,
     GROUP_CONCAT_SYM = 442,
     GT_SYM = 443,
     HANDLER_SYM = 444,
     HASH_SYM = 445,
     HAVING = 446,
     HELP_SYM = 447,
     HEX_NUM = 448,
     HIGH_PRIORITY = 449,
     HOST_SYM = 450,
     HOSTS_SYM = 451,
     HOUR_MICROSECOND_SYM = 452,
     HOUR_MINUTE_SYM = 453,
     HOUR_SECOND_SYM = 454,
     HOUR_SYM = 455,
     IDENT = 456,
     IDENTIFIED_SYM = 457,
     IDENT_QUOTED = 458,
     IF = 459,
     IGNORE_SYM = 460,
     IMPORT = 461,
     INDEXES = 462,
     INDEX_SYM = 463,
     INFILE = 464,
     INITIAL_SIZE_SYM = 465,
     INNER_SYM = 466,
     INNOBASE_SYM = 467,
     INOUT_SYM = 468,
     INSENSITIVE_SYM = 469,
     INSERT = 470,
     INSERT_METHOD = 471,
     INSTALL_SYM = 472,
     INTERVAL_SYM = 473,
     INTO = 474,
     INT_SYM = 475,
     INVOKER_SYM = 476,
     IN_SYM = 477,
     IO_SYM = 478,
     IPC_SYM = 479,
     IS = 480,
     ISOLATION = 481,
     ISSUER_SYM = 482,
     ITERATE_SYM = 483,
     JOIN_SYM = 484,
     KEYS = 485,
     KEY_BLOCK_SIZE = 486,
     KEY_SYM = 487,
     KILL_SYM = 488,
     LANGUAGE_SYM = 489,
     LAST_SYM = 490,
     LE = 491,
     LEADING = 492,
     LEAVES = 493,
     LEAVE_SYM = 494,
     LEFT = 495,
     LESS_SYM = 496,
     LEVEL_SYM = 497,
     LEX_HOSTNAME = 498,
     LIKE = 499,
     LIMIT = 500,
     LINEAR_SYM = 501,
     LINES = 502,
     LINESTRING = 503,
     LIST_SYM = 504,
     LOAD = 505,
     LOCAL_SYM = 506,
     LOCATOR_SYM = 507,
     LOCKS_SYM = 508,
     LOCK_SYM = 509,
     LOGFILE_SYM = 510,
     LOGS_SYM = 511,
     LONGBLOB = 512,
     LONGTEXT = 513,
     LONG_NUM = 514,
     LONG_SYM = 515,
     LOOP_SYM = 516,
     LOW_PRIORITY = 517,
     LT = 518,
     MASTER_CONNECT_RETRY_SYM = 519,
     MASTER_HOST_SYM = 520,
     MASTER_LOG_FILE_SYM = 521,
     MASTER_LOG_POS_SYM = 522,
     MASTER_PASSWORD_SYM = 523,
     MASTER_PORT_SYM = 524,
     MASTER_SERVER_ID_SYM = 525,
     MASTER_SSL_CAPATH_SYM = 526,
     MASTER_SSL_CA_SYM = 527,
     MASTER_SSL_CERT_SYM = 528,
     MASTER_SSL_CIPHER_SYM = 529,
     MASTER_SSL_KEY_SYM = 530,
     MASTER_SSL_SYM = 531,
     MASTER_SSL_VERIFY_SERVER_CERT_SYM = 532,
     MASTER_SYM = 533,
     MASTER_USER_SYM = 534,
     MATCH = 535,
     MAX_CONNECTIONS_PER_HOUR = 536,
     MAX_QUERIES_PER_HOUR = 537,
     MAX_ROWS = 538,
     MAX_SIZE_SYM = 539,
     MAX_SYM = 540,
     MAX_UPDATES_PER_HOUR = 541,
     MAX_USER_CONNECTIONS_SYM = 542,
     MAX_VALUE_SYM = 543,
     MEDIUMBLOB = 544,
     MEDIUMINT = 545,
     MEDIUMTEXT = 546,
     MEDIUM_SYM = 547,
     MEMORY_SYM = 548,
     MERGE_SYM = 549,
     MICROSECOND_SYM = 550,
     MIGRATE_SYM = 551,
     MINUTE_MICROSECOND_SYM = 552,
     MINUTE_SECOND_SYM = 553,
     MINUTE_SYM = 554,
     MIN_ROWS = 555,
     MIN_SYM = 556,
     MODE_SYM = 557,
     MODIFIES_SYM = 558,
     MODIFY_SYM = 559,
     MOD_SYM = 560,
     MONTH_SYM = 561,
     MULTILINESTRING = 562,
     MULTIPOINT = 563,
     MULTIPOLYGON = 564,
     MUTEX_SYM = 565,
     NAMES_SYM = 566,
     NAME_SYM = 567,
     NATIONAL_SYM = 568,
     NATURAL = 569,
     NCHAR_STRING = 570,
     NCHAR_SYM = 571,
     NDBCLUSTER_SYM = 572,
     NE = 573,
     NEG = 574,
     NEW_SYM = 575,
     NEXT_SYM = 576,
     NODEGROUP_SYM = 577,
     NONE_SYM = 578,
     NOT2_SYM = 579,
     NOT_SYM = 580,
     NOW_SYM = 581,
     NO_SYM = 582,
     NO_WAIT_SYM = 583,
     NO_WRITE_TO_BINLOG = 584,
     NULL_SYM = 585,
     NUM = 586,
     NUMERIC_SYM = 587,
     NVARCHAR_SYM = 588,
     OFFSET_SYM = 589,
     OLD_PASSWORD = 590,
     ON = 591,
     ONE_SHOT_SYM = 592,
     ONE_SYM = 593,
     OPEN_SYM = 594,
     OPTIMIZE = 595,
     OPTIONS_SYM = 596,
     OPTION = 597,
     OPTIONALLY = 598,
     OR2_SYM = 599,
     ORDER_SYM = 600,
     OR_OR_SYM = 601,
     OR_SYM = 602,
     OUTER = 603,
     OUTFILE = 604,
     OUT_SYM = 605,
     OWNER_SYM = 606,
     PACK_KEYS_SYM = 607,
     PAGE_SYM = 608,
     PARAM_MARKER = 609,
     PARSER_SYM = 610,
     PARTIAL = 611,
     PARTITIONING_SYM = 612,
     PARTITIONS_SYM = 613,
     PARTITION_SYM = 614,
     PASSWORD = 615,
     PHASE_SYM = 616,
     PLUGINS_SYM = 617,
     PLUGIN_SYM = 618,
     POINT_SYM = 619,
     POLYGON = 620,
     PORT_SYM = 621,
     POSITION_SYM = 622,
     PRECISION = 623,
     PREPARE_SYM = 624,
     PRESERVE_SYM = 625,
     PREV_SYM = 626,
     PRIMARY_SYM = 627,
     PRIVILEGES = 628,
     PROCEDURE = 629,
     PROCESS = 630,
     PROCESSLIST_SYM = 631,
     PROFILE_SYM = 632,
     PROFILES_SYM = 633,
     PURGE = 634,
     QUARTER_SYM = 635,
     QUERY_SYM = 636,
     QUICK = 637,
     RANGE_SYM = 638,
     READS_SYM = 639,
     READ_ONLY_SYM = 640,
     READ_SYM = 641,
     READ_WRITE_SYM = 642,
     REAL = 643,
     REBUILD_SYM = 644,
     RECOVER_SYM = 645,
     REDOFILE_SYM = 646,
     REDO_BUFFER_SIZE_SYM = 647,
     REDUNDANT_SYM = 648,
     REFERENCES = 649,
     REGEXP = 650,
     RELAY_LOG_FILE_SYM = 651,
     RELAY_LOG_POS_SYM = 652,
     RELAY_THREAD = 653,
     RELEASE_SYM = 654,
     RELOAD = 655,
     REMOVE_SYM = 656,
     RENAME = 657,
     REORGANIZE_SYM = 658,
     REPAIR = 659,
     REPEATABLE_SYM = 660,
     REPEAT_SYM = 661,
     REPLACE = 662,
     REPLICATION = 663,
     REQUIRE_SYM = 664,
     RESET_SYM = 665,
     RESOURCES = 666,
     RESTORE_SYM = 667,
     RESTRICT = 668,
     RESUME_SYM = 669,
     RETURNS_SYM = 670,
     RETURN_SYM = 671,
     REVOKE = 672,
     RIGHT = 673,
     ROLLBACK_SYM = 674,
     ROLLUP_SYM = 675,
     ROUTINE_SYM = 676,
     ROWS_SYM = 677,
     ROW_FORMAT_SYM = 678,
     ROW_SYM = 679,
     RTREE_SYM = 680,
     SAVEPOINT_SYM = 681,
     SCHEDULE_SYM = 682,
     SECOND_MICROSECOND_SYM = 683,
     SECOND_SYM = 684,
     SECURITY_SYM = 685,
     SELECT_SYM = 686,
     SENSITIVE_SYM = 687,
     SEPARATOR_SYM = 688,
     SERIALIZABLE_SYM = 689,
     SERIAL_SYM = 690,
     SESSION_SYM = 691,
     SERVER_SYM = 692,
     SERVER_OPTIONS = 693,
     SET = 694,
     SET_VAR = 695,
     SHARE_SYM = 696,
     SHIFT_LEFT = 697,
     SHIFT_RIGHT = 698,
     SHOW = 699,
     SHUTDOWN = 700,
     SIGNED_SYM = 701,
     SIMPLE_SYM = 702,
     SLAVE = 703,
     SMALLINT = 704,
     SNAPSHOT_SYM = 705,
     SOCKET_SYM = 706,
     SONAME_SYM = 707,
     SOUNDS_SYM = 708,
     SOURCE_SYM = 709,
     SPATIAL_SYM = 710,
     SPECIFIC_SYM = 711,
     SQLEXCEPTION_SYM = 712,
     SQLSTATE_SYM = 713,
     SQLWARNING_SYM = 714,
     SQL_BIG_RESULT = 715,
     SQL_BUFFER_RESULT = 716,
     SQL_CACHE_SYM = 717,
     SQL_CALC_FOUND_ROWS = 718,
     SQL_NO_CACHE_SYM = 719,
     SQL_SMALL_RESULT = 720,
     SQL_SYM = 721,
     SQL_THREAD = 722,
     SSL_SYM = 723,
     STARTING = 724,
     STARTS_SYM = 725,
     START_SYM = 726,
     STATUS_SYM = 727,
     STDDEV_SAMP_SYM = 728,
     STD_SYM = 729,
     STOP_SYM = 730,
     STORAGE_SYM = 731,
     STRAIGHT_JOIN = 732,
     STRING_SYM = 733,
     SUBDATE_SYM = 734,
     SUBJECT_SYM = 735,
     SUBPARTITIONS_SYM = 736,
     SUBPARTITION_SYM = 737,
     SUBSTRING = 738,
     SUM_SYM = 739,
     SUPER_SYM = 740,
     SUSPEND_SYM = 741,
     SWAPS_SYM = 742,
     SWITCHES_SYM = 743,
     SYSDATE = 744,
     TABLES = 745,
     TABLESPACE = 746,
     TABLE_REF_PRIORITY = 747,
     TABLE_SYM = 748,
     TABLE_CHECKSUM_SYM = 749,
     TEMPORARY = 750,
     TEMPTABLE_SYM = 751,
     TERMINATED = 752,
     TEXT_STRING = 753,
     TEXT_SYM = 754,
     THAN_SYM = 755,
     THEN_SYM = 756,
     TIMESTAMP = 757,
     TIMESTAMP_ADD = 758,
     TIMESTAMP_DIFF = 759,
     TIME_SYM = 760,
     TINYBLOB = 761,
     TINYINT = 762,
     TINYTEXT = 763,
     TO_SYM = 764,
     TRAILING = 765,
     TRANSACTION_SYM = 766,
     TRIGGERS_SYM = 767,
     TRIGGER_SYM = 768,
     TRIM = 769,
     TRUE_SYM = 770,
     TRUNCATE_SYM = 771,
     TYPES_SYM = 772,
     TYPE_SYM = 773,
     UDF_RETURNS_SYM = 774,
     ULONGLONG_NUM = 775,
     UNCOMMITTED_SYM = 776,
     UNDEFINED_SYM = 777,
     UNDERSCORE_CHARSET = 778,
     UNDOFILE_SYM = 779,
     UNDO_BUFFER_SIZE_SYM = 780,
     UNDO_SYM = 781,
     UNICODE_SYM = 782,
     UNINSTALL_SYM = 783,
     UNION_SYM = 784,
     UNIQUE_SYM = 785,
     UNKNOWN_SYM = 786,
     UNLOCK_SYM = 787,
     UNSIGNED = 788,
     UNTIL_SYM = 789,
     UPDATE_SYM = 790,
     UPGRADE_SYM = 791,
     USAGE = 792,
     USER = 793,
     USE_FRM = 794,
     USE_SYM = 795,
     USING = 796,
     UTC_DATE_SYM = 797,
     UTC_TIMESTAMP_SYM = 798,
     UTC_TIME_SYM = 799,
     VALUES = 800,
     VALUE_SYM = 801,
     VARBINARY = 802,
     VARCHAR = 803,
     VARIABLES = 804,
     VARIANCE_SYM = 805,
     VARYING = 806,
     VAR_SAMP_SYM = 807,
     VIEW_SYM = 808,
     WAIT_SYM = 809,
     WARNINGS = 810,
     WEEK_SYM = 811,
     WHEN_SYM = 812,
     WHERE = 813,
     WHILE_SYM = 814,
     WITH = 815,
     WORK_SYM = 816,
     WRAPPER_SYM = 817,
     WRITE_SYM = 818,
     X509_SYM = 819,
     XA_SYM = 820,
     XOR = 821,
     YEAR_MONTH_SYM = 822,
     YEAR_SYM = 823,
     ZEROFILL = 824
   };
#endif
/* Tokens.  */
#define ABORT_SYM 258
#define ACCESSIBLE_SYM 259
#define ACTION 260
#define ADD 261
#define ADDDATE_SYM 262
#define AFTER_SYM 263
#define AGAINST 264
#define AGGREGATE_SYM 265
#define ALGORITHM_SYM 266
#define ALL 267
#define ALTER 268
#define ANALYZE_SYM 269
#define AND_AND_SYM 270
#define AND_SYM 271
#define ANY_SYM 272
#define AS 273
#define ASC 274
#define ASCII_SYM 275
#define ASENSITIVE_SYM 276
#define AT_SYM 277
#define AUTHORS_SYM 278
#define AUTOEXTEND_SIZE_SYM 279
#define AUTO_INC 280
#define AVG_ROW_LENGTH 281
#define AVG_SYM 282
#define BACKUP_SYM 283
#define BEFORE_SYM 284
#define BEGIN_SYM 285
#define BETWEEN_SYM 286
#define BIGINT 287
#define BINARY 288
#define BINLOG_SYM 289
#define BIN_NUM 290
#define BIT_AND 291
#define BIT_OR 292
#define BIT_SYM 293
#define BIT_XOR 294
#define BLOB_SYM 295
#define BLOCK_SYM 296
#define BOOLEAN_SYM 297
#define BOOL_SYM 298
#define BOTH 299
#define BTREE_SYM 300
#define BY 301
#define BYTE_SYM 302
#define CACHE_SYM 303
#define CALL_SYM 304
#define CASCADE 305
#define CASCADED 306
#define CASE_SYM 307
#define CAST_SYM 308
#define CHAIN_SYM 309
#define CHANGE 310
#define CHANGED 311
#define CHARSET 312
#define CHAR_SYM 313
#define CHECKSUM_SYM 314
#define CHECK_SYM 315
#define CIPHER_SYM 316
#define CLIENT_SYM 317
#define CLOSE_SYM 318
#define COALESCE 319
#define CODE_SYM 320
#define COLLATE_SYM 321
#define COLLATION_SYM 322
#define COLUMNS 323
#define COLUMN_SYM 324
#define COMMENT_SYM 325
#define COMMITTED_SYM 326
#define COMMIT_SYM 327
#define COMPACT_SYM 328
#define COMPLETION_SYM 329
#define COMPRESSED_SYM 330
#define CONCURRENT 331
#define CONDITION_SYM 332
#define CONNECTION_SYM 333
#define CONSISTENT_SYM 334
#define CONSTRAINT 335
#define CONTAINS_SYM 336
#define CONTEXT_SYM 337
#define CONTINUE_SYM 338
#define CONTRIBUTORS_SYM 339
#define CONVERT_SYM 340
#define COUNT_SYM 341
#define CPU_SYM 342
#define CREATE 343
#define CROSS 344
#define CUBE_SYM 345
#define CURDATE 346
#define CURRENT_USER 347
#define CURSOR_SYM 348
#define CURTIME 349
#define DATABASE 350
#define DATABASES 351
#define DATAFILE_SYM 352
#define DATA_SYM 353
#define DATETIME 354
#define DATE_ADD_INTERVAL 355
#define DATE_SUB_INTERVAL 356
#define DATE_SYM 357
#define DAY_HOUR_SYM 358
#define DAY_MICROSECOND_SYM 359
#define DAY_MINUTE_SYM 360
#define DAY_SECOND_SYM 361
#define DAY_SYM 362
#define DEALLOCATE_SYM 363
#define DECIMAL_NUM 364
#define DECIMAL_SYM 365
#define DECLARE_SYM 366
#define DEFAULT 367
#define DEFINER_SYM 368
#define DELAYED_SYM 369
#define DELAY_KEY_WRITE_SYM 370
#define DELETE_SYM 371
#define DESC 372
#define DESCRIBE 373
#define DES_KEY_FILE 374
#define DETERMINISTIC_SYM 375
#define DIRECTORY_SYM 376
#define DISABLE_SYM 377
#define DISCARD 378
#define DISK_SYM 379
#define DISTINCT 380
#define DIV_SYM 381
#define DOUBLE_SYM 382
#define DO_SYM 383
#define DROP 384
#define DUAL_SYM 385
#define DUMPFILE 386
#define DUPLICATE_SYM 387
#define DYNAMIC_SYM 388
#define EACH_SYM 389
#define ELSE 390
#define ELSEIF_SYM 391
#define ENABLE_SYM 392
#define ENCLOSED 393
#define END 394
#define ENDS_SYM 395
#define END_OF_INPUT 396
#define ENGINES_SYM 397
#define ENGINE_SYM 398
#define ENUM 399
#define EQ 400
#define EQUAL_SYM 401
#define ERRORS 402
#define ESCAPED 403
#define ESCAPE_SYM 404
#define EVENTS_SYM 405
#define EVENT_SYM 406
#define EVERY_SYM 407
#define EXECUTE_SYM 408
#define EXISTS 409
#define EXIT_SYM 410
#define EXPANSION_SYM 411
#define EXTENDED_SYM 412
#define EXTENT_SIZE_SYM 413
#define EXTRACT_SYM 414
#define FALSE_SYM 415
#define FAST_SYM 416
#define FAULTS_SYM 417
#define FETCH_SYM 418
#define FILE_SYM 419
#define FIRST_SYM 420
#define FIXED_SYM 421
#define FLOAT_NUM 422
#define FLOAT_SYM 423
#define FLUSH_SYM 424
#define FORCE_SYM 425
#define FOREIGN 426
#define FOR_SYM 427
#define FOUND_SYM 428
#define FRAC_SECOND_SYM 429
#define FROM 430
#define FULL 431
#define FULLTEXT_SYM 432
#define FUNCTION_SYM 433
#define GE 434
#define GEOMETRYCOLLECTION 435
#define GEOMETRY_SYM 436
#define GET_FORMAT 437
#define GLOBAL_SYM 438
#define GRANT 439
#define GRANTS 440
#define GROUP_SYM 441
#define GROUP_CONCAT_SYM 442
#define GT_SYM 443
#define HANDLER_SYM 444
#define HASH_SYM 445
#define HAVING 446
#define HELP_SYM 447
#define HEX_NUM 448
#define HIGH_PRIORITY 449
#define HOST_SYM 450
#define HOSTS_SYM 451
#define HOUR_MICROSECOND_SYM 452
#define HOUR_MINUTE_SYM 453
#define HOUR_SECOND_SYM 454
#define HOUR_SYM 455
#define IDENT 456
#define IDENTIFIED_SYM 457
#define IDENT_QUOTED 458
#define IF 459
#define IGNORE_SYM 460
#define IMPORT 461
#define INDEXES 462
#define INDEX_SYM 463
#define INFILE 464
#define INITIAL_SIZE_SYM 465
#define INNER_SYM 466
#define INNOBASE_SYM 467
#define INOUT_SYM 468
#define INSENSITIVE_SYM 469
#define INSERT 470
#define INSERT_METHOD 471
#define INSTALL_SYM 472
#define INTERVAL_SYM 473
#define INTO 474
#define INT_SYM 475
#define INVOKER_SYM 476
#define IN_SYM 477
#define IO_SYM 478
#define IPC_SYM 479
#define IS 480
#define ISOLATION 481
#define ISSUER_SYM 482
#define ITERATE_SYM 483
#define JOIN_SYM 484
#define KEYS 485
#define KEY_BLOCK_SIZE 486
#define KEY_SYM 487
#define KILL_SYM 488
#define LANGUAGE_SYM 489
#define LAST_SYM 490
#define LE 491
#define LEADING 492
#define LEAVES 493
#define LEAVE_SYM 494
#define LEFT 495
#define LESS_SYM 496
#define LEVEL_SYM 497
#define LEX_HOSTNAME 498
#define LIKE 499
#define LIMIT 500
#define LINEAR_SYM 501
#define LINES 502
#define LINESTRING 503
#define LIST_SYM 504
#define LOAD 505
#define LOCAL_SYM 506
#define LOCATOR_SYM 507
#define LOCKS_SYM 508
#define LOCK_SYM 509
#define LOGFILE_SYM 510
#define LOGS_SYM 511
#define LONGBLOB 512
#define LONGTEXT 513
#define LONG_NUM 514
#define LONG_SYM 515
#define LOOP_SYM 516
#define LOW_PRIORITY 517
#define LT 518
#define MASTER_CONNECT_RETRY_SYM 519
#define MASTER_HOST_SYM 520
#define MASTER_LOG_FILE_SYM 521
#define MASTER_LOG_POS_SYM 522
#define MASTER_PASSWORD_SYM 523
#define MASTER_PORT_SYM 524
#define MASTER_SERVER_ID_SYM 525
#define MASTER_SSL_CAPATH_SYM 526
#define MASTER_SSL_CA_SYM 527
#define MASTER_SSL_CERT_SYM 528
#define MASTER_SSL_CIPHER_SYM 529
#define MASTER_SSL_KEY_SYM 530
#define MASTER_SSL_SYM 531
#define MASTER_SSL_VERIFY_SERVER_CERT_SYM 532
#define MASTER_SYM 533
#define MASTER_USER_SYM 534
#define MATCH 535
#define MAX_CONNECTIONS_PER_HOUR 536
#define MAX_QUERIES_PER_HOUR 537
#define MAX_ROWS 538
#define MAX_SIZE_SYM 539
#define MAX_SYM 540
#define MAX_UPDATES_PER_HOUR 541
#define MAX_USER_CONNECTIONS_SYM 542
#define MAX_VALUE_SYM 543
#define MEDIUMBLOB 544
#define MEDIUMINT 545
#define MEDIUMTEXT 546
#define MEDIUM_SYM 547
#define MEMORY_SYM 548
#define MERGE_SYM 549
#define MICROSECOND_SYM 550
#define MIGRATE_SYM 551
#define MINUTE_MICROSECOND_SYM 552
#define MINUTE_SECOND_SYM 553
#define MINUTE_SYM 554
#define MIN_ROWS 555
#define MIN_SYM 556
#define MODE_SYM 557
#define MODIFIES_SYM 558
#define MODIFY_SYM 559
#define MOD_SYM 560
#define MONTH_SYM 561
#define MULTILINESTRING 562
#define MULTIPOINT 563
#define MULTIPOLYGON 564
#define MUTEX_SYM 565
#define NAMES_SYM 566
#define NAME_SYM 567
#define NATIONAL_SYM 568
#define NATURAL 569
#define NCHAR_STRING 570
#define NCHAR_SYM 571
#define NDBCLUSTER_SYM 572
#define NE 573
#define NEG 574
#define NEW_SYM 575
#define NEXT_SYM 576
#define NODEGROUP_SYM 577
#define NONE_SYM 578
#define NOT2_SYM 579
#define NOT_SYM 580
#define NOW_SYM 581
#define NO_SYM 582
#define NO_WAIT_SYM 583
#define NO_WRITE_TO_BINLOG 584
#define NULL_SYM 585
#define NUM 586
#define NUMERIC_SYM 587
#define NVARCHAR_SYM 588
#define OFFSET_SYM 589
#define OLD_PASSWORD 590
#define ON 591
#define ONE_SHOT_SYM 592
#define ONE_SYM 593
#define OPEN_SYM 594
#define OPTIMIZE 595
#define OPTIONS_SYM 596
#define OPTION 597
#define OPTIONALLY 598
#define OR2_SYM 599
#define ORDER_SYM 600
#define OR_OR_SYM 601
#define OR_SYM 602
#define OUTER 603
#define OUTFILE 604
#define OUT_SYM 605
#define OWNER_SYM 606
#define PACK_KEYS_SYM 607
#define PAGE_SYM 608
#define PARAM_MARKER 609
#define PARSER_SYM 610
#define PARTIAL 611
#define PARTITIONING_SYM 612
#define PARTITIONS_SYM 613
#define PARTITION_SYM 614
#define PASSWORD 615
#define PHASE_SYM 616
#define PLUGINS_SYM 617
#define PLUGIN_SYM 618
#define POINT_SYM 619
#define POLYGON 620
#define PORT_SYM 621
#define POSITION_SYM 622
#define PRECISION 623
#define PREPARE_SYM 624
#define PRESERVE_SYM 625
#define PREV_SYM 626
#define PRIMARY_SYM 627
#define PRIVILEGES 628
#define PROCEDURE 629
#define PROCESS 630
#define PROCESSLIST_SYM 631
#define PROFILE_SYM 632
#define PROFILES_SYM 633
#define PURGE 634
#define QUARTER_SYM 635
#define QUERY_SYM 636
#define QUICK 637
#define RANGE_SYM 638
#define READS_SYM 639
#define READ_ONLY_SYM 640
#define READ_SYM 641
#define READ_WRITE_SYM 642
#define REAL 643
#define REBUILD_SYM 644
#define RECOVER_SYM 645
#define REDOFILE_SYM 646
#define REDO_BUFFER_SIZE_SYM 647
#define REDUNDANT_SYM 648
#define REFERENCES 649
#define REGEXP 650
#define RELAY_LOG_FILE_SYM 651
#define RELAY_LOG_POS_SYM 652
#define RELAY_THREAD 653
#define RELEASE_SYM 654
#define RELOAD 655
#define REMOVE_SYM 656
#define RENAME 657
#define REORGANIZE_SYM 658
#define REPAIR 659
#define REPEATABLE_SYM 660
#define REPEAT_SYM 661
#define REPLACE 662
#define REPLICATION 663
#define REQUIRE_SYM 664
#define RESET_SYM 665
#define RESOURCES 666
#define RESTORE_SYM 667
#define RESTRICT 668
#define RESUME_SYM 669
#define RETURNS_SYM 670
#define RETURN_SYM 671
#define REVOKE 672
#define RIGHT 673
#define ROLLBACK_SYM 674
#define ROLLUP_SYM 675
#define ROUTINE_SYM 676
#define ROWS_SYM 677
#define ROW_FORMAT_SYM 678
#define ROW_SYM 679
#define RTREE_SYM 680
#define SAVEPOINT_SYM 681
#define SCHEDULE_SYM 682
#define SECOND_MICROSECOND_SYM 683
#define SECOND_SYM 684
#define SECURITY_SYM 685
#define SELECT_SYM 686
#define SENSITIVE_SYM 687
#define SEPARATOR_SYM 688
#define SERIALIZABLE_SYM 689
#define SERIAL_SYM 690
#define SESSION_SYM 691
#define SERVER_SYM 692
#define SERVER_OPTIONS 693
#define SET 694
#define SET_VAR 695
#define SHARE_SYM 696
#define SHIFT_LEFT 697
#define SHIFT_RIGHT 698
#define SHOW 699
#define SHUTDOWN 700
#define SIGNED_SYM 701
#define SIMPLE_SYM 702
#define SLAVE 703
#define SMALLINT 704
#define SNAPSHOT_SYM 705
#define SOCKET_SYM 706
#define SONAME_SYM 707
#define SOUNDS_SYM 708
#define SOURCE_SYM 709
#define SPATIAL_SYM 710
#define SPECIFIC_SYM 711
#define SQLEXCEPTION_SYM 712
#define SQLSTATE_SYM 713
#define SQLWARNING_SYM 714
#define SQL_BIG_RESULT 715
#define SQL_BUFFER_RESULT 716
#define SQL_CACHE_SYM 717
#define SQL_CALC_FOUND_ROWS 718
#define SQL_NO_CACHE_SYM 719
#define SQL_SMALL_RESULT 720
#define SQL_SYM 721
#define SQL_THREAD 722
#define SSL_SYM 723
#define STARTING 724
#define STARTS_SYM 725
#define START_SYM 726
#define STATUS_SYM 727
#define STDDEV_SAMP_SYM 728
#define STD_SYM 729
#define STOP_SYM 730
#define STORAGE_SYM 731
#define STRAIGHT_JOIN 732
#define STRING_SYM 733
#define SUBDATE_SYM 734
#define SUBJECT_SYM 735
#define SUBPARTITIONS_SYM 736
#define SUBPARTITION_SYM 737
#define SUBSTRING 738
#define SUM_SYM 739
#define SUPER_SYM 740
#define SUSPEND_SYM 741
#define SWAPS_SYM 742
#define SWITCHES_SYM 743
#define SYSDATE 744
#define TABLES 745
#define TABLESPACE 746
#define TABLE_REF_PRIORITY 747
#define TABLE_SYM 748
#define TABLE_CHECKSUM_SYM 749
#define TEMPORARY 750
#define TEMPTABLE_SYM 751
#define TERMINATED 752
#define TEXT_STRING 753
#define TEXT_SYM 754
#define THAN_SYM 755
#define THEN_SYM 756
#define TIMESTAMP 757
#define TIMESTAMP_ADD 758
#define TIMESTAMP_DIFF 759
#define TIME_SYM 760
#define TINYBLOB 761
#define TINYINT 762
#define TINYTEXT 763
#define TO_SYM 764
#define TRAILING 765
#define TRANSACTION_SYM 766
#define TRIGGERS_SYM 767
#define TRIGGER_SYM 768
#define TRIM 769
#define TRUE_SYM 770
#define TRUNCATE_SYM 771
#define TYPES_SYM 772
#define TYPE_SYM 773
#define UDF_RETURNS_SYM 774
#define ULONGLONG_NUM 775
#define UNCOMMITTED_SYM 776
#define UNDEFINED_SYM 777
#define UNDERSCORE_CHARSET 778
#define UNDOFILE_SYM 779
#define UNDO_BUFFER_SIZE_SYM 780
#define UNDO_SYM 781
#define UNICODE_SYM 782
#define UNINSTALL_SYM 783
#define UNION_SYM 784
#define UNIQUE_SYM 785
#define UNKNOWN_SYM 786
#define UNLOCK_SYM 787
#define UNSIGNED 788
#define UNTIL_SYM 789
#define UPDATE_SYM 790
#define UPGRADE_SYM 791
#define USAGE 792
#define USER 793
#define USE_FRM 794
#define USE_SYM 795
#define USING 796
#define UTC_DATE_SYM 797
#define UTC_TIMESTAMP_SYM 798
#define UTC_TIME_SYM 799
#define VALUES 800
#define VALUE_SYM 801
#define VARBINARY 802
#define VARCHAR 803
#define VARIABLES 804
#define VARIANCE_SYM 805
#define VARYING 806
#define VAR_SAMP_SYM 807
#define VIEW_SYM 808
#define WAIT_SYM 809
#define WARNINGS 810
#define WEEK_SYM 811
#define WHEN_SYM 812
#define WHERE 813
#define WHILE_SYM 814
#define WITH 815
#define WORK_SYM 816
#define WRAPPER_SYM 817
#define WRITE_SYM 818
#define X509_SYM 819
#define XA_SYM 820
#define XOR 821
#define YEAR_MONTH_SYM 822
#define YEAR_SYM 823
#define ZEROFILL 824




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 629 "sql_yacc.yy"

  int  num;
  ulong ulong_num;
  ulonglong ulonglong_number;
  longlong longlong_number;
  LEX_STRING lex_str;
  LEX_STRING *lex_str_ptr;
  LEX_SYMBOL symbol;
  Table_ident *table;
  char *simple_string;
  Item *item;
  Item_num *item_num;
  List<Item> *item_list;
  List<String> *string_list;
  String *string;
  Key_part_spec *key_part;
  TABLE_LIST *table_list;
  udf_func *udf;
  LEX_USER *lex_user;
  struct sys_var_with_base variable;
  enum enum_var_type var_type;
  Key::Keytype key_type;
  enum ha_key_alg key_alg;
  handlerton *db_type;
  enum row_type row_type;
  enum ha_rkey_function ha_rkey_mode;
  enum enum_tx_isolation tx_isolation;
  enum Cast_target cast_type;
  enum Item_udftype udf_type;
  CHARSET_INFO *charset;
  thr_lock_type lock_type;
  interval_type interval, interval_time_st;
  timestamp_type date_time_type;
  st_select_lex *select_lex;
  chooser_compare_func_creator boolfunc2creator;
  struct sp_cond_type *spcondtype;
  struct { int vars, conds, hndlrs, curs; } spblock;
  sp_name *spname;
  struct st_lex *lex;
  sp_head *sphead;
  struct p_elem_val *p_elem_value;
  enum index_hint_type index_hint;



/* Line 1676 of yacc.c  */
#line 1236 "sql_yacc.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif




