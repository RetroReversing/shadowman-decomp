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
M2C_UNK osWritebackDCacheAll(void *, s32 *);        /* extern */
extern M2C_UNK D_8002C114;
extern M2C_UNK D_8002C1C0;
extern s32 D_8002C240;
extern M2C_UNK D_8004AECC;
extern M2C_UNK D_800527D0;
extern M2C_UNK D_80053860;

void func_8021E1B8(void) {
    s32 *temp_a1;
    void *temp_a0;

    temp_a0 = (D_8002C240 * 0x14) + &D_800527D0;
    M2C_FIELD(temp_a0, M2C_UNK **, 8) = &D_80053860;
    temp_a1 = (D_8002C240 * 4) + &D_8002C114;
    M2C_FIELD(temp_a0, void **, 0) = (void *) ((D_8002C240 << 6) + &D_8002C1C0);
    M2C_FIELD(temp_a0, s32 *, 0x10) = 0x13;
    M2C_FIELD(temp_a0, s32 *, 4) = (s32) *temp_a1;
    osWritebackDCacheAll(temp_a0, temp_a1);
    func_80116EB0(&D_8004AECC, (D_8002C240 * 0x14) + &D_800527D0, 1);
    D_8002C240 = (D_8002C240 + 1) % 2;
}
