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

extern M2C_UNK D_80052770;
extern M2C_UNK D_8007C2A0;

void func_802D69E0(void) {
    s32 temp_v0;
    void *temp_a0;

    temp_a0 = &D_8007C2A0 - 0x348;
    if (M2C_FIELD(&D_8007C2A0, s32 *, 8) == 1) {
        temp_v0 = M2C_FIELD(temp_a0, s32 *, 0x374) - M2C_FIELD(&D_80052770, s32 *, 4);
        M2C_FIELD(temp_a0, s32 *, 0x374) = temp_v0;
        if (temp_v0 < 0) {
            M2C_FIELD(&D_8007C2A0, s32 *, 8) = 0;
        }
    }
}
