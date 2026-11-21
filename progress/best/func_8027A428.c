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

extern float D_8007558C;
extern float D_80075594;
extern s32 D_80036944;
extern char D_80075568[];
extern void *D_8007AFF8;
extern u16 D_8007B0FC;

void func_8027A428(void) {
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 var_ft0;
    s16 temp_v0;
    s16 var_t0;
    u16 *temp_a1;
    char *var_a1;
    u16 temp_a0;
    u16 var_a3;
    void *temp_v0_2;

    var_t0 = 0;
    var_ft0 = *(f32 *)0x214464;
    temp_a1 = M2C_FIELD(D_8007AFF8, u16 **, 0xC);
    var_a3 = *temp_a1;
    var_a1 = temp_a1 + 2;
    do {
        temp_a0 = *(u16 *)var_a1;
        temp_v0_2 = ((s16) temp_a0 * 0x34) + D_80036944;
        temp_fv1f = M2C_FIELD(temp_v0_2, f32 *, 4);
        temp_fv1 = fabsf(D_8007558C - temp_fv1f) + fabsf(D_80075594 - M2C_FIELD(temp_v0_2, f32 *, 0xC));
        var_a1 += 2;
        D_8007B0FC = temp_a0;
        if (var_ft0 < temp_fv1) {
            M2C_FIELD(D_8007AFF8, f32 *, 0xB0) = temp_fv1f;
            var_ft0 = temp_fv1;
            M2C_FIELD(D_8007AFF8, f32 *, 0xB4) = (f32) M2C_FIELD(temp_v0_2, f32 *, 8);
            var_a3 = temp_a0;
            M2C_FIELD(D_8007AFF8, f32 *, 0xB8) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0xC);
        }
        temp_v0 = var_t0 + 1;
        var_t0 = temp_v0;
    } while (temp_v0 < 2);
    if ((s16) var_a3 != M2C_FIELD(D_8007AFF8, u16 *, 0x92)) {
        M2C_FIELD(D_8007AFF8, s32 *, 0xC0) = 0;
        M2C_FIELD(D_8007AFF8, s16 *, 0xA8) = 0;
        M2C_FIELD(D_8007AFF8, u16 *, 0x92) = var_a3;
    }
}
