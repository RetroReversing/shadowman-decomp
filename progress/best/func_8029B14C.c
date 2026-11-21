/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 func_8022EBE8(f32);                             /* extern */
f32 func_8022EC3C(f32);                             /* extern */
s32 func_80239AEC(f32 *, f32 *);                /* extern */
void *func_80296BC0(void *, s32, s32 *);            /* extern */
extern s32 D_80036D98;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x60, 0x64, 0x68, 0x78, 0x7c, 0x80, 0x84], gap at: 0x6c. */
void *func_8029B14C(void *arg1, f32 arg2, f32 arg3, s32 arg4) {
    union {
        unsigned char bytes[80];
        struct { f32 value; } view_sp10;
        struct { unsigned char pad[4]; f32 value; } view_sp14;
        struct { unsigned char pad[8]; s32 value; } view_sp18;
        struct { unsigned char pad[16]; f32 value; } view_sp20;
        struct { unsigned char pad[20]; f32 value; } view_sp24;
        struct { unsigned char pad[24]; f32 value; } view_sp28;
        struct { unsigned char pad[32]; f32 value; } view_sp30;
        struct { unsigned char pad[36]; f32 value; } view_sp34;
        struct { unsigned char pad[40]; f32 value; } view_sp38;
        struct { unsigned char pad[44]; f32 value; } view_sp3C;
        struct { unsigned char pad[48]; f32 value; } view_sp40;
        struct { unsigned char pad[52]; f32 value; } view_sp44;
        struct { unsigned char pad[56]; f32 value; } view_sp48;
        struct { unsigned char pad[60]; f32 value; } view_sp4C;
        struct { unsigned char pad[64]; f32 value; } view_sp50;
    } m2c_initial_frame;

             
             
             
             
             
             
             
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fv0f_2;
    f32 temp_ft1f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_ft1;
    f32 temp_fv1;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg1, 0, &D_80036D98);
    if (temp_v0 != NULL) {
        temp_fv0 = *(f32 *)0x215B50;
        temp_fs0 = *(f32 *)0x215B58;
        temp_fv0f = *(f32 *)0x215B5C;
        (*(s32 *)((char *)(temp_v0) + 0x6C)) = 7;
        (*(f32 *)((char *)(temp_v0) + 0x54)) = temp_fv0;
        (*(f32 *)((char *)(temp_v0) + 0x50)) = temp_fv0;
        (*(f32 *)((char *)(temp_v0) + 0x58)) = (f32) *(f32 *)0x215B54;
        (*(f32 *)((char *)(temp_v0) + 0x4C)) = temp_fv0f;
        (*(f32 *)((char *)(temp_v0) + 0xC)) = temp_fv0f;
        (*(f32 *)((char *)(temp_v0) + 0)) = (f32) ((*(f32 *)((char *)(temp_v0) + 0)) + func_8022EBE8(temp_fs0));
        (*(f32 *)((char *)(temp_v0) + 4)) = (f32) ((*(f32 *)((char *)(temp_v0) + 4)) + func_8022EBE8(temp_fs0));
        temp_fs0_2 = *(f32 *)0x215B60;
        (*(f32 *)((char *)(temp_v0) + 8)) = (f32) ((*(f32 *)((char *)(temp_v0) + 8)) + func_8022EBE8(temp_fs0));
        m2c_initial_frame.view_sp10.value = func_8022EBE8(temp_fs0_2);
        m2c_initial_frame.view_sp14.value = func_8022EBE8(temp_fs0_2);
        m2c_initial_frame.view_sp18.value = 0;
        func_80239AEC(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp30.value);
        temp_fv1 = (*(f32 *)((char *)(arg1) + 0));
        temp_ft1f = (*(f32 *)((char *)(arg1) + 4));
        temp_ft1 = (*(f32 *)((char *)(arg1) + 8));
        temp_fv0f_2 = (temp_fv1 * m2c_initial_frame.view_sp3C.value) + (temp_ft1f * m2c_initial_frame.view_sp40.value) + (temp_ft1 * m2c_initial_frame.view_sp44.value);
        m2c_initial_frame.view_sp20.value = (temp_fv1 * m2c_initial_frame.view_sp30.value) + (temp_ft1f * m2c_initial_frame.view_sp34.value) + (temp_ft1 * m2c_initial_frame.view_sp38.value);
        m2c_initial_frame.view_sp24.value = temp_fv0f_2;
        m2c_initial_frame.view_sp28.value = ((temp_ft1f * m2c_initial_frame.view_sp4C.value) + (temp_ft1 * m2c_initial_frame.view_sp50.value)) + ((temp_fv1 * m2c_initial_frame.view_sp48.value));
        temp_fv0_2 = func_8022EC3C(*(f32 *)0x215B64) + *(f32 *)0x215B68;
        (*(f32 *)((char *)(temp_v0) + 0x18)) = (f32) (m2c_initial_frame.view_sp20.value * temp_fv0_2);
        (*(f32 *)((char *)(temp_v0) + 0x1C)) = (f32) (temp_fv0f_2 * temp_fv0_2);
        (*(f32 *)((char *)(temp_v0) + 0x5C)) = arg2;
        (*(f32 *)((char *)(temp_v0) + 0x54)) = arg3;
        (*(f32 *)((char *)(temp_v0) + 0x50)) = arg3;
        (*(f32 *)((char *)(temp_v0) + 0xC)) = (f32) (*(f32 *)((char *)(temp_v0) + 0x4C));
        (*(f32 *)((char *)(temp_v0) + 0x20)) = (f32) (m2c_initial_frame.view_sp28.value * temp_fv0_2);
        (*(s8 *)((char *)(temp_v0) + 0x72)) = (s8) arg4;
    }
    return temp_v0;
}
