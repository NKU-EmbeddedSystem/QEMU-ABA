/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP commands
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qapi/visitor.h"
#include "qapi/qmp/qdict.h"
#include "qapi/qobject-output-visitor.h"
#include "qapi/qobject-input-visitor.h"
#include "qapi/dealloc-visitor.h"
#include "qapi/error.h"
#include "qapi-visit-misc.h"
#include "qapi-commands-misc.h"


void qmp_marshal_qmp_capabilities(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v;
    q_obj_qmp_capabilities_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_qmp_capabilities_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    qmp_qmp_capabilities(arg.has_enable, arg.enable, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_qmp_capabilities_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_VersionInfo(VersionInfo *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_VersionInfo(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_VersionInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_version(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    VersionInfo *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_version(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_VersionInfo(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

static void qmp_marshal_output_CommandInfoList(CommandInfoList *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_CommandInfoList(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_CommandInfoList(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_commands(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    CommandInfoList *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_commands(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_CommandInfoList(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

void qmp_marshal_add_client(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v;
    q_obj_add_client_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_add_client_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    qmp_add_client(arg.protocol, arg.fdname, arg.has_skipauth, arg.skipauth, arg.has_tls, arg.tls, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_add_client_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_NameInfo(NameInfo *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_NameInfo(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_NameInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_name(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    NameInfo *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_name(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_NameInfo(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

static void qmp_marshal_output_KvmInfo(KvmInfo *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_KvmInfo(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_KvmInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_kvm(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    KvmInfo *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_kvm(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_KvmInfo(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

static void qmp_marshal_output_UuidInfo(UuidInfo *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_UuidInfo(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_UuidInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_uuid(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    UuidInfo *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_uuid(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_UuidInfo(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

static void qmp_marshal_output_EventInfoList(EventInfoList *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_EventInfoList(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_EventInfoList(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_events(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    EventInfoList *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_events(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_EventInfoList(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

static void qmp_marshal_output_IOThreadInfoList(IOThreadInfoList *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_IOThreadInfoList(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_IOThreadInfoList(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_iothreads(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    IOThreadInfoList *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_iothreads(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_IOThreadInfoList(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

static void qmp_marshal_output_BalloonInfo(BalloonInfo *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_BalloonInfo(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_BalloonInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_balloon(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    BalloonInfo *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_balloon(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_BalloonInfo(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

static void qmp_marshal_output_PciInfoList(PciInfoList *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_PciInfoList(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_PciInfoList(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_pci(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    PciInfoList *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_pci(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_PciInfoList(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

void qmp_marshal_quit(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    qmp_quit(&err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

void qmp_marshal_stop(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    qmp_stop(&err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

void qmp_marshal_system_reset(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    qmp_system_reset(&err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

void qmp_marshal_system_powerdown(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    qmp_system_powerdown(&err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

void qmp_marshal_memsave(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v;
    q_obj_memsave_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_memsave_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    qmp_memsave(arg.val, arg.size, arg.filename, arg.has_cpu_index, arg.cpu_index, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_memsave_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_pmemsave(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v;
    q_obj_pmemsave_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_pmemsave_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    qmp_pmemsave(arg.val, arg.size, arg.filename, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_pmemsave_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_cont(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    qmp_cont(&err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

void qmp_marshal_x_exit_preconfig(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    qmp_x_exit_preconfig(&err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

void qmp_marshal_system_wakeup(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    qmp_system_wakeup(&err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

void qmp_marshal_inject_nmi(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    qmp_inject_nmi(&err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

void qmp_marshal_balloon(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v;
    q_obj_balloon_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_balloon_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    qmp_balloon(arg.value, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_balloon_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_str(char *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_str(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_str(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_human_monitor_command(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    char *retval;
    Visitor *v;
    q_obj_human_monitor_command_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_human_monitor_command_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    retval = qmp_human_monitor_command(arg.command_line, arg.has_cpu_index, arg.cpu_index, &err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_str(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_human_monitor_command_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_change(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v;
    q_obj_change_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_change_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    qmp_change(arg.device, arg.target, arg.has_arg, arg.arg, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_change_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_xen_set_global_dirty_log(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v;
    q_obj_xen_set_global_dirty_log_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_xen_set_global_dirty_log_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    qmp_xen_set_global_dirty_log(arg.enable, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_xen_set_global_dirty_log_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_getfd(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v;
    q_obj_getfd_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_getfd_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    qmp_getfd(arg.fdname, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_getfd_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_closefd(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v;
    q_obj_closefd_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_closefd_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    qmp_closefd(arg.fdname, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_closefd_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_MemoryInfo(MemoryInfo *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_MemoryInfo(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_MemoryInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_memory_size_summary(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    MemoryInfo *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_memory_size_summary(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_MemoryInfo(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

static void qmp_marshal_output_AddfdInfo(AddfdInfo *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_AddfdInfo(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_AddfdInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_add_fd(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    AddfdInfo *retval;
    Visitor *v;
    q_obj_add_fd_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_add_fd_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    retval = qmp_add_fd(arg.has_fdset_id, arg.fdset_id, arg.has_opaque, arg.opaque, &err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_AddfdInfo(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_add_fd_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_remove_fd(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v;
    q_obj_remove_fd_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_remove_fd_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    qmp_remove_fd(arg.fdset_id, arg.has_fd, arg.fd, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_remove_fd_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_FdsetInfoList(FdsetInfoList *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_FdsetInfoList(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_FdsetInfoList(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_fdsets(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    FdsetInfoList *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_fdsets(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_FdsetInfoList(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

static void qmp_marshal_output_TargetInfo(TargetInfo *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_TargetInfo(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_TargetInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_target(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    TargetInfo *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_target(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_TargetInfo(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

static void qmp_marshal_output_CommandLineOptionInfoList(CommandLineOptionInfoList *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_CommandLineOptionInfoList(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_CommandLineOptionInfoList(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_command_line_options(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    CommandLineOptionInfoList *retval;
    Visitor *v;
    q_obj_query_command_line_options_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_query_command_line_options_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    retval = qmp_query_command_line_options(arg.has_option, arg.option, &err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_CommandLineOptionInfoList(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_query_command_line_options_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_MemoryDeviceInfoList(MemoryDeviceInfoList *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_MemoryDeviceInfoList(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_MemoryDeviceInfoList(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_memory_devices(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    MemoryDeviceInfoList *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_memory_devices(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_MemoryDeviceInfoList(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

static void qmp_marshal_output_ACPIOSTInfoList(ACPIOSTInfoList *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_ACPIOSTInfoList(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_ACPIOSTInfoList(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_acpi_ospm_status(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    ACPIOSTInfoList *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_acpi_ospm_status(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_ACPIOSTInfoList(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

void qmp_marshal_xen_load_devices_state(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v;
    q_obj_xen_load_devices_state_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_xen_load_devices_state_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    qmp_xen_load_devices_state(arg.filename, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_xen_load_devices_state_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_GuidInfo(GuidInfo *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_GuidInfo(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_GuidInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_vm_generation_id(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    GuidInfo *retval;
    Visitor *v = NULL;

    if (args) {
        v = qobject_input_visitor_new(QOBJECT(args));
        visit_start_struct(v, NULL, NULL, 0, &err);
        if (err) {
            goto out;
        }
        
        if (!err) {
            visit_check_struct(v, &err);
        }
        visit_end_struct(v, NULL);
        if (err) {
            goto out;
        }
    }

    retval = qmp_query_vm_generation_id(&err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_GuidInfo(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    if (args) {
        v = qapi_dealloc_visitor_new();
        visit_start_struct(v, NULL, NULL, 0, NULL);
        
        visit_end_struct(v, NULL);
        visit_free(v);
    }
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_commands_misc_c;
