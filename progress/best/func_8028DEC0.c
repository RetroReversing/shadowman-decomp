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

s32 func_80113AD0();                                /* extern */
M2C_UNK func_802776D8(u8, void *);                  /* extern */
extern s32 D_80036944;
extern void *D_8007AFF8;

void func_8028DEC0(void) {
    void **__base_D_8007AFF8;
    f32 temp_fv1;
    s16 *temp_s0_2;
    s32 temp_s0;
    void *temp_v0;

    __base_D_8007AFF8 = &D_8007AFF8;
    temp_s0 = M2C_FIELD((*__base_D_8007AFF8), s32 *, 0xC);
    M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x96) = 1;
    if (temp_s0 != 0) {
        temp_s0_2 = temp_s0 + ((s32) ((func_80113AD0() % (s32) M2C_FIELD((*__base_D_8007AFF8), u16 *, 0x94)) << 0x10) >> 0xF);
        temp_v0 = (*temp_s0_2 * 0x34) + D_80036944;
        M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xB0) = (f32) M2C_FIELD(temp_v0, f32 *, 4);
        M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xB4) = (f32) M2C_FIELD(temp_v0, f32 *, 8);
        temp_fv1 = M2C_FIELD(temp_v0, f32 *, 0xC);
        M2C_FIELD((*__base_D_8007AFF8), s16 *, 0xA2) = 0x1E;
        M2C_FIELD((*__base_D_8007AFF8), u16 *, 0x90) = (u16) *temp_s0_2;
        M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x9E) = 0;
        M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x92) = 0;
        M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x70) = (f32) M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xB0);
        M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xB8) = temp_fv1;
        M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xD0) = (f32) *(f32 *)0x2154F4;
        M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) = (s32) (M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) & ~0x40);
        M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x78) = temp_fv1;
        M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x74) = (f32) M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xB4);
        func_802776D8(M2C_FIELD((*__base_D_8007AFF8), u8 *, 0x3B), (*__base_D_8007AFF8));
        M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x9E) = 1;
    }
}
