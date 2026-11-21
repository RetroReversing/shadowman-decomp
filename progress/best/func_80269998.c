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

M2C_UNK func_8026A714(M2C_UNK *, M2C_UNK, f32, f32, s32); /* extern */
extern u8 D_80030F08;
extern u16 D_80030F0A;
extern u8 D_80030F0C;
extern M2C_UNK D_80030F28;
extern M2C_UNK D_80075AA8;

void func_80269998(void) {
    M2C_UNK *__base_D_80075AA8;
    M2C_UNK *__base_D_80030F28;
    __base_D_80075AA8 = &D_80075AA8;
    if (M2C_FIELD(__base_D_80075AA8, s32 *, 0x70) != 0) {
        __base_D_80030F28 = &D_80030F28;
        func_8026A714(__base_D_80030F28, 0x41200000, 0.0f, (f32) M2C_FIELD(__base_D_80075AA8, s32 *, 0x70), ((((*(u16 *)&D_80030F08) << 8) & ~0x7FF) | ((D_80030F0A * 8) & 0x7C0) | (((u16) (*(u16 *)&D_80030F0C) >> 2) & 0x3E) | 1) & 0xFFFF);
    }
    if (M2C_FIELD(__base_D_80075AA8, s32 *, 0x70) != M2C_FIELD(__base_D_80075AA8, s32 *, 0x6C)) {
        func_8026A714(__base_D_80030F28, 0x41200000, (f32) M2C_FIELD(__base_D_80075AA8, s32 *, 0x70), (f32) M2C_FIELD(__base_D_80075AA8, s32 *, 0x6C), 0x2001);
    }
    if (M2C_FIELD(__base_D_80075AA8, s32 *, 0x6C) != 0x2710) {
        func_8026A714(__base_D_80030F28, 0x41200000, (f32) M2C_FIELD(__base_D_80075AA8, s32 *, 0x6C), 10000.0f, 0);
    }
}
