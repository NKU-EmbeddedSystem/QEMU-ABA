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
#include "qapi-visit-trace.h"
#include "qapi-commands-trace.h"


static void qmp_marshal_output_TraceEventInfoList(TraceEventInfoList *ret_in, QObject **ret_out, Error **errp)
{
    Error *err = NULL;
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    visit_type_TraceEventInfoList(v, "unused", &ret_in, &err);
    if (!err) {
        visit_complete(v, ret_out);
    }
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_TraceEventInfoList(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_trace_event_get_state(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    TraceEventInfoList *retval;
    Visitor *v;
    q_obj_trace_event_get_state_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_trace_event_get_state_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    retval = qmp_trace_event_get_state(arg.name, arg.has_vcpu, arg.vcpu, &err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_TraceEventInfoList(retval, ret, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_trace_event_get_state_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_trace_event_set_state(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    Visitor *v;
    q_obj_trace_event_set_state_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    visit_start_struct(v, NULL, NULL, 0, &err);
    if (err) {
        goto out;
    }
    visit_type_q_obj_trace_event_set_state_arg_members(v, &arg, &err);
    if (!err) {
        visit_check_struct(v, &err);
    }
    visit_end_struct(v, NULL);
    if (err) {
        goto out;
    }

    qmp_trace_event_set_state(arg.name, arg.enable, arg.has_ignore_unavailable, arg.ignore_unavailable, arg.has_vcpu, arg.vcpu, &err);

out:
    error_propagate(errp, err);
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_trace_event_set_state_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_commands_trace_c;
