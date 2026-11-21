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

s32 func_8026B6AC();
s32 func_8026B6DC();
s32 func_8026B72C();
extern char D_200E6C[];
extern char D_8007DB78[];

void func_8026B618(s32 arg0, s8 arg1) {
    char *__base_D_8007DB78;
    s32 *temp_a0;
    void *temp_a1;
    void *temp_s0;
    void *temp_v1;

    __base_D_8007DB78 = D_8007DB78;
    temp_s0 = (arg0 * 4) + __base_D_8007DB78;
    if (M2C_FIELD(temp_s0, s32 *, 0x30) != -1) {
        M2C_FIELD(temp_s0, s32 *, 0x40) = 0;
        M2C_FIELD((arg0 + __base_D_8007DB78), s8 *, 0x48) = arg1;
        temp_a0 = (M2C_FIELD(temp_s0, s32 *, 0x30) * 4) + D_200E6C;
        temp_a1 = *temp_a0 + (func_8026B72C(arg0) * 0x38);
        if (M2C_FIELD(temp_a1, u8 *, 0x32) == 1) {
            func_8026B6AC(temp_a0, temp_a1);
            return;
        }
        M2C_FIELD(temp_s0, f32 *, 0x4C) = (f32) *(f32 *)0x20E328;
        if (M2C_FIELD(temp_a1, u8 *, 0x35) == 1) {
            func_8026B6DC(temp_a0, temp_a1);
            return;
        }
        M2C_FIELD(((arg0 * 4) + __base_D_8007DB78), f32 *, 0x54) = (f32) *(f32 *)0x20E32C;
        temp_v1 = (arg0 * 4) + __base_D_8007DB78;
        M2C_FIELD(temp_v1, s32 *, 0x5C) = (s32) M2C_FIELD(temp_a1, s32 *, 0x14);
        M2C_FIELD(temp_v1, s32 *, 0x64) = (s32) M2C_FIELD(temp_a1, s32 *, 0x18);
    }
}
