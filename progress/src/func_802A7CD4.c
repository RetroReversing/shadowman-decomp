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

void func_802A7CD4(void *arg0) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    void *temp_a1;
    void *temp_v1;

    temp_a1 = M2C_FIELD(arg0, void **, 8);
    if (temp_a1 != NULL) {
        temp_v1 = M2C_FIELD(temp_a1, void **, 8);
        if (M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x44) * 0x50) + temp_v1), f32 *, 0x24) != *(f32 *)0x21630C) {
            temp_fv0 = M2C_FIELD(temp_v1, f32 *, 0x24);
            M2C_FIELD(arg0, f32 *, 0x2C) = temp_fv0;
            M2C_FIELD(arg0, f32 *, 0x30) = temp_fv0;
            return;
        }
    }
    temp_fv0_2 = *(f32 *)0x216310;
    M2C_FIELD(arg0, f32 *, 0x30) = temp_fv0_2;
    M2C_FIELD(arg0, f32 *, 0x2C) = temp_fv0_2;
}
