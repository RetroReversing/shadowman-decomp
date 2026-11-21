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

M2C_UNK func_80268C8C();                            /* extern */
extern s16 D_80030F0A;
extern u16 D_80030F0C;
extern s16 D_80030F14;
extern s16 D_80030F16;
extern s16 D_80030F18;
extern s16 D_80030F20;
extern s16 D_80030F22;
extern s16 D_80030F24;
extern M2C_UNK D_80052770;
extern f32 D_80075AA0;
extern f32 D_80075AB0;

void func_80268C2C(void) {
    f32 temp_fv0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;

    if (D_80075AA0 != 0.0f) {
        temp_fv0 = D_80075AA0 - (f32) M2C_FIELD(&D_80052770, s32 *, 4);
        D_80075AA0 = temp_fv0;
        if (temp_fv0 < 0.0f) {
            D_80075AA0 = 0.0f;
        }
        func_80268C8C();
        return;
    }
    D_80075AB0 = 0.0f;
    if (D_80030F0A > 0) {
        temp_v0 = (u16) D_80030F0A - (M2C_FIELD(&D_80052770, s32 *, 4) * 3);
        D_80030F0A = temp_v0;
        if (temp_v0 & 0x8000) {
            D_80030F0A = 0;
        }
        D_80030F0C = (u16) D_80030F0A;
    }
    if (D_80030F14 >= 0x3B) {
        temp_v0_2 = (u16) D_80030F14 - (M2C_FIELD(&D_80052770, s32 *, 4) * 3);
        D_80030F14 = temp_v0_2;
        if (temp_v0_2 < 0x3A) {
            D_80030F14 = 0x3A;
        }
    }
    if (D_80030F16 > 0) {
        temp_v0_3 = (u16) D_80030F16 - (M2C_FIELD(&D_80052770, s32 *, 4) * 3);
        D_80030F16 = temp_v0_3;
        if (temp_v0_3 & 0x8000) {
            D_80030F16 = 0;
        }
    }
    if (D_80030F18 >= 0x53) {
        temp_v0_4 = (u16) D_80030F18 - (M2C_FIELD(&D_80052770, s32 *, 4) * 3);
        D_80030F18 = temp_v0_4;
        if (temp_v0_4 < 0x52) {
            D_80030F18 = 0x52;
        }
    }
    if (D_80030F20 >= 0xC9) {
        temp_v0_5 = (u16) D_80030F20 - (M2C_FIELD(&D_80052770, s32 *, 4) * 3);
        D_80030F20 = temp_v0_5;
        if (temp_v0_5 < 0xC8) {
            D_80030F20 = 0xC8;
        }
    }
    if (D_80030F22 >= 0x78) {
        temp_v0_6 = (u16) D_80030F22 - (M2C_FIELD(&D_80052770, s32 *, 4) * 3);
        D_80030F22 = temp_v0_6;
        if (temp_v0_6 < 0x77) {
            D_80030F22 = 0x77;
        }
    }
    if (D_80030F24 >= 3) {
        temp_v0_7 = (u16) D_80030F24 - (M2C_FIELD(&D_80052770, s32 *, 4) * 3);
        D_80030F24 = temp_v0_7;
        if (temp_v0_7 < 2) {
            D_80030F24 = 2;
        }
    }
}
