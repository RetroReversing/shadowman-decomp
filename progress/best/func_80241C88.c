/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_8006A5B0;

void func_80241C88(void *arg0, s32 arg1, void *arg2) {
    f32 __repair_store_0;
    f32 __repair_store_1;
    f32 __repair_store_2;
    f32 __repair_store_3;
    f32 __repair_store_4;
    f32 __repair_store_5;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1f;

    temp_fv1f = (*(f32 *)((char *)(arg2) + 0xC));
    temp_fv0 = (*(f32 *)((char *)(arg2) + 0x18));
    temp_ft1 = (*(f32 *)((char *)(arg2) + 0x14));
    (*(f32 *)((char *)(arg2) + 0x84)) = (f32) (*(f32 *)((char *)(arg2) + 0x10));
    (*(f32 *)((char *)(arg2) + 0x80)) = temp_fv1f;
    (*(f32 *)((char *)(arg2) + 0x88)) = temp_ft1;
    (*(f32 *)((char *)(arg2) + 0x28)) = (f32) ((*(f32 *)((char *)(arg2) + 0)) - temp_fv0);
    (*(f32 *)((char *)(arg2) + 0x2C)) = (f32) ((*(f32 *)((char *)(arg2) + 4)) - temp_fv0);
    (*(f32 *)((char *)(arg2) + 0x30)) = (f32) ((*(f32 *)((char *)(arg2) + 8)) - temp_fv0);
    (*(f32 *)((char *)(arg2) + 0x40)) = (f32) (temp_fv1f - ((*(f32 *)((char *)(arg2) + 0x18))));
    (*(f32 *)((char *)(arg2) + 0x48)) = (f32) (temp_ft1 - temp_fv0);
    (*(f32 *)((char *)(arg2) + 0x34)) = (f32) ((*(f32 *)((char *)(arg2) + 0)) + temp_fv0);
    (*(f32 *)((char *)(arg2) + 0x44)) = (f32) ((*(f32 *)((char *)(arg2) + 0x10)) - temp_fv0);
    (*(f32 *)((char *)(arg2) + 0x38)) = (f32) ((*(f32 *)((char *)(arg2) + 4)) + temp_fv0);
    (*(f32 *)((char *)(arg2) + 0x3C)) = (f32) ((*(f32 *)((char *)(arg2) + 8)) + temp_fv0);
    (*(f32 *)((char *)(arg2) + 0x4C)) = (f32) ((*(f32 *)((char *)(arg2) + 0xC)) + temp_fv0);
    temp_fv0_2 = *(f32 *)0x2027A8;
    __repair_store_0 = (f32) ((*(f32 *)((char *)(arg2) + 0x10)) + temp_fv0);
    __repair_store_1 = (f32) ((*(f32 *)((char *)(arg2) + 0x14)) + temp_fv0);
    __repair_store_2 = (f32) ((*(f32 *)((char *)(arg2) + 0x58)) * temp_fv0_2);
    __repair_store_3 = (f32) ((*(f32 *)((char *)(arg2) + 0)) + ((*(f32 *)((char *)(arg2) + 0x1C)) * temp_fv0_2));
    __repair_store_4 = (f32) ((*(f32 *)((char *)(arg2) + 4)) + ((*(f32 *)((char *)(arg2) + 0x20)) * temp_fv0_2));
    __repair_store_5 = (f32) ((*(f32 *)((char *)(arg2) + 8)) + ((*(f32 *)((char *)(arg2) + 0x24)) * temp_fv0_2));
    (*(f32 *)((char *)(arg2) + 0x50)) = __repair_store_0;
    (*(f32 *)((char *)(arg2) + 0x54)) = __repair_store_1;
    (*(f32 *)((char *)(arg2) + 0x74)) = __repair_store_2;
    (*(f32 *)((char *)(arg2) + 0x6C)) = __repair_store_4;
    (*(f32 *)((char *)(arg2) + 0x68)) = __repair_store_3;
    (*(f32 *)((char *)(arg2) + 0x70)) = __repair_store_5;
    D_8006A5B0 = 0;
    (*(s32 *)((char *)(arg2) + 0x78)) = 0;
    (*(s32 *)((char *)(arg2) + 0x98)) = 0;
    (*(f32 *)((char *)(arg2) + 0x58)) = (f32) (*(f32 *)((char *)(arg0) + 0x58));
}
