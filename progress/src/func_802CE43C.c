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

M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern s32 D_8002D424;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_802CE43C(void) {
    M2C_UNK *__base_D_80075518;
    if (D_8002D424 & 0x100) {
        __base_D_80075518 = &D_80075518;
        M2C_FIELD(M2C_FIELD(__base_D_80075518, void **, 0x44), f32 *, 0x14C) = (f32) *(f32 *)0x218830;
        func_8023DF7C(&D_80075568, __base_D_80075518, 0xEC, 0xA, 0x32, 0);
    }
}
