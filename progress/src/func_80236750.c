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

M2C_UNK func_80236570();                            /* extern */
M2C_UNK func_80236820();                            /* extern */
M2C_UNK func_80241EAC();                            /* extern */
M2C_UNK func_80242330(M2C_UNK);                     /* extern */
M2C_UNK func_80242340();                            /* extern */
extern s32 D_8005E9F0;
extern s32 D_800619D0;
extern s32 D_800619D4;
extern s32 D_800619D8;
extern s32 D_8006A9A8;

void func_80236750(void) {
    D_8005E9F0 = 0;
    D_800619D0 = 0x136;
    D_8006A9A8 = 0;
    D_800619D8 = 0;
    D_800619D4 = 0;
    func_80236570();
    func_80241EAC();
    func_80236820();
    func_80242330(0);
    func_80242340();
}
