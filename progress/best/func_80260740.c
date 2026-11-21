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

M2C_UNK func_80109318(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
f32 func_8023B800(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_8025BF10(void *);                      /* extern */
s32 func_80268E6C(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK D_8007558C;

void func_80260740(void *arg0) {
    M2C_UNK *__base_D_8007558C;
    __base_D_8007558C = &D_8007558C;
    if ((M2C_FIELD(arg0, s16 *, 0x16) != 0x10) && (func_8023B800(__base_D_8007558C, M2C_FIELD(arg0, s32 *, 8) + 0x24) < *(f32 *)0x20B40C) && (func_80268E6C(6, 0xC) != 0)) {
        func_80109318(0xD0, __base_D_8007558C, 0);
        func_8025BF10(arg0);
    }
}
