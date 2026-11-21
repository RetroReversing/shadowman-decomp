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

s32 func_802A6508();
s32 func_802A7CD4();

void func_802A89DC(void *arg0) {
    func_802A7CD4();
    M2C_FIELD(arg0, s32 *, 0x40) = 7;
    M2C_FIELD(arg0, s16 *, 0x52) = 3;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) *(f32 *)0x216394;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) *(f32 *)0x216398;
    func_802A6508(arg0, 0xB);
    M2C_FIELD(arg0, u8 *, 0x48) = 0xFF;
    M2C_FIELD(arg0, u8 *, 0x49) = 0xC8;
    M2C_FIELD(arg0, s8 *, 0x4A) = 0;
    M2C_FIELD(arg0, u8 *, 0x50) |= 1;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) *(f32 *)0x21639C;
}
