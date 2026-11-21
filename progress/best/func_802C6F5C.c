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

extern float D_80075584;
extern float D_8002D414;
extern int D_8002DBDC;
extern int D_8002DBEC;
s32 func_8023DF7C();
s32 func_802C3274();
s32 func_802C43C0();
s32 func_802C6FA8();
s32 func_802C7020();
s32 func_802CC190();
extern char D_8002D410[];
extern s32 D_8002D420;
extern char D_8002DBD0[];
extern f32 D_80074BC0;
extern char D_80075518[];
extern char D_80075568[];

void func_802C6F5C(void) {
    if (!(D_8002D420 & 0x40)) {
        if (func_802C43C0() == 0) {
            func_802C6FA8(D_80075568, D_80075518);
            return;
        }
        func_8023DF7C(D_80075568, D_80075518, 0xE, 0xA, 0, 2);
        goto block_5;
    }
block_5:
    if (D_8002D420 & 4) {
        func_802C7020();
        return;
    }
    if (D_8002D420 & 8) {
        D_80075584 = (f32) (D_80075584 + (D_80074BC0 * D_8002D414));
    }
    if ((D_8002DBDC != 0) || (D_8002DBEC != 0)) {
        func_8023DF7C(D_80075568, D_80075518, 0x61, 0xA, 0x28, 2);
    }
    func_802C3274();
    func_802CC190();
}
