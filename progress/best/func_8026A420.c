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

extern int D_80075B00;
extern int D_80075ABC;
extern int D_80075AC8;
extern int D_80075ACC;
s32 func_8026A420(s32 arg0) {
    s32 temp_v0;

    if (D_80075B00 == 0) {
        if (!(D_80075ABC & 4)) {
            goto block_3;
        }
        goto block_5;
    }
block_3:
    D_80075AC8 = 1;
    D_80075B00 = 0;
    D_80075ACC = 0xB4;
    if (D_80075ABC & 4) {
block_5:
        temp_v0 = D_80075ACC - 1;
        D_80075ACC = temp_v0;
        if (temp_v0 < 0) {
            D_80075AC8 = 0;
        }
    }
    if (D_80075AC8 == 1) {
        func_80269604(arg0);
    }
    return 1;
}
