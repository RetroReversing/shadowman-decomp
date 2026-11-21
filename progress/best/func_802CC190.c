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

extern float D_80075578;
s32 func_8023DF7C();
extern char D_80075518[];
extern char D_80075568[];
extern s32 D_800755F8;

void func_802CC190(void) {
    if (D_800755F8 != 0) {
        D_80075578 = (f32) (D_80075578 * *(f32 *)0x2186EC);
        func_8023DF7C(D_80075568, D_80075518, 0x29, 0xA, 0x32, 2);
    }
}
