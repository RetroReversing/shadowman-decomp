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

extern s32 D_8002DBDC;
extern s32 D_80030C74;
extern s32 D_80030E34;
extern s32 D_80030E3C;
extern s32 D_80072BEC;

void func_802C8D44(void) {
    D_8002DBDC = 1;
    D_80072BEC = 0;
    D_80030C74 = 2;
    D_80030E34 = D_80030E3C;
}
