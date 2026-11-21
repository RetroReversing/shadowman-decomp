/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void *func_80103878(s32, s32, s32);     /* extern */
s32 func_80109918(void *, s32, s16);            /* extern */
s32 func_80113AD0();                                /* extern */
f32 func_8022EC3C(f32, s32);                        /* extern */
s32 func_802A7CD4();                            /* extern */
extern s32 D_80075568;

typedef struct { unsigned char pad_0[12]; void * field_C; unsigned char pad_10[12]; int field_1C; unsigned char pad_20[48]; unsigned char field_50; unsigned char pad_51[19]; int field_64; int field_68; unsigned char pad_6C[28]; float field_88; unsigned char pad_8C[4]; float field_90; float field_94; float field_98; } __repair_record_arg0;
void func_802A982C(void *arg0) {
    register f32 __repair_fzero = 0.0f;

    void * __repair_hoisted;

    s32 temp_ret;
    void *temp_a0;
    register void *temp_a0_2;
    void *temp_v0;

    do { func_802A7CD4(); } while (0);
    ((__repair_record_arg0*)arg0)->field_98 = __repair_fzero;
    ((__repair_record_arg0*)arg0)->field_90 = __repair_fzero;
    (*(s32 *)((char *)(arg0) + 0x60)) = 0;
    temp_ret = func_80113AD0();
    ((__repair_record_arg0*)arg0)->field_88 = (f32) (temp_ret % 360);
    ((__repair_record_arg0*)arg0)->field_94 = (f32) (func_8022EC3C(*(f32 *)0x216434, (temp_ret / 360) * 3) + *(f32 *)0x216438);
    temp_v0 = func_80103878(0xA8, 2, 0);
    __repair_hoisted = ((__repair_record_arg0*)arg0)->field_C;
    if (temp_v0 == NULL) {
        __repair_hoisted = NULL;
    } else {
        ((__repair_record_arg0*)arg0)->field_C = temp_v0;
        temp_a0 = temp_v0 + 0x28;
        (*(void **)((char *)(temp_v0) + 0x20)) = temp_a0;
        temp_a0_2 = temp_a0 + 8;
        (*(void **)((char *)((*(void **)((char *)(temp_v0) + 0x20))) + 4)) = (void *) (temp_a0_2 + 0x3C);
        (*(void **)((char *)(temp_v0) + 0x28)) = temp_a0_2;
        (*(s32 *)((char *)(temp_v0) + 4)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0)) = 0;
    }
    if (((__repair_record_arg0*)arg0)->field_50 & 2) {
        (*(s32 *)((char *)(arg0) + 0x60)) = (s32) (*(s32 *)((char *)(&D_80075568) + 0x24));
        ((__repair_record_arg0*)arg0)->field_64 = (s32) (*(s32 *)((char *)(&D_80075568) + 0x28));
        ((__repair_record_arg0*)arg0)->field_68 = (s32) (*(s32 *)((char *)(&D_80075568) + 0x2C));
    }
    ((__repair_record_arg0*)arg0)->field_1C = func_80109918(arg0 + 0x54, 0x7F, *(s16 *)0x216C26);
}
