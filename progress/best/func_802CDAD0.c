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
extern short D_80075542;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023DF7C();
s32 func_8026B618();
extern s32 D_8002D424;
extern char D_80075518[];
extern char D_80075568[];

void func_802CDAD0(void) {
    func_8026B618(0, 0);
    if (D_80075542 >= 0x1C) {
        if (D_8002D424 & 0x100) {
            func_8023DF7C(D_80075568, D_80075518, 0xDB, 0xA, 0x14, 0);
        }
    }
    if (D_80075542 >= 0x65) {
        func_8023DF7C(D_80075568, D_80075518, 0xD4, 0xA, 0x78, 0);
    }
}
