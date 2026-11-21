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

s32 func_8022D440(s32, s32, M2C_UNK *);             /* extern */
M2C_UNK func_8022DAF0(M2C_UNK);                     /* extern */
extern M2C_UNK D_2020D8;
extern M2C_UNK D_2020E8;
extern u32 D_80000318;
extern M2C_UNK D_800597B0;
extern s32 D_80059818;

void func_8022D5A0(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x25800;
    if ((u32) D_80000318 > 0x400000U) {
        var_s0 = 0x54600;
    }
    temp_v0 = func_8022D440(var_s0 * 2, 0, &D_2020D8);
    M2C_FIELD(&D_800597B0, s32 *, 0) = temp_v0;
    M2C_FIELD(&D_800597B0, s32 *, 4) = func_8022D440(var_s0, temp_v0, &D_2020E8);
    D_80059818 = 2;
    M2C_FIELD(&D_800597B0, s16 *, 8) = -1;
    func_8022DAF0(0);
}
