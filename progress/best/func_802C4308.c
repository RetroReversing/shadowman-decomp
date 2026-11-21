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
extern s32 D_8006A504;
extern M2C_UNK D_80075518;

s32 func_802C4308(void) {
    s16 *temp_a0;

    temp_a0 = M2C_FIELD(((M2C_FIELD(((M2C_FIELD(&D_80075518, s16 *, 4) * 0x38) + M2C_FIELD(&D_80075518, s32 *, 0x30)), s16 *, 0x2C) * 0xC) + M2C_FIELD(&D_80075518, s32 *, 0x34)), s16 **, 8);
    if (temp_a0 != NULL) {
        return *temp_a0 < (M2C_FIELD(&D_80075518, s16 *, 0x16) + (M2C_FIELD(&D_80052770, s32 *, 4) * (D_8006A504 + 5)));
    }
    return 1;
}
