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
M2C_UNK func_802401D0(void *, f32 *, M2C_UNK);      /* extern */
extern s32 D_8002D420;
extern s32 D_8002D424;
extern M2C_UNK D_8002DBD0;
extern s32 D_8006A588;
extern s32 D_8006A5B4;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern s32 D_8007BE30;
extern f32 D_8007BED0;

void func_802C9830(void) {
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 temp_fv1f;

    sp18 = M2C_FIELD(&D_80075568, f32 *, 0x24);
    sp1C = M2C_FIELD(&D_80075568, f32 *, 0x28);
    sp20 = M2C_FIELD(&D_80075568, f32 *, 0x2C);
    temp_fv1f = *(f32 *)0x2185C4;
    D_8006A5B4 = 3;
    sp1C += *(f32 *)0x2185C0;
    sp18 += temp_fv1f;
    sp20 += temp_fv1f;
    func_802401D0(&D_80075568 + 0x24, &sp18, 0x40A00000);
    if (D_8006A588 == 0) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x12, 0xA, 0x28, 2);
    }
    if (D_8002D424 & 0x80) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x58, 0xA, 0x28, 2);
    }
    if (D_8002D420 & 1) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x3C, 0xA, 0x28, 2);
    }
    if (D_8002D420 & 2) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x3D, 0xA, 0x28, 2);
    }
    if (D_8002D424 & 4) {
        D_8007BE30 = -D_8007BE30;
        D_8007BED0 = M2C_FIELD(&D_80075568, f32 *, 0x1C) + *(f32 *)0x2185C8;
        func_8023DF7C(&D_80075568, &D_80075518, 0x51, 0xA, 0x28, 2);
    }
    if (D_8002D424 & 8) {
        D_8007BE30 = -D_8007BE30;
        D_8007BED0 = M2C_FIELD(&D_80075568, f32 *, 0x1C) + *(f32 *)0x2185CC;
        func_8023DF7C(&D_80075568, &D_80075518, 0x52, 0xA, 0x28, 2);
    }
    if (M2C_FIELD(&D_8002DBD0, s32 *, 0x18) != 0) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x56, 0xA, 0x28, 2);
    }
    if (M2C_FIELD(&D_8002DBD0, s32 *, 8) != 0) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x57, 0xA, 0x28, 2);
    }
}
