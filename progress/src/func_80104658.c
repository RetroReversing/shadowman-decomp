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

M2C_UNK func_80116EB0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_8004AD90;
extern M2C_UNK D_8004AE78;

void func_80104658(s32 arg0, s16 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(&D_8004AE78, s32 *, 0) = arg0;
    M2C_FIELD(&D_8004AE78, s32 *, 0xC) = (s32) arg1;
    M2C_FIELD(&D_8004AE78, s32 *, 4) = arg2;
    M2C_FIELD(&D_8004AE78, s32 *, 0x14) = arg3;
    func_80116EB0(&D_8004AD90, &D_8004AE78, 1);
}
