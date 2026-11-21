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

extern int D_8007E038;
extern int D_8007E03C;
extern int D_8007E040;
extern int D_8007E044;
extern int D_8007E048;
extern int D_8007E04C;
extern int D_8007E050;
extern int D_8007E054;
extern int D_8007E058;
extern int D_8007E078;
extern signed char D_8007E024;
extern signed char D_8007E021;
extern signed char D_8007E01D;
extern signed char D_8007E01E;
extern signed char D_8007E022;
extern signed char D_8007E023;
extern signed char D_8007E01F;
extern int D_8007E074;
s32 func_802D9E20();
extern void *D_8007DB68;
extern char D_8007DC30[];

void func_802DABEC(void) {
    s32 temp_a1;

    D_8007E038 = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x168);
    D_8007E03C = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x190);
    D_8007E040 = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x1B8);
    D_8007E044 = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x208);
    D_8007E048 = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x230);
    D_8007E04C = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x258);
    D_8007E050 = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x280);
    D_8007E054 = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x2A8);
    D_8007E058 = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x2D0);
    D_8007E078 = 0;
    D_8007E024 = 2;
    D_8007E021 = 1;
    D_8007E01D = 9;
    D_8007E01E = 7;
    D_8007E022 = 0;
    D_8007E023 = 0;
    temp_a1 = M2C_FIELD(D_8007DB68, s32 *, 8) + 0x2F8;
    D_8007E01F = 5;
    D_8007E074 = temp_a1;
    func_802D9E20(&D_8007E038, temp_a1);
}
