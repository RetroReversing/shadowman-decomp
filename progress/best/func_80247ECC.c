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

s32 func_801043F8(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern s32 D_8002DC48;
extern M2C_UNK D_80072CB8;

void func_80247ECC(void) {
    M2C_UNK *__base_D_80072CB8;
    M2C_FIELD((__base_D_80072CB8 = &D_80072CB8), s32 *, 0x28) = func_801043F8(8, 2, 0);
    M2C_FIELD(__base_D_80072CB8, u16 *, 0x3A) = 1;
    M2C_FIELD(__base_D_80072CB8, s32 *, 0x14) = func_801043F8(0x900, 2, 0);
    M2C_FIELD(__base_D_80072CB8, s32 *, 0x18) = func_801043F8(0xC00, 2, 0);
    M2C_FIELD(__base_D_80072CB8, s32 *, 0x1C) = 0;
    M2C_FIELD(__base_D_80072CB8, s32 *, 0x20) = func_801043F8(0xC00, 2, 0);
    M2C_FIELD(__base_D_80072CB8, s32 *, 0x24) = func_801043F8(0x800, 2, 0);
    M2C_FIELD(__base_D_80072CB8, u16 *, 0x30) = 0x80;
    M2C_FIELD(__base_D_80072CB8, s32 *, 0x3C) = 6;
    M2C_FIELD(__base_D_80072CB8, u8 *, 0x3E) = 2;
    M2C_FIELD(__base_D_80072CB8, u16 *, 0x12) = 0x190;
    D_8002DC48 = 0;
    M2C_FIELD(__base_D_80072CB8, s32 *, 0x3C) = (s32) ((s32) M2C_FIELD(__base_D_80072CB8, s32 *, 0x3C) & ~0x7F);
}
