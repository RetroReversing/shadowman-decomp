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
s32 func_802654E8();                                /* extern */
extern f32 D_800754F0;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern s32 D_800755F8;

void func_802CC680(void) {
    if ((D_800755F8 != 0) && (*(f32 *)0x218714 < D_800754F0)) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x28, 0xA, 0x1E, 2);
    }
    if (func_802654E8() == 0) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x30, 0xA, 0x46, 2);
    }
}
