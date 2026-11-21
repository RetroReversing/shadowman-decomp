/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80104DE0(s32);                         /* extern */
s32 func_8011BA20(void *, s32, s32);    /* extern */
s16 func_8023648C(s32);                             /* extern */
s32 func_80246460(s32 *, s32);                  /* extern */
s32 func_80246610(s32, s16);                        /* extern */
extern s32 D_8002D480;
extern s32 D_8002D4B8;
extern s32 D_800707A8;

void func_802462B0(void *arg0) {
    union {
        unsigned char bytes[88];
        struct { s32 value; } view_sp10;
        struct { unsigned char pad[4]; s32 value; } view_sp14;
        struct { unsigned char pad[8]; s32 value; } view_sp18;
        struct { unsigned char pad[12]; s32 value; } view_sp1C;
        struct { unsigned char pad[16]; s32 value; } view_sp20;
        struct { unsigned char pad[20]; s32 value; } view_sp24;
        struct { unsigned char pad[24]; s32 value; } view_sp28;
        struct { unsigned char pad[28]; s32 value; } view_sp2C;
        struct { unsigned char pad[32]; s32 value; } view_sp30;
        struct { unsigned char pad[36]; s32 value; } view_sp34;
        struct { unsigned char pad[40]; s32 value; } view_sp38;
        struct { unsigned char pad[44]; s32 value; } view_sp3C;
        struct { unsigned char pad[48]; s32 value; } view_sp40;
        struct { unsigned char pad[52]; s32 value; } view_sp44;
        struct { unsigned char pad[56]; s32 value; } view_sp48;
        struct { unsigned char pad[60]; s32 value; } view_sp4C;
        struct { unsigned char pad[64]; s32 value; } view_sp50;
        struct { unsigned char pad[68]; s32 value; } view_sp54;
        struct { unsigned char pad[72]; s32 value; } view_sp58;
        struct { unsigned char pad[76]; s32 value; } view_sp5C;
        struct { unsigned char pad[80]; s32 value; } view_sp60;
    } m2c_initial_frame;

             
    s32 *var_s3;
    s32 temp_v0;
    s32 temp_v1;
    void *var_s0;
    s32 var_s1;

    var_s3 = NULL;
    (*(s32 **)((char *)(arg0) + 8)) = NULL;
    temp_v0 = func_80246610((*(s32 *)((char *)(arg0) + 0x10)), (*(s16 *)((char *)(arg0) + 0x14)));
    if (temp_v0 != 0) {
        var_s1 = D_8002D480;
        var_s3 = &D_800707A8;
        temp_v1 = D_8002D480 + func_8023648C(temp_v0);
        D_8002D480 = temp_v1;
        if (var_s1 < temp_v1) {
            var_s0 = (var_s1 * 0x5C) + &D_800707A8;
            __repair_rows: {
                func_80246460(&m2c_initial_frame.view_sp10.value, temp_v0);
                func_8011BA20(var_s0, 0, 0x54);
                (*(s32 *)((char *)(var_s0) + 4)) = 0;
                (*(s32 *)((char *)(var_s0) + 0)) = m2c_initial_frame.view_sp10.value;
                (*(s32 *)((char *)(var_s0) + 0xC)) = m2c_initial_frame.view_sp14.value;
                (*(s32 *)((char *)(var_s0) + 0x10)) = m2c_initial_frame.view_sp1C.value;
                (*(s32 *)((char *)(var_s0) + 0x14)) = m2c_initial_frame.view_sp20.value;
                (*(s32 *)((char *)(var_s0) + 0x18)) = m2c_initial_frame.view_sp24.value;
                (*(s32 *)((char *)(var_s0) + 0x1C)) = m2c_initial_frame.view_sp28.value;
                (*(s32 *)((char *)(var_s0) + 0x24)) = m2c_initial_frame.view_sp30.value;
                (*(s32 *)((char *)(var_s0) + 0x20)) = m2c_initial_frame.view_sp2C.value;
                (*(s32 *)((char *)(var_s0) + 0x28)) = m2c_initial_frame.view_sp34.value;
                (*(s32 *)((char *)(var_s0) + 0x2C)) = m2c_initial_frame.view_sp38.value;
                (*(s32 *)((char *)(var_s0) + 0x30)) = m2c_initial_frame.view_sp3C.value;
                (*(s32 *)((char *)(var_s0) + 0x34)) = m2c_initial_frame.view_sp40.value;
                (*(s32 *)((char *)(var_s0) + 0x3C)) = m2c_initial_frame.view_sp48.value;
                (*(s32 *)((char *)(var_s0) + 0x38)) = m2c_initial_frame.view_sp44.value;
                (*(s32 *)((char *)(var_s0) + 0x40)) = (s32) *((m2c_initial_frame.view_sp18.value * 4) + &D_8002D4B8);
                (*(s32 *)((char *)(var_s0) + 0x44)) = m2c_initial_frame.view_sp4C.value;
                (*(s32 *)((char *)(var_s0) + 0x48)) = m2c_initial_frame.view_sp50.value;
                (*(s32 *)((char *)(var_s0) + 0x4C)) = m2c_initial_frame.view_sp54.value;
                (*(s32 *)((char *)(var_s0) + 0x50)) = m2c_initial_frame.view_sp58.value;
                (*(s32 *)((char *)(var_s0) + 0x54)) = m2c_initial_frame.view_sp5C.value;
                var_s1 += 1;
                (*(s32 *)((char *)(var_s0) + 0x58)) = m2c_initial_frame.view_sp60.value;
                var_s0 += 0x5C;
            }
if (var_s1 < D_8002D480) goto __repair_rows;
        }
        func_80104DE0(temp_v0);
    }
    (*(s32 **)((char *)(arg0) + 8)) = var_s3;
}
