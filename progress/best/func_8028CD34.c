/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

extern float D_80075590;
extern float D_8007558C;
extern float D_80075594;
extern s32 D_80036944;
extern char D_80075568[];
extern void *D_8007AFF8;
extern s16 D_8007B240;
extern u8 D_8007B242;
extern s16 D_8007B244;

void func_8028CD34(void) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 var_fv1;
    f32 var_fv1_2;
    s16 temp_v1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    char *var_a1;
    char *var_a1_2;
    char *var_a1_3;
    void *temp_v0;
    void *temp_v0_2;

    var_a2 = 0;
    var_a1 = M2C_FIELD(D_8007AFF8, s32 *, 0xC) + (M2C_FIELD(D_8007AFF8, s16 *, 0xA0) * 2);
    M2C_FIELD(D_8007AFF8, u16 *, 0x96) = (u16) M2C_FIELD(D_8007AFF8, s16 *, 0xA0);
loop_1:
    temp_v1 = (s16) *(u16 *)var_a1;
    var_a1 += 2;
    if (temp_v1 != -1) {
        if (D_80075590 < (M2C_FIELD(((temp_v1 * 0x34) + D_80036944), f32 *, 8) + *(f32 *)0x2153E0)) {
            D_8007B242 = (u8) ((u32) (var_a2 & 0xFF) >> 2);
        }
        var_a2 += 1;
        if ((u32) (var_a2 & 0xFF) < 0xBU) {
            goto loop_1;
        }
    }
    var_a2_2 = 0;
    var_fv1 = *(f32 *)0x2153E4;
    var_a1_2 = M2C_FIELD(D_8007AFF8, s32 *, 0xC) + (D_8007B242 * 8);
    do {
        temp_v0 = ((s16) *(u16 *)var_a1_2 * 0x34) + D_80036944;
        temp_fv0 = fabsf(D_8007558C - M2C_FIELD(temp_v0, f32 *, 4)) + fabsf(D_80075594 - M2C_FIELD(temp_v0, f32 *, 0xC));
        var_a1_2 += 2;
        if (var_fv1 < temp_fv0) {
            var_fv1 = temp_fv0;
            D_8007B240 = var_a2_2 & 0xFF;
        }
        var_a2_2 += 1;
    } while ((u32) (var_a2_2 & 0xFF) < 4U);
    var_a2_3 = 0;
    var_fv1_2 = *(f32 *)0x2153E8;
    var_a1_3 = M2C_FIELD(D_8007AFF8, s32 *, 0xC) + (D_8007B242 * 8);
    do {
        temp_v0_2 = ((s16) *(u16 *)var_a1_3 * 0x34) + D_80036944;
        temp_fv0_2 = fabsf(D_8007558C - M2C_FIELD(temp_v0_2, f32 *, 4)) + fabsf(D_80075594 - M2C_FIELD(temp_v0_2, f32 *, 0xC));
        var_a1_3 += 2;
        if (temp_fv0_2 < var_fv1_2) {
            var_fv1_2 = temp_fv0_2;
            D_8007B244 = var_a2_3 & 0xFF;
        }
        var_a2_3 += 1;
    } while ((u32) (var_a2_3 & 0xFF) < 4U);
}
