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
f32 func_802BAAF8(f32 *, f32 *, M2C_UNK, s32 *);    /* extern */
M2C_UNK func_802C77B4();                            /* extern */
s32 func_802C7A50();                                /* extern */
s32 func_802C7FF4();                                /* extern */
f32 func_802C880C(s32);                             /* extern */
s32 func_802C9C58();                                /* extern */
f32 func_802C9F60(M2C_UNK *);                       /* extern */
f32 func_802CA1E4(M2C_UNK *);                       /* extern */
f32 func_802CA45C(M2C_UNK *);                       /* extern */
f32 func_802CA6E0(M2C_UNK *);                       /* extern */
f32 func_802CB0EC();                                /* extern */
M2C_UNK func_802CB4B0(M2C_UNK *);                   /* extern */
M2C_UNK func_802CB4D4(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_802CB5D0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_802CB624();                            /* extern */
M2C_UNK func_802CB738(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_802CB7E8(void *, M2C_UNK *);           /* extern */
extern s32 D_8002D420;
extern M2C_UNK D_8002DBD0;
extern s32 D_800458C8;
extern M2C_UNK D_80052770;
extern s32 D_80061A10;
extern M2C_UNK D_8006A510;
extern s32 D_8006A588;
extern s32 D_8006A5B4;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007558C;
extern M2C_UNK D_80075598;

void func_802CB1D8(void) {
    f32 sp18;
    f32 sp1C;
    M2C_UNK32 sp20;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    s32 sp38;
    s32 sp3C;
    f32 sp40;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    M2C_UNK *temp_s0_2;
    M2C_UNK *var_v1;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_ft1f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1f;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    void *temp_s0;
    void *temp_v0_2;
    void *temp_v0_3;

    var_s1 = (s32) func_802C9F60(&D_8007558C);
    var_s2 = (s32) func_802CA1E4(&D_8007558C);
    temp_v0 = D_800458C8 + M2C_FIELD(&D_80052770, s32 *, 4);
    D_800458C8 = temp_v0;
    if ((temp_v0 >= 0x3D) && (temp_ft1f = *(f32 *)0x218684, temp_v0_2 = &D_8007558C + 0x10, sp18 = 0.0f, sp1C = temp_ft1f, sp20 = *(M2C_UNK32 *)0x218688, temp_fv1 = M2C_FIELD(&sp18, f32 *, 4), temp_ft1 = M2C_FIELD(&sp18, f32 *, 8), temp_ft0 = (temp_fv1 * M2C_FIELD(temp_v0_2, f32 *, 4)) + (temp_ft1 * M2C_FIELD(temp_v0_2, f32 *, 8)), temp_fv0f = (temp_fv1 * M2C_FIELD(temp_v0_2, f32 *, 0x10)) + (temp_ft1 * M2C_FIELD(temp_v0_2, f32 *, 0x14)), temp_s0 = &D_8007558C - 0x24, temp_fv1_2 = (temp_fv1 * M2C_FIELD(temp_v0_2, f32 *, 0x1C)) + (temp_ft1 * M2C_FIELD(temp_v0_2, f32 *, 0x20)), sp28 = temp_ft0, sp2C = temp_fv0f, sp30 = temp_fv1_2, temp_fs0 = sp18, sp28 = temp_ft0 + M2C_FIELD(temp_s0, f32 *, 0x24), sp2C = temp_fv0f + M2C_FIELD(temp_s0, f32 *, 0x28), sp30 = temp_fv1_2 + M2C_FIELD(temp_s0, f32 *, 0x2C), sp18 = M2C_FIELD(&D_8007558C, f32 *, 0), sp1C = M2C_FIELD(&D_8007558C, f32 *, 4), sp20 = M2C_FIELD(&D_8007558C, M2C_UNK32 *, 8), D_800458C8 = 0, sp1C += temp_ft1f, temp_fv0 = func_802BAAF8(&sp18, &sp28, 0x3F800000, &D_800458C8), D_80061A10 = M2C_FIELD(&D_8006A510, s32 *, 0x8C), (M2C_FIELD(&D_8006A510, s32 *, 0x90) != 0))) {
        var_v1 = &D_8002DBD0;
        if (temp_fv0 != temp_fs0) {
            M2C_FIELD(temp_s0, f32 *, 0x1C) = func_802C880C(M2C_FIELD(&D_8006A510, s32 *, 0x90));
            goto block_4;
        }
    } else {
block_4:
        var_v1 = &D_8002DBD0;
    }
    if (M2C_FIELD(var_v1, s32 *, 8) != 0) {
        var_s1 = 0;
    }
    if (M2C_FIELD(var_v1, s32 *, 0x18) != 0) {
        var_s2 = 0;
    }
    switch (M2C_FIELD(&D_80075518, s16 *, 4)) {     /* irregular */
    case 0x1A:
        if (var_s1 == 0) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x3F, 0xA, 0x46, 2);
        }
        if (var_s2 == 0) {
            func_802CB4D4(&D_80075568, &D_80075518, 0x3E, 0xA);
            return;
        }
    default:
block_33:
        func_802C77B4();
        if ((var_s1 != 0) || (var_s2 != 0)) {
            if (func_802C9C58() == 0) {
                goto block_37;
            }
        } else {
block_37:
            M2C_FIELD(M2C_FIELD(&D_80075518, void **, 0x30), f32 *, 0x410) = (f32) *(f32 *)0x218698;
            func_8023DF7C(&D_80075568, &D_80075518, 0x12, 0xA, 0x28, 2);
        }
        if (D_8002D420 & 2) {
            temp_fs0_2 = *(f32 *)0x21869C;
            M2C_FIELD(M2C_FIELD(&D_80075518, void **, 0x30), f32 *, 0x410) = temp_fs0_2;
            if (func_802CB0EC() != 0.0f) {
                if (M2C_FIELD(&D_80075518, s16 *, 4) == 0x3E) {
                    func_802CB5D0(&D_80075568, &D_80075518);
                    return;
                }
                if (M2C_FIELD(&D_80075518, s16 *, 4) == 0x3F) {
                    func_802CB5D0(&D_80075568, &D_80075518);
                    return;
                }
                func_8023DF7C(&D_80075568, &D_80075518, 0x49, 0xA, 0, 2);
                func_802CB624();
                return;
            }
            M2C_FIELD(M2C_FIELD(&D_80075518, void **, 0x30), f32 *, 0x410) = temp_fs0_2;
            func_8023DF7C(&D_80075568, &D_80075518, 0x12, 0xA, 0x28, 2);
            M2C_FIELD(&D_80075518, s16 *, 0x22) = 0x40;
            goto block_49;
        }
block_49:
        temp_v0_3 = &D_80075598 + 4;
        if (D_8002D420 & 1) {
            temp_fv0_2 = *(f32 *)0x2186A0;
            temp_fv1_3 = M2C_FIELD(temp_v0_3, f32 *, 8) * temp_fv0_2;
            temp_s0_2 = temp_v0_3 - 0x34;
            temp_fv1f = M2C_FIELD(temp_v0_3, f32 *, 0x14) * temp_fv0_2;
            sp38 = 0;
            sp3C = 0;
            temp_fv0f_2 = M2C_FIELD(temp_v0_3, f32 *, 0x20) * temp_fv0_2;
            D_8006A5B4 = 3;
            sp40 = temp_fv0_2;
            sp48 = temp_fv1_3;
            sp4C = temp_fv1f;
            sp50 = temp_fv0f_2;
            sp48 = temp_fv1_3 + M2C_FIELD(temp_s0_2, f32 *, 0x24);
            sp4C = temp_fv1f + M2C_FIELD(temp_s0_2, f32 *, 0x28);
            sp50 = temp_fv0f_2 + M2C_FIELD(temp_s0_2, f32 *, 0x2C);
            func_802401D0(temp_v0_3 - 0x10, &sp48, 0x3F800000);
            if (D_8006A588 == 0) {
                if (func_802C7FF4() != 0) {
                    if (func_802C7A50() != 0) {
                        func_802CB738(temp_s0_2, &D_80075518);
                        return;
                    }
                    goto block_63;
                }
                goto block_64;
            }
            if (func_802C7A50() != 0) {
                if (M2C_FIELD(&D_80075518, s16 *, 4) == 0x3E) {
                    func_802CB738(temp_s0_2, &D_80075518);
                    return;
                }
                if (M2C_FIELD(&D_80075518, s16 *, 4) == 0x3F) {
                    func_802CB738(temp_s0_2, &D_80075518);
                    return;
                }
                func_8023DF7C(temp_s0_2, &D_80075518, 0x1B, 0xA, 0x1E, 2);
                goto block_63;
            }
            goto block_63;
        }
block_63:
block_64:
        if (!(D_8002D420 & 4)) {
            if ((D_8002D420 & 8) && (var_s2 != 0) && (var_s1 != 0) && (func_802CA6E0(&D_8007558C) != 0.0f)) {
                func_8023DF7C(&D_8007558C - 0x24, &D_80075518, 0x1D, 0xA, 0x28, 2);
            }
        } else {
            if ((var_s2 != 0) && (var_s1 != 0) && (func_802CA45C(&D_8007558C) != 0.0f)) {
                func_802CB7E8(&D_8007558C - 0x24, &D_80075518);
                return;
            }
            return;
        }
        break;
    case 0x3E:
        if (var_s2 != 0) {
            if (var_s1 != 0) {
                func_8023DF7C(&D_80075568, &D_80075518, 0xA4, 0xA, 0x14, 2);
                goto block_21;
            }
            goto block_22;
        }
block_21:
        if (var_s1 == 0) {
block_22:
            if (func_802CB0EC() != 0.0f) {
                M2C_FIELD(M2C_FIELD(&D_80075518, void **, 0x30), f32 *, 0x410) = (f32) *(f32 *)0x21868C;
                func_802CB4D4(&D_80075568, &D_80075518, 0x40, 0xA);
                return;
            }
            func_802CB4B0(&D_80075568);
            return;
        }
        goto block_33;
    case 0x3F:
        if (var_s2 != 0) {
            if (var_s1 != 0) {
                M2C_FIELD(M2C_FIELD(&D_80075518, void **, 0x30), f32 *, 0x410) = (f32) *(f32 *)0x218690;
                func_802CB4D4(&D_80075568, &D_80075518, 0xA5, 0xA);
                return;
            }
            goto block_33;
        }
        M2C_FIELD(M2C_FIELD(&D_80075518, void **, 0x30), f32 *, 0x410) = (f32) *(f32 *)0x218694;
        func_8023DF7C(&D_80075568, &D_80075518, 0x12, 0xA, 0x28, 2);
        goto block_33;
    }
}
