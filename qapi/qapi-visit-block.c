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
#include "qapi-visit-block.h"

void visit_type_BiosAtaTranslation(Visitor *v, const char *name, BiosAtaTranslation *obj, Error **errp)
{
    int value = *obj;
    visit_type_enum(v, name, &value, &BiosAtaTranslation_lookup, errp);
    *obj = value;
}

void visit_type_FloppyDriveType(Visitor *v, const char *name, FloppyDriveType *obj, Error **errp)
{
    int value = *obj;
    visit_type_enum(v, name, &value, &FloppyDriveType_lookup, errp);
    *obj = value;
}

void visit_type_BlockdevSnapshotInternal_members(Visitor *v, BlockdevSnapshotInternal *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_str(v, "device", &obj->device, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "name", &obj->name, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockdevSnapshotInternal(Visitor *v, const char *name, BlockdevSnapshotInternal **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(BlockdevSnapshotInternal), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_BlockdevSnapshotInternal_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_BlockdevSnapshotInternal(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_PRManagerInfo_members(Visitor *v, PRManagerInfo *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_str(v, "id", &obj->id, &err);
    if (err) {
        goto out;
    }
    visit_type_bool(v, "connected", &obj->connected, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_PRManagerInfo(Visitor *v, const char *name, PRManagerInfo **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(v, name, (void **)obj, sizeof(PRManagerInfo), &err);
    if (err) {
        goto out;
    }
    if (!*obj) {
        goto out_obj;
    }
    visit_type_PRManagerInfo_members(v, *obj, &err);
    if (err) {
        goto out_obj;
    }
    visit_check_struct(v, &err);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_PRManagerInfo(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_PRManagerInfoList(Visitor *v, const char *name, PRManagerInfoList **obj, Error **errp)
{
    Error *err = NULL;
    PRManagerInfoList *tail;
    size_t size = sizeof(**obj);

    visit_start_list(v, name, (GenericList **)obj, size, &err);
    if (err) {
        goto out;
    }

    for (tail = *obj; tail;
         tail = (PRManagerInfoList *)visit_next_list(v, (GenericList *)tail, size)) {
        visit_type_PRManagerInfo(v, NULL, &tail->value, &err);
        if (err) {
            break;
        }
    }

    if (!err) {
        visit_check_list(v, &err);
    }
    visit_end_list(v, (void **)obj);
    if (err && visit_is_input(v)) {
        qapi_free_PRManagerInfoList(*obj);
        *obj = NULL;
    }
out:
    error_propagate(errp, err);
}

void visit_type_q_obj_blockdev_snapshot_delete_internal_sync_arg_members(Visitor *v, q_obj_blockdev_snapshot_delete_internal_sync_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_str(v, "device", &obj->device, &err);
    if (err) {
        goto out;
    }
    if (visit_optional(v, "id", &obj->has_id)) {
        visit_type_str(v, "id", &obj->id, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "name", &obj->has_name)) {
        visit_type_str(v, "name", &obj->name, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_q_obj_eject_arg_members(Visitor *v, q_obj_eject_arg *obj, Error **errp)
{
    Error *err = NULL;

    if (visit_optional(v, "device", &obj->has_device)) {
        visit_type_str(v, "device", &obj->device, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "id", &obj->has_id)) {
        visit_type_str(v, "id", &obj->id, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "force", &obj->has_force)) {
        visit_type_bool(v, "force", &obj->force, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_q_obj_nbd_server_start_arg_members(Visitor *v, q_obj_nbd_server_start_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_SocketAddressLegacy(v, "addr", &obj->addr, &err);
    if (err) {
        goto out;
    }
    if (visit_optional(v, "tls-creds", &obj->has_tls_creds)) {
        visit_type_str(v, "tls-creds", &obj->tls_creds, &err);
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

out:
    error_propagate(errp, err);
}

void visit_type_q_obj_nbd_server_add_arg_members(Visitor *v, q_obj_nbd_server_add_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_str(v, "device", &obj->device, &err);
    if (err) {
        goto out;
    }
    if (visit_optional(v, "name", &obj->has_name)) {
        visit_type_str(v, "name", &obj->name, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "writable", &obj->has_writable)) {
        visit_type_bool(v, "writable", &obj->writable, &err);
        if (err) {
            goto out;
        }
    }
    if (visit_optional(v, "bitmap", &obj->has_bitmap)) {
        visit_type_str(v, "bitmap", &obj->bitmap, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_NbdServerRemoveMode(Visitor *v, const char *name, NbdServerRemoveMode *obj, Error **errp)
{
    int value = *obj;
    visit_type_enum(v, name, &value, &NbdServerRemoveMode_lookup, errp);
    *obj = value;
}

void visit_type_q_obj_nbd_server_remove_arg_members(Visitor *v, q_obj_nbd_server_remove_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_str(v, "name", &obj->name, &err);
    if (err) {
        goto out;
    }
    if (visit_optional(v, "mode", &obj->has_mode)) {
        visit_type_NbdServerRemoveMode(v, "mode", &obj->mode, &err);
        if (err) {
            goto out;
        }
    }

out:
    error_propagate(errp, err);
}

void visit_type_q_obj_DEVICE_TRAY_MOVED_arg_members(Visitor *v, q_obj_DEVICE_TRAY_MOVED_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_str(v, "device", &obj->device, &err);
    if (err) {
        goto out;
    }
    visit_type_str(v, "id", &obj->id, &err);
    if (err) {
        goto out;
    }
    visit_type_bool(v, "tray-open", &obj->tray_open, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_q_obj_PR_MANAGER_STATUS_CHANGED_arg_members(Visitor *v, q_obj_PR_MANAGER_STATUS_CHANGED_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_str(v, "id", &obj->id, &err);
    if (err) {
        goto out;
    }
    visit_type_bool(v, "connected", &obj->connected, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_QuorumOpType(Visitor *v, const char *name, QuorumOpType *obj, Error **errp)
{
    int value = *obj;
    visit_type_enum(v, name, &value, &QuorumOpType_lookup, errp);
    *obj = value;
}

void visit_type_q_obj_QUORUM_FAILURE_arg_members(Visitor *v, q_obj_QUORUM_FAILURE_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_str(v, "reference", &obj->reference, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "sector-num", &obj->sector_num, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "sectors-count", &obj->sectors_count, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_q_obj_QUORUM_REPORT_BAD_arg_members(Visitor *v, q_obj_QUORUM_REPORT_BAD_arg *obj, Error **errp)
{
    Error *err = NULL;

    visit_type_QuorumOpType(v, "type", &obj->type, &err);
    if (err) {
        goto out;
    }
    if (visit_optional(v, "error", &obj->has_error)) {
        visit_type_str(v, "error", &obj->error, &err);
        if (err) {
            goto out;
        }
    }
    visit_type_str(v, "node-name", &obj->node_name, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "sector-num", &obj->sector_num, &err);
    if (err) {
        goto out;
    }
    visit_type_int(v, "sectors-count", &obj->sectors_count, &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_block_c;
