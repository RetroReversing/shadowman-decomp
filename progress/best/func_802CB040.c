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
s32 func_802C7FF4();                                /* extern */
extern s32 D_8002D420;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_802CB040(void) {
    s16 temp_v1;

    if ((D_8002D420 & 1) && (func_802C7FF4() != 0)) {
        temp_v1 = M2C_FIELD(&D_80075518, s16 *, 4);
        if (temp_v1 == 0x4B) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x47, 0xA, 0x28, 2);
        }
        if (temp_v1 == 0x4C) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x48, 0xA, 0x28, 2);
        }
    }
}
