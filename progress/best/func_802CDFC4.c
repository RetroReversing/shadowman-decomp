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

s32 func_8023DF7C();
s32 func_8026B618();
s32 func_802CE040();
extern char D_209890[];
extern s32 D_80074BB0;
extern char D_80075518[];
extern char D_80075568[];
extern s32 D_8007BD90;

void func_802CDFC4(void) {
    if (D_8007BD90 != 0) {
        D_8007BD90 = 0;
        func_8026B618(1, 0);
        if (M2C_FIELD(((D_80074BB0 * 0x34) + D_209890), s16 *, 8) == 0) {
            func_802CE040(D_80075568, D_80075518);
            return;
        }
        func_8023DF7C(D_80075568, D_80075518, 0xD1, 0xA, 0x28, 1);
    }
}
