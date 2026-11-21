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

f32 func_8011B7E0();
s32 func_8025D960();
s32 func_80296A04();
void *func_80296BC0();
extern char D_80036C70[];

void *func_802A1A98(s32 arg0, void *arg1, void *arg2, s32 arg3, f32 arg4, f32 arg5) {
    f32 temp_fa1;
    f32 temp_fs0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg0, 0, D_80036C70);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x6C) = arg3;
        M2C_FIELD(temp_v0, s8 *, 0x73) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x58) = 0;
        M2C_FIELD(temp_v0, f32 *, 0x5C) = arg5;
        temp_fv0 = (f32) func_80296A04(arg3);
        M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fv0;
        M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv0;
        M2C_FIELD(temp_v0, f32 *, 0x4C) = arg4;
        func_8025D960(arg1);
        temp_fa1 = M2C_FIELD(arg1, f32 *, 0);
        temp_fv0_2 = M2C_FIELD(arg1, f32 *, 8);
        temp_fs0 = *(f32 *)0x215F98;
        M2C_FIELD(temp_v0, f32 *, 0x24) = (f32) ((func_8011B7E0(sqrtf((temp_fa1 * temp_fa1) + (temp_fv0_2 * temp_fv0_2)), temp_fa1) * temp_fs0) + M2C_FIELD(arg2, f32 *, 0));
        M2C_FIELD(temp_v0, f32 *, 0x28) = (f32) ((func_8011B7E0(M2C_FIELD(arg1, f32 *, 0), M2C_FIELD(arg1, f32 *, 8)) * temp_fs0) + M2C_FIELD(arg2, f32 *, 4));
        M2C_FIELD(temp_v0, u8 *, 0x72) |= 4;
        M2C_FIELD(temp_v0, u8 *, 0x68) = 0xFF;
        M2C_FIELD(temp_v0, u8 *, 0x69) = 0xFF;
        M2C_FIELD(temp_v0, u8 *, 0x6A) = 0xFF;
        M2C_FIELD(temp_v0, f32 *, 0x60) = (f32) *(f32 *)0x215F9C;
        M2C_FIELD(temp_v0, f32 *, 0x2C) = (f32) M2C_FIELD(arg2, f32 *, 8);
    }
    return temp_v0;
}
