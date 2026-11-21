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

extern int D_80052774;
s32 func_8022F084();
s32 func_8025CE84();
s32 func_8025CF80();
s32 func_8025D2AC();
s32 func_8025D4C4();
s32 func_8025D7FC();
s32 func_80262ED8();
extern s32 D_800305B4;
extern s32 D_80052768;
extern s32 D_8005276C;
extern char D_80052770[];
extern f32 D_80074BC0;
extern s32 D_80074BF4;

void func_8025D6EC(void) {
    if (D_80052774 != 0) {
        D_8005276C += 1;
    }
    D_80052768 += D_80052774;
    if (D_800305B4 != 0) {
        D_80052774 = 1;
        D_80074BC0 = *(f32 *)0x20A1A4;
    }
    D_80074BF4 = 1;
    func_8025CF80(&D_80052768, D_80052774, D_80052770 + 4);
    func_80262ED8();
    func_8025CE84();
    D_80074BF4 = 2;
    func_8025D2AC();
    func_8025D4C4();
    func_8025D7FC();
    func_8022F084();
}
