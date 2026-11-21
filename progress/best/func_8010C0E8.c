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

M2C_UNK func_8023A0DC(f32, M2C_UNK, f32, s32, s32); /* extern */
extern s32 D_8006A4FC;

void func_8010C0E8(s32 arg0) {
    s32 *__base_D_8006A4FC;
    f32 temp_fs0f;

    temp_fs0f = *(f32 *)0x101F7C;
    __base_D_8006A4FC = &D_8006A4FC;
    do { func_8023A0DC(0.0f, 0, temp_fs0f, arg0 + 4, (*__base_D_8006A4FC) + 0x34); } while (0);
    func_8023A0DC(temp_fs0f, 0, 0.0f, arg0 + 0x10, (*__base_D_8006A4FC) + 0x34);
}
