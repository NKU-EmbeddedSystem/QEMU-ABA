/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI visitors
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qapi/error.h"
#include "qapi/qmp/qerror.h"
#include "qapi-visit-migration.h"

void visit_type_MigrationStats_members(Visitor *v, MigrationStats *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_int(v, "transferred", &obj->transferred, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "remaining", &obj->remaining, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "total", &obj->total, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "duplicate", &obj->duplicate, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "skipped", &obj->skipped, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "normal", &obj->normal, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "normal-bytes", &obj->normal_bytes, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "dirty-pages-rate", &obj->dirty_pages_rate, &err);
    if (err) {
        goto out;
    }
    visit_type_number(v, "mbps", &obj->mbps, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "dirty-sync-count", &obj->dirty_sync_count, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "postcopy-requests", &obj->postcopy_requests, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "page-size", &obj->page_size, &err);
    if (err) {
        goto out;
    }
    visit_type_uint64(v, "multifd-bytes", &obj->multifd_bytes, &err);
    if (err) {
        goto out;
    }
    visit_type_uint64(v, "pages-per-second", &obj->pages_per_second, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_MigrationStats(Visitor *v, const char *name, MigrationStats **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(MigrationStats), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_MigrationStats_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_MigrationStats(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_XBZRLECacheStats_members(Visitor *v, XBZRLECacheStats *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_int(v, "cache-size", &obj->cache_size, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "bytes", &obj->bytes, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "pages", &obj->pages, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "cache-miss", &obj->cache_miss, &err);
    if (err) {
        goto out;
    }
    visit_type_number(v, "cache-miss-rate", &obj->cache_miss_rate, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "overflow", &obj->overflow, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_XBZRLECacheStats(Visitor *v, const char *name, XBZRLECacheStats **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(XBZRLECacheStats), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_XBZRLECacheStats_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_XBZRLECacheStats(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_CompressionStats_members(Visitor *v, CompressionStats *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_int(v, "pages", &obj->pages, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "busy", &obj->busy, &err);
    if (err) {
        goto out;
    }
    visit_type_number(v, "busy-rate", &obj->busy_rate, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "compressed-size", &obj->compressed_size, &err);
    if (err) {
        goto out;
    }
    visit_type_number(v, "compression-rate", &obj->compression_rate, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_CompressionStats(Visitor *v, const char *name, CompressionStats **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(CompressionStats), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_CompressionStats_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_CompressionStats(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_MigrationStatus(Visitor *v, const char *name, MigrationStatus *obj, Error **errp)
{
    int value = *obj;
    visit_type_enum(v, name, &value, &MigrationStatus_lookup, errp);
    *obj = value;
}

void visit_type_MigrationInfo_members(Visitor *v, MigrationInfo *obj, Error **errp)
{
    Error *err = NULL;

    if (visit_optional(v, "status", &obj->has_status)) {
        visit_type_MigrationStatus(v, "status", &obj->status, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "ram", &obj->has_ram)) {
        visit_type_MigrationStats(v, "ram", &obj->ram, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "disk", &obj->has_disk)) {
        visit_type_MigrationStats(v, "disk", &obj->disk, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "xbzrle-cache", &obj->has_xbzrle_cache)) {
        visit_type_XBZRLECacheStats(v, "xbzrle-cache", &obj->xbzrle_cache, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "total-time", &obj->has_total_time)) {
        visit_type_int(v, "total-time", &obj->total_time, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "expected-downtime", &obj->has_expected_downtime)) {
        visit_type_int(v, "expected-downtime", &obj->expected_downtime, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "downtime", &obj->has_downtime)) {
        visit_type_int(v, "downtime", &obj->downtime, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "setup-time", &obj->has_setup_time)) {
        visit_type_int(v, "setup-time", &obj->setup_time, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "cpu-throttle-percentage", &obj->has_cpu_throttle_percentage)) {
        visit_type_int(v, "cpu-throttle-percentage", &obj->cpu_throttle_percentage, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "error-desc", &obj->has_error_desc)) {
        visit_type_str(v, "error-desc", &obj->error_desc, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "postcopy-blocktime", &obj->has_postcopy_blocktime)) {
        visit_type_uint32(v, "postcopy-blocktime", &obj->postcopy_blocktime, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "postcopy-vcpu-blocktime", &obj->has_postcopy_vcpu_blocktime)) {
        visit_type_uint32List(v, "postcopy-vcpu-blocktime", &obj->postcopy_vcpu_blocktime, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "compression", &obj->has_compression)) {
        visit_type_CompressionStats(v, "compression", &obj->compression, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "socket-address", &obj->has_socket_address)) {
        visit_type_SocketAddressList(v, "socket-address", &obj->socket_address, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_MigrationInfo(Visitor *v, const char *name, MigrationInfo **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(MigrationInfo), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_MigrationInfo_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_MigrationInfo(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_MigrationCapability(Visitor *v, const char *name, MigrationCapability *obj, Error **errp)
{
    int value = *obj;
    visit_type_enum(v, name, &value, &MigrationCapability_lookup, errp);
    *obj = value;
}

void visit_type_MigrationCapabilityStatus_members(Visitor *v, MigrationCapabilityStatus *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_MigrationCapability(v, "capability", &obj->capability, &err);
    if (err) {
        goto out;
    }
    visit_type_bool(v, "state", &obj->state, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_MigrationCapabilityStatus(Visitor *v, const char *name, MigrationCapabilityStatus **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(MigrationCapabilityStatus), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_MigrationCapabilityStatus_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_MigrationCapabilityStatus(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_MigrationCapabilityStatusList(Visitor *v, const char *name, MigrationCapabilityStatusList **obj, Error **errp)
{
    Error *err = NULL;
    MigrationCapabilityStatusList *tail;
    size_t size = sizeof(**obj);

    visit_start_list(v, name, (GenericList **)obj, size, &err);
    if (err) {
        goto out;
    }

    for (tail = *obj; tail;
         tail = (MigrationCapabilityStatusList *)visit_next_list(v, (GenericList *)tail, size)) {
        visit_type_MigrationCapabilityStatus(v, NULL, &tail->value, &err);
        if (err) {
            break;
        }
    }

    if (!err) {
        visit_check_list(v, &err);
    }
    visit_end_list(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_MigrationCapabilityStatusList(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_q_obj_migrate_set_capabilities_arg_members(Visitor *v, q_obj_migrate_set_capabilities_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_MigrationCapabilityStatusList(v, "capabilities", &obj->capabilities, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_MigrationParameter(Visitor *v, const char *name, MigrationParameter *obj, Error **errp)
{
    int value = *obj;
    visit_type_enum(v, name, &value, &MigrationParameter_lookup, errp);
    *obj = value;
}

void visit_type_MigrateSetParameters_members(Visitor *v, MigrateSetParameters *obj, Error **errp)
{
    Error *err = NULL;

    if (visit_optional(v, "announce-initial", &obj->has_announce_initial)) {
        visit_type_size(v, "announce-initial", &obj->announce_initial, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "announce-max", &obj->has_announce_max)) {
        visit_type_size(v, "announce-max", &obj->announce_max, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "announce-rounds", &obj->has_announce_rounds)) {
        visit_type_size(v, "announce-rounds", &obj->announce_rounds, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "announce-step", &obj->has_announce_step)) {
        visit_type_size(v, "announce-step", &obj->announce_step, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "compress-level", &obj->has_compress_level)) {
        visit_type_int(v, "compress-level", &obj->compress_level, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "compress-threads", &obj->has_compress_threads)) {
        visit_type_int(v, "compress-threads", &obj->compress_threads, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "compress-wait-thread", &obj->has_compress_wait_thread)) {
        visit_type_bool(v, "compress-wait-thread", &obj->compress_wait_thread, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "decompress-threads", &obj->has_decompress_threads)) {
        visit_type_int(v, "decompress-threads", &obj->decompress_threads, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "cpu-throttle-initial", &obj->has_cpu_throttle_initial)) {
        visit_type_int(v, "cpu-throttle-initial", &obj->cpu_throttle_initial, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "cpu-throttle-increment", &obj->has_cpu_throttle_increment)) {
        visit_type_int(v, "cpu-throttle-increment", &obj->cpu_throttle_increment, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "tls-creds", &obj->has_tls_creds)) {
        visit_type_StrOrNull(v, "tls-creds", &obj->tls_creds, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "tls-hostname", &obj->has_tls_hostname)) {
        visit_type_StrOrNull(v, "tls-hostname", &obj->tls_hostname, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "tls-authz", &obj->has_tls_authz)) {
        visit_type_StrOrNull(v, "tls-authz", &obj->tls_authz, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "max-bandwidth", &obj->has_max_bandwidth)) {
        visit_type_int(v, "max-bandwidth", &obj->max_bandwidth, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "downtime-limit", &obj->has_downtime_limit)) {
        visit_type_int(v, "downtime-limit", &obj->downtime_limit, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "x-checkpoint-delay", &obj->has_x_checkpoint_delay)) {
        visit_type_int(v, "x-checkpoint-delay", &obj->x_checkpoint_delay, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "block-incremental", &obj->has_block_incremental)) {
        visit_type_bool(v, "block-incremental", &obj->block_incremental, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "multifd-channels", &obj->has_multifd_channels)) {
        visit_type_int(v, "multifd-channels", &obj->multifd_channels, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "xbzrle-cache-size", &obj->has_xbzrle_cache_size)) {
        visit_type_size(v, "xbzrle-cache-size", &obj->xbzrle_cache_size, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "max-postcopy-bandwidth", &obj->has_max_postcopy_bandwidth)) {
        visit_type_size(v, "max-postcopy-bandwidth", &obj->max_postcopy_bandwidth, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "max-cpu-throttle", &obj->has_max_cpu_throttle)) {
        visit_type_int(v, "max-cpu-throttle", &obj->max_cpu_throttle, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_MigrateSetParameters(Visitor *v, const char *name, MigrateSetParameters **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(MigrateSetParameters), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_MigrateSetParameters_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_MigrateSetParameters(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_MigrationParameters_members(Visitor *v, MigrationParameters *obj, Error **errp)
{
    Error *err = NULL;

    if (visit_optional(v, "announce-initial", &obj->has_announce_initial)) {
        visit_type_size(v, "announce-initial", &obj->announce_initial, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "announce-max", &obj->has_announce_max)) {
        visit_type_size(v, "announce-max", &obj->announce_max, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "announce-rounds", &obj->has_announce_rounds)) {
        visit_type_size(v, "announce-rounds", &obj->announce_rounds, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "announce-step", &obj->has_announce_step)) {
        visit_type_size(v, "announce-step", &obj->announce_step, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "compress-level", &obj->has_compress_level)) {
        visit_type_uint8(v, "compress-level", &obj->compress_level, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "compress-threads", &obj->has_compress_threads)) {
        visit_type_uint8(v, "compress-threads", &obj->compress_threads, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "compress-wait-thread", &obj->has_compress_wait_thread)) {
        visit_type_bool(v, "compress-wait-thread", &obj->compress_wait_thread, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "decompress-threads", &obj->has_decompress_threads)) {
        visit_type_uint8(v, "decompress-threads", &obj->decompress_threads, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "cpu-throttle-initial", &obj->has_cpu_throttle_initial)) {
        visit_type_uint8(v, "cpu-throttle-initial", &obj->cpu_throttle_initial, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "cpu-throttle-increment", &obj->has_cpu_throttle_increment)) {
        visit_type_uint8(v, "cpu-throttle-increment", &obj->cpu_throttle_increment, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "tls-creds", &obj->has_tls_creds)) {
        visit_type_str(v, "tls-creds", &obj->tls_creds, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "tls-hostname", &obj->has_tls_hostname)) {
        visit_type_str(v, "tls-hostname", &obj->tls_hostname, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "tls-authz", &obj->has_tls_authz)) {
        visit_type_str(v, "tls-authz", &obj->tls_authz, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "max-bandwidth", &obj->has_max_bandwidth)) {
        visit_type_size(v, "max-bandwidth", &obj->max_bandwidth, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "downtime-limit", &obj->has_downtime_limit)) {
        visit_type_uint64(v, "downtime-limit", &obj->downtime_limit, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "x-checkpoint-delay", &obj->has_x_checkpoint_delay)) {
        visit_type_uint32(v, "x-checkpoint-delay", &obj->x_checkpoint_delay, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "block-incremental", &obj->has_block_incremental)) {
        visit_type_bool(v, "block-incremental", &obj->block_incremental, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "multifd-channels", &obj->has_multifd_channels)) {
        visit_type_uint8(v, "multifd-channels", &obj->multifd_channels, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "xbzrle-cache-size", &obj->has_xbzrle_cache_size)) {
        visit_type_size(v, "xbzrle-cache-size", &obj->xbzrle_cache_size, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "max-postcopy-bandwidth", &obj->has_max_postcopy_bandwidth)) {
        visit_type_size(v, "max-postcopy-bandwidth", &obj->max_postcopy_bandwidth, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "max-cpu-throttle", &obj->has_max_cpu_throttle)) {
        visit_type_uint8(v, "max-cpu-throttle", &obj->max_cpu_throttle, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_MigrationParameters(Visitor *v, const char *name, MigrationParameters **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(MigrationParameters), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_MigrationParameters_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_MigrationParameters(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_q_obj_client_migrate_info_arg_members(Visitor *v, q_obj_client_migrate_info_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_str(v, "protocol", &obj->protocol, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "hostname", &obj->hostname, &err);
    if (err) {
        goto out;
    }
    if (visit_optional(v, "port", &obj->has_port)) {
        visit_type_int(v, "port", &obj->port, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "tls-port", &obj->has_tls_port)) {
        visit_type_int(v, "tls-port", &obj->tls_port, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "cert-subject", &obj->has_cert_subject)) {
        visit_type_str(v, "cert-subject", &obj->cert_subject, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_q_obj_MIGRATION_arg_members(Visitor *v, q_obj_MIGRATION_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_MigrationStatus(v, "status", &obj->status, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_q_obj_MIGRATION_PASS_arg_members(Visitor *v, q_obj_MIGRATION_PASS_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_int(v, "pass", &obj->pass, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_COLOMessage(Visitor *v, const char *name, COLOMessage *obj, Error **errp)
{
    int value = *obj;
    visit_type_enum(v, name, &value, &COLOMessage_lookup, errp);
    *obj = value;
}

void visit_type_COLOMode(Visitor *v, const char *name, COLOMode *obj, Error **errp)
{
    int value = *obj;
    visit_type_enum(v, name, &value, &COLOMode_lookup, errp);
    *obj = value;
}

void visit_type_FailoverStatus(Visitor *v, const char *name, FailoverStatus *obj, Error **errp)
{
    int value = *obj;
    visit_type_enum(v, name, &value, &FailoverStatus_lookup, errp);
    *obj = value;
}

void visit_type_q_obj_COLO_EXIT_arg_members(Visitor *v, q_obj_COLO_EXIT_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_COLOMode(v, "mode", &obj->mode, &err);
    if (err) {
        goto out;
    }
    visit_type_COLOExitReason(v, "reason", &obj->reason, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_COLOExitReason(Visitor *v, const char *name, COLOExitReason *obj, Error **errp)
{
    int value = *obj;
    visit_type_enum(v, name, &value, &COLOExitReason_lookup, errp);
    *obj = value;
}

void visit_type_q_obj_migrate_continue_arg_members(Visitor *v, q_obj_migrate_continue_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_MigrationStatus(v, "state", &obj->state, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_q_obj_migrate_set_downtime_arg_members(Visitor *v, q_obj_migrate_set_downtime_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_number(v, "value", &obj->value, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_q_obj_migrate_set_speed_arg_members(Visitor *v, q_obj_migrate_set_speed_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_int(v, "value", &obj->value, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_q_obj_migrate_set_cache_size_arg_members(Visitor *v, q_obj_migrate_set_cache_size_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_int(v, "value", &obj->value, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_q_obj_migrate_arg_members(Visitor *v, q_obj_migrate_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_str(v, "uri", &obj->uri, &err);
    if (err) {
        goto out;
    }
    if (visit_optional(v, "blk", &obj->has_blk)) {
        visit_type_bool(v, "blk", &obj->blk, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "inc", &obj->has_inc)) {
        visit_type_bool(v, "inc", &obj->inc, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "detach", &obj->has_detach)) {
        visit_type_bool(v, "detach", &obj->detach, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "resume", &obj->has_resume)) {
        visit_type_bool(v, "resume", &obj->resume, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_q_obj_migrate_incoming_arg_members(Visitor *v, q_obj_migrate_incoming_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_str(v, "uri", &obj->uri, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_q_obj_xen_save_devices_state_arg_members(Visitor *v, q_obj_xen_save_devices_state_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_str(v, "filename", &obj->filename, &err);
    if (err) {
        goto out;
    }
    if (visit_optional(v, "live", &obj->has_live)) {
        visit_type_bool(v, "live", &obj->live, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

#if defined(CONFIG_REPLICATION)
void visit_type_q_obj_xen_set_replication_arg_members(Visitor *v, q_obj_xen_set_replication_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_bool(v, "enable", &obj->enable, &err);
    if (err) {
        goto out;
    }
    visit_type_bool(v, "primary", &obj->primary, &err);
    if (err) {
        goto out;
    }
    if (visit_optional(v, "failover", &obj->has_failover)) {
        visit_type_bool(v, "failover", &obj->failover, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}
#endif /* defined(CONFIG_REPLICATION) */

#if defined(CONFIG_REPLICATION)
void visit_type_ReplicationStatus_members(Visitor *v, ReplicationStatus *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_bool(v, "error", &obj->error, &err);
    if (err) {
        goto out;
    }
    if (visit_optional(v, "desc", &obj->has_desc)) {
        visit_type_str(v, "desc", &obj->desc, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_ReplicationStatus(Visitor *v, const char *name, ReplicationStatus **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(ReplicationStatus), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_ReplicationStatus_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_ReplicationStatus(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}
#endif /* defined(CONFIG_REPLICATION) */

void visit_type_COLOStatus_members(Visitor *v, COLOStatus *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_COLOMode(v, "mode", &obj->mode, &err);
    if (err) {
        goto out;
    }
    visit_type_COLOMode(v, "last-mode", &obj->last_mode, &err);
    if (err) {
        goto out;
    }
    visit_type_COLOExitReason(v, "reason", &obj->reason, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_COLOStatus(Visitor *v, const char *name, COLOStatus **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(COLOStatus), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_COLOStatus_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_COLOStatus(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_q_obj_migrate_recover_arg_members(Visitor *v, q_obj_migrate_recover_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_str(v, "uri", &obj->uri, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_migration_c;
