/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI types
 *
 * Copyright IBM, Corp. 2011
 * Copyright (c) 2013-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qapi/dealloc-visitor.h"
#include "qapi-types-machine.h"
#include "qapi-visit-machine.h"

const QEnumLookup CpuInfoArch_lookup = {
    .array = (const char *const[]) {
        [CPU_INFO_ARCH_X86] = "x86",
        [CPU_INFO_ARCH_SPARC] = "sparc",
        [CPU_INFO_ARCH_PPC] = "ppc",
        [CPU_INFO_ARCH_MIPS] = "mips",
        [CPU_INFO_ARCH_TRICORE] = "tricore",
        [CPU_INFO_ARCH_S390] = "s390",
        [CPU_INFO_ARCH_RISCV] = "riscv",
        [CPU_INFO_ARCH_OTHER] = "other",
    },
    .size = CPU_INFO_ARCH__MAX
};

void qapi_free_CpuInfo(CpuInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CpuInfoX86(CpuInfoX86 *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuInfoX86(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CpuInfoSPARC(CpuInfoSPARC *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuInfoSPARC(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CpuInfoPPC(CpuInfoPPC *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuInfoPPC(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CpuInfoMIPS(CpuInfoMIPS *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuInfoMIPS(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CpuInfoTricore(CpuInfoTricore *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuInfoTricore(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CpuInfoRISCV(CpuInfoRISCV *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuInfoRISCV(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup CpuS390State_lookup = {
    .array = (const char *const[]) {
        [S390_CPU_STATE_UNINITIALIZED] = "uninitialized",
        [S390_CPU_STATE_STOPPED] = "stopped",
        [S390_CPU_STATE_CHECK_STOP] = "check-stop",
        [S390_CPU_STATE_OPERATING] = "operating",
        [S390_CPU_STATE_LOAD] = "load",
    },
    .size = S390_CPU_STATE__MAX
};

void qapi_free_CpuInfoS390(CpuInfoS390 *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuInfoS390(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CpuInfoList(CpuInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CpuInfoFast(CpuInfoFast *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuInfoFast(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CpuInfoFastList(CpuInfoFastList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuInfoFastList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MachineInfo(MachineInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MachineInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MachineInfoList(MachineInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MachineInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CurrentMachineParams(CurrentMachineParams *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CurrentMachineParams(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup NumaOptionsType_lookup = {
    .array = (const char *const[]) {
        [NUMA_OPTIONS_TYPE_NODE] = "node",
        [NUMA_OPTIONS_TYPE_DIST] = "dist",
        [NUMA_OPTIONS_TYPE_CPU] = "cpu",
    },
    .size = NUMA_OPTIONS_TYPE__MAX
};

void qapi_free_NumaOptions(NumaOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NumaOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NumaNodeOptions(NumaNodeOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NumaNodeOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NumaDistOptions(NumaDistOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NumaDistOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup X86CPURegister32_lookup = {
    .array = (const char *const[]) {
        [X86_CPU_REGISTER32_EAX] = "EAX",
        [X86_CPU_REGISTER32_EBX] = "EBX",
        [X86_CPU_REGISTER32_ECX] = "ECX",
        [X86_CPU_REGISTER32_EDX] = "EDX",
        [X86_CPU_REGISTER32_ESP] = "ESP",
        [X86_CPU_REGISTER32_EBP] = "EBP",
        [X86_CPU_REGISTER32_ESI] = "ESI",
        [X86_CPU_REGISTER32_EDI] = "EDI",
    },
    .size = X86_CPU_REGISTER32__MAX
};

void qapi_free_X86CPUFeatureWordInfo(X86CPUFeatureWordInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_X86CPUFeatureWordInfo(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_X86CPUFeatureWordInfoList(X86CPUFeatureWordInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_X86CPUFeatureWordInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_DummyForceArrays(DummyForceArrays *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_DummyForceArrays(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_NumaCpuOptions(NumaCpuOptions *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_NumaCpuOptions(v, NULL, &obj, NULL);
    visit_free(v);
}

const QEnumLookup HostMemPolicy_lookup = {
    .array = (const char *const[]) {
        [HOST_MEM_POLICY_DEFAULT] = "default",
        [HOST_MEM_POLICY_PREFERRED] = "preferred",
        [HOST_MEM_POLICY_BIND] = "bind",
        [HOST_MEM_POLICY_INTERLEAVE] = "interleave",
    },
    .size = HOST_MEM_POLICY__MAX
};

void qapi_free_Memdev(Memdev *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_Memdev(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_MemdevList(MemdevList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_MemdevList(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_CpuInstanceProperties(CpuInstanceProperties *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuInstanceProperties(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_HotpluggableCPU(HotpluggableCPU *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_HotpluggableCPU(v, NULL, &obj, NULL);
    visit_free(v);
}

void qapi_free_HotpluggableCPUList(HotpluggableCPUList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_HotpluggableCPUList(v, NULL, &obj, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_machine_c;
