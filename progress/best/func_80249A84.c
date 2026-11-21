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

void func_80249A84(void *arg0) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    s32 *temp_a1;
    s32 temp_v1;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 8);
    temp_a1 = M2C_FIELD(temp_a0, s32 **, 0x6C);
    temp_v1 = *temp_a1;
    switch (temp_v1) {                              /* irregular */
    case 3:
        temp_fv0 = M2C_FIELD(temp_a0, f32 *, 0x18) + (D_80074BC0 * *(f32 *)0x202D90);
        M2C_FIELD(temp_a0, f32 *, 0x18) = temp_fv0;
        if (*(f32 *)0x202D94 < temp_fv0) {
            *temp_a1 = 1;
            return;
        }
        return;
    case 4:
        temp_fv0_2 = M2C_FIELD(temp_a0, f32 *, 0x18) - (D_80074BC0 * *(f32 *)0x202D98);
        M2C_FIELD(temp_a0, f32 *, 0x18) = temp_fv0_2;
        if (temp_fv0_2 < *(f32 *)0x202D9C) {
            *temp_a1 = 2;
            return;
        }
        break;
    }
}
