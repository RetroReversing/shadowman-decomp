/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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
void *func_80296BC0(void *, M2C_UNK, M2C_UNK *);            /* extern */
extern M2C_UNK D_80036DA8;

void *func_8029B6C4(void *arg1) {
    union {
        unsigned char bytes[64];
        struct { f32 value; } view_sp10;
        struct { unsigned char pad[4]; f32 value; } view_sp14;
        struct { unsigned char pad[8]; s32 value; } view_sp18;
        struct { unsigned char pad[16]; f32 value; } view_sp20;
        struct { unsigned char pad[20]; f32 value; } view_sp24;
        struct { unsigned char pad[24]; f32 value; } view_sp28;
        struct { unsigned char pad[28]; f32 value; } view_sp2C;
        struct { unsigned char pad[32]; f32 value; } view_sp30;
        struct { unsigned char pad[36]; f32 value; } view_sp34;
        struct { unsigned char pad[40]; f32 value; } view_sp38;
        struct { unsigned char pad[44]; f32 value; } view_sp3C;
        struct { unsigned char pad[48]; f32 value; } view_sp40;
    } m2c_initial_frame;

             
             
             
             
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft0f;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_80296BC0(arg1, 0, &D_80036DA8);
    if (temp_v0 != NULL) {
        temp_fs0 = *(f32 *)0x215B8C;
        M2C_FIELD(temp_v0, f32 *, 0) = (f32) (M2C_FIELD(temp_v0, f32 *, 0) + func_8022EBE8(temp_fs0));
        M2C_FIELD(temp_v0, f32 *, 4) = (f32) (M2C_FIELD(temp_v0, f32 *, 4) + func_8022EBE8(temp_fs0));
        temp_fs0_2 = *(f32 *)0x215B90;
        M2C_FIELD(temp_v0, f32 *, 8) = (f32) (M2C_FIELD(temp_v0, f32 *, 8) + func_8022EBE8(temp_fs0));
        m2c_initial_frame.view_sp10.value = func_8022EBE8(temp_fs0_2);
        m2c_initial_frame.view_sp14.value = func_8022EBE8(temp_fs0_2);
        m2c_initial_frame.view_sp18.value = 0;
        func_80239AEC(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp20.value);
        temp_fv1f = M2C_FIELD(arg1, f32 *, 0);
        temp_ft0f = M2C_FIELD(arg1, f32 *, 4);
        temp_ft0 = M2C_FIELD(arg1, f32 *, 8);
        M2C_FIELD(temp_v0, f32 *, 0x18) = (f32) ((temp_fv1f * m2c_initial_frame.view_sp20.value) + (temp_ft0f * m2c_initial_frame.view_sp24.value) + (temp_ft0 * m2c_initial_frame.view_sp28.value));
        temp_v0_2 = temp_v0 + 0x18;
        M2C_FIELD(temp_v0_2, f32 *, 4) = (f32) ((temp_fv1f * m2c_initial_frame.view_sp2C.value) + (temp_ft0f * m2c_initial_frame.view_sp30.value) + (temp_ft0 * m2c_initial_frame.view_sp34.value));
        M2C_FIELD(temp_v0_2, f32 *, 8) = (f32) ((temp_fv1f * m2c_initial_frame.view_sp38.value) + (temp_ft0f * m2c_initial_frame.view_sp3C.value) + (temp_ft0 * m2c_initial_frame.view_sp40.value));
        temp_fv1 = *(f32 *)0x215B9C;
        temp_fv0 = func_8022EC3C(*(f32 *)0x215B94) + *(f32 *)0x215B98;
        temp_ft0_2 = M2C_FIELD(temp_v0, f32 *, 0x18) * temp_fv0;
        M2C_FIELD(temp_v0, s32 *, 0x6C) = 7;
        M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv1;
        M2C_FIELD(temp_v0, f32 *, 0x5C) = (f32) *(f32 *)0x215BA0;
        M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fv1;
        M2C_FIELD(temp_v0, f32 *, 0x58) = (f32) *(f32 *)0x215BA4;
        temp_fv1_2 = *(f32 *)0x215BA8;
        M2C_FIELD(temp_v0, f32 *, 0x4C) = temp_fv1_2;
        M2C_FIELD(temp_v0, f32 *, 0xC) = temp_fv1_2;
        M2C_FIELD(temp_v0, f32 *, 0x18) = temp_ft0_2;
        M2C_FIELD(temp_v0, f32 *, 0x1C) = (f32) (M2C_FIELD(temp_v0, f32 *, 0x1C) * temp_fv0);
        M2C_FIELD(temp_v0, f32 *, 0x20) = (f32) (M2C_FIELD(temp_v0, f32 *, 0x20) * temp_fv0);
    }
    return temp_v0;
}
