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

M2C_UNK func_8023A0DC(M2C_UNK32, M2C_UNK32, M2C_UNK, f32 *, void *); /* extern */
M2C_UNK func_802A5EC4(f32 *, f32 *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_217C2C;
extern void *D_8006A4FC;
extern M2C_UNK D_80075568;
extern void *D_8007AFF8;

void func_8028D3D0(void) {
    void **__base_D_8006A4FC;
    f32 sp18[3];
    M2C_UNK32 sp28[3];
    f32 sp38[3];
    f32 temp_fs0;

    temp_fs0 = *(f32 *)0x215420;
    sp28[0] = 0;
    sp28[2] = 0;
    __base_D_8006A4FC = &D_8006A4FC;
    sp28[1] = M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x1C) - temp_fs0;
    do { func_8023A0DC(sp28[0], sp28[0], 0x437A0000, sp18, (*__base_D_8006A4FC) + 0x34); } while (0);
    sp18[0] += M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x24);
    sp18[1] += M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x28);
    sp18[2] += M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x2C);
    sp38[0] = M2C_FIELD(&D_80075568, f32 *, 0x24) - M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x24);
    sp38[1] = M2C_FIELD(&D_80075568, f32 *, 0x28) - (M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x28) - temp_fs0);
    sp38[2] = M2C_FIELD(&D_80075568, f32 *, 0x2C) - M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x2C);
    func_802A5EC4(sp18, sp38, &D_217C2C, 0, 1, (s32) M2C_FIELD(D_8007AFF8, u8 *, 0x40));
}
