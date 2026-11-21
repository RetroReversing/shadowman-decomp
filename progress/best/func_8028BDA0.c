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

M2C_UNK func_8023A0DC(M2C_UNK, M2C_UNK, void *, M2C_UNK *, f32, f32 *, void *); /* extern */
M2C_UNK func_80240418(f32 *, f32 *, f32, M2C_UNK);  /* extern */
extern M2C_UNK D_212078;
extern s32 D_800311F0;
extern void *D_8006A4FC;
extern s32 D_8006A588;
extern void *D_8007AFF8;
extern M2C_UNK D_8007B220;

void func_8028BDA0(void) {
    void **__base_D_8007AFF8;
    s32 *__base_D_800311F0;
    M2C_UNK *__base_D_212078;
    f32 sp18[3];
    f32 sp28[3];
    f32 temp_fs0;
    void *temp_a0;

    __base_D_212078 = &D_212078;
    __base_D_800311F0 = &D_800311F0;
    __base_D_8007AFF8 = &D_8007AFF8;
    if ((M2C_FIELD((*__base_D_8007AFF8), u16 *, 0x90) != 0) && ((sp18[0] = M2C_FIELD(D_8006A4FC, f32 *, 0x24), sp18[2] = M2C_FIELD(D_8006A4FC, f32 *, 0x2C), sp18[1] = M2C_FIELD(D_8006A4FC, f32 *, 0x28) + M2C_FIELD(((M2C_FIELD((*__base_D_8007AFF8), u8 *, 0x40) * 0x6C) + __base_D_212078), f32 *, 0x38), temp_fs0 = (f32) M2C_FIELD(((M2C_FIELD((*__base_D_8007AFF8), u8 *, 0x40) * 0x6C) + __base_D_212078), u8 *, 0x3C), temp_a0 = D_8006A4FC + 0x34, func_8023A0DC(0, 0, temp_a0, __base_D_212078, temp_fs0, sp28, temp_a0), (*__base_D_800311F0) = 1, sp28[0] += sp18[0], sp28[1] += sp18[1], sp28[2] += sp18[2], func_80240418(sp18, sp28, temp_fs0, 3), (*__base_D_800311F0) = 0, (D_8006A588 == 1)) || (M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x48) & 8))) {
        M2C_FIELD(D_8006A4FC, f32 *, 0x24) = (f32) M2C_FIELD(&D_8007B220, f32 *, 0);
        M2C_FIELD(D_8006A4FC, f32 *, 0x28) = (f32) M2C_FIELD(&D_8007B220, f32 *, 4);
        M2C_FIELD(D_8006A4FC, f32 *, 0x2C) = (f32) M2C_FIELD(&D_8007B220, f32 *, 8);
    }
}
