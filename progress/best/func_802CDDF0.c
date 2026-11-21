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
s32 func_80268AF8();
s32 func_80268E6C();
s32 func_8026B618();
s32 func_802CDEB4();
s32 func_802CDEC8();
extern char D_209890[];
extern s32 D_8002D420;
extern s32 D_80074BB0;
extern char D_80075518[];
extern char D_80075568[];

void func_802CDDF0(void) {
    func_80268E6C(4, -0x2710);
    func_8026B618(0, 0);
    if (M2C_FIELD(((D_80074BB0 * 0x34) + D_209890), s16 *, 8) == 0) {
        if ((D_8002D420 & 0x900) == 0x100) {
            func_802CDEB4(D_80075568, D_80075518);
        }
    } else if (D_8002D420 & 0x100) {
        if (func_80268AF8(3) != 0) {
            func_802CDEC8(D_80075568, D_80075518, 0xDD);
            return;
        }
        M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0x14C) = (f32) *(f32 *)0x218824;
        func_8023DF7C(D_80075568, D_80075518, 0xDE, 0xA, 0, 0);
    }
}
