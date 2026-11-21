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

extern f32 D_80074BC0;

void func_80236CC8(void *arg0) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;

    if (M2C_FIELD(arg0, s16 *, 0x40) == 0) {
        temp_fv0 = M2C_FIELD(arg0, f32 *, 0x18) + (M2C_FIELD(arg0, f32 *, 0x3C) * D_80074BC0);
        temp_fv0f = M2C_FIELD(arg0, f32 *, 0x48);
        M2C_FIELD(arg0, f32 *, 0x18) = temp_fv0;
        if (temp_fv0f < temp_fv0) {
            M2C_FIELD(arg0, f32 *, 0x18) = temp_fv0f;
            M2C_FIELD(arg0, s16 *, 0x40) = 1;
        }
    } else {
        temp_fv0_2 = M2C_FIELD(arg0, f32 *, 0x18) - (M2C_FIELD(arg0, f32 *, 0x38) * D_80074BC0);
        temp_fv0f_2 = M2C_FIELD(arg0, f32 *, 0x4C);
        M2C_FIELD(arg0, f32 *, 0x18) = temp_fv0_2;
        if (temp_fv0_2 < temp_fv0f_2) {
            M2C_FIELD(arg0, f32 *, 0x18) = temp_fv0f_2;
            M2C_FIELD(arg0, s16 *, 0x40) = 0;
        }
    }
}
