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

s32 func_80109A78();
s32 func_802393D4();
extern s32 D_80030C58;

void func_80109620(s32 arg0) {
    s32 temp_a0;
    void *temp_s0;

    temp_s0 = arg0 + 8;
    if (M2C_FIELD(temp_s0, const s32 *, 4) & 0x800000) {
        func_80109A78((s8) M2C_FIELD(temp_s0, const s32 *, 4));
        temp_a0 = M2C_FIELD(temp_s0, const s32 *, 4) & 0xFF7FFFFF;
        M2C_FIELD(temp_s0, s32 *, 4) = temp_a0;
        if ((temp_a0 & 0x7F0000) != 0x7F0000) {
            func_802393D4(arg0, *(s32 *)((((s32) (temp_a0 << 9) >> 0x19) * 4) + D_80030C58));
        }
    }
}
