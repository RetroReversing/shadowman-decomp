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

extern M2C_UNK D_8004ADE8;
extern M2C_UNK D_8004ADF8;
extern M2C_UNK D_8004AE00;
extern M2C_UNK D_8004AE08;
extern M2C_UNK D_8004AE10;
extern s32 D_8004AE30;
extern M2C_UNK D_8004AE38;
extern M2C_UNK D_8004AE40;
extern M2C_UNK D_8004AE48;
extern M2C_UNK D_8004AE90;
extern M2C_UNK D_8004AE98;
extern M2C_UNK D_8004AEA0;
extern M2C_UNK *D_8004AEA8;
extern M2C_UNK *D_8004AEAC;
extern M2C_UNK D_B004C000;
extern M2C_UNK D_B08C2010;
extern M2C_UNK D_B0B9E5F0;
extern M2C_UNK D_B0E20520;
extern M2C_UNK D_B0F8A6A0;
extern M2C_UNK D_B0FADFC0;
extern M2C_UNK D_B10F55D0;
extern M2C_UNK D_B1133AB0;
extern M2C_UNK D_B113E450;
extern M2C_UNK D_B11438C0;
extern M2C_UNK D_B1A38330;
extern M2C_UNK D_B1A8F6E0;
extern M2C_UNK D_B1AA8E60;

void func_80104A5C(void) {
    D_8004AEAC = &D_B1A8F6E0;
    D_8004AEA8 = &D_B1AA8E60;
    D_8004AE30 = &D_B1AA8E60 - &D_B1A8F6E0;
    M2C_FIELD(&D_8004AE10, M2C_UNK **, 0) = &D_B1A38330;
    M2C_FIELD(&D_8004ADF8, M2C_UNK **, 0) = &D_B1133AB0;
    M2C_FIELD(&D_8004ADE8, M2C_UNK **, 0) = &D_B10F55D0;
    M2C_FIELD(&D_8004AE08, M2C_UNK **, 0) = &D_B0FADFC0;
    M2C_FIELD(&D_8004AE48, M2C_UNK **, 0) = &D_B0E20520;
    M2C_FIELD(&D_8004AE98, M2C_UNK **, 0) = &D_B0F8A6A0;
    M2C_FIELD(&D_8004AE40, M2C_UNK **, 0) = &D_B113E450;
    M2C_FIELD(&D_8004AE90, M2C_UNK **, 0) = &D_B11438C0;
    M2C_FIELD(&D_8004AE00, M2C_UNK **, 0) = &D_B0B9E5F0;
    M2C_FIELD(&D_8004AE38, M2C_UNK **, 0) = &D_B08C2010;
    M2C_FIELD(&D_8004AEA0, M2C_UNK **, 0) = &D_B004C000;
    M2C_FIELD(&D_8004ADE8, s32 *, 4) = 0x91;
    M2C_FIELD(&D_8004AE10, s32 *, 4) = 0xB6;
    M2C_FIELD(&D_8004AE08, s32 *, 4) = 0x72;
    M2C_FIELD(&D_8004AE40, s32 *, 4) = 0xE8;
    M2C_FIELD(&D_8004AE48, s32 *, 4) = 0x2F9;
    M2C_FIELD(&D_8004AE38, s32 *, 4) = 0x4A1;
    M2C_FIELD(&D_8004AE90, s32 *, 4) = 0x92;
    M2C_FIELD(&D_8004AE98, s32 *, 4) = 0x77;
    M2C_FIELD(&D_8004AEA0, s32 *, 4) = 0x258;
    M2C_FIELD(&D_8004ADF8, s32 *, 4) = 0x58;
    M2C_FIELD(&D_8004AE00, s32 *, 4) = 1;
}
