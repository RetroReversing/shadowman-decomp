/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void *func_8025BA08();
s32 func_8026199C();
s32 func_802D0B28();
extern char D_203A10[];
extern s32 D_8005EA14;

typedef struct { unsigned char pad_0[4]; float field_4; float field_8; float field_C; int field_10; int field_14; int field_18; int field_1C; unsigned char pad_20[4]; short field_24; } __repair_record_arg0;
s32 func_802619E8(void *arg0, s32 arg1) {
    f32 sp18[3];
    f32 sp28[3];
    register f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 var_fv0;
    void *temp_v0;

    sp18[0] = ((__repair_record_arg0*)arg0)->field_4;
    sp18[1] = ((__repair_record_arg0*)arg0)->field_8;
    sp18[2] = ((__repair_record_arg0*)arg0)->field_C;
    sp28[0] = (f32) ((__repair_record_arg0*)arg0)->field_10;
    temp_fv0 = (f32) ((__repair_record_arg0*)arg0)->field_14;
    sp28[1] = ((f32) ((__repair_record_arg0*)arg0)->field_14);
    sp28[2] = 0.0f;
    if (temp_fv0 < sp28[2]) {
        do {
            temp_fv0_2 = sp28[1] + *(f32 *)0x20DC5C;
            sp28[1] = temp_fv0_2;
        } while (temp_fv0_2 < sp28[2]);
    }
    var_fv0 = sp28[1];
    temp_fv0f = *(f32 *)0x20DC60;
    if (var_fv0 >= temp_fv0f) {
        do {
            var_fv0 -= temp_fv0f;
            sp28[1] = var_fv0;
        } while (temp_fv0f <= var_fv0);
    }
    func_802D0B28(D_8005EA14, ((__repair_record_arg0*)arg0)->field_24, 1);
    temp_v0 = func_8025BA08(sp18, sp28, arg1, ((__repair_record_arg0*)arg0)->field_18, ((__repair_record_arg0*)arg0)->field_1C, (arg1 * 0x2C) + D_203A10);
    if (temp_v0 != NULL) {
        func_8026199C((*(s32 *)((char *)(temp_v0) + 8)));
    }
    return 1;
}
