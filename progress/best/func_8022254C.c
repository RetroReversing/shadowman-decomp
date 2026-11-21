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

M2C_UNK func_80116EB0(M2C_UNK *, void *, M2C_UNK);  /* extern */
extern s8 D_8002C270;
extern u8 D_8002C271;
extern M2C_UNK D_800590E0;
extern M2C_UNK D_80059118;

void func_8022254C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_a1;

    if (M2C_FIELD(&D_800590E0, s32 *, 8) < M2C_FIELD(&D_800590E0, s32 *, 0x10)) {
        D_8002C270 = 1;
        temp_a1 = (D_8002C271 * 0x10) + &D_80059118;
        M2C_FIELD(temp_a1, s32 *, 8) = arg2;
        M2C_FIELD(temp_a1, s32 *, 0) = arg0;
        M2C_FIELD(temp_a1, s32 *, 4) = arg1;
        M2C_FIELD(temp_a1, s32 *, 0xC) = arg3;
        func_80116EB0(&D_800590E0, temp_a1, 0);
        D_8002C271 = (D_8002C271 + 1) & 7;
    }
}
