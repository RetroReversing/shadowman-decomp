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
M2C_UNK func_802C71E4();                            /* extern */
M2C_UNK func_802CC190();                            /* extern */
extern s32 D_8002D420;
extern s32 D_80030E40;
extern f32 D_800458A8;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_802C75E4(void) {
    s32 *__base_D_80030E40;
    if (M2C_FIELD(&D_80075518, s16 *, 0x2E) == 0) {
        __base_D_80030E40 = &D_80030E40;
        M2C_FIELD(__base_D_80030E40, s32 *, 0) = 0;
    }
    if (M2C_FIELD(&D_80075568, f32 *, 0x10) <= 0.0f) {
        if (M2C_FIELD(&D_80075518, s16 *, 0x2E) >= 7) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x93, 0xA, 0x28, 2);
        }
    }
    if (M2C_FIELD(__base_D_80030E40, s32 *, 0) >= 0x19) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x93, 0xA, 0x4B, 2);
    }
    if (D_8002D420 & 0x80) {
        M2C_FIELD(__base_D_80030E40, f32 *, 8) = (f32) D_800458A8;
    }
    func_802C71E4();
    func_802CC190();
}
