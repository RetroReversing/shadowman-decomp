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

s32 func_80104A14(s32);                             /* extern */
M2C_UNK func_80105074(s32 *, s32, M2C_UNK *);       /* extern */
extern M2C_UNK D_8001E430;
extern s32 D_8004ADD8;
extern s32 D_8004ADDC;
extern s32 D_8004ADE4;

s32 func_80104C50(s32 *arg0, s32 arg1) {
    M2C_FIELD(&D_8001E430, s32 *, 8) = func_80104A14(*arg0 + (arg1 * 0xC) + 4);
    M2C_FIELD(&D_8001E430, s32 *, 0xC) = 1;
    M2C_FIELD(&D_8001E430, s32 *, 4) = 0;
    M2C_FIELD(&D_8001E430, s32 *, 0x24) = -1;
    M2C_FIELD(&D_8001E430, s32 *, 0x18) = 0;
    M2C_FIELD(&D_8001E430, s32 *, 0x28) = (s32) D_8004ADE4;
    M2C_FIELD(&D_8001E430, s32 *, 0x1C) = (s32) D_8004ADD8;
    M2C_FIELD(&D_8001E430, s32 *, 0x20) = (s32) D_8004ADDC;
    func_80105074(arg0, arg1, &D_8001E430);
    return (s32) &D_8001E430;
}
