/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * QAPI/QMP schema introspection
 *
 * Copyright (C) 2015-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qapi-introspect.h"

const QLitObject qmp_schema_qlit = QLIT_QLIST(((QLitObject[]) {
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-status"), },
        { "ret-type", QLIT_QSTR("1"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("2"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("SHUTDOWN"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("POWERDOWN"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("3"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("RESET"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("STOP"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("RESUME"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("SUSPEND"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("SUSPEND_DISK"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("WAKEUP"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("4"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("WATCHDOG"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("5"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("watchdog-set-action"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("6"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("GUEST_PANICKED"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("7"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("JOB_STATUS_CHANGE"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("8"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("job-pause"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("9"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("job-resume"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("10"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("job-cancel"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("11"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("job-complete"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("12"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("job-dismiss"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("13"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("job-finalize"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-jobs"), },
        { "ret-type", QLIT_QSTR("[14]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("15"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-latency-histogram-set"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-block"), },
        { "ret-type", QLIT_QSTR("[16]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("17"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-blockstats"), },
        { "ret-type", QLIT_QSTR("[18]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-block-jobs"), },
        { "ret-type", QLIT_QSTR("[19]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("20"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block_passwd"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("21"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block_resize"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("22"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-snapshot-sync"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("23"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-snapshot"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("24"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("change-backing-file"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("25"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-commit"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("26"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("drive-backup"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("27"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-backup"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-named-block-nodes"), },
        { "ret-type", QLIT_QSTR("[28]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("x-debug-query-block-graph"), },
        { "ret-type", QLIT_QSTR("29"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("30"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("drive-mirror"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("31"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-dirty-bitmap-add"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("32"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-dirty-bitmap-remove"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("32"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-dirty-bitmap-clear"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("32"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-dirty-bitmap-enable"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("32"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-dirty-bitmap-disable"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("33"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-dirty-bitmap-merge"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("32"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("x-debug-block-dirty-bitmap-sha256"), },
        { "ret-type", QLIT_QSTR("34"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("35"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-mirror"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("36"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block_set_io_throttle"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("37"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-stream"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("38"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-job-set-speed"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("39"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-job-cancel"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("40"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-job-pause"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("41"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-job-resume"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("42"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-job-complete"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("43"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-job-dismiss"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("44"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-job-finalize"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("45"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-add"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("45"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("x-blockdev-reopen"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("46"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-del"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("47"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-create"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("48"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-open-tray"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("49"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-close-tray"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("50"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-remove-medium"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("51"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-insert-medium"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("52"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-change-medium"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("53"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BLOCK_IMAGE_CORRUPTED"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("54"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BLOCK_IO_ERROR"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("55"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BLOCK_JOB_COMPLETED"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("56"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BLOCK_JOB_CANCELLED"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("57"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BLOCK_JOB_ERROR"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("58"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BLOCK_JOB_READY"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("59"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BLOCK_JOB_PENDING"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("60"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BLOCK_WRITE_THRESHOLD"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("61"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-set-write-threshold"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("62"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("x-blockdev-change"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("63"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("x-blockdev-set-iothread"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-pr-managers"), },
        { "ret-type", QLIT_QSTR("[64]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("65"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-snapshot-internal-sync"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("66"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-snapshot-delete-internal-sync"), },
        { "ret-type", QLIT_QSTR("67"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("68"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("eject"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("69"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("nbd-server-start"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("70"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("nbd-server-add"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("71"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("nbd-server-remove"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("nbd-server-stop"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("72"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("DEVICE_TRAY_MOVED"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("73"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("PR_MANAGER_STATUS_CHANGED"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("74"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("QUORUM_FAILURE"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("75"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("QUORUM_REPORT_BAD"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-chardev"), },
        { "ret-type", QLIT_QSTR("[76]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-chardev-backends"), },
        { "ret-type", QLIT_QSTR("[77]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("78"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("ringbuf-write"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("79"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("ringbuf-read"), },
        { "ret-type", QLIT_QSTR("str"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("80"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("chardev-add"), },
        { "ret-type", QLIT_QSTR("81"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("82"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("chardev-change"), },
        { "ret-type", QLIT_QSTR("81"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("83"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("chardev-remove"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("84"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("chardev-send-break"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("85"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("VSERPORT_CHANGE"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("86"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("dump-guest-memory"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-dump"), },
        { "ret-type", QLIT_QSTR("87"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("88"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("DUMP_COMPLETED"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-dump-guest-memory-capability"), },
        { "ret-type", QLIT_QSTR("89"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("90"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("set_link"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("91"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("netdev_add"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("92"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("netdev_del"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("93"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-rx-filter"), },
        { "ret-type", QLIT_QSTR("[94]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("95"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("NIC_RX_FILTER_CHANGED"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("96"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("announce-self"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("97"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("RDMA_GID_STATUS_CHANGED"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("98"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-rocker"), },
        { "ret-type", QLIT_QSTR("99"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("100"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-rocker-ports"), },
        { "ret-type", QLIT_QSTR("[101]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("102"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-rocker-of-dpa-flows"), },
        { "ret-type", QLIT_QSTR("[103]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("104"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-rocker-of-dpa-groups"), },
        { "ret-type", QLIT_QSTR("[105]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-tpm-models"), },
        { "ret-type", QLIT_QSTR("[106]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-tpm-types"), },
        { "ret-type", QLIT_QSTR("[107]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-tpm"), },
        { "ret-type", QLIT_QSTR("[108]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("109"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("set_password"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("110"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("expire_password"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("111"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("screendump"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-spice"), },
        { "ret-type", QLIT_QSTR("112"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("113"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("SPICE_CONNECTED"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("114"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("SPICE_INITIALIZED"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("115"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("SPICE_DISCONNECTED"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("SPICE_MIGRATE_COMPLETED"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-vnc"), },
        { "ret-type", QLIT_QSTR("116"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-vnc-servers"), },
        { "ret-type", QLIT_QSTR("[117]"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("118"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("change-vnc-password"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("119"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("VNC_CONNECTED"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("120"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("VNC_INITIALIZED"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("121"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("VNC_DISCONNECTED"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-mice"), },
        { "ret-type", QLIT_QSTR("[122]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("123"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("send-key"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("124"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("input-send-event"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-display-options"), },
        { "ret-type", QLIT_QSTR("125"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-migrate"), },
        { "ret-type", QLIT_QSTR("126"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("127"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("migrate-set-capabilities"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-migrate-capabilities"), },
        { "ret-type", QLIT_QSTR("[128]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("129"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("migrate-set-parameters"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-migrate-parameters"), },
        { "ret-type", QLIT_QSTR("130"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("131"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("client_migrate_info"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("migrate-start-postcopy"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("132"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("MIGRATION"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("133"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("MIGRATION_PASS"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("134"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("COLO_EXIT"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("x-colo-lost-heartbeat"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("migrate_cancel"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("135"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("migrate-continue"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("136"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("migrate_set_downtime"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("137"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("migrate_set_speed"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("138"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("migrate-set-cache-size"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-migrate-cache-size"), },
        { "ret-type", QLIT_QSTR("int"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("139"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("migrate"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("140"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("migrate-incoming"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("141"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("xen-save-devices-state"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
#if defined(CONFIG_REPLICATION)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("142"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("xen-set-replication"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
#endif /* defined(CONFIG_REPLICATION) */
#if defined(CONFIG_REPLICATION)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-xen-replication-status"), },
        { "ret-type", QLIT_QSTR("143"), },
        {}
    })),
#endif /* defined(CONFIG_REPLICATION) */
#if defined(CONFIG_REPLICATION)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("xen-colo-do-checkpoint"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
#endif /* defined(CONFIG_REPLICATION) */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-colo-status"), },
        { "ret-type", QLIT_QSTR("144"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "allow-oob", QLIT_QBOOL(true), },
        { "arg-type", QLIT_QSTR("145"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("migrate-recover"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "allow-oob", QLIT_QBOOL(true), },
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("migrate-pause"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("146"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("transaction"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("147"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("trace-event-get-state"), },
        { "ret-type", QLIT_QSTR("[148]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("149"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("trace-event-set-state"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-qmp-schema"), },
        { "ret-type", QLIT_QSTR("[150]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("151"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("qom-list"), },
        { "ret-type", QLIT_QSTR("[152]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("153"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("qom-get"), },
        { "ret-type", QLIT_QSTR("any"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("154"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("qom-set"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("155"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("qom-list-types"), },
        { "ret-type", QLIT_QSTR("[156]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("157"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("qom-list-properties"), },
        { "ret-type", QLIT_QSTR("[152]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("158"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("object-add"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("159"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("object-del"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("160"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("device-list-properties"), },
        { "ret-type", QLIT_QSTR("[152]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("161"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("device_add"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("162"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("device_del"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("163"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("DEVICE_DELETED"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-cpus"), },
        { "ret-type", QLIT_QSTR("[164]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-cpus-fast"), },
        { "ret-type", QLIT_QSTR("[165]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("166"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("cpu-add"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-machines"), },
        { "ret-type", QLIT_QSTR("[167]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-current-machine"), },
        { "ret-type", QLIT_QSTR("168"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-memdev"), },
        { "ret-type", QLIT_QSTR("[169]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-hotpluggable-cpus"), },
        { "ret-type", QLIT_QSTR("[170]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("171"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("set-numa-node"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
#if defined(TARGET_S390X)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("172"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-cpu-model-comparison"), },
        { "ret-type", QLIT_QSTR("173"), },
        {}
    })),
#endif /* defined(TARGET_S390X) */
#if defined(TARGET_S390X)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("174"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-cpu-model-baseline"), },
        { "ret-type", QLIT_QSTR("175"), },
        {}
    })),
#endif /* defined(TARGET_S390X) */
#if defined(TARGET_S390X) || defined(TARGET_I386)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("176"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-cpu-model-expansion"), },
        { "ret-type", QLIT_QSTR("177"), },
        {}
    })),
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) */
#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-cpu-definitions"), },
        { "ret-type", QLIT_QSTR("[178]"), },
        {}
    })),
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("179"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("qmp_capabilities"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-version"), },
        { "ret-type", QLIT_QSTR("180"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-commands"), },
        { "ret-type", QLIT_QSTR("[181]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("182"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("add_client"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-name"), },
        { "ret-type", QLIT_QSTR("183"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-kvm"), },
        { "ret-type", QLIT_QSTR("184"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-uuid"), },
        { "ret-type", QLIT_QSTR("185"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-events"), },
        { "ret-type", QLIT_QSTR("[186]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-iothreads"), },
        { "ret-type", QLIT_QSTR("[187]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-balloon"), },
        { "ret-type", QLIT_QSTR("188"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("189"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BALLOON_CHANGE"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-pci"), },
        { "ret-type", QLIT_QSTR("[190]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("quit"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("stop"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("system_reset"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("system_powerdown"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("191"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("memsave"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("192"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("pmemsave"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("cont"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("x-exit-preconfig"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("system_wakeup"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("inject-nmi"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("193"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("balloon"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("194"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("human-monitor-command"), },
        { "ret-type", QLIT_QSTR("str"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("195"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("change"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("196"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("xen-set-global-dirty-log"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("197"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("getfd"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("198"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("closefd"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-memory-size-summary"), },
        { "ret-type", QLIT_QSTR("199"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("200"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("add-fd"), },
        { "ret-type", QLIT_QSTR("201"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("202"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("remove-fd"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-fdsets"), },
        { "ret-type", QLIT_QSTR("[203]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-target"), },
        { "ret-type", QLIT_QSTR("204"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("205"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-command-line-options"), },
        { "ret-type", QLIT_QSTR("[206]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-memory-devices"), },
        { "ret-type", QLIT_QSTR("[207]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("208"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("MEM_UNPLUG_ERROR"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-acpi-ospm-status"), },
        { "ret-type", QLIT_QSTR("[209]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("210"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("ACPI_DEVICE_OST"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("211"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("xen-load-devices-state"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-vm-generation-id"), },
        { "ret-type", QLIT_QSTR("212"), },
        {}
    })),
#if defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_MOXIE) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("213"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("RTC_CHANGE"), },
        {}
    })),
#endif /* defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_MOXIE) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC) */
#if defined(TARGET_I386)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("rtc-reset-reinjection"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
#endif /* defined(TARGET_I386) */
#if defined(TARGET_I386)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-sev"), },
        { "ret-type", QLIT_QSTR("214"), },
        {}
    })),
#endif /* defined(TARGET_I386) */
#if defined(TARGET_I386)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-sev-launch-measure"), },
        { "ret-type", QLIT_QSTR("215"), },
        {}
    })),
#endif /* defined(TARGET_I386) */
#if defined(TARGET_I386)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-sev-capabilities"), },
        { "ret-type", QLIT_QSTR("216"), },
        {}
    })),
#endif /* defined(TARGET_I386) */
#if defined(TARGET_S390X)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("217"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("dump-skeys"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
#endif /* defined(TARGET_S390X) */
#if defined(TARGET_ARM)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-gic-capabilities"), },
        { "ret-type", QLIT_QSTR("[218]"), },
        {}
    })),
#endif /* defined(TARGET_ARM) */
    /* "0" = q_empty */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("0"), },
        {}
    })),
    /* "1" = StatusInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("running"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("singlestep"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("status"), },
                { "type", QLIT_QSTR("219"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("1"), },
        {}
    })),
    /* "2" = q_obj_SHUTDOWN-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("guest"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("reason"), },
                { "type", QLIT_QSTR("220"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("2"), },
        {}
    })),
    /* "3" = q_obj_RESET-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("guest"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("reason"), },
                { "type", QLIT_QSTR("220"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("3"), },
        {}
    })),
    /* "4" = q_obj_WATCHDOG-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("action"), },
                { "type", QLIT_QSTR("221"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("4"), },
        {}
    })),
    /* "5" = q_obj_watchdog-set-action-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("action"), },
                { "type", QLIT_QSTR("221"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("5"), },
        {}
    })),
    /* "6" = q_obj_GUEST_PANICKED-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("action"), },
                { "type", QLIT_QSTR("222"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("info"), },
                { "type", QLIT_QSTR("223"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("6"), },
        {}
    })),
    /* "7" = q_obj_JOB_STATUS_CHANGE-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("status"), },
                { "type", QLIT_QSTR("224"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("7"), },
        {}
    })),
    /* "8" = q_obj_job-pause-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("8"), },
        {}
    })),
    /* "9" = q_obj_job-resume-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("9"), },
        {}
    })),
    /* "10" = q_obj_job-cancel-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("10"), },
        {}
    })),
    /* "11" = q_obj_job-complete-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("11"), },
        {}
    })),
    /* "12" = q_obj_job-dismiss-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("12"), },
        {}
    })),
    /* "13" = q_obj_job-finalize-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("13"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("14"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[14]"), },
        {}
    })),
    /* "14" = JobInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("225"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("status"), },
                { "type", QLIT_QSTR("224"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("current-progress"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("total-progress"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("error"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("14"), },
        {}
    })),
    /* "15" = q_obj_block-latency-histogram-set-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("boundaries"), },
                { "type", QLIT_QSTR("[int]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("boundaries-read"), },
                { "type", QLIT_QSTR("[int]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("boundaries-write"), },
                { "type", QLIT_QSTR("[int]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("boundaries-flush"), },
                { "type", QLIT_QSTR("[int]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("15"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("16"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[16]"), },
        {}
    })),
    /* "16" = BlockInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("qdev"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("removable"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("locked"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("inserted"), },
                { "type", QLIT_QSTR("28"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tray_open"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("io-status"), },
                { "type", QLIT_QSTR("226"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("dirty-bitmaps"), },
                { "type", QLIT_QSTR("[227]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("16"), },
        {}
    })),
    /* "17" = q_obj_query-blockstats-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("query-nodes"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("17"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("18"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[18]"), },
        {}
    })),
    /* "18" = BlockStats */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("qdev"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("stats"), },
                { "type", QLIT_QSTR("228"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("parent"), },
                { "type", QLIT_QSTR("18"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing"), },
                { "type", QLIT_QSTR("18"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("18"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("19"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[19]"), },
        {}
    })),
    /* "19" = BlockJobInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("len"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("busy"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("paused"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("io-status"), },
                { "type", QLIT_QSTR("226"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("ready"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("status"), },
                { "type", QLIT_QSTR("224"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("auto-finalize"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("auto-dismiss"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("error"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("19"), },
        {}
    })),
    /* "20" = q_obj_block_passwd-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("password"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("20"), },
        {}
    })),
    /* "21" = q_obj_block_resize-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("21"), },
        {}
    })),
    /* "22" = BlockdevSnapshotSync */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("snapshot-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("snapshot-node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("mode"), },
                { "type", QLIT_QSTR("229"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("22"), },
        {}
    })),
    /* "23" = BlockdevSnapshot */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("overlay"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("23"), },
        {}
    })),
    /* "24" = q_obj_change-backing-file-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("image-node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("backing-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("24"), },
        {}
    })),
    /* "25" = q_obj_block-commit-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("job-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("base-node"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("base"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("top-node"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("top"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("filter-node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-finalize"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-dismiss"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("25"), },
        {}
    })),
    /* "26" = DriveBackup */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("job-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("target"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sync"), },
                { "type", QLIT_QSTR("230"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("mode"), },
                { "type", QLIT_QSTR("229"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bitmap"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("compress"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-source-error"), },
                { "type", QLIT_QSTR("231"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-target-error"), },
                { "type", QLIT_QSTR("231"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-finalize"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-dismiss"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("26"), },
        {}
    })),
    /* "27" = BlockdevBackup */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("job-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("target"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sync"), },
                { "type", QLIT_QSTR("230"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bitmap"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("compress"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-source-error"), },
                { "type", QLIT_QSTR("231"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-target-error"), },
                { "type", QLIT_QSTR("231"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-finalize"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-dismiss"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("27"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("28"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[28]"), },
        {}
    })),
    /* "28" = BlockDeviceInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("ro"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("drv"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing_file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("backing_file_depth"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("encrypted"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("encryption_key_missing"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("detect_zeroes"), },
                { "type", QLIT_QSTR("232"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bps"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bps_rd"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bps_wr"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("iops"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("iops_rd"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("iops_wr"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("image"), },
                { "type", QLIT_QSTR("233"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_rd_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_wr_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_rd_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_wr_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_rd_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_wr_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_rd_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_wr_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("group"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cache"), },
                { "type", QLIT_QSTR("234"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("write_threshold"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("28"), },
        {}
    })),
    /* "29" = XDbgBlockGraph */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("nodes"), },
                { "type", QLIT_QSTR("[235]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("edges"), },
                { "type", QLIT_QSTR("[236]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("29"), },
        {}
    })),
    /* "30" = DriveMirror */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("job-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("target"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("replaces"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sync"), },
                { "type", QLIT_QSTR("230"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("mode"), },
                { "type", QLIT_QSTR("229"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("granularity"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("buf-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-source-error"), },
                { "type", QLIT_QSTR("231"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-target-error"), },
                { "type", QLIT_QSTR("231"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("unmap"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("copy-mode"), },
                { "type", QLIT_QSTR("237"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-finalize"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-dismiss"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("30"), },
        {}
    })),
    /* "31" = BlockDirtyBitmapAdd */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("granularity"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("persistent"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("autoload"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("disabled"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("31"), },
        {}
    })),
    /* "32" = BlockDirtyBitmap */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("32"), },
        {}
    })),
    /* "33" = BlockDirtyBitmapMerge */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("target"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bitmaps"), },
                { "type", QLIT_QSTR("[238]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("33"), },
        {}
    })),
    /* "34" = BlockDirtyBitmapSha256 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sha256"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("34"), },
        {}
    })),
    /* "35" = q_obj_blockdev-mirror-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("job-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("target"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("replaces"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sync"), },
                { "type", QLIT_QSTR("230"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("granularity"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("buf-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-source-error"), },
                { "type", QLIT_QSTR("231"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-target-error"), },
                { "type", QLIT_QSTR("231"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("filter-node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("copy-mode"), },
                { "type", QLIT_QSTR("237"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-finalize"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-dismiss"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("35"), },
        {}
    })),
    /* "36" = BlockIOThrottle */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bps"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bps_rd"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bps_wr"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("iops"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("iops_rd"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("iops_wr"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_rd_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_wr_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_rd_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_wr_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_rd_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_wr_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_rd_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_wr_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("group"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("36"), },
        {}
    })),
    /* "37" = q_obj_block-stream-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("job-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("base"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("base-node"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-error"), },
                { "type", QLIT_QSTR("231"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-finalize"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-dismiss"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("37"), },
        {}
    })),
    /* "38" = q_obj_block-job-set-speed-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("38"), },
        {}
    })),
    /* "39" = q_obj_block-job-cancel-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("force"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("39"), },
        {}
    })),
    /* "40" = q_obj_block-job-pause-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("40"), },
        {}
    })),
    /* "41" = q_obj_block-job-resume-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("41"), },
        {}
    })),
    /* "42" = q_obj_block-job-complete-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("42"), },
        {}
    })),
    /* "43" = q_obj_block-job-dismiss-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("43"), },
        {}
    })),
    /* "44" = q_obj_block-job-finalize-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("44"), },
        {}
    })),
    /* "45" = BlockdevOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("driver"), },
                { "type", QLIT_QSTR("239"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("discard"), },
                { "type", QLIT_QSTR("240"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cache"), },
                { "type", QLIT_QSTR("241"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("read-only"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-read-only"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("force-share"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("detect-zeroes"), },
                { "type", QLIT_QSTR("232"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("45"), },
        { "tag", QLIT_QSTR("driver"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blkdebug"), },
                { "type", QLIT_QSTR("242"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blklogwrites"), },
                { "type", QLIT_QSTR("243"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blkverify"), },
                { "type", QLIT_QSTR("244"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("bochs"), },
                { "type", QLIT_QSTR("245"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("cloop"), },
                { "type", QLIT_QSTR("245"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("copy-on-read"), },
                { "type", QLIT_QSTR("245"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("dmg"), },
                { "type", QLIT_QSTR("245"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("246"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ftp"), },
                { "type", QLIT_QSTR("247"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ftps"), },
                { "type", QLIT_QSTR("248"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("gluster"), },
                { "type", QLIT_QSTR("249"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("host_cdrom"), },
                { "type", QLIT_QSTR("246"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("host_device"), },
                { "type", QLIT_QSTR("246"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("http"), },
                { "type", QLIT_QSTR("250"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("https"), },
                { "type", QLIT_QSTR("251"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("iscsi"), },
                { "type", QLIT_QSTR("252"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("luks"), },
                { "type", QLIT_QSTR("253"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nbd"), },
                { "type", QLIT_QSTR("254"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nfs"), },
                { "type", QLIT_QSTR("255"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("null-aio"), },
                { "type", QLIT_QSTR("256"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("null-co"), },
                { "type", QLIT_QSTR("256"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nvme"), },
                { "type", QLIT_QSTR("257"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("parallels"), },
                { "type", QLIT_QSTR("245"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcow2"), },
                { "type", QLIT_QSTR("258"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcow"), },
                { "type", QLIT_QSTR("259"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qed"), },
                { "type", QLIT_QSTR("260"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("quorum"), },
                { "type", QLIT_QSTR("261"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("raw"), },
                { "type", QLIT_QSTR("262"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("rbd"), },
                { "type", QLIT_QSTR("263"), },
                {}
            })),
#if defined(CONFIG_REPLICATION)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("replication"), },
                { "type", QLIT_QSTR("264"), },
                {}
            })),
#endif /* defined(CONFIG_REPLICATION) */
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("sheepdog"), },
                { "type", QLIT_QSTR("265"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ssh"), },
                { "type", QLIT_QSTR("266"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("throttle"), },
                { "type", QLIT_QSTR("267"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vdi"), },
                { "type", QLIT_QSTR("245"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vhdx"), },
                { "type", QLIT_QSTR("245"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vmdk"), },
                { "type", QLIT_QSTR("260"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vpc"), },
                { "type", QLIT_QSTR("245"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vvfat"), },
                { "type", QLIT_QSTR("268"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vxhs"), },
                { "type", QLIT_QSTR("269"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "46" = q_obj_blockdev-del-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("46"), },
        {}
    })),
    /* "47" = q_obj_blockdev-create-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("job-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("options"), },
                { "type", QLIT_QSTR("270"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("47"), },
        {}
    })),
    /* "48" = q_obj_blockdev-open-tray-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("force"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("48"), },
        {}
    })),
    /* "49" = q_obj_blockdev-close-tray-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("49"), },
        {}
    })),
    /* "50" = q_obj_blockdev-remove-medium-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("50"), },
        {}
    })),
    /* "51" = q_obj_blockdev-insert-medium-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("51"), },
        {}
    })),
    /* "52" = q_obj_blockdev-change-medium-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("read-only-mode"), },
                { "type", QLIT_QSTR("271"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("52"), },
        {}
    })),
    /* "53" = q_obj_BLOCK_IMAGE_CORRUPTED-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("msg"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("fatal"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("53"), },
        {}
    })),
    /* "54" = q_obj_BLOCK_IO_ERROR-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("operation"), },
                { "type", QLIT_QSTR("272"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("action"), },
                { "type", QLIT_QSTR("273"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("nospace"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("reason"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("54"), },
        {}
    })),
    /* "55" = q_obj_BLOCK_JOB_COMPLETED-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("225"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("len"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("error"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("55"), },
        {}
    })),
    /* "56" = q_obj_BLOCK_JOB_CANCELLED-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("225"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("len"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("56"), },
        {}
    })),
    /* "57" = q_obj_BLOCK_JOB_ERROR-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("operation"), },
                { "type", QLIT_QSTR("272"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("action"), },
                { "type", QLIT_QSTR("273"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("57"), },
        {}
    })),
    /* "58" = q_obj_BLOCK_JOB_READY-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("225"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("len"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("58"), },
        {}
    })),
    /* "59" = q_obj_BLOCK_JOB_PENDING-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("225"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("59"), },
        {}
    })),
    /* "60" = q_obj_BLOCK_WRITE_THRESHOLD-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("amount-exceeded"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("write-threshold"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("60"), },
        {}
    })),
    /* "61" = q_obj_block-set-write-threshold-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("write-threshold"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("61"), },
        {}
    })),
    /* "62" = q_obj_x-blockdev-change-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("parent"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("child"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("62"), },
        {}
    })),
    /* "63" = q_obj_x-blockdev-set-iothread-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("iothread"), },
                { "type", QLIT_QSTR("274"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("force"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("63"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("64"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[64]"), },
        {}
    })),
    /* "64" = PRManagerInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("connected"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("64"), },
        {}
    })),
    /* "65" = BlockdevSnapshotInternal */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("65"), },
        {}
    })),
    /* "66" = q_obj_blockdev-snapshot-delete-internal-sync-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("66"), },
        {}
    })),
    /* "67" = SnapshotInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("vm-state-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("date-sec"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("date-nsec"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("vm-clock-sec"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("vm-clock-nsec"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("67"), },
        {}
    })),
    /* "68" = q_obj_eject-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("force"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("68"), },
        {}
    })),
    /* "69" = q_obj_nbd-server-start-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("addr"), },
                { "type", QLIT_QSTR("275"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-creds"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-authz"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("69"), },
        {}
    })),
    /* "70" = q_obj_nbd-server-add-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("writable"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bitmap"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("70"), },
        {}
    })),
    /* "71" = q_obj_nbd-server-remove-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("mode"), },
                { "type", QLIT_QSTR("276"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("71"), },
        {}
    })),
    /* "72" = q_obj_DEVICE_TRAY_MOVED-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("tray-open"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("72"), },
        {}
    })),
    /* "73" = q_obj_PR_MANAGER_STATUS_CHANGED-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("connected"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("73"), },
        {}
    })),
    /* "74" = q_obj_QUORUM_FAILURE-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("reference"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sector-num"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sectors-count"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("74"), },
        {}
    })),
    /* "75" = q_obj_QUORUM_REPORT_BAD-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("277"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("error"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sector-num"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sectors-count"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("75"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("76"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[76]"), },
        {}
    })),
    /* "76" = ChardevInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("label"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("frontend-open"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("76"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("77"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[77]"), },
        {}
    })),
    /* "77" = ChardevBackendInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("77"), },
        {}
    })),
    /* "78" = q_obj_ringbuf-write-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("278"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("78"), },
        {}
    })),
    /* "79" = q_obj_ringbuf-read-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("278"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("79"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "json-type", QLIT_QSTR("string"), },
        { "meta-type", QLIT_QSTR("builtin"), },
        { "name", QLIT_QSTR("str"), },
        {}
    })),
    /* "80" = q_obj_chardev-add-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("backend"), },
                { "type", QLIT_QSTR("279"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("80"), },
        {}
    })),
    /* "81" = ChardevReturn */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("pty"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("81"), },
        {}
    })),
    /* "82" = q_obj_chardev-change-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("backend"), },
                { "type", QLIT_QSTR("279"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("82"), },
        {}
    })),
    /* "83" = q_obj_chardev-remove-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("83"), },
        {}
    })),
    /* "84" = q_obj_chardev-send-break-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("84"), },
        {}
    })),
    /* "85" = q_obj_VSERPORT_CHANGE-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("open"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("85"), },
        {}
    })),
    /* "86" = q_obj_dump-guest-memory-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("paging"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("protocol"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("detach"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("begin"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("280"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("86"), },
        {}
    })),
    /* "87" = DumpQueryResult */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("status"), },
                { "type", QLIT_QSTR("281"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("completed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("total"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("87"), },
        {}
    })),
    /* "88" = q_obj_DUMP_COMPLETED-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("result"), },
                { "type", QLIT_QSTR("87"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("error"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("88"), },
        {}
    })),
    /* "89" = DumpGuestMemoryCapability */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("formats"), },
                { "type", QLIT_QSTR("[280]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("89"), },
        {}
    })),
    /* "90" = q_obj_set_link-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("up"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("90"), },
        {}
    })),
    /* "91" = q_obj_netdev_add-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("91"), },
        {}
    })),
    /* "92" = q_obj_netdev_del-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("92"), },
        {}
    })),
    /* "93" = q_obj_query-rx-filter-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("93"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("94"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[94]"), },
        {}
    })),
    /* "94" = RxFilterInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("promiscuous"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("multicast"), },
                { "type", QLIT_QSTR("282"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("unicast"), },
                { "type", QLIT_QSTR("282"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("vlan"), },
                { "type", QLIT_QSTR("282"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("broadcast-allowed"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("multicast-overflow"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("unicast-overflow"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("main-mac"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("vlan-table"), },
                { "type", QLIT_QSTR("[int]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("unicast-table"), },
                { "type", QLIT_QSTR("[str]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("multicast-table"), },
                { "type", QLIT_QSTR("[str]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("94"), },
        {}
    })),
    /* "95" = q_obj_NIC_RX_FILTER_CHANGED-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("95"), },
        {}
    })),
    /* "96" = AnnounceParameters */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("initial"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("rounds"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("step"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("interfaces"), },
                { "type", QLIT_QSTR("[str]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("96"), },
        {}
    })),
    /* "97" = q_obj_RDMA_GID_STATUS_CHANGED-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("netdev"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("gid-status"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("subnet-prefix"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("interface-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("97"), },
        {}
    })),
    /* "98" = q_obj_query-rocker-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("98"), },
        {}
    })),
    /* "99" = RockerSwitch */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("ports"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("99"), },
        {}
    })),
    /* "100" = q_obj_query-rocker-ports-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("100"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("101"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[101]"), },
        {}
    })),
    /* "101" = RockerPort */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("enabled"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("link-up"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("duplex"), },
                { "type", QLIT_QSTR("283"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("autoneg"), },
                { "type", QLIT_QSTR("284"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("101"), },
        {}
    })),
    /* "102" = q_obj_query-rocker-of-dpa-flows-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tbl-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("102"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("103"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[103]"), },
        {}
    })),
    /* "103" = RockerOfDpaFlow */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cookie"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("hits"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("key"), },
                { "type", QLIT_QSTR("285"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("mask"), },
                { "type", QLIT_QSTR("286"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("action"), },
                { "type", QLIT_QSTR("287"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("103"), },
        {}
    })),
    /* "104" = q_obj_query-rocker-of-dpa-groups-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("104"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("105"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[105]"), },
        {}
    })),
    /* "105" = RockerOfDpaGroup */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("vlan-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("pport"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("index"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("out-pport"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("group-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("set-vlan-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("pop-vlan"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("group-ids"), },
                { "type", QLIT_QSTR("[int]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("set-eth-src"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("set-eth-dst"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ttl-check"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("105"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("106"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[106]"), },
        {}
    })),
    /* "106" = TpmModel */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("106"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("tpm-tis"),
            QLIT_QSTR("tpm-crb"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("107"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[107]"), },
        {}
    })),
    /* "107" = TpmType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("107"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("passthrough"),
            QLIT_QSTR("emulator"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("108"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[108]"), },
        {}
    })),
    /* "108" = TPMInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("model"), },
                { "type", QLIT_QSTR("106"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("options"), },
                { "type", QLIT_QSTR("288"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("108"), },
        {}
    })),
    /* "109" = q_obj_set_password-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("protocol"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("password"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("connected"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("109"), },
        {}
    })),
    /* "110" = q_obj_expire_password-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("protocol"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("time"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("110"), },
        {}
    })),
    /* "111" = q_obj_screendump-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("head"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("111"), },
        {}
    })),
    /* "112" = SpiceInfo */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("enabled"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("migrated"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("host"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("port"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-port"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auth"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("compiled-version"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("mouse-mode"), },
                { "type", QLIT_QSTR("289"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("channels"), },
                { "type", QLIT_QSTR("[290]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("112"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
    /* "113" = q_obj_SPICE_CONNECTED-arg */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("291"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("client"), },
                { "type", QLIT_QSTR("291"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("113"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
    /* "114" = q_obj_SPICE_INITIALIZED-arg */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("292"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("client"), },
                { "type", QLIT_QSTR("290"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("114"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
    /* "115" = q_obj_SPICE_DISCONNECTED-arg */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("291"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("client"), },
                { "type", QLIT_QSTR("291"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("115"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
    /* "116" = VncInfo */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("enabled"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("host"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("family"), },
                { "type", QLIT_QSTR("293"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("service"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auth"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("clients"), },
                { "type", QLIT_QSTR("[294]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("116"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("117"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[117]"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
    /* "117" = VncInfo2 */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("[295]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("clients"), },
                { "type", QLIT_QSTR("[294]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("auth"), },
                { "type", QLIT_QSTR("296"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("vencrypt"), },
                { "type", QLIT_QSTR("297"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("display"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("117"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
    /* "118" = q_obj_change-vnc-password-arg */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("password"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("118"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
    /* "119" = q_obj_VNC_CONNECTED-arg */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("298"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("client"), },
                { "type", QLIT_QSTR("299"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("119"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
    /* "120" = q_obj_VNC_INITIALIZED-arg */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("298"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("client"), },
                { "type", QLIT_QSTR("294"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("120"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
    /* "121" = q_obj_VNC_DISCONNECTED-arg */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("298"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("client"), },
                { "type", QLIT_QSTR("294"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("121"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("122"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[122]"), },
        {}
    })),
    /* "122" = MouseInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("index"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("current"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("absolute"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("122"), },
        {}
    })),
    /* "123" = q_obj_send-key-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("keys"), },
                { "type", QLIT_QSTR("[300]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("hold-time"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("123"), },
        {}
    })),
    /* "124" = q_obj_input-send-event-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("head"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("events"), },
                { "type", QLIT_QSTR("[301]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("124"), },
        {}
    })),
    /* "125" = DisplayOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("302"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("full-screen"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("window-close"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("gl"), },
                { "type", QLIT_QSTR("303"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("125"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("gtk"), },
                { "type", QLIT_QSTR("304"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("curses"), },
                { "type", QLIT_QSTR("305"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("egl-headless"), },
                { "type", QLIT_QSTR("306"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("default"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("none"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("sdl"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("cocoa"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("spice-app"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "126" = MigrationInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("status"), },
                { "type", QLIT_QSTR("307"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ram"), },
                { "type", QLIT_QSTR("308"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("disk"), },
                { "type", QLIT_QSTR("308"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("xbzrle-cache"), },
                { "type", QLIT_QSTR("309"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("total-time"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("expected-downtime"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("downtime"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("setup-time"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cpu-throttle-percentage"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("error-desc"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("postcopy-blocktime"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("postcopy-vcpu-blocktime"), },
                { "type", QLIT_QSTR("[int]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("compression"), },
                { "type", QLIT_QSTR("310"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("socket-address"), },
                { "type", QLIT_QSTR("[311]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("126"), },
        {}
    })),
    /* "127" = q_obj_migrate-set-capabilities-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("capabilities"), },
                { "type", QLIT_QSTR("[128]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("127"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("128"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[128]"), },
        {}
    })),
    /* "128" = MigrationCapabilityStatus */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("capability"), },
                { "type", QLIT_QSTR("312"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("state"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("128"), },
        {}
    })),
    /* "129" = MigrateSetParameters */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("announce-initial"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("announce-max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("announce-rounds"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("announce-step"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("compress-level"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("compress-threads"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("compress-wait-thread"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("decompress-threads"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cpu-throttle-initial"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cpu-throttle-increment"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-creds"), },
                { "type", QLIT_QSTR("274"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-hostname"), },
                { "type", QLIT_QSTR("274"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-authz"), },
                { "type", QLIT_QSTR("274"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("max-bandwidth"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("downtime-limit"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("x-checkpoint-delay"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("block-incremental"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("multifd-channels"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("xbzrle-cache-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("max-postcopy-bandwidth"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("max-cpu-throttle"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("129"), },
        {}
    })),
    /* "130" = MigrationParameters */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("announce-initial"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("announce-max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("announce-rounds"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("announce-step"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("compress-level"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("compress-threads"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("compress-wait-thread"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("decompress-threads"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cpu-throttle-initial"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cpu-throttle-increment"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-creds"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-hostname"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-authz"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("max-bandwidth"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("downtime-limit"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("x-checkpoint-delay"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("block-incremental"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("multifd-channels"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("xbzrle-cache-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("max-postcopy-bandwidth"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("max-cpu-throttle"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("130"), },
        {}
    })),
    /* "131" = q_obj_client_migrate_info-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("protocol"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("hostname"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("port"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-port"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cert-subject"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("131"), },
        {}
    })),
    /* "132" = q_obj_MIGRATION-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("status"), },
                { "type", QLIT_QSTR("307"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("132"), },
        {}
    })),
    /* "133" = q_obj_MIGRATION_PASS-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("pass"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("133"), },
        {}
    })),
    /* "134" = q_obj_COLO_EXIT-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("mode"), },
                { "type", QLIT_QSTR("313"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("reason"), },
                { "type", QLIT_QSTR("314"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("134"), },
        {}
    })),
    /* "135" = q_obj_migrate-continue-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("state"), },
                { "type", QLIT_QSTR("307"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("135"), },
        {}
    })),
    /* "136" = q_obj_migrate_set_downtime-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("value"), },
                { "type", QLIT_QSTR("number"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("136"), },
        {}
    })),
    /* "137" = q_obj_migrate_set_speed-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("value"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("137"), },
        {}
    })),
    /* "138" = q_obj_migrate-set-cache-size-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("value"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("138"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "json-type", QLIT_QSTR("int"), },
        { "meta-type", QLIT_QSTR("builtin"), },
        { "name", QLIT_QSTR("int"), },
        {}
    })),
    /* "139" = q_obj_migrate-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("uri"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("blk"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("inc"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("detach"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("resume"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("139"), },
        {}
    })),
    /* "140" = q_obj_migrate-incoming-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("uri"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("140"), },
        {}
    })),
    /* "141" = q_obj_xen-save-devices-state-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("live"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("141"), },
        {}
    })),
    /* "142" = q_obj_xen-set-replication-arg */
#if defined(CONFIG_REPLICATION)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("enable"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("primary"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("failover"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("142"), },
        {}
    })),
#endif /* defined(CONFIG_REPLICATION) */
    /* "143" = ReplicationStatus */
#if defined(CONFIG_REPLICATION)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("error"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("desc"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("143"), },
        {}
    })),
#endif /* defined(CONFIG_REPLICATION) */
    /* "144" = COLOStatus */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("mode"), },
                { "type", QLIT_QSTR("313"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("last-mode"), },
                { "type", QLIT_QSTR("313"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("reason"), },
                { "type", QLIT_QSTR("314"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("144"), },
        {}
    })),
    /* "145" = q_obj_migrate-recover-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("uri"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("145"), },
        {}
    })),
    /* "146" = q_obj_transaction-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("actions"), },
                { "type", QLIT_QSTR("[315]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("properties"), },
                { "type", QLIT_QSTR("316"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("146"), },
        {}
    })),
    /* "147" = q_obj_trace-event-get-state-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("vcpu"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("147"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("148"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[148]"), },
        {}
    })),
    /* "148" = TraceEventInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("state"), },
                { "type", QLIT_QSTR("317"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("vcpu"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("148"), },
        {}
    })),
    /* "149" = q_obj_trace-event-set-state-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("enable"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ignore-unavailable"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("vcpu"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("149"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("150"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[150]"), },
        {}
    })),
    /* "150" = SchemaInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("meta-type"), },
                { "type", QLIT_QSTR("318"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("150"), },
        { "tag", QLIT_QSTR("meta-type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("builtin"), },
                { "type", QLIT_QSTR("319"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("enum"), },
                { "type", QLIT_QSTR("320"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("array"), },
                { "type", QLIT_QSTR("321"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("object"), },
                { "type", QLIT_QSTR("322"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("alternate"), },
                { "type", QLIT_QSTR("323"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("command"), },
                { "type", QLIT_QSTR("324"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("event"), },
                { "type", QLIT_QSTR("325"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "151" = q_obj_qom-list-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("151"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("152"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[152]"), },
        {}
    })),
    /* "152" = ObjectPropertyInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("description"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("152"), },
        {}
    })),
    /* "153" = q_obj_qom-get-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("property"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("153"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "json-type", QLIT_QSTR("value"), },
        { "meta-type", QLIT_QSTR("builtin"), },
        { "name", QLIT_QSTR("any"), },
        {}
    })),
    /* "154" = q_obj_qom-set-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("property"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("value"), },
                { "type", QLIT_QSTR("any"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("154"), },
        {}
    })),
    /* "155" = q_obj_qom-list-types-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("implements"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("abstract"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("155"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("156"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[156]"), },
        {}
    })),
    /* "156" = ObjectTypeInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("abstract"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("parent"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("156"), },
        {}
    })),
    /* "157" = q_obj_qom-list-properties-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("typename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("157"), },
        {}
    })),
    /* "158" = q_obj_object-add-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("qom-type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("props"), },
                { "type", QLIT_QSTR("any"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("158"), },
        {}
    })),
    /* "159" = q_obj_object-del-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("159"), },
        {}
    })),
    /* "160" = q_obj_device-list-properties-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("typename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("160"), },
        {}
    })),
    /* "161" = q_obj_device_add-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("driver"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bus"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("161"), },
        {}
    })),
    /* "162" = q_obj_device_del-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("162"), },
        {}
    })),
    /* "163" = q_obj_DEVICE_DELETED-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("163"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("164"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[164]"), },
        {}
    })),
    /* "164" = CpuInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("CPU"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("current"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("halted"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("qom_path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("thread_id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("props"), },
                { "type", QLIT_QSTR("326"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("arch"), },
                { "type", QLIT_QSTR("327"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("164"), },
        { "tag", QLIT_QSTR("arch"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("x86"), },
                { "type", QLIT_QSTR("328"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("sparc"), },
                { "type", QLIT_QSTR("329"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ppc"), },
                { "type", QLIT_QSTR("330"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("mips"), },
                { "type", QLIT_QSTR("331"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("tricore"), },
                { "type", QLIT_QSTR("332"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("s390"), },
                { "type", QLIT_QSTR("333"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("riscv"), },
                { "type", QLIT_QSTR("334"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("other"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("165"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[165]"), },
        {}
    })),
    /* "165" = CpuInfoFast */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cpu-index"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("qom-path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("thread-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("props"), },
                { "type", QLIT_QSTR("326"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("arch"), },
                { "type", QLIT_QSTR("327"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("target"), },
                { "type", QLIT_QSTR("335"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("165"), },
        { "tag", QLIT_QSTR("target"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("s390x"), },
                { "type", QLIT_QSTR("333"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("aarch64"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("alpha"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("arm"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("cris"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("hppa"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("i386"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("lm32"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("m68k"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("microblaze"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("microblazeel"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("mips"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("mips64"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("mips64el"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("mipsel"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("moxie"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nios2"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("or1k"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ppc"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ppc64"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("riscv32"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("riscv64"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("sh4"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("sh4eb"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("sparc"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("sparc64"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("tricore"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("unicore32"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("x86_64"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("xtensa"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("xtensaeb"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "166" = q_obj_cpu-add-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("166"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("167"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[167]"), },
        {}
    })),
    /* "167" = MachineInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("alias"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("is-default"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cpu-max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("hotpluggable-cpus"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("numa-mem-supported"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("deprecated"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("167"), },
        {}
    })),
    /* "168" = CurrentMachineParams */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("wakeup-suspend-support"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("168"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("169"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[169]"), },
        {}
    })),
    /* "169" = Memdev */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("merge"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("dump"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("prealloc"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("host-nodes"), },
                { "type", QLIT_QSTR("[int]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("policy"), },
                { "type", QLIT_QSTR("336"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("169"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("170"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[170]"), },
        {}
    })),
    /* "170" = HotpluggableCPU */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("vcpus-count"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("props"), },
                { "type", QLIT_QSTR("326"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("qom-path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("170"), },
        {}
    })),
    /* "171" = NumaOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("337"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("171"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("node"), },
                { "type", QLIT_QSTR("338"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("dist"), },
                { "type", QLIT_QSTR("339"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("cpu"), },
                { "type", QLIT_QSTR("340"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "172" = q_obj_query-cpu-model-comparison-arg */
#if defined(TARGET_S390X)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("modela"), },
                { "type", QLIT_QSTR("341"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("modelb"), },
                { "type", QLIT_QSTR("341"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("172"), },
        {}
    })),
#endif /* defined(TARGET_S390X) */
    /* "173" = CpuModelCompareInfo */
#if defined(TARGET_S390X)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("result"), },
                { "type", QLIT_QSTR("342"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("responsible-properties"), },
                { "type", QLIT_QSTR("[str]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("173"), },
        {}
    })),
#endif /* defined(TARGET_S390X) */
    /* "174" = q_obj_query-cpu-model-baseline-arg */
#if defined(TARGET_S390X)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("modela"), },
                { "type", QLIT_QSTR("341"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("modelb"), },
                { "type", QLIT_QSTR("341"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("174"), },
        {}
    })),
#endif /* defined(TARGET_S390X) */
    /* "175" = CpuModelBaselineInfo */
#if defined(TARGET_S390X)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("model"), },
                { "type", QLIT_QSTR("341"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("175"), },
        {}
    })),
#endif /* defined(TARGET_S390X) */
    /* "176" = q_obj_query-cpu-model-expansion-arg */
#if defined(TARGET_S390X) || defined(TARGET_I386)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("343"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("model"), },
                { "type", QLIT_QSTR("341"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("176"), },
        {}
    })),
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) */
    /* "177" = CpuModelExpansionInfo */
#if defined(TARGET_S390X) || defined(TARGET_I386)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("model"), },
                { "type", QLIT_QSTR("341"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("177"), },
        {}
    })),
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) */
#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("178"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[178]"), },
        {}
    })),
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) */
    /* "178" = CpuDefinitionInfo */
#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("migration-safe"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("static"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("unavailable-features"), },
                { "type", QLIT_QSTR("[str]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("typename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("alias-of"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("178"), },
        {}
    })),
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) */
    /* "179" = q_obj_qmp_capabilities-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("enable"), },
                { "type", QLIT_QSTR("[344]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("179"), },
        {}
    })),
    /* "180" = VersionInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("qemu"), },
                { "type", QLIT_QSTR("345"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("package"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("180"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("181"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[181]"), },
        {}
    })),
    /* "181" = CommandInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("181"), },
        {}
    })),
    /* "182" = q_obj_add_client-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("protocol"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("fdname"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("skipauth"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("182"), },
        {}
    })),
    /* "183" = NameInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("183"), },
        {}
    })),
    /* "184" = KvmInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("enabled"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("present"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("184"), },
        {}
    })),
    /* "185" = UuidInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("UUID"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("185"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("186"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[186]"), },
        {}
    })),
    /* "186" = EventInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("186"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("187"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[187]"), },
        {}
    })),
    /* "187" = IOThreadInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("thread-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("poll-max-ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("poll-grow"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("poll-shrink"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("187"), },
        {}
    })),
    /* "188" = BalloonInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("actual"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("188"), },
        {}
    })),
    /* "189" = q_obj_BALLOON_CHANGE-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("actual"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("189"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("190"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[190]"), },
        {}
    })),
    /* "190" = PciInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bus"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("devices"), },
                { "type", QLIT_QSTR("[346]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("190"), },
        {}
    })),
    /* "191" = q_obj_memsave-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("val"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cpu-index"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("191"), },
        {}
    })),
    /* "192" = q_obj_pmemsave-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("val"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("192"), },
        {}
    })),
    /* "193" = q_obj_balloon-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("value"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("193"), },
        {}
    })),
    /* "194" = q_obj_human-monitor-command-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("command-line"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cpu-index"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("194"), },
        {}
    })),
    /* "195" = q_obj_change-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("target"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("arg"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("195"), },
        {}
    })),
    /* "196" = q_obj_xen-set-global-dirty-log-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("enable"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("196"), },
        {}
    })),
    /* "197" = q_obj_getfd-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("fdname"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("197"), },
        {}
    })),
    /* "198" = q_obj_closefd-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("fdname"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("198"), },
        {}
    })),
    /* "199" = MemoryInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("base-memory"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("plugged-memory"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("199"), },
        {}
    })),
    /* "200" = q_obj_add-fd-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("fdset-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("opaque"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("200"), },
        {}
    })),
    /* "201" = AddfdInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("fdset-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("fd"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("201"), },
        {}
    })),
    /* "202" = q_obj_remove-fd-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("fdset-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("fd"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("202"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("203"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[203]"), },
        {}
    })),
    /* "203" = FdsetInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("fdset-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("fds"), },
                { "type", QLIT_QSTR("[347]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("203"), },
        {}
    })),
    /* "204" = TargetInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("arch"), },
                { "type", QLIT_QSTR("335"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("204"), },
        {}
    })),
    /* "205" = q_obj_query-command-line-options-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("option"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("205"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("206"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[206]"), },
        {}
    })),
    /* "206" = CommandLineOptionInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("option"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("parameters"), },
                { "type", QLIT_QSTR("[348]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("206"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("207"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[207]"), },
        {}
    })),
    /* "207" = MemoryDeviceInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("349"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("207"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("dimm"), },
                { "type", QLIT_QSTR("350"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nvdimm"), },
                { "type", QLIT_QSTR("350"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("virtio-pmem"), },
                { "type", QLIT_QSTR("351"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "208" = q_obj_MEM_UNPLUG_ERROR-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("msg"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("208"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("209"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[209]"), },
        {}
    })),
    /* "209" = ACPIOSTInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("slot"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("slot-type"), },
                { "type", QLIT_QSTR("352"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("source"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("status"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("209"), },
        {}
    })),
    /* "210" = q_obj_ACPI_DEVICE_OST-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("info"), },
                { "type", QLIT_QSTR("209"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("210"), },
        {}
    })),
    /* "211" = q_obj_xen-load-devices-state-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("211"), },
        {}
    })),
    /* "212" = GuidInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("guid"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("212"), },
        {}
    })),
    /* "213" = q_obj_RTC_CHANGE-arg */
#if defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_MOXIE) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("213"), },
        {}
    })),
#endif /* defined(TARGET_ALPHA) || defined(TARGET_ARM) || defined(TARGET_HPPA) || defined(TARGET_I386) || defined(TARGET_MIPS) || defined(TARGET_MIPS64) || defined(TARGET_MOXIE) || defined(TARGET_PPC) || defined(TARGET_PPC64) || defined(TARGET_S390X) || defined(TARGET_SH4) || defined(TARGET_SPARC) */
    /* "214" = SevInfo */
#if defined(TARGET_I386)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("enabled"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("api-major"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("api-minor"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("build-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("policy"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("state"), },
                { "type", QLIT_QSTR("353"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("handle"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("214"), },
        {}
    })),
#endif /* defined(TARGET_I386) */
    /* "215" = SevLaunchMeasureInfo */
#if defined(TARGET_I386)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("215"), },
        {}
    })),
#endif /* defined(TARGET_I386) */
    /* "216" = SevCapability */
#if defined(TARGET_I386)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("pdh"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cert-chain"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cbitpos"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("reduced-phys-bits"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("216"), },
        {}
    })),
#endif /* defined(TARGET_I386) */
    /* "217" = q_obj_dump-skeys-arg */
#if defined(TARGET_S390X)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("217"), },
        {}
    })),
#endif /* defined(TARGET_S390X) */
#if defined(TARGET_ARM)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("218"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[218]"), },
        {}
    })),
#endif /* defined(TARGET_ARM) */
    /* "218" = GICCapability */
#if defined(TARGET_ARM)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("version"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("emulated"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("kernel"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("218"), },
        {}
    })),
#endif /* defined(TARGET_ARM) */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "json-type", QLIT_QSTR("boolean"), },
        { "meta-type", QLIT_QSTR("builtin"), },
        { "name", QLIT_QSTR("bool"), },
        {}
    })),
    /* "219" = RunState */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("219"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("debug"),
            QLIT_QSTR("inmigrate"),
            QLIT_QSTR("internal-error"),
            QLIT_QSTR("io-error"),
            QLIT_QSTR("paused"),
            QLIT_QSTR("postmigrate"),
            QLIT_QSTR("prelaunch"),
            QLIT_QSTR("finish-migrate"),
            QLIT_QSTR("restore-vm"),
            QLIT_QSTR("running"),
            QLIT_QSTR("save-vm"),
            QLIT_QSTR("shutdown"),
            QLIT_QSTR("suspended"),
            QLIT_QSTR("watchdog"),
            QLIT_QSTR("guest-panicked"),
            QLIT_QSTR("colo"),
            QLIT_QSTR("preconfig"),
            {}
        })), },
        {}
    })),
    /* "220" = ShutdownCause */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("220"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("none"),
            QLIT_QSTR("host-error"),
            QLIT_QSTR("host-qmp-quit"),
            QLIT_QSTR("host-qmp-system-reset"),
            QLIT_QSTR("host-signal"),
            QLIT_QSTR("host-ui"),
            QLIT_QSTR("guest-shutdown"),
            QLIT_QSTR("guest-reset"),
            QLIT_QSTR("guest-panic"),
            QLIT_QSTR("subsystem-reset"),
            {}
        })), },
        {}
    })),
    /* "221" = WatchdogAction */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("221"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("reset"),
            QLIT_QSTR("shutdown"),
            QLIT_QSTR("poweroff"),
            QLIT_QSTR("pause"),
            QLIT_QSTR("debug"),
            QLIT_QSTR("none"),
            QLIT_QSTR("inject-nmi"),
            {}
        })), },
        {}
    })),
    /* "222" = GuestPanicAction */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("222"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("pause"),
            QLIT_QSTR("poweroff"),
            {}
        })), },
        {}
    })),
    /* "223" = GuestPanicInformation */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("354"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("223"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("hyper-v"), },
                { "type", QLIT_QSTR("355"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("s390"), },
                { "type", QLIT_QSTR("356"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "224" = JobStatus */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("224"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("undefined"),
            QLIT_QSTR("created"),
            QLIT_QSTR("running"),
            QLIT_QSTR("paused"),
            QLIT_QSTR("ready"),
            QLIT_QSTR("standby"),
            QLIT_QSTR("waiting"),
            QLIT_QSTR("pending"),
            QLIT_QSTR("aborting"),
            QLIT_QSTR("concluded"),
            QLIT_QSTR("null"),
            {}
        })), },
        {}
    })),
    /* "225" = JobType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("225"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("commit"),
            QLIT_QSTR("stream"),
            QLIT_QSTR("mirror"),
            QLIT_QSTR("backup"),
            QLIT_QSTR("create"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("int"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[int]"), },
        {}
    })),
    /* "226" = BlockDeviceIoStatus */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("226"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("ok"),
            QLIT_QSTR("failed"),
            QLIT_QSTR("nospace"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("227"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[227]"), },
        {}
    })),
    /* "227" = BlockDirtyInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("count"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("granularity"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("recording"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("busy"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("status"), },
                { "type", QLIT_QSTR("357"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("persistent"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("inconsistent"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("227"), },
        {}
    })),
    /* "228" = BlockDeviceStats */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("rd_bytes"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("wr_bytes"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("rd_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("wr_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("flush_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("flush_total_time_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("wr_total_time_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("rd_total_time_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("wr_highest_offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("rd_merged"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("wr_merged"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("idle_time_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("failed_rd_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("failed_wr_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("failed_flush_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("invalid_rd_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("invalid_wr_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("invalid_flush_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("account_invalid"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("account_failed"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("timed_stats"), },
                { "type", QLIT_QSTR("[358]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("rd_latency_histogram"), },
                { "type", QLIT_QSTR("359"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("wr_latency_histogram"), },
                { "type", QLIT_QSTR("359"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("flush_latency_histogram"), },
                { "type", QLIT_QSTR("359"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("228"), },
        {}
    })),
    /* "229" = NewImageMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("229"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("existing"),
            QLIT_QSTR("absolute-paths"),
            {}
        })), },
        {}
    })),
    /* "230" = MirrorSyncMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("230"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("top"),
            QLIT_QSTR("full"),
            QLIT_QSTR("none"),
            QLIT_QSTR("incremental"),
            {}
        })), },
        {}
    })),
    /* "231" = BlockdevOnError */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("231"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("report"),
            QLIT_QSTR("ignore"),
            QLIT_QSTR("enospc"),
            QLIT_QSTR("stop"),
            QLIT_QSTR("auto"),
            {}
        })), },
        {}
    })),
    /* "232" = BlockdevDetectZeroesOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("232"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("off"),
            QLIT_QSTR("on"),
            QLIT_QSTR("unmap"),
            {}
        })), },
        {}
    })),
    /* "233" = ImageInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("dirty-flag"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("actual-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("virtual-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cluster-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("encrypted"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("compressed"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("full-backing-filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-filename-format"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("snapshots"), },
                { "type", QLIT_QSTR("[67]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-image"), },
                { "type", QLIT_QSTR("233"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("format-specific"), },
                { "type", QLIT_QSTR("360"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("233"), },
        {}
    })),
    /* "234" = BlockdevCacheInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("writeback"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("direct"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("no-flush"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("234"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("235"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[235]"), },
        {}
    })),
    /* "235" = XDbgBlockGraphNode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("361"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("235"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("236"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[236]"), },
        {}
    })),
    /* "236" = XDbgBlockGraphEdge */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("parent"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("child"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("perm"), },
                { "type", QLIT_QSTR("[362]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("shared-perm"), },
                { "type", QLIT_QSTR("[362]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("236"), },
        {}
    })),
    /* "237" = MirrorCopyMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("237"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("background"),
            QLIT_QSTR("write-blocking"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("238"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[238]"), },
        {}
    })),
    /* "238" = BlockDirtyBitmapMergeSource */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("32"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("alternate"), },
        { "name", QLIT_QSTR("238"), },
        {}
    })),
    /* "239" = BlockdevDriver */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("239"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("blkdebug"),
            QLIT_QSTR("blklogwrites"),
            QLIT_QSTR("blkverify"),
            QLIT_QSTR("bochs"),
            QLIT_QSTR("cloop"),
            QLIT_QSTR("copy-on-read"),
            QLIT_QSTR("dmg"),
            QLIT_QSTR("file"),
            QLIT_QSTR("ftp"),
            QLIT_QSTR("ftps"),
            QLIT_QSTR("gluster"),
            QLIT_QSTR("host_cdrom"),
            QLIT_QSTR("host_device"),
            QLIT_QSTR("http"),
            QLIT_QSTR("https"),
            QLIT_QSTR("iscsi"),
            QLIT_QSTR("luks"),
            QLIT_QSTR("nbd"),
            QLIT_QSTR("nfs"),
            QLIT_QSTR("null-aio"),
            QLIT_QSTR("null-co"),
            QLIT_QSTR("nvme"),
            QLIT_QSTR("parallels"),
            QLIT_QSTR("qcow"),
            QLIT_QSTR("qcow2"),
            QLIT_QSTR("qed"),
            QLIT_QSTR("quorum"),
            QLIT_QSTR("raw"),
            QLIT_QSTR("rbd"),
#if defined(CONFIG_REPLICATION)
            QLIT_QSTR("replication"),
#endif /* defined(CONFIG_REPLICATION) */
            QLIT_QSTR("sheepdog"),
            QLIT_QSTR("ssh"),
            QLIT_QSTR("throttle"),
            QLIT_QSTR("vdi"),
            QLIT_QSTR("vhdx"),
            QLIT_QSTR("vmdk"),
            QLIT_QSTR("vpc"),
            QLIT_QSTR("vvfat"),
            QLIT_QSTR("vxhs"),
            {}
        })), },
        {}
    })),
    /* "240" = BlockdevDiscardOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("240"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("ignore"),
            QLIT_QSTR("unmap"),
            {}
        })), },
        {}
    })),
    /* "241" = BlockdevCacheOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("direct"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("no-flush"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("241"), },
        {}
    })),
    /* "242" = BlockdevOptionsBlkdebug */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("image"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("config"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("align"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("max-transfer"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("opt-write-zero"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("max-write-zero"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("opt-discard"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("max-discard"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("inject-error"), },
                { "type", QLIT_QSTR("[364]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("set-state"), },
                { "type", QLIT_QSTR("[365]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("242"), },
        {}
    })),
    /* "243" = BlockdevOptionsBlklogwrites */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("log"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("log-sector-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("log-append"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("log-super-update-interval"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("243"), },
        {}
    })),
    /* "244" = BlockdevOptionsBlkverify */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("test"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("raw"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("244"), },
        {}
    })),
    /* "245" = BlockdevOptionsGenericFormat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("245"), },
        {}
    })),
    /* "246" = BlockdevOptionsFile */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "features", QLIT_QLIST(((QLitObject[]) {
#if defined(CONFIG_POSIX)
            QLIT_QSTR("dynamic-auto-read-only"),
#endif /* defined(CONFIG_POSIX) */
            {}
        })), },
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("pr-manager"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("locking"), },
                { "type", QLIT_QSTR("366"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("aio"), },
                { "type", QLIT_QSTR("367"), },
                {}
            })),
#if defined(CONFIG_LINUX)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("drop-cache"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
#endif /* defined(CONFIG_LINUX) */
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("x-check-cache-dropped"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("246"), },
        {}
    })),
    /* "247" = BlockdevOptionsCurlFtp */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("url"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("readahead"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("timeout"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("username"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("proxy-username"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("proxy-password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("247"), },
        {}
    })),
    /* "248" = BlockdevOptionsCurlFtps */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("url"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("readahead"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("timeout"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("username"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("proxy-username"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("proxy-password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("sslverify"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("248"), },
        {}
    })),
    /* "249" = BlockdevOptionsGluster */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("volume"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("[311]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("debug"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("249"), },
        {}
    })),
    /* "250" = BlockdevOptionsCurlHttp */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("url"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("readahead"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("timeout"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("username"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("proxy-username"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("proxy-password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cookie"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cookie-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("250"), },
        {}
    })),
    /* "251" = BlockdevOptionsCurlHttps */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("url"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("readahead"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("timeout"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("username"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("proxy-username"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("proxy-password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cookie"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("sslverify"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cookie-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("251"), },
        {}
    })),
    /* "252" = BlockdevOptionsIscsi */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("transport"), },
                { "type", QLIT_QSTR("368"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("portal"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("target"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("lun"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("user"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("initiator-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("header-digest"), },
                { "type", QLIT_QSTR("369"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("timeout"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("252"), },
        {}
    })),
    /* "253" = BlockdevOptionsLUKS */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("key-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("253"), },
        {}
    })),
    /* "254" = BlockdevOptionsNbd */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("311"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("export"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-creds"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("x-dirty-bitmap"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("254"), },
        {}
    })),
    /* "255" = BlockdevOptionsNfs */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("370"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("user"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("group"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tcp-syn-count"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("readahead-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("page-cache-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("debug"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("255"), },
        {}
    })),
    /* "256" = BlockdevOptionsNull */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("latency-ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("read-zeroes"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("256"), },
        {}
    })),
    /* "257" = BlockdevOptionsNVMe */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("namespace"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("257"), },
        {}
    })),
    /* "258" = BlockdevOptionsQcow2 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing"), },
                { "type", QLIT_QSTR("371"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("lazy-refcounts"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("pass-discard-request"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("pass-discard-snapshot"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("pass-discard-other"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("overlap-check"), },
                { "type", QLIT_QSTR("372"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cache-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("l2-cache-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("l2-cache-entry-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("refcount-cache-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cache-clean-interval"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("encrypt"), },
                { "type", QLIT_QSTR("373"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("data-file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("258"), },
        {}
    })),
    /* "259" = BlockdevOptionsQcow */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing"), },
                { "type", QLIT_QSTR("371"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("encrypt"), },
                { "type", QLIT_QSTR("374"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("259"), },
        {}
    })),
    /* "260" = BlockdevOptionsGenericCOWFormat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing"), },
                { "type", QLIT_QSTR("371"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("260"), },
        {}
    })),
    /* "261" = BlockdevOptionsQuorum */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("blkverify"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("children"), },
                { "type", QLIT_QSTR("[363]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("vote-threshold"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("rewrite-corrupted"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("read-pattern"), },
                { "type", QLIT_QSTR("375"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("261"), },
        {}
    })),
    /* "262" = BlockdevOptionsRaw */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("262"), },
        {}
    })),
    /* "263" = BlockdevOptionsRbd */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("pool"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("image"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("conf"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("snapshot"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("user"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auth-client-required"), },
                { "type", QLIT_QSTR("[376]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("key-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("[377]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("263"), },
        {}
    })),
    /* "264" = BlockdevOptionsReplication */
#if defined(CONFIG_REPLICATION)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("mode"), },
                { "type", QLIT_QSTR("378"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("top-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("264"), },
        {}
    })),
#endif /* defined(CONFIG_REPLICATION) */
    /* "265" = BlockdevOptionsSheepdog */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("311"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("vdi"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("snap-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tag"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("265"), },
        {}
    })),
    /* "266" = BlockdevOptionsSsh */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("379"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("user"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("host-key-check"), },
                { "type", QLIT_QSTR("380"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("266"), },
        {}
    })),
    /* "267" = BlockdevOptionsThrottle */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("throttle-group"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("267"), },
        {}
    })),
    /* "268" = BlockdevOptionsVVFAT */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("dir"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("fat-type"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("floppy"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("label"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("rw"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("268"), },
        {}
    })),
    /* "269" = BlockdevOptionsVxHS */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("vdisk-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("377"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-creds"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("269"), },
        {}
    })),
    /* "270" = BlockdevCreateOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("driver"), },
                { "type", QLIT_QSTR("239"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("270"), },
        { "tag", QLIT_QSTR("driver"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("381"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("gluster"), },
                { "type", QLIT_QSTR("382"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("luks"), },
                { "type", QLIT_QSTR("383"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nfs"), },
                { "type", QLIT_QSTR("384"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("parallels"), },
                { "type", QLIT_QSTR("385"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcow"), },
                { "type", QLIT_QSTR("386"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcow2"), },
                { "type", QLIT_QSTR("387"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qed"), },
                { "type", QLIT_QSTR("388"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("rbd"), },
                { "type", QLIT_QSTR("389"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("sheepdog"), },
                { "type", QLIT_QSTR("390"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ssh"), },
                { "type", QLIT_QSTR("391"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vdi"), },
                { "type", QLIT_QSTR("392"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vhdx"), },
                { "type", QLIT_QSTR("393"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vmdk"), },
                { "type", QLIT_QSTR("394"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vpc"), },
                { "type", QLIT_QSTR("395"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blkdebug"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blklogwrites"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blkverify"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("bochs"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("cloop"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("copy-on-read"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("dmg"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ftp"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ftps"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("host_cdrom"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("host_device"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("http"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("https"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("iscsi"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nbd"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("null-aio"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("null-co"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nvme"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("quorum"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("raw"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
#if defined(CONFIG_REPLICATION)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("replication"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
#endif /* defined(CONFIG_REPLICATION) */
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("throttle"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vvfat"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vxhs"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "271" = BlockdevChangeReadOnlyMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("271"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("retain"),
            QLIT_QSTR("read-only"),
            QLIT_QSTR("read-write"),
            {}
        })), },
        {}
    })),
    /* "272" = IoOperationType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("272"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("read"),
            QLIT_QSTR("write"),
            {}
        })), },
        {}
    })),
    /* "273" = BlockErrorAction */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("273"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("ignore"),
            QLIT_QSTR("report"),
            QLIT_QSTR("stop"),
            {}
        })), },
        {}
    })),
    /* "274" = StrOrNull */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("null"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("alternate"), },
        { "name", QLIT_QSTR("274"), },
        {}
    })),
    /* "275" = SocketAddressLegacy */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("396"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("275"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("inet"), },
                { "type", QLIT_QSTR("397"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("unix"), },
                { "type", QLIT_QSTR("398"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vsock"), },
                { "type", QLIT_QSTR("399"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("fd"), },
                { "type", QLIT_QSTR("400"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "276" = NbdServerRemoveMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("276"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("safe"),
            QLIT_QSTR("hard"),
            {}
        })), },
        {}
    })),
    /* "277" = QuorumOpType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("277"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("read"),
            QLIT_QSTR("write"),
            QLIT_QSTR("flush"),
            {}
        })), },
        {}
    })),
    /* "278" = DataFormat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("278"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("utf8"),
            QLIT_QSTR("base64"),
            {}
        })), },
        {}
    })),
    /* "279" = ChardevBackend */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("401"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("279"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("402"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("serial"), },
                { "type", QLIT_QSTR("403"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("parallel"), },
                { "type", QLIT_QSTR("403"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("pipe"), },
                { "type", QLIT_QSTR("403"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("socket"), },
                { "type", QLIT_QSTR("404"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("udp"), },
                { "type", QLIT_QSTR("405"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("pty"), },
                { "type", QLIT_QSTR("406"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("null"), },
                { "type", QLIT_QSTR("406"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("mux"), },
                { "type", QLIT_QSTR("407"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("msmouse"), },
                { "type", QLIT_QSTR("406"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("wctablet"), },
                { "type", QLIT_QSTR("406"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("braille"), },
                { "type", QLIT_QSTR("406"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("testdev"), },
                { "type", QLIT_QSTR("406"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("stdio"), },
                { "type", QLIT_QSTR("408"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("console"), },
                { "type", QLIT_QSTR("406"), },
                {}
            })),
#if defined(CONFIG_SPICE)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("spicevmc"), },
                { "type", QLIT_QSTR("409"), },
                {}
            })),
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("spiceport"), },
                { "type", QLIT_QSTR("410"), },
                {}
            })),
#endif /* defined(CONFIG_SPICE) */
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vc"), },
                { "type", QLIT_QSTR("411"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ringbuf"), },
                { "type", QLIT_QSTR("412"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("memory"), },
                { "type", QLIT_QSTR("412"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "280" = DumpGuestMemoryFormat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("280"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("elf"),
            QLIT_QSTR("kdump-zlib"),
            QLIT_QSTR("kdump-lzo"),
            QLIT_QSTR("kdump-snappy"),
            QLIT_QSTR("win-dmp"),
            {}
        })), },
        {}
    })),
    /* "281" = DumpStatus */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("281"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("none"),
            QLIT_QSTR("active"),
            QLIT_QSTR("completed"),
            QLIT_QSTR("failed"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("280"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[280]"), },
        {}
    })),
    /* "282" = RxState */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("282"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("normal"),
            QLIT_QSTR("none"),
            QLIT_QSTR("all"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("str"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[str]"), },
        {}
    })),
    /* "283" = RockerPortDuplex */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("283"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("half"),
            QLIT_QSTR("full"),
            {}
        })), },
        {}
    })),
    /* "284" = RockerPortAutoneg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("284"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("off"),
            QLIT_QSTR("on"),
            {}
        })), },
        {}
    })),
    /* "285" = RockerOfDpaFlowKey */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("priority"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("tbl-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("in-pport"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tunnel-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("vlan-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("eth-type"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("eth-src"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("eth-dst"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ip-proto"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ip-tos"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ip-dst"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("285"), },
        {}
    })),
    /* "286" = RockerOfDpaFlowMask */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("in-pport"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tunnel-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("vlan-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("eth-src"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("eth-dst"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ip-proto"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ip-tos"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("286"), },
        {}
    })),
    /* "287" = RockerOfDpaFlowAction */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("goto-tbl"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("group-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tunnel-lport"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("vlan-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("new-vlan-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("out-pport"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("287"), },
        {}
    })),
    /* "288" = TpmTypeOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("413"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("288"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("passthrough"), },
                { "type", QLIT_QSTR("414"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("emulator"), },
                { "type", QLIT_QSTR("415"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "289" = SpiceQueryMouseMode */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("289"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("client"),
            QLIT_QSTR("server"),
            QLIT_QSTR("unknown"),
            {}
        })), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("290"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[290]"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
    /* "290" = SpiceChannel */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("host"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("port"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("family"), },
                { "type", QLIT_QSTR("293"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("connection-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("channel-type"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("channel-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("tls"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("290"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
    /* "291" = SpiceBasicInfo */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("host"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("port"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("family"), },
                { "type", QLIT_QSTR("293"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("291"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
    /* "292" = SpiceServerInfo */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("host"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("port"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("family"), },
                { "type", QLIT_QSTR("293"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auth"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("292"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
    /* "293" = NetworkAddressFamily */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("293"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("ipv4"),
            QLIT_QSTR("ipv6"),
            QLIT_QSTR("unix"),
            QLIT_QSTR("vsock"),
            QLIT_QSTR("unknown"),
            {}
        })), },
        {}
    })),
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("294"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[294]"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
    /* "294" = VncClientInfo */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("host"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("service"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("family"), },
                { "type", QLIT_QSTR("293"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("websocket"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("x509_dname"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("sasl_username"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("294"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("295"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[295]"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
    /* "295" = VncServerInfo2 */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("host"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("service"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("family"), },
                { "type", QLIT_QSTR("293"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("websocket"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("auth"), },
                { "type", QLIT_QSTR("296"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("vencrypt"), },
                { "type", QLIT_QSTR("297"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("295"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
    /* "296" = VncPrimaryAuth */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("296"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("none"),
            QLIT_QSTR("vnc"),
            QLIT_QSTR("ra2"),
            QLIT_QSTR("ra2ne"),
            QLIT_QSTR("tight"),
            QLIT_QSTR("ultra"),
            QLIT_QSTR("tls"),
            QLIT_QSTR("vencrypt"),
            QLIT_QSTR("sasl"),
            {}
        })), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
    /* "297" = VncVencryptSubAuth */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("297"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("plain"),
            QLIT_QSTR("tls-none"),
            QLIT_QSTR("x509-none"),
            QLIT_QSTR("tls-vnc"),
            QLIT_QSTR("x509-vnc"),
            QLIT_QSTR("tls-plain"),
            QLIT_QSTR("x509-plain"),
            QLIT_QSTR("tls-sasl"),
            QLIT_QSTR("x509-sasl"),
            {}
        })), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
    /* "298" = VncServerInfo */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("host"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("service"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("family"), },
                { "type", QLIT_QSTR("293"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("websocket"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auth"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("298"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
    /* "299" = VncBasicInfo */
#if defined(CONFIG_VNC)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("host"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("service"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("family"), },
                { "type", QLIT_QSTR("293"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("websocket"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("299"), },
        {}
    })),
#endif /* defined(CONFIG_VNC) */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("300"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[300]"), },
        {}
    })),
    /* "300" = KeyValue */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("416"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("300"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("number"), },
                { "type", QLIT_QSTR("417"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcode"), },
                { "type", QLIT_QSTR("418"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("301"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[301]"), },
        {}
    })),
    /* "301" = InputEvent */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("419"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("301"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("key"), },
                { "type", QLIT_QSTR("420"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("btn"), },
                { "type", QLIT_QSTR("421"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("rel"), },
                { "type", QLIT_QSTR("422"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("abs"), },
                { "type", QLIT_QSTR("422"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "302" = DisplayType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("302"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("default"),
            QLIT_QSTR("none"),
            QLIT_QSTR("gtk"),
            QLIT_QSTR("sdl"),
            QLIT_QSTR("egl-headless"),
            QLIT_QSTR("curses"),
            QLIT_QSTR("cocoa"),
            QLIT_QSTR("spice-app"),
            {}
        })), },
        {}
    })),
    /* "303" = DisplayGLMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("303"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("off"),
            QLIT_QSTR("on"),
            QLIT_QSTR("core"),
            QLIT_QSTR("es"),
            {}
        })), },
        {}
    })),
    /* "304" = DisplayGTK */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("grab-on-hover"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("zoom-to-fit"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("304"), },
        {}
    })),
    /* "305" = DisplayCurses */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("charset"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("305"), },
        {}
    })),
    /* "306" = DisplayEGLHeadless */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("rendernode"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("306"), },
        {}
    })),
    /* "307" = MigrationStatus */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("307"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("none"),
            QLIT_QSTR("setup"),
            QLIT_QSTR("cancelling"),
            QLIT_QSTR("cancelled"),
            QLIT_QSTR("active"),
            QLIT_QSTR("postcopy-active"),
            QLIT_QSTR("postcopy-paused"),
            QLIT_QSTR("postcopy-recover"),
            QLIT_QSTR("completed"),
            QLIT_QSTR("failed"),
            QLIT_QSTR("colo"),
            QLIT_QSTR("pre-switchover"),
            QLIT_QSTR("device"),
            {}
        })), },
        {}
    })),
    /* "308" = MigrationStats */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("transferred"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("remaining"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("total"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("duplicate"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("skipped"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("normal"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("normal-bytes"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("dirty-pages-rate"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("mbps"), },
                { "type", QLIT_QSTR("number"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("dirty-sync-count"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("postcopy-requests"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("page-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("multifd-bytes"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("pages-per-second"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("308"), },
        {}
    })),
    /* "309" = XBZRLECacheStats */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cache-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bytes"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("pages"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cache-miss"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cache-miss-rate"), },
                { "type", QLIT_QSTR("number"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("overflow"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("309"), },
        {}
    })),
    /* "310" = CompressionStats */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("pages"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("busy"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("busy-rate"), },
                { "type", QLIT_QSTR("number"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("compressed-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("compression-rate"), },
                { "type", QLIT_QSTR("number"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("310"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("311"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[311]"), },
        {}
    })),
    /* "311" = SocketAddress */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("423"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("311"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("inet"), },
                { "type", QLIT_QSTR("379"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("unix"), },
                { "type", QLIT_QSTR("424"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vsock"), },
                { "type", QLIT_QSTR("425"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("fd"), },
                { "type", QLIT_QSTR("426"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "312" = MigrationCapability */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("312"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("xbzrle"),
            QLIT_QSTR("rdma-pin-all"),
            QLIT_QSTR("auto-converge"),
            QLIT_QSTR("zero-blocks"),
            QLIT_QSTR("compress"),
            QLIT_QSTR("events"),
            QLIT_QSTR("postcopy-ram"),
            QLIT_QSTR("x-colo"),
            QLIT_QSTR("release-ram"),
            QLIT_QSTR("block"),
            QLIT_QSTR("return-path"),
            QLIT_QSTR("pause-before-switchover"),
            QLIT_QSTR("multifd"),
            QLIT_QSTR("dirty-bitmaps"),
            QLIT_QSTR("postcopy-blocktime"),
            QLIT_QSTR("late-block-activate"),
            QLIT_QSTR("x-ignore-shared"),
            {}
        })), },
        {}
    })),
    /* "313" = COLOMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("313"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("none"),
            QLIT_QSTR("primary"),
            QLIT_QSTR("secondary"),
            {}
        })), },
        {}
    })),
    /* "314" = COLOExitReason */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("314"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("none"),
            QLIT_QSTR("request"),
            QLIT_QSTR("error"),
            QLIT_QSTR("processing"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "json-type", QLIT_QSTR("number"), },
        { "meta-type", QLIT_QSTR("builtin"), },
        { "name", QLIT_QSTR("number"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("315"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[315]"), },
        {}
    })),
    /* "315" = TransactionAction */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("427"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("315"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("abort"), },
                { "type", QLIT_QSTR("428"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("block-dirty-bitmap-add"), },
                { "type", QLIT_QSTR("429"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("block-dirty-bitmap-clear"), },
                { "type", QLIT_QSTR("430"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("block-dirty-bitmap-enable"), },
                { "type", QLIT_QSTR("430"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("block-dirty-bitmap-disable"), },
                { "type", QLIT_QSTR("430"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("block-dirty-bitmap-merge"), },
                { "type", QLIT_QSTR("431"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blockdev-backup"), },
                { "type", QLIT_QSTR("432"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blockdev-snapshot"), },
                { "type", QLIT_QSTR("433"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blockdev-snapshot-internal-sync"), },
                { "type", QLIT_QSTR("434"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blockdev-snapshot-sync"), },
                { "type", QLIT_QSTR("435"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("drive-backup"), },
                { "type", QLIT_QSTR("436"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "316" = TransactionProperties */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("completion-mode"), },
                { "type", QLIT_QSTR("437"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("316"), },
        {}
    })),
    /* "317" = TraceEventState */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("317"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("unavailable"),
            QLIT_QSTR("disabled"),
            QLIT_QSTR("enabled"),
            {}
        })), },
        {}
    })),
    /* "318" = SchemaMetaType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("318"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("builtin"),
            QLIT_QSTR("enum"),
            QLIT_QSTR("array"),
            QLIT_QSTR("object"),
            QLIT_QSTR("alternate"),
            QLIT_QSTR("command"),
            QLIT_QSTR("event"),
            {}
        })), },
        {}
    })),
    /* "319" = SchemaInfoBuiltin */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("json-type"), },
                { "type", QLIT_QSTR("438"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("319"), },
        {}
    })),
    /* "320" = SchemaInfoEnum */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("values"), },
                { "type", QLIT_QSTR("[str]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("320"), },
        {}
    })),
    /* "321" = SchemaInfoArray */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("element-type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("321"), },
        {}
    })),
    /* "322" = SchemaInfoObject */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("members"), },
                { "type", QLIT_QSTR("[439]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tag"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("variants"), },
                { "type", QLIT_QSTR("[440]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("features"), },
                { "type", QLIT_QSTR("[str]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("322"), },
        {}
    })),
    /* "323" = SchemaInfoAlternate */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("members"), },
                { "type", QLIT_QSTR("[441]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("323"), },
        {}
    })),
    /* "324" = SchemaInfoCommand */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("arg-type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("ret-type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("allow-oob"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("324"), },
        {}
    })),
    /* "325" = SchemaInfoEvent */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("arg-type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("325"), },
        {}
    })),
    /* "326" = CpuInstanceProperties */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("socket-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("die-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("core-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("thread-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("326"), },
        {}
    })),
    /* "327" = CpuInfoArch */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("327"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("x86"),
            QLIT_QSTR("sparc"),
            QLIT_QSTR("ppc"),
            QLIT_QSTR("mips"),
            QLIT_QSTR("tricore"),
            QLIT_QSTR("s390"),
            QLIT_QSTR("riscv"),
            QLIT_QSTR("other"),
            {}
        })), },
        {}
    })),
    /* "328" = CpuInfoX86 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("pc"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("328"), },
        {}
    })),
    /* "329" = CpuInfoSPARC */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("pc"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("npc"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("329"), },
        {}
    })),
    /* "330" = CpuInfoPPC */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("nip"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("330"), },
        {}
    })),
    /* "331" = CpuInfoMIPS */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("PC"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("331"), },
        {}
    })),
    /* "332" = CpuInfoTricore */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("PC"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("332"), },
        {}
    })),
    /* "333" = CpuInfoS390 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cpu-state"), },
                { "type", QLIT_QSTR("442"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("333"), },
        {}
    })),
    /* "334" = CpuInfoRISCV */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("pc"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("334"), },
        {}
    })),
    /* "335" = SysEmuTarget */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("335"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("aarch64"),
            QLIT_QSTR("alpha"),
            QLIT_QSTR("arm"),
            QLIT_QSTR("cris"),
            QLIT_QSTR("hppa"),
            QLIT_QSTR("i386"),
            QLIT_QSTR("lm32"),
            QLIT_QSTR("m68k"),
            QLIT_QSTR("microblaze"),
            QLIT_QSTR("microblazeel"),
            QLIT_QSTR("mips"),
            QLIT_QSTR("mips64"),
            QLIT_QSTR("mips64el"),
            QLIT_QSTR("mipsel"),
            QLIT_QSTR("moxie"),
            QLIT_QSTR("nios2"),
            QLIT_QSTR("or1k"),
            QLIT_QSTR("ppc"),
            QLIT_QSTR("ppc64"),
            QLIT_QSTR("riscv32"),
            QLIT_QSTR("riscv64"),
            QLIT_QSTR("s390x"),
            QLIT_QSTR("sh4"),
            QLIT_QSTR("sh4eb"),
            QLIT_QSTR("sparc"),
            QLIT_QSTR("sparc64"),
            QLIT_QSTR("tricore"),
            QLIT_QSTR("unicore32"),
            QLIT_QSTR("x86_64"),
            QLIT_QSTR("xtensa"),
            QLIT_QSTR("xtensaeb"),
            {}
        })), },
        {}
    })),
    /* "336" = HostMemPolicy */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("336"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("default"),
            QLIT_QSTR("preferred"),
            QLIT_QSTR("bind"),
            QLIT_QSTR("interleave"),
            {}
        })), },
        {}
    })),
    /* "337" = NumaOptionsType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("337"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("node"),
            QLIT_QSTR("dist"),
            QLIT_QSTR("cpu"),
            {}
        })), },
        {}
    })),
    /* "338" = NumaNodeOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("nodeid"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cpus"), },
                { "type", QLIT_QSTR("[int]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("mem"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("memdev"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("338"), },
        {}
    })),
    /* "339" = NumaDistOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("src"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("dst"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("val"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("339"), },
        {}
    })),
    /* "340" = NumaCpuOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("socket-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("die-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("core-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("thread-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("340"), },
        {}
    })),
    /* "341" = CpuModelInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("props"), },
                { "type", QLIT_QSTR("any"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("341"), },
        {}
    })),
    /* "342" = CpuModelCompareResult */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("342"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("incompatible"),
            QLIT_QSTR("identical"),
            QLIT_QSTR("superset"),
            QLIT_QSTR("subset"),
            {}
        })), },
        {}
    })),
    /* "343" = CpuModelExpansionType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("343"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("static"),
            QLIT_QSTR("full"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("344"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[344]"), },
        {}
    })),
    /* "344" = QMPCapability */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("344"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("oob"),
            {}
        })), },
        {}
    })),
    /* "345" = VersionTriple */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("major"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("minor"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("micro"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("345"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("346"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[346]"), },
        {}
    })),
    /* "346" = PciDeviceInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bus"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("slot"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("function"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("class_info"), },
                { "type", QLIT_QSTR("443"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("444"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("irq"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("qdev_id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("pci_bridge"), },
                { "type", QLIT_QSTR("445"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("regions"), },
                { "type", QLIT_QSTR("[446]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("346"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("347"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[347]"), },
        {}
    })),
    /* "347" = FdsetFdInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("fd"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("opaque"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("347"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("348"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[348]"), },
        {}
    })),
    /* "348" = CommandLineParameterInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("447"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("help"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("default"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("348"), },
        {}
    })),
    /* "349" = MemoryDeviceInfoKind */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("349"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("dimm"),
            QLIT_QSTR("nvdimm"),
            QLIT_QSTR("virtio-pmem"),
            {}
        })), },
        {}
    })),
    /* "350" = q_obj_PCDIMMDeviceInfo-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("448"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("350"), },
        {}
    })),
    /* "351" = q_obj_VirtioPMEMDeviceInfo-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("449"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("351"), },
        {}
    })),
    /* "352" = ACPISlotType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("352"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("DIMM"),
            QLIT_QSTR("CPU"),
            {}
        })), },
        {}
    })),
    /* "353" = SevState */
#if defined(TARGET_I386)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("353"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("uninit"),
            QLIT_QSTR("launch-update"),
            QLIT_QSTR("launch-secret"),
            QLIT_QSTR("running"),
            QLIT_QSTR("send-update"),
            QLIT_QSTR("receive-update"),
            {}
        })), },
        {}
    })),
#endif /* defined(TARGET_I386) */
    /* "354" = GuestPanicInformationType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("354"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("hyper-v"),
            QLIT_QSTR("s390"),
            {}
        })), },
        {}
    })),
    /* "355" = GuestPanicInformationHyperV */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("arg1"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("arg2"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("arg3"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("arg4"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("arg5"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("355"), },
        {}
    })),
    /* "356" = GuestPanicInformationS390 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("core"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("psw-mask"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("psw-addr"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("reason"), },
                { "type", QLIT_QSTR("450"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("356"), },
        {}
    })),
    /* "357" = DirtyBitmapStatus */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("357"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("active"),
            QLIT_QSTR("disabled"),
            QLIT_QSTR("frozen"),
            QLIT_QSTR("locked"),
            QLIT_QSTR("inconsistent"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("358"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[358]"), },
        {}
    })),
    /* "358" = BlockDeviceTimedStats */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("interval_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("min_rd_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("max_rd_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("avg_rd_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("min_wr_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("max_wr_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("avg_wr_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("min_flush_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("max_flush_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("avg_flush_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("avg_rd_queue_depth"), },
                { "type", QLIT_QSTR("number"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("avg_wr_queue_depth"), },
                { "type", QLIT_QSTR("number"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("358"), },
        {}
    })),
    /* "359" = BlockLatencyHistogramInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("boundaries"), },
                { "type", QLIT_QSTR("[int]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bins"), },
                { "type", QLIT_QSTR("[int]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("359"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("67"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[67]"), },
        {}
    })),
    /* "360" = ImageInfoSpecific */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("451"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("360"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcow2"), },
                { "type", QLIT_QSTR("452"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vmdk"), },
                { "type", QLIT_QSTR("453"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("luks"), },
                { "type", QLIT_QSTR("454"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "361" = XDbgBlockGraphNodeType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("361"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("block-backend"),
            QLIT_QSTR("block-job"),
            QLIT_QSTR("block-driver"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("362"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[362]"), },
        {}
    })),
    /* "362" = BlockPermission */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("362"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("consistent-read"),
            QLIT_QSTR("write"),
            QLIT_QSTR("write-unchanged"),
            QLIT_QSTR("resize"),
            QLIT_QSTR("graph-mod"),
            {}
        })), },
        {}
    })),
    /* "363" = BlockdevRef */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("45"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("alternate"), },
        { "name", QLIT_QSTR("363"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("364"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[364]"), },
        {}
    })),
    /* "364" = BlkdebugInjectErrorOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("event"), },
                { "type", QLIT_QSTR("455"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("state"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iotype"), },
                { "type", QLIT_QSTR("456"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("errno"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("sector"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("once"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("immediately"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("364"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("365"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[365]"), },
        {}
    })),
    /* "365" = BlkdebugSetStateOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("event"), },
                { "type", QLIT_QSTR("455"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("state"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("new_state"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("365"), },
        {}
    })),
    /* "366" = OnOffAuto */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("366"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("auto"),
            QLIT_QSTR("on"),
            QLIT_QSTR("off"),
            {}
        })), },
        {}
    })),
    /* "367" = BlockdevAioOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("367"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("threads"),
            QLIT_QSTR("native"),
            {}
        })), },
        {}
    })),
    /* "368" = IscsiTransport */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("368"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("tcp"),
            QLIT_QSTR("iser"),
            {}
        })), },
        {}
    })),
    /* "369" = IscsiHeaderDigest */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("369"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("crc32c"),
            QLIT_QSTR("none"),
            QLIT_QSTR("crc32c-none"),
            QLIT_QSTR("none-crc32c"),
            {}
        })), },
        {}
    })),
    /* "370" = NFSServer */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("457"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("host"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("370"), },
        {}
    })),
    /* "371" = BlockdevRefOrNull */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("45"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("null"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("alternate"), },
        { "name", QLIT_QSTR("371"), },
        {}
    })),
    /* "372" = Qcow2OverlapChecks */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("458"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("459"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("alternate"), },
        { "name", QLIT_QSTR("372"), },
        {}
    })),
    /* "373" = BlockdevQcow2Encryption */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("460"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("373"), },
        { "tag", QLIT_QSTR("format"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("aes"), },
                { "type", QLIT_QSTR("461"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("luks"), },
                { "type", QLIT_QSTR("462"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "374" = BlockdevQcowEncryption */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("463"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("374"), },
        { "tag", QLIT_QSTR("format"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("aes"), },
                { "type", QLIT_QSTR("461"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("363"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[363]"), },
        {}
    })),
    /* "375" = QuorumReadPattern */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("375"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("quorum"),
            QLIT_QSTR("fifo"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("376"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[376]"), },
        {}
    })),
    /* "376" = RbdAuthMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("376"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("cephx"),
            QLIT_QSTR("none"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("377"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[377]"), },
        {}
    })),
    /* "377" = InetSocketAddressBase */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("host"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("port"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("377"), },
        {}
    })),
    /* "378" = ReplicationMode */
#if defined(CONFIG_REPLICATION)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("378"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("primary"),
            QLIT_QSTR("secondary"),
            {}
        })), },
        {}
    })),
#endif /* defined(CONFIG_REPLICATION) */
    /* "379" = InetSocketAddress */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("host"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("port"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("numeric"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("to"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ipv4"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ipv6"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("379"), },
        {}
    })),
    /* "380" = SshHostKeyCheck */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("mode"), },
                { "type", QLIT_QSTR("464"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("380"), },
        { "tag", QLIT_QSTR("mode"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("hash"), },
                { "type", QLIT_QSTR("465"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("none"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("known_hosts"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "381" = BlockdevCreateOptionsFile */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("preallocation"), },
                { "type", QLIT_QSTR("466"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("nocow"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("381"), },
        {}
    })),
    /* "382" = BlockdevCreateOptionsGluster */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("location"), },
                { "type", QLIT_QSTR("249"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("preallocation"), },
                { "type", QLIT_QSTR("466"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("382"), },
        {}
    })),
    /* "383" = BlockdevCreateOptionsLUKS */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("key-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cipher-alg"), },
                { "type", QLIT_QSTR("467"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cipher-mode"), },
                { "type", QLIT_QSTR("468"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ivgen-alg"), },
                { "type", QLIT_QSTR("469"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ivgen-hash-alg"), },
                { "type", QLIT_QSTR("470"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("hash-alg"), },
                { "type", QLIT_QSTR("470"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iter-time"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("383"), },
        {}
    })),
    /* "384" = BlockdevCreateOptionsNfs */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("location"), },
                { "type", QLIT_QSTR("255"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("384"), },
        {}
    })),
    /* "385" = BlockdevCreateOptionsParallels */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cluster-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("385"), },
        {}
    })),
    /* "386" = BlockdevCreateOptionsQcow */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("encrypt"), },
                { "type", QLIT_QSTR("471"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("386"), },
        {}
    })),
    /* "387" = BlockdevCreateOptionsQcow2 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("data-file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("data-file-raw"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("version"), },
                { "type", QLIT_QSTR("472"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-fmt"), },
                { "type", QLIT_QSTR("239"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("encrypt"), },
                { "type", QLIT_QSTR("471"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cluster-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("preallocation"), },
                { "type", QLIT_QSTR("466"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("lazy-refcounts"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("refcount-bits"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("387"), },
        {}
    })),
    /* "388" = BlockdevCreateOptionsQed */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-fmt"), },
                { "type", QLIT_QSTR("239"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cluster-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("table-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("388"), },
        {}
    })),
    /* "389" = BlockdevCreateOptionsRbd */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("location"), },
                { "type", QLIT_QSTR("263"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cluster-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("389"), },
        {}
    })),
    /* "390" = BlockdevCreateOptionsSheepdog */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("location"), },
                { "type", QLIT_QSTR("265"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("preallocation"), },
                { "type", QLIT_QSTR("466"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("redundancy"), },
                { "type", QLIT_QSTR("473"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("object-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("390"), },
        {}
    })),
    /* "391" = BlockdevCreateOptionsSsh */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("location"), },
                { "type", QLIT_QSTR("266"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("391"), },
        {}
    })),
    /* "392" = BlockdevCreateOptionsVdi */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("preallocation"), },
                { "type", QLIT_QSTR("466"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("392"), },
        {}
    })),
    /* "393" = BlockdevCreateOptionsVhdx */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("log-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("block-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("subformat"), },
                { "type", QLIT_QSTR("474"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("block-state-zero"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("393"), },
        {}
    })),
    /* "394" = BlockdevCreateOptionsVmdk */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("extents"), },
                { "type", QLIT_QSTR("[363]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("subformat"), },
                { "type", QLIT_QSTR("475"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("adapter-type"), },
                { "type", QLIT_QSTR("476"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("hwversion"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("zeroed-grain"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("394"), },
        {}
    })),
    /* "395" = BlockdevCreateOptionsVpc */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("363"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("subformat"), },
                { "type", QLIT_QSTR("477"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("force-size"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("395"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "json-type", QLIT_QSTR("null"), },
        { "meta-type", QLIT_QSTR("builtin"), },
        { "name", QLIT_QSTR("null"), },
        {}
    })),
    /* "396" = SocketAddressLegacyKind */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("396"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("inet"),
            QLIT_QSTR("unix"),
            QLIT_QSTR("vsock"),
            QLIT_QSTR("fd"),
            {}
        })), },
        {}
    })),
    /* "397" = q_obj_InetSocketAddress-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("379"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("397"), },
        {}
    })),
    /* "398" = q_obj_UnixSocketAddress-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("424"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("398"), },
        {}
    })),
    /* "399" = q_obj_VsockSocketAddress-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("425"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("399"), },
        {}
    })),
    /* "400" = q_obj_String-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("426"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("400"), },
        {}
    })),
    /* "401" = ChardevBackendKind */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("401"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("file"),
            QLIT_QSTR("serial"),
            QLIT_QSTR("parallel"),
            QLIT_QSTR("pipe"),
            QLIT_QSTR("socket"),
            QLIT_QSTR("udp"),
            QLIT_QSTR("pty"),
            QLIT_QSTR("null"),
            QLIT_QSTR("mux"),
            QLIT_QSTR("msmouse"),
            QLIT_QSTR("wctablet"),
            QLIT_QSTR("braille"),
            QLIT_QSTR("testdev"),
            QLIT_QSTR("stdio"),
            QLIT_QSTR("console"),
#if defined(CONFIG_SPICE)
            QLIT_QSTR("spicevmc"),
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
            QLIT_QSTR("spiceport"),
#endif /* defined(CONFIG_SPICE) */
            QLIT_QSTR("vc"),
            QLIT_QSTR("ringbuf"),
            QLIT_QSTR("memory"),
            {}
        })), },
        {}
    })),
    /* "402" = q_obj_ChardevFile-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("478"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("402"), },
        {}
    })),
    /* "403" = q_obj_ChardevHostdev-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("479"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("403"), },
        {}
    })),
    /* "404" = q_obj_ChardevSocket-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("480"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("404"), },
        {}
    })),
    /* "405" = q_obj_ChardevUdp-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("481"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("405"), },
        {}
    })),
    /* "406" = q_obj_ChardevCommon-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("482"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("406"), },
        {}
    })),
    /* "407" = q_obj_ChardevMux-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("483"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("407"), },
        {}
    })),
    /* "408" = q_obj_ChardevStdio-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("484"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("408"), },
        {}
    })),
    /* "409" = q_obj_ChardevSpiceChannel-wrapper */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("485"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("409"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
    /* "410" = q_obj_ChardevSpicePort-wrapper */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("486"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("410"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
    /* "411" = q_obj_ChardevVC-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("487"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("411"), },
        {}
    })),
    /* "412" = q_obj_ChardevRingbuf-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("488"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("412"), },
        {}
    })),
    /* "413" = TpmTypeOptionsKind */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("413"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("passthrough"),
            QLIT_QSTR("emulator"),
            {}
        })), },
        {}
    })),
    /* "414" = q_obj_TPMPassthroughOptions-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("489"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("414"), },
        {}
    })),
    /* "415" = q_obj_TPMEmulatorOptions-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("490"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("415"), },
        {}
    })),
    /* "416" = KeyValueKind */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("416"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("number"),
            QLIT_QSTR("qcode"),
            {}
        })), },
        {}
    })),
    /* "417" = q_obj_int-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("417"), },
        {}
    })),
    /* "418" = q_obj_QKeyCode-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("491"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("418"), },
        {}
    })),
    /* "419" = InputEventKind */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("419"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("key"),
            QLIT_QSTR("btn"),
            QLIT_QSTR("rel"),
            QLIT_QSTR("abs"),
            {}
        })), },
        {}
    })),
    /* "420" = q_obj_InputKeyEvent-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("492"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("420"), },
        {}
    })),
    /* "421" = q_obj_InputBtnEvent-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("493"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("421"), },
        {}
    })),
    /* "422" = q_obj_InputMoveEvent-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("494"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("422"), },
        {}
    })),
    /* "423" = SocketAddressType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("423"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("inet"),
            QLIT_QSTR("unix"),
            QLIT_QSTR("vsock"),
            QLIT_QSTR("fd"),
            {}
        })), },
        {}
    })),
    /* "424" = UnixSocketAddress */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("424"), },
        {}
    })),
    /* "425" = VsockSocketAddress */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cid"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("port"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("425"), },
        {}
    })),
    /* "426" = String */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("str"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("426"), },
        {}
    })),
    /* "427" = TransactionActionKind */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("427"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("abort"),
            QLIT_QSTR("block-dirty-bitmap-add"),
            QLIT_QSTR("block-dirty-bitmap-clear"),
            QLIT_QSTR("block-dirty-bitmap-enable"),
            QLIT_QSTR("block-dirty-bitmap-disable"),
            QLIT_QSTR("block-dirty-bitmap-merge"),
            QLIT_QSTR("blockdev-backup"),
            QLIT_QSTR("blockdev-snapshot"),
            QLIT_QSTR("blockdev-snapshot-internal-sync"),
            QLIT_QSTR("blockdev-snapshot-sync"),
            QLIT_QSTR("drive-backup"),
            {}
        })), },
        {}
    })),
    /* "428" = q_obj_Abort-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("495"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("428"), },
        {}
    })),
    /* "429" = q_obj_BlockDirtyBitmapAdd-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("31"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("429"), },
        {}
    })),
    /* "430" = q_obj_BlockDirtyBitmap-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("32"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("430"), },
        {}
    })),
    /* "431" = q_obj_BlockDirtyBitmapMerge-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("33"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("431"), },
        {}
    })),
    /* "432" = q_obj_BlockdevBackup-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("27"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("432"), },
        {}
    })),
    /* "433" = q_obj_BlockdevSnapshot-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("23"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("433"), },
        {}
    })),
    /* "434" = q_obj_BlockdevSnapshotInternal-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("65"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("434"), },
        {}
    })),
    /* "435" = q_obj_BlockdevSnapshotSync-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("22"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("435"), },
        {}
    })),
    /* "436" = q_obj_DriveBackup-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("26"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("436"), },
        {}
    })),
    /* "437" = ActionCompletionMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("437"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("individual"),
            QLIT_QSTR("grouped"),
            {}
        })), },
        {}
    })),
    /* "438" = JSONType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("438"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("string"),
            QLIT_QSTR("number"),
            QLIT_QSTR("int"),
            QLIT_QSTR("boolean"),
            QLIT_QSTR("null"),
            QLIT_QSTR("object"),
            QLIT_QSTR("array"),
            QLIT_QSTR("value"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("439"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[439]"), },
        {}
    })),
    /* "439" = SchemaInfoObjectMember */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("default"), },
                { "type", QLIT_QSTR("any"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("439"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("440"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[440]"), },
        {}
    })),
    /* "440" = SchemaInfoObjectVariant */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("case"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("440"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("441"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[441]"), },
        {}
    })),
    /* "441" = SchemaInfoAlternateMember */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("441"), },
        {}
    })),
    /* "442" = CpuS390State */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("442"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("uninitialized"),
            QLIT_QSTR("stopped"),
            QLIT_QSTR("check-stop"),
            QLIT_QSTR("operating"),
            QLIT_QSTR("load"),
            {}
        })), },
        {}
    })),
    /* "443" = PciDeviceClass */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("desc"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("class"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("443"), },
        {}
    })),
    /* "444" = PciDeviceId */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("vendor"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("subsystem"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("subsystem-vendor"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("444"), },
        {}
    })),
    /* "445" = PciBridgeInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bus"), },
                { "type", QLIT_QSTR("496"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("devices"), },
                { "type", QLIT_QSTR("[346]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("445"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("446"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[446]"), },
        {}
    })),
    /* "446" = PciMemoryRegion */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bar"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("address"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("prefetch"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("mem_type_64"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("446"), },
        {}
    })),
    /* "447" = CommandLineParameterType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("447"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("string"),
            QLIT_QSTR("boolean"),
            QLIT_QSTR("number"),
            QLIT_QSTR("size"),
            {}
        })), },
        {}
    })),
    /* "448" = PCDIMMDeviceInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("addr"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("slot"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("memdev"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("hotplugged"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("hotpluggable"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("448"), },
        {}
    })),
    /* "449" = VirtioPMEMDeviceInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("memaddr"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("memdev"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("449"), },
        {}
    })),
    /* "450" = S390CrashReason */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("450"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("unknown"),
            QLIT_QSTR("disabled-wait"),
            QLIT_QSTR("extint-loop"),
            QLIT_QSTR("pgmint-loop"),
            QLIT_QSTR("opint-loop"),
            {}
        })), },
        {}
    })),
    /* "451" = ImageInfoSpecificKind */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("451"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("qcow2"),
            QLIT_QSTR("vmdk"),
            QLIT_QSTR("luks"),
            {}
        })), },
        {}
    })),
    /* "452" = q_obj_ImageInfoSpecificQCow2-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("497"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("452"), },
        {}
    })),
    /* "453" = q_obj_ImageInfoSpecificVmdk-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("498"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("453"), },
        {}
    })),
    /* "454" = q_obj_QCryptoBlockInfoLUKS-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("499"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("454"), },
        {}
    })),
    /* "455" = BlkdebugEvent */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("455"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("l1_update"),
            QLIT_QSTR("l1_grow_alloc_table"),
            QLIT_QSTR("l1_grow_write_table"),
            QLIT_QSTR("l1_grow_activate_table"),
            QLIT_QSTR("l2_load"),
            QLIT_QSTR("l2_update"),
            QLIT_QSTR("l2_update_compressed"),
            QLIT_QSTR("l2_alloc_cow_read"),
            QLIT_QSTR("l2_alloc_write"),
            QLIT_QSTR("read_aio"),
            QLIT_QSTR("read_backing_aio"),
            QLIT_QSTR("read_compressed"),
            QLIT_QSTR("write_aio"),
            QLIT_QSTR("write_compressed"),
            QLIT_QSTR("vmstate_load"),
            QLIT_QSTR("vmstate_save"),
            QLIT_QSTR("cow_read"),
            QLIT_QSTR("cow_write"),
            QLIT_QSTR("reftable_load"),
            QLIT_QSTR("reftable_grow"),
            QLIT_QSTR("reftable_update"),
            QLIT_QSTR("refblock_load"),
            QLIT_QSTR("refblock_update"),
            QLIT_QSTR("refblock_update_part"),
            QLIT_QSTR("refblock_alloc"),
            QLIT_QSTR("refblock_alloc_hookup"),
            QLIT_QSTR("refblock_alloc_write"),
            QLIT_QSTR("refblock_alloc_write_blocks"),
            QLIT_QSTR("refblock_alloc_write_table"),
            QLIT_QSTR("refblock_alloc_switch_table"),
            QLIT_QSTR("cluster_alloc"),
            QLIT_QSTR("cluster_alloc_bytes"),
            QLIT_QSTR("cluster_free"),
            QLIT_QSTR("flush_to_os"),
            QLIT_QSTR("flush_to_disk"),
            QLIT_QSTR("pwritev_rmw_head"),
            QLIT_QSTR("pwritev_rmw_after_head"),
            QLIT_QSTR("pwritev_rmw_tail"),
            QLIT_QSTR("pwritev_rmw_after_tail"),
            QLIT_QSTR("pwritev"),
            QLIT_QSTR("pwritev_zero"),
            QLIT_QSTR("pwritev_done"),
            QLIT_QSTR("empty_image_prepare"),
            QLIT_QSTR("l1_shrink_write_table"),
            QLIT_QSTR("l1_shrink_free_l2_clusters"),
            QLIT_QSTR("cor_write"),
            QLIT_QSTR("cluster_alloc_space"),
            QLIT_QSTR("none"),
            {}
        })), },
        {}
    })),
    /* "456" = BlkdebugIOType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("456"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("read"),
            QLIT_QSTR("write"),
            QLIT_QSTR("write-zeroes"),
            QLIT_QSTR("discard"),
            QLIT_QSTR("flush"),
            QLIT_QSTR("block-status"),
            {}
        })), },
        {}
    })),
    /* "457" = NFSTransport */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("457"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("inet"),
            {}
        })), },
        {}
    })),
    /* "458" = Qcow2OverlapCheckFlags */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("template"), },
                { "type", QLIT_QSTR("459"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("main-header"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("active-l1"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("active-l2"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("refcount-table"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("refcount-block"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("snapshot-table"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("inactive-l1"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("inactive-l2"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bitmap-directory"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("458"), },
        {}
    })),
    /* "459" = Qcow2OverlapCheckMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("459"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("none"),
            QLIT_QSTR("constant"),
            QLIT_QSTR("cached"),
            QLIT_QSTR("all"),
            {}
        })), },
        {}
    })),
    /* "460" = BlockdevQcow2EncryptionFormat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("460"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("aes"),
            QLIT_QSTR("luks"),
            {}
        })), },
        {}
    })),
    /* "461" = QCryptoBlockOptionsQCow */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("key-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("461"), },
        {}
    })),
    /* "462" = QCryptoBlockOptionsLUKS */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("key-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("462"), },
        {}
    })),
    /* "463" = BlockdevQcowEncryptionFormat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("463"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("aes"),
            {}
        })), },
        {}
    })),
    /* "464" = SshHostKeyCheckMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("464"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("none"),
            QLIT_QSTR("hash"),
            QLIT_QSTR("known_hosts"),
            {}
        })), },
        {}
    })),
    /* "465" = SshHostKeyHash */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("500"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("hash"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("465"), },
        {}
    })),
    /* "466" = PreallocMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("466"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("off"),
            QLIT_QSTR("metadata"),
            QLIT_QSTR("falloc"),
            QLIT_QSTR("full"),
            {}
        })), },
        {}
    })),
    /* "467" = QCryptoCipherAlgorithm */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("467"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("aes-128"),
            QLIT_QSTR("aes-192"),
            QLIT_QSTR("aes-256"),
            QLIT_QSTR("des-rfb"),
            QLIT_QSTR("3des"),
            QLIT_QSTR("cast5-128"),
            QLIT_QSTR("serpent-128"),
            QLIT_QSTR("serpent-192"),
            QLIT_QSTR("serpent-256"),
            QLIT_QSTR("twofish-128"),
            QLIT_QSTR("twofish-192"),
            QLIT_QSTR("twofish-256"),
            {}
        })), },
        {}
    })),
    /* "468" = QCryptoCipherMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("468"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("ecb"),
            QLIT_QSTR("cbc"),
            QLIT_QSTR("xts"),
            QLIT_QSTR("ctr"),
            {}
        })), },
        {}
    })),
    /* "469" = QCryptoIVGenAlgorithm */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("469"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("plain"),
            QLIT_QSTR("plain64"),
            QLIT_QSTR("essiv"),
            {}
        })), },
        {}
    })),
    /* "470" = QCryptoHashAlgorithm */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("470"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("md5"),
            QLIT_QSTR("sha1"),
            QLIT_QSTR("sha224"),
            QLIT_QSTR("sha256"),
            QLIT_QSTR("sha384"),
            QLIT_QSTR("sha512"),
            QLIT_QSTR("ripemd160"),
            {}
        })), },
        {}
    })),
    /* "471" = QCryptoBlockCreateOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("501"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("471"), },
        { "tag", QLIT_QSTR("format"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcow"), },
                { "type", QLIT_QSTR("461"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("luks"), },
                { "type", QLIT_QSTR("502"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "472" = BlockdevQcow2Version */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("472"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("v2"),
            QLIT_QSTR("v3"),
            {}
        })), },
        {}
    })),
    /* "473" = SheepdogRedundancy */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("503"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("473"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("full"), },
                { "type", QLIT_QSTR("504"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("erasure-coded"), },
                { "type", QLIT_QSTR("505"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "474" = BlockdevVhdxSubformat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("474"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("dynamic"),
            QLIT_QSTR("fixed"),
            {}
        })), },
        {}
    })),
    /* "475" = BlockdevVmdkSubformat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("475"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("monolithicSparse"),
            QLIT_QSTR("monolithicFlat"),
            QLIT_QSTR("twoGbMaxExtentSparse"),
            QLIT_QSTR("twoGbMaxExtentFlat"),
            QLIT_QSTR("streamOptimized"),
            {}
        })), },
        {}
    })),
    /* "476" = BlockdevVmdkAdapterType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("476"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("ide"),
            QLIT_QSTR("buslogic"),
            QLIT_QSTR("lsilogic"),
            QLIT_QSTR("legacyESX"),
            {}
        })), },
        {}
    })),
    /* "477" = BlockdevVpcSubformat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("477"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("dynamic"),
            QLIT_QSTR("fixed"),
            {}
        })), },
        {}
    })),
    /* "478" = ChardevFile */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("in"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("out"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("append"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("478"), },
        {}
    })),
    /* "479" = ChardevHostdev */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("479"), },
        {}
    })),
    /* "480" = ChardevSocket */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("addr"), },
                { "type", QLIT_QSTR("275"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-creds"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-authz"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("wait"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("nodelay"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("telnet"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tn3270"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("websocket"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("reconnect"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("480"), },
        {}
    })),
    /* "481" = ChardevUdp */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("remote"), },
                { "type", QLIT_QSTR("275"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("local"), },
                { "type", QLIT_QSTR("275"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("481"), },
        {}
    })),
    /* "482" = ChardevCommon */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("482"), },
        {}
    })),
    /* "483" = ChardevMux */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("chardev"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("483"), },
        {}
    })),
    /* "484" = ChardevStdio */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("signal"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("484"), },
        {}
    })),
    /* "485" = ChardevSpiceChannel */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("485"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
    /* "486" = ChardevSpicePort */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("fqdn"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("486"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
    /* "487" = ChardevVC */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("width"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("height"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cols"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("rows"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("487"), },
        {}
    })),
    /* "488" = ChardevRingbuf */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("488"), },
        {}
    })),
    /* "489" = TPMPassthroughOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cancel-path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("489"), },
        {}
    })),
    /* "490" = TPMEmulatorOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("chardev"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("490"), },
        {}
    })),
    /* "491" = QKeyCode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("491"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("unmapped"),
            QLIT_QSTR("shift"),
            QLIT_QSTR("shift_r"),
            QLIT_QSTR("alt"),
            QLIT_QSTR("alt_r"),
            QLIT_QSTR("ctrl"),
            QLIT_QSTR("ctrl_r"),
            QLIT_QSTR("menu"),
            QLIT_QSTR("esc"),
            QLIT_QSTR("1"),
            QLIT_QSTR("2"),
            QLIT_QSTR("3"),
            QLIT_QSTR("4"),
            QLIT_QSTR("5"),
            QLIT_QSTR("6"),
            QLIT_QSTR("7"),
            QLIT_QSTR("8"),
            QLIT_QSTR("9"),
            QLIT_QSTR("0"),
            QLIT_QSTR("minus"),
            QLIT_QSTR("equal"),
            QLIT_QSTR("backspace"),
            QLIT_QSTR("tab"),
            QLIT_QSTR("q"),
            QLIT_QSTR("w"),
            QLIT_QSTR("e"),
            QLIT_QSTR("r"),
            QLIT_QSTR("t"),
            QLIT_QSTR("y"),
            QLIT_QSTR("u"),
            QLIT_QSTR("i"),
            QLIT_QSTR("o"),
            QLIT_QSTR("p"),
            QLIT_QSTR("bracket_left"),
            QLIT_QSTR("bracket_right"),
            QLIT_QSTR("ret"),
            QLIT_QSTR("a"),
            QLIT_QSTR("s"),
            QLIT_QSTR("d"),
            QLIT_QSTR("f"),
            QLIT_QSTR("g"),
            QLIT_QSTR("h"),
            QLIT_QSTR("j"),
            QLIT_QSTR("k"),
            QLIT_QSTR("l"),
            QLIT_QSTR("semicolon"),
            QLIT_QSTR("apostrophe"),
            QLIT_QSTR("grave_accent"),
            QLIT_QSTR("backslash"),
            QLIT_QSTR("z"),
            QLIT_QSTR("x"),
            QLIT_QSTR("c"),
            QLIT_QSTR("v"),
            QLIT_QSTR("b"),
            QLIT_QSTR("n"),
            QLIT_QSTR("m"),
            QLIT_QSTR("comma"),
            QLIT_QSTR("dot"),
            QLIT_QSTR("slash"),
            QLIT_QSTR("asterisk"),
            QLIT_QSTR("spc"),
            QLIT_QSTR("caps_lock"),
            QLIT_QSTR("f1"),
            QLIT_QSTR("f2"),
            QLIT_QSTR("f3"),
            QLIT_QSTR("f4"),
            QLIT_QSTR("f5"),
            QLIT_QSTR("f6"),
            QLIT_QSTR("f7"),
            QLIT_QSTR("f8"),
            QLIT_QSTR("f9"),
            QLIT_QSTR("f10"),
            QLIT_QSTR("num_lock"),
            QLIT_QSTR("scroll_lock"),
            QLIT_QSTR("kp_divide"),
            QLIT_QSTR("kp_multiply"),
            QLIT_QSTR("kp_subtract"),
            QLIT_QSTR("kp_add"),
            QLIT_QSTR("kp_enter"),
            QLIT_QSTR("kp_decimal"),
            QLIT_QSTR("sysrq"),
            QLIT_QSTR("kp_0"),
            QLIT_QSTR("kp_1"),
            QLIT_QSTR("kp_2"),
            QLIT_QSTR("kp_3"),
            QLIT_QSTR("kp_4"),
            QLIT_QSTR("kp_5"),
            QLIT_QSTR("kp_6"),
            QLIT_QSTR("kp_7"),
            QLIT_QSTR("kp_8"),
            QLIT_QSTR("kp_9"),
            QLIT_QSTR("less"),
            QLIT_QSTR("f11"),
            QLIT_QSTR("f12"),
            QLIT_QSTR("print"),
            QLIT_QSTR("home"),
            QLIT_QSTR("pgup"),
            QLIT_QSTR("pgdn"),
            QLIT_QSTR("end"),
            QLIT_QSTR("left"),
            QLIT_QSTR("up"),
            QLIT_QSTR("down"),
            QLIT_QSTR("right"),
            QLIT_QSTR("insert"),
            QLIT_QSTR("delete"),
            QLIT_QSTR("stop"),
            QLIT_QSTR("again"),
            QLIT_QSTR("props"),
            QLIT_QSTR("undo"),
            QLIT_QSTR("front"),
            QLIT_QSTR("copy"),
            QLIT_QSTR("open"),
            QLIT_QSTR("paste"),
            QLIT_QSTR("find"),
            QLIT_QSTR("cut"),
            QLIT_QSTR("lf"),
            QLIT_QSTR("help"),
            QLIT_QSTR("meta_l"),
            QLIT_QSTR("meta_r"),
            QLIT_QSTR("compose"),
            QLIT_QSTR("pause"),
            QLIT_QSTR("ro"),
            QLIT_QSTR("hiragana"),
            QLIT_QSTR("henkan"),
            QLIT_QSTR("yen"),
            QLIT_QSTR("muhenkan"),
            QLIT_QSTR("katakanahiragana"),
            QLIT_QSTR("kp_comma"),
            QLIT_QSTR("kp_equals"),
            QLIT_QSTR("power"),
            QLIT_QSTR("sleep"),
            QLIT_QSTR("wake"),
            QLIT_QSTR("audionext"),
            QLIT_QSTR("audioprev"),
            QLIT_QSTR("audiostop"),
            QLIT_QSTR("audioplay"),
            QLIT_QSTR("audiomute"),
            QLIT_QSTR("volumeup"),
            QLIT_QSTR("volumedown"),
            QLIT_QSTR("mediaselect"),
            QLIT_QSTR("mail"),
            QLIT_QSTR("calculator"),
            QLIT_QSTR("computer"),
            QLIT_QSTR("ac_home"),
            QLIT_QSTR("ac_back"),
            QLIT_QSTR("ac_forward"),
            QLIT_QSTR("ac_refresh"),
            QLIT_QSTR("ac_bookmarks"),
            {}
        })), },
        {}
    })),
    /* "492" = InputKeyEvent */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("key"), },
                { "type", QLIT_QSTR("300"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("down"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("492"), },
        {}
    })),
    /* "493" = InputBtnEvent */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("button"), },
                { "type", QLIT_QSTR("506"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("down"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("493"), },
        {}
    })),
    /* "494" = InputMoveEvent */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("axis"), },
                { "type", QLIT_QSTR("507"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("value"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("494"), },
        {}
    })),
    /* "495" = Abort */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("495"), },
        {}
    })),
    /* "496" = PciBusInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("number"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("secondary"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("subordinate"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("io_range"), },
                { "type", QLIT_QSTR("508"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("memory_range"), },
                { "type", QLIT_QSTR("508"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("prefetchable_range"), },
                { "type", QLIT_QSTR("508"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("496"), },
        {}
    })),
    /* "497" = ImageInfoSpecificQCow2 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("compat"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("data-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("data-file-raw"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("lazy-refcounts"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("corrupt"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("refcount-bits"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("encrypt"), },
                { "type", QLIT_QSTR("509"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bitmaps"), },
                { "type", QLIT_QSTR("[510]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("497"), },
        {}
    })),
    /* "498" = ImageInfoSpecificVmdk */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("create-type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cid"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("parent-cid"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("extents"), },
                { "type", QLIT_QSTR("[233]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("498"), },
        {}
    })),
    /* "499" = QCryptoBlockInfoLUKS */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cipher-alg"), },
                { "type", QLIT_QSTR("467"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cipher-mode"), },
                { "type", QLIT_QSTR("468"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("ivgen-alg"), },
                { "type", QLIT_QSTR("469"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ivgen-hash-alg"), },
                { "type", QLIT_QSTR("470"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("hash-alg"), },
                { "type", QLIT_QSTR("470"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("payload-offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("master-key-iters"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("uuid"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("slots"), },
                { "type", QLIT_QSTR("[511]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("499"), },
        {}
    })),
    /* "500" = SshHostKeyCheckHashType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("500"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("md5"),
            QLIT_QSTR("sha1"),
            {}
        })), },
        {}
    })),
    /* "501" = QCryptoBlockFormat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("501"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("qcow"),
            QLIT_QSTR("luks"),
            {}
        })), },
        {}
    })),
    /* "502" = QCryptoBlockCreateOptionsLUKS */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("key-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cipher-alg"), },
                { "type", QLIT_QSTR("467"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cipher-mode"), },
                { "type", QLIT_QSTR("468"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ivgen-alg"), },
                { "type", QLIT_QSTR("469"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ivgen-hash-alg"), },
                { "type", QLIT_QSTR("470"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("hash-alg"), },
                { "type", QLIT_QSTR("470"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iter-time"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("502"), },
        {}
    })),
    /* "503" = SheepdogRedundancyType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("503"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("full"),
            QLIT_QSTR("erasure-coded"),
            {}
        })), },
        {}
    })),
    /* "504" = SheepdogRedundancyFull */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("copies"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("504"), },
        {}
    })),
    /* "505" = SheepdogRedundancyErasureCoded */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data-strips"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("parity-strips"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("505"), },
        {}
    })),
    /* "506" = InputButton */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("506"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("left"),
            QLIT_QSTR("middle"),
            QLIT_QSTR("right"),
            QLIT_QSTR("wheel-up"),
            QLIT_QSTR("wheel-down"),
            QLIT_QSTR("side"),
            QLIT_QSTR("extra"),
            {}
        })), },
        {}
    })),
    /* "507" = InputAxis */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("507"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("x"),
            QLIT_QSTR("y"),
            {}
        })), },
        {}
    })),
    /* "508" = PciMemoryRange */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("base"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("limit"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("508"), },
        {}
    })),
    /* "509" = ImageInfoSpecificQCow2Encryption */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("460"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("509"), },
        { "tag", QLIT_QSTR("format"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("luks"), },
                { "type", QLIT_QSTR("499"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("aes"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("510"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[510]"), },
        {}
    })),
    /* "510" = Qcow2BitmapInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("granularity"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("flags"), },
                { "type", QLIT_QSTR("[512]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("510"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("233"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[233]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("511"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[511]"), },
        {}
    })),
    /* "511" = QCryptoBlockInfoLUKSSlot */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("active"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iters"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("stripes"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("key-offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("511"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("512"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[512]"), },
        {}
    })),
    /* "512" = Qcow2BitmapInfoFlags */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("512"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("in-use"),
            QLIT_QSTR("auto"),
            {}
        })), },
        {}
    })),
    {}
}));

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_introspect_c;
