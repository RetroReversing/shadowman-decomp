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

s32 func_80109918(M2C_UNK *, M2C_UNK, s16);         /* extern */
M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_8026B618(M2C_UNK, M2C_UNK);            /* extern */
extern s32 D_8002D420;
extern s32 D_80075500;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007558C;

void func_802CF268(void) {
    s32 *__base_D_80075500;
    __base_D_80075500 = &D_80075500;
    if ((*__base_D_80075500) == 0) {
        (*__base_D_80075500) = func_80109918(&D_8007558C, 0x7F, *(s16 *)0x216C56);
    }
    func_8026B618(0, 1);
    if (!(D_8002D420 & 0x100)) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x106, 0xA, 0x78, 0);
        func_8026B618(0, 0);
    }
}
