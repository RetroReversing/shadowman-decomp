/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

f32 func_8022EBE8(f32);                             /* extern */
f32 func_8022EC3C(f32);                             /* extern */
M2C_UNK func_80239AEC(f32 *, f32 *);                /* extern */
void *func_80296BC0(M2C_UNK, M2C_UNK *);            /* extern */
extern M2C_UNK D_80036D98;

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
    f32 temp_ft1;
    f32 temp_ft1f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    void *temp_v0;

    temp_v0 = func_80296BC0(0, &D_80036D98);
    if (temp_v0 != NULL) {
        temp_fv0 = *(f32 *)0x215B50;
        temp_fs0 = *(f32 *)0x215B58;
        temp_fv0f = *(f32 *)0x215B5C;
        M2C_FIELD(temp_v0, s32 *, 0x6C) = 7;
        M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv0;
        M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fv0;
        M2C_FIELD(temp_v0, f32 *, 0x58) = (f32) *(f32 *)0x215B54;
        M2C_FIELD(temp_v0, f32 *, 0x4C) = temp_fv0f;
        M2C_FIELD(temp_v0, f32 *, 0xC) = temp_fv0f;
        M2C_FIELD(temp_v0, f32 *, 0) = (f32) (M2C_FIELD(temp_v0, f32 *, 0) + func_8022EBE8(temp_fs0));
        M2C_FIELD(temp_v0, f32 *, 4) = (f32) (M2C_FIELD(temp_v0, f32 *, 4) + func_8022EBE8(temp_fs0));
        temp_fs0_2 = *(f32 *)0x215B60;
        M2C_FIELD(temp_v0, f32 *, 8) = (f32) (M2C_FIELD(temp_v0, f32 *, 8) + func_8022EBE8(temp_fs0));
        m2c_initial_frame.view_sp10.value = func_8022EBE8(temp_fs0_2);
        m2c_initial_frame.view_sp14.value = func_8022EBE8(temp_fs0_2);
        m2c_initial_frame.view_sp18.value = 0;
        func_80239AEC(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp30.value);
        temp_fv1 = M2C_FIELD(arg1, f32 *, 0);
        temp_ft1f = M2C_FIELD(arg1, f32 *, 4);
        temp_ft1 = M2C_FIELD(arg1, f32 *, 8);
        temp_fv0f_2 = (temp_fv1 * m2c_initial_frame.view_sp3C.value) + (temp_ft1f * m2c_initial_frame.view_sp40.value) + (temp_ft1 * m2c_initial_frame.view_sp44.value);
        m2c_initial_frame.view_sp20.value = (temp_fv1 * m2c_initial_frame.view_sp30.value) + (temp_ft1f * m2c_initial_frame.view_sp34.value) + (temp_ft1 * m2c_initial_frame.view_sp38.value);
        m2c_initial_frame.view_sp24.value = temp_fv0f_2;
        m2c_initial_frame.view_sp28.value = (temp_fv1 * m2c_initial_frame.view_sp48.value) + (temp_ft1f * m2c_initial_frame.view_sp4C.value) + (temp_ft1 * m2c_initial_frame.view_sp50.value);
        temp_fv0_2 = func_8022EC3C(*(f32 *)0x215B64) + *(f32 *)0x215B68;
        M2C_FIELD(temp_v0, f32 *, 0x18) = (f32) (m2c_initial_frame.view_sp20.value * temp_fv0_2);
        M2C_FIELD(temp_v0, f32 *, 0x1C) = (f32) (temp_fv0f_2 * temp_fv0_2);
        M2C_FIELD(temp_v0, f32 *, 0x5C) = arg2;
        M2C_FIELD(temp_v0, f32 *, 0x54) = arg3;
        M2C_FIELD(temp_v0, f32 *, 0x50) = arg3;
        M2C_FIELD(temp_v0, f32 *, 0xC) = (f32) M2C_FIELD(temp_v0, f32 *, 0x4C);
        M2C_FIELD(temp_v0, s8 *, 0x72) = (s8) arg4;
        M2C_FIELD(temp_v0, f32 *, 0x20) = (f32) (m2c_initial_frame.view_sp28.value * temp_fv0_2);
    }
    return temp_v0;
}
