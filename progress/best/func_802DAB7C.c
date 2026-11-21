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

M2C_UNK func_8022953C(void *);                      /* extern */
s32 func_80229AAC(s32);                 /* extern */
extern M2C_UNK D_2D70E0;
extern u8 D_8007DC06;

void func_802DAB7C(void *arg0) {
    s8 sp10;
    s8 sp11;
    s8 sp12;

    sp10 = M2C_FIELD(&D_2D70E0, s8 *, 0);
    sp11 = M2C_FIELD(&D_2D70E0, s8 *, 1);
    sp12 = M2C_FIELD(&D_2D70E0, s8 *, 2);
    D_8007DC06 = (u8) (&sp10)[(func_80229AAC(M2C_FIELD(arg0, s32 *, 0x28)) - 1) & 0xFF];
    func_8022953C(arg0);
}
