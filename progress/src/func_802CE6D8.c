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

M2C_UNK func_80109A1C(s32);                         /* extern */
M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_8026B618(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_802A6548(M2C_UNK *, M2C_UNK);          /* extern */
extern s32 D_8002D420;
extern s32 D_80075508;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007558C;
extern u8 D_8007DBC0;

void func_802CE6D8(void) {
    s32 *__base_D_80075508;
    if (!(D_8002D420 & 0x100)) {
        if (D_8007DBC0 != 0) {
            __base_D_80075508 = &D_80075508;
            if ((*__base_D_80075508) != 0) {
                func_80109A1C((*__base_D_80075508));
                (*__base_D_80075508) = 0;
            }
            func_802A6548(&D_8007558C, 0x23);
        }
        func_8026B618(0, 0);
        func_8023DF7C(&D_80075568, &D_80075518, 0xEA, 0xA, 0x46, 0);
    }
}
