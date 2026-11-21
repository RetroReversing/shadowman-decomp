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

M2C_UNK func_802BC4F0(M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32, s32, f32); /* extern */
extern s32 D_8006A4FC;
extern M2C_UNK D_8007558C;
extern void *D_8007AFF8;
extern f32 D_8007B264;
extern f32 D_8007B268;
extern f32 D_8007B26C;

void func_802917BC(void) {
    s32 *__base_D_8006A4FC;
    void **__base_D_8007AFF8;

    __base_D_8007AFF8 = &D_8007AFF8;
    __base_D_8006A4FC = &D_8006A4FC;
    func_802BC4F0(7, 1, M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x10C), &D_8007558C, (*(&D_8006A4FC)) + 0x18, (*(&D_8006A4FC)) + 0x24, D_8007B26C);
    func_802BC4F0(8, 1, M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x10C), &D_8007558C, (*(&D_8006A4FC)) + 0x18, (*(&D_8006A4FC)) + 0x24, D_8007B264);
    func_802BC4F0(9, 1, M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x10C), &D_8007558C, (*(&D_8006A4FC)) + 0x18, (*(&D_8006A4FC)) + 0x24, D_8007B268);
}
