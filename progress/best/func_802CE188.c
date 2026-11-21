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
M2C_UNK func_802CE214(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_8002D424;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern u8 D_8007DBC0;

void func_802CE188(void) {
    M2C_UNK *__base_D_80075518;
    s32 *__base_D_8002D424;
    if (D_8007DBC0 == 0) {
        __base_D_80075518 = &D_80075518;
        if (M2C_FIELD(((M2C_FIELD(__base_D_80075518, s16 *, 4) * 0x38) + M2C_FIELD(__base_D_80075518, s32 *, 0x30)), u16 *, 4) & 4) {
            __base_D_8002D424 = &D_8002D424;
            if ((*__base_D_8002D424) & 0x100) {
                func_802CE214(&D_80075568, __base_D_80075518, 0xE4, 0xA);
            }
        } else if ((*__base_D_8002D424) & 0x100) {
            func_8023DF7C(&D_80075568, __base_D_80075518, 0xE1, 0xA, 0, 0);
        }
    }
}
