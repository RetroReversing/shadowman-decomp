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

M2C_UNK func_801069C0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80116EB0(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_8011BA20(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK osCreateMesgQueue(void *, void *, M2C_UNK); /* extern */
extern M2C_UNK D_222258;
extern M2C_UNK D_80058EF0;
extern M2C_UNK D_80058F08;

void func_80222404(void) {
    void *temp_s0;

    func_8011BA20(&D_80058EF0, 0, 0x18);
    M2C_FIELD(&D_80058EF0, s32 *, 0) = 1;
    M2C_FIELD(&D_80058EF0, s32 *, 0xC) = 2;
    func_8011BA20(&D_80058F08, 0, 0x1C8);
    temp_s0 = &D_80058F08 + 0x114;
    osCreateMesgQueue(temp_s0, &D_80058F08 + 0x12C, 0x14);
    func_801069C0(&D_222258, 0x100, 0x78, 8);
    func_80116EB0(temp_s0, &D_80058EF0, 1);
    func_80116EB0(temp_s0, &D_80058EF0 + 0xC, 1);
    M2C_FIELD(&D_80058F08, s8 *, 0x17D) = 1;
}
