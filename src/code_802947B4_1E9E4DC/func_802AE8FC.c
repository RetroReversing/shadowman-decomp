#include "common.h"

/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void *func_80103878(s32, s32, s32);     /* extern */
s32 func_802A6508(void *, s32);             /* extern */
s32 func_802A7CD4();                            /* extern */

typedef struct { unsigned char pad_0[12]; void * field_C; unsigned char pad_10[16]; float field_20; unsigned char pad_24[16]; int field_34; unsigned char pad_38[25]; signed char field_51; } __repair_record_arg0;
void func_802AE8FC(void *arg0) {
    register void *temp_v0;

    func_802A7CD4();
    ((__repair_record_arg0*)arg0)->field_34 = 0;
    ((__repair_record_arg0*)arg0)->field_20 = (f32) *(f32 *)0x216748;
    ((__repair_record_arg0*)arg0)->field_51 = 0;
    temp_v0 = func_80103878(0x9C, 2, 0);
    ((__repair_record_arg0*)arg0)->field_C = temp_v0;
    if (temp_v0 != (unsigned)NULL) {
        (*(s32 *)((char *)(temp_v0) + 0)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x98)) = 0;
        func_802A6508(arg0, 0x20);
    }
}
