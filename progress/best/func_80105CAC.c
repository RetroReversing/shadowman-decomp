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

extern int D_8004AEC0;
s32 func_80105C44();
s32 func_80115C70();
extern s32 D_8004AEB0;
extern s32 D_8004AEB4;
extern char D_8004AEB8[];

void func_80105CAC(void) {
    D_8004AEB0 += 1;
    D_8004AEB4 += 1;
    func_80105C44(1, 2);
    if ((D_8004AEC0 != 0) && (M2C_FIELD(D_8004AEB8, void **, 0) != NULL) && (*M2C_FIELD(M2C_FIELD(D_8004AEB8, void **, 0), s32 **, 0) == 1)) {
        M2C_FIELD(M2C_FIELD(D_8004AEB8, void **, 0), s32 *, 0x10) |= 4;
        func_80115C70(M2C_FIELD(D_8004AEB8, void **, 0));
    }
}
