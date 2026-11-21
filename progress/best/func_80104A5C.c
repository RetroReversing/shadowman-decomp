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

extern int D_8004ADEC;
extern int D_8004AE14;
extern int D_8004AE0C;
extern int D_8004AE44;
extern int D_8004AE4C;
extern int D_8004AE3C;
extern int D_8004AE94;
extern int D_8004AE9C;
extern int D_8004AEA4;
extern int D_8004ADFC;
extern int D_8004AE04;
extern char D_8004ADE8[];
extern char D_8004ADF8[];
extern char D_8004AE00[];
extern char D_8004AE08[];
extern char D_8004AE10[];
extern s32 D_8004AE30;
extern char D_8004AE38[];
extern char D_8004AE40[];
extern char D_8004AE48[];
extern char D_8004AE90[];
extern char D_8004AE98[];
extern char D_8004AEA0[];
extern s32 *D_8004AEA8;
extern s32 *D_8004AEAC;
extern char D_B004C000[];
extern char D_B08C2010[];
extern char D_B0B9E5F0[];
extern char D_B0E20520[];
extern char D_B0F8A6A0[];
extern char D_B0FADFC0[];
extern char D_B10F55D0[];
extern char D_B1133AB0[];
extern char D_B113E450[];
extern char D_B11438C0[];
extern char D_B1A38330[];
extern char D_B1A8F6E0[];
extern char D_B1AA8E60[];

void func_80104A5C(void) {
    D_8004AEAC = D_B1A8F6E0;
    D_8004AEA8 = D_B1AA8E60;
    D_8004AE30 = D_B1AA8E60 - D_B1A8F6E0;
    M2C_FIELD(D_8004AE10, s32 **, 0) = D_B1A38330;
    M2C_FIELD(D_8004ADF8, s32 **, 0) = D_B1133AB0;
    M2C_FIELD(D_8004ADE8, s32 **, 0) = D_B10F55D0;
    M2C_FIELD(D_8004AE08, s32 **, 0) = D_B0FADFC0;
    M2C_FIELD(D_8004AE48, s32 **, 0) = D_B0E20520;
    M2C_FIELD(D_8004AE98, s32 **, 0) = D_B0F8A6A0;
    M2C_FIELD(D_8004AE40, s32 **, 0) = D_B113E450;
    M2C_FIELD(D_8004AE90, s32 **, 0) = D_B11438C0;
    M2C_FIELD(D_8004AE00, s32 **, 0) = D_B0B9E5F0;
    M2C_FIELD(D_8004AE38, s32 **, 0) = D_B08C2010;
    M2C_FIELD(D_8004AEA0, s32 **, 0) = D_B004C000;
    D_8004ADEC = 0x91;
    D_8004AE14 = 0xB6;
    D_8004AE0C = 0x72;
    D_8004AE44 = 0xE8;
    D_8004AE4C = 0x2F9;
    D_8004AE3C = 0x4A1;
    D_8004AE94 = 0x92;
    D_8004AE9C = 0x77;
    D_8004AEA4 = 0x258;
    D_8004ADFC = 0x58;
    D_8004AE04 = 1;
}
