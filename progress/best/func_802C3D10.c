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

extern unsigned short D_80075534;
extern int D_80075580;
s32 func_8023DF7C();
s32 func_802C3D80();
extern s32 D_8002D420;
extern f32 D_80045440;
extern char D_80075518[];
extern char D_80075568[];

void func_802C3D10(void) {
    if ((D_80045440 == *(f32 *)0x21840C) && (D_80075534 & 2)) {
        if (D_8002D420 & 1) {
            func_802C3D80(D_80075568, D_80075518, 4, 0xA);
            return;
        }
        D_80075580 = 0;
        func_8023DF7C(D_80075568, D_80075518, 0, 0xA, 0x46, 2);
    }
}
