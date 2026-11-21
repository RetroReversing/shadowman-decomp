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

extern s32 D_80036944;
extern M2C_UNK D_80075568;
extern void *D_8007AFF8;

void func_8028DFC0(void) {
    f32 temp_fv1;
    f32 var_fv1f;
    s16 temp_v0;
    s16 var_a3;
    u16 *var_a1;
    u16 temp_t2;
    u16 var_a2;
    void *temp_v0_2;
    void *temp_v1;

    var_a1 = M2C_FIELD(D_8007AFF8, u16 **, 0xC);
    M2C_FIELD(D_8007AFF8, s16 *, 0x96) = 0;
    var_a2 = *var_a1;
    var_a3 = 0;
    if (var_a1 != NULL) {
        var_fv1f = *(f32 *)0x2154F8;
        temp_t2 = var_a2;
        if ((s32) M2C_FIELD(D_8007AFF8, u16 *, 0x94) >= 0) {
            do {
                temp_v1 = ((s16) *var_a1 * 0x34) + D_80036944;
                temp_fv1 = fabsf(M2C_FIELD(&D_80075568, f32 *, 0x24) - M2C_FIELD(temp_v1, f32 *, 4)) + fabsf(M2C_FIELD(&D_80075568, f32 *, 0x2C) - M2C_FIELD(temp_v1, f32 *, 0xC));
                var_a1 += 1;
                if (temp_fv1 < var_fv1f) {
                    var_fv1f = temp_fv1;
                    var_a2 = temp_t2;
                    if ((M2C_FIELD(D_8007AFF8, u16 *, 0x94) - 1) >= var_a3) {
                        var_a2 = *var_a1;
                    }
                    temp_v0_2 = ((s16) var_a2 * 0x34) + D_80036944;
                    M2C_FIELD(D_8007AFF8, f32 *, 0xB0) = (f32) M2C_FIELD(temp_v0_2, f32 *, 4);
                    M2C_FIELD(D_8007AFF8, f32 *, 0xB4) = (f32) M2C_FIELD(temp_v0_2, f32 *, 8);
                    M2C_FIELD(D_8007AFF8, f32 *, 0xB8) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0xC);
                }
                temp_v0 = var_a3 + 1;
                var_a3 = temp_v0;
            } while ((s32) M2C_FIELD(D_8007AFF8, u16 *, 0x94) >= temp_v0);
        }
        if ((s16) var_a2 != M2C_FIELD(D_8007AFF8, u16 *, 0x90)) {
            M2C_FIELD(D_8007AFF8, s16 *, 0xA2) = 0;
            M2C_FIELD(D_8007AFF8, s16 *, 0x9E) = 0;
            M2C_FIELD(D_8007AFF8, u16 *, 0x90) = var_a2;
        }
    }
}
