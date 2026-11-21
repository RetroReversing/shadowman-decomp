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

s32 func_80113AD0();                                /* extern */
M2C_UNK func_80239A3C(f32, s32, s32, f32, f32, s32, s32, f32, s32); /* extern */
extern void *D_8007AFF8;

void func_80279730(void) {
    s32 temp_ret;
    u16 temp_v0;

    if (M2C_FIELD(D_8007AFF8, u8 *, 0x3B) != 0) {
        temp_v0 = M2C_FIELD(D_8007AFF8, u16 *, 0x9C) - 1;
        M2C_FIELD(D_8007AFF8, u16 *, 0x9C) = temp_v0;
        if ((temp_v0 << 0x10) <= 0) {
            temp_ret = func_80113AD0();
            M2C_FIELD(D_8007AFF8, u16 *, 0x9C) = (u16) ((temp_ret % 255) + 0x7F);
            func_80239A3C(*(f32 *)0x2143DC, temp_ret / 255, MULT_HI(temp_ret, 0x80808081), *(f32 *)0x2143D4, *(f32 *)0x2143D8, 0, 0, *(f32 *)0x2143D0, 0);
        }
    }
}
