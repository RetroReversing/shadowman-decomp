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
M2C_UNK func_80265348();                            /* extern */
M2C_UNK func_802BAAF8(f32 *, f32 *, f32);           /* extern */
M2C_UNK func_802C3934(f32);                         /* extern */
M2C_UNK func_802CC680();                            /* extern */
M2C_UNK func_802CCF44();                            /* extern */
extern s32 D_8002D420;
extern s32 D_8002D424;
extern M2C_UNK D_8002DBD0;
extern s32 D_8002DBD8;
extern s32 D_80030E40;
extern f32 D_8003ACE8;
extern s32 D_80044E90;
extern s16 D_80044EC6;
extern s32 D_800458B0;
extern f32 D_8005E6E8;
extern void *D_80061A10;
extern M2C_UNK D_8006A510;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern M2C_UNK D_80075598;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x38, 0x3c, 0x40, 0x44, 0x48, 0x58, 0x5c], gap at: 0x4c. */
void func_802CCD90(void) {
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp28;                                       /* compiler-managed */
    f32 sp2C;
    f32 sp30;
    M2C_UNK *temp_s1;
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_ft0f;
    f32 temp_ft1f;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    void *temp_v0;

    M2C_FIELD(&D_80075568, s32 *, 0x18) = 0;
    if (D_80044EC6 == 0) {
        func_80265348();
    }
    func_802CC680();
    if (!(D_8002D420 & 1)) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x23, 0xA, 0x8C, 2);
    }
    if (M2C_FIELD(&D_8002DBD0, s32 *, 8) != 0) {
        if (M2C_FIELD(&D_8002DBD0, s32 *, 0x18) != 0) {
            func_802C3934(*(f32 *)0x218774);
            func_802CCF44();
            return;
        }
        goto block_9;
    }
    if (M2C_FIELD(&D_8002DBD0, s32 *, 0x18) != 0) {
block_9:
        if (D_8002DBD8 != 0) {
            if (!(D_8002D420 & 4)) {
                if (!(D_8002D420 & 8)) {
                    D_8002D420 |= 4;
                }
                func_802C3934(*(f32 *)0x21877C);
                func_802CCF44();
                return;
            }
            func_802C3934(*(f32 *)0x218784);
            func_802CCF44();
            return;
        }
        if (!(D_8002D420 & 8)) {
            if (!(D_8002D420 & 4)) {
                D_8002D420 |= 8;
            }
            func_802C3934(*(f32 *)0x21878C);
            func_802CCF44();
            return;
        }
        func_802C3934(*(f32 *)0x218794);
        func_802CCF44();
        return;
    }
    func_802C3934(*(f32 *)0x21879C);
    D_8003ACE8 = *(f32 *)0x2187A0;
    temp_v0 = &D_80075598 + 4;
    sp18 = 0.0f;
    sp1C = 0.0f;
    sp20 = *(f32 *)0x2187A4;
    temp_fv0f = M2C_FIELD(&sp18, f32 *, 4);
    temp_ft0f = M2C_FIELD(&sp18, f32 *, 8);
    temp_s1 = temp_v0 - 0x34;
    temp_fs0f = *(f32 *)0x2187A8;
    temp_fs0 = sp18;
    temp_ft1f = M2C_FIELD(temp_s1, f32 *, 0x2C);
    temp_fv1 = D_8005E6E8 + *(f32 *)0x2187AC;
    sp20 = temp_ft1f;
    temp_fv0f_2 = (temp_fv0f * M2C_FIELD(temp_v0, f32 *, 0x1C)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 0x20));
    sp18 = M2C_FIELD(temp_s1, f32 *, 0x24);
    sp28 = (temp_fv0f * M2C_FIELD(temp_v0, f32 *, 4)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 8));
    sp2C = (temp_fv0f * M2C_FIELD(temp_v0, f32 *, 0x10)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 0x14));
    sp30 = temp_fv0f_2;
    sp1C = temp_fv1;
    sp28 = M2C_BITWISE(f64, temp_fv1);
    sp30 = temp_fv0f_2 + temp_ft1f;
    func_802BAAF8(&sp18, &sp28, temp_fs0f);
    if ((M2C_FIELD(&D_8006A510, s32 *, 0x78) != 0) && (D_80061A10 = M2C_FIELD(&D_8006A510, void **, 0x8C), (fabsf(M2C_FIELD((M2C_FIELD(M2C_FIELD(&D_8006A510, void **, 0x8C), s32 *, 0x1C) + (M2C_FIELD(M2C_FIELD(&D_8006A510, void **, 0x90), u16 *, 8) * 0x10)), f32 *, 4)) < *(f32 *)0x2187B0))) {
        temp_fv1_2 = *(f32 *)0x2187B4;
        sp2C += temp_fv1_2;
        sp1C += temp_fv1_2;
        func_802BAAF8(&sp18, &sp28, temp_fs0f);
        if (M2C_FIELD(&D_8006A510, s32 *, 0x78) == 0) {
            D_80030E40 = 0;
            M2C_FIELD(temp_s1, f32 *, 0xC) = temp_fs0;
            M2C_FIELD(temp_s1, f32 *, 0x10) = temp_fs0;
            M2C_FIELD(temp_s1, f32 *, 0x14) = temp_fs0;
            M2C_FIELD(M2C_FIELD(&D_80075518, void **, 0x30), f32 *, 0x410) = temp_fs0;
            M2C_FIELD(M2C_FIELD(&D_80075518, void **, 0x30), f32 *, 0x3D8) = (f32) *(f32 *)0x2187B8;
            func_8023DF7C(temp_s1, &D_80075518, 0x11, 0xA, 0, 2);
            D_800458B0 = 0;
            D_80044E90 = 0;
            M2C_FIELD(temp_s1, f32 *, 0x10) = (f32) (M2C_FIELD(temp_s1, f32 *, 0x10) * *(f32 *)0x2187BC);
        }
    }
    if (D_8002D424 & 0x80) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x28, 0xA, 0, 2);
    }
}
