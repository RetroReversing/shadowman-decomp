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

s32 func_8027003C();
s32 func_8027006C();
s32 func_802776D8();
extern s32 D_80036944;
extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_8028E250(void) {
    void **__base_D_8007AFF8;
    char *var_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_v1;
    void *temp_s0;
    void *temp_v1_2;
    void *var_a0;

    func_8027003C();
    __base_D_8007AFF8 = &D_8007AFF8;
    temp_s0 = M2C_FIELD((*__base_D_8007AFF8), void **, 0xC);
    M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xD0) = (f32) *(f32 *)0x215518;
    M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) &= ~2;
    temp_v0 = M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x48) | 0x1000;
    M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) = (s32) ((M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) | 0x10080) & 0xF7FFFFFF);
    M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x48) = temp_v0;
    M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x48) = (s32) (temp_v0 | 0x2000);
    var_a0 = D_8006A4FC;
    M2C_FIELD((*__base_D_8007AFF8), s32 *, 0xC4) = 0;
    M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x9C) = 4;
    M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x94) = 0;
    M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) |= 4;
    M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xD4) = (f32) M2C_FIELD(var_a0, f32 *, 0x28);
    M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xC0) = (f32) M2C_FIELD(var_a0, f32 *, 0x1C);
    if (temp_s0 != NULL) {
        temp_v0_2 = M2C_FIELD(temp_s0, u16 *, 0);
        M2C_FIELD((*__base_D_8007AFF8), u16 *, 0x90) = temp_v0_2;
        temp_v0 = (u16)(M2C_FIELD((*__base_D_8007AFF8), u16 *, 0x90));
        M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x70) = (f32) M2C_FIELD((((temp_v0_2 & 0xFFFF) * 0x34) + D_80036944), f32 *, 4);
        M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x74) = (f32) M2C_FIELD(((temp_v0 * 0x34) + D_80036944), f32 *, 8);
        M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) &= ~0x40;
        M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x78) = (f32) M2C_FIELD(((temp_v0 * 0x34) + D_80036944), f32 *, 0xC);
        func_802776D8();
        var_a0 = (*__base_D_8007AFF8);
        var_s0 = temp_s0 + 2;
        M2C_FIELD(var_a0, s32 *, 0xC4) = (s32) *(s32 *)0x21551C;
        temp_v1_2 = var_a0;
        if (M2C_FIELD(temp_s0, s16 *, 2) != -1) {
            var_a0 = (void *)-1;
            __repair_rows: {
                var_s0 += 2;
                M2C_FIELD(temp_v1_2, u16 *, 0x94) += 1;
            }
if (*(s16 *)var_s0 != -1) goto __repair_rows;
        }
    }
    func_8027006C(var_a0);
}
