/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK func_8022B090();                            /* extern */
M2C_UNK func_8022B588(M2C_UNK *, s32);              /* extern */
M2C_UNK func_8022DDD0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_8022DEA0();                                /* extern */
M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_802BD094(f32 *, s32, M2C_UNK);         /* extern */
extern M2C_UNK D_2180B8;
extern M2C_UNK D_80045438;
extern f32 D_80045440;
extern s32 D_8005E9CC;
extern void *D_8005EA2C;
extern f32 *D_800619D8;
extern s32 D_80074BB0;
extern f32 D_80074BC0;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern void *D_800755CC;
extern u8 D_80075F21;
extern s32 D_8007BE00;
extern M2C_UNK D_8007BEA8;
extern M2C_UNK D_8007DC30;

void func_802BCE2C(void) {
    M2C_UNK sp18;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    M2C_UNK *var_a0;
    M2C_UNK *var_a1;
    f32 *var_a0_2;
    f32 *var_v0;
    f32 *var_v1;
    f32 temp_ft1;
    f32 temp_ft2f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    s32 temp_a1;
    s32 var_a1_2;
    s32 var_s1;
    s32 var_v1_2;
    u16 temp_s2;
    void *temp_v0;
    void *temp_v1;

    var_a1 = &sp18;
    var_a0 = &D_2180B8;
    __repair_rows: {
        M2C_FIELD(var_a1, s32 *, 0) = (s32) M2C_FIELD(var_a0, s32 *, 0);
        M2C_FIELD(var_a1, s32 *, 4) = (s32) M2C_FIELD(var_a0, s32 *, 4);
        M2C_FIELD(var_a1, s32 *, 8) = (s32) M2C_FIELD(var_a0, s32 *, 8);
        M2C_FIELD(var_a1, s32 *, 0xC) = (s32) M2C_FIELD(var_a0, s32 *, 0xC);
        var_a0 += 0x10;
        var_a1 += 0x10;
    }
if (var_a0 != (&D_2180B8 + 0x50)) goto __repair_rows;
    temp_fv0 = M2C_FIELD(&D_80045438, f32 *, 4) * sqrtf(D_80045440) * D_80074BC0;
    M2C_FIELD(var_a1, s32 *, 0) = (s32) M2C_FIELD(var_a0, s32 *, 0);
    M2C_FIELD(var_a1, s32 *, 4) = (s32) M2C_FIELD(var_a0, s32 *, 4);
    temp_ft2f = D_80045440 + temp_fv0;
    D_80045440 = temp_ft2f;
    temp_v1 = D_8005EA2C + 0x3C;
    temp_s2 = M2C_FIELD(D_800755CC, u16 *, 0x32);
    temp_fv1f = (M2C_FIELD(&D_8007BEA8, f32 *, 0) * M2C_FIELD(temp_v1, f32 *, 0xC)) + (M2C_FIELD(&D_8007BEA8, f32 *, 4) * M2C_FIELD(temp_v1, f32 *, 0x10)) + (M2C_FIELD(&D_8007BEA8, f32 *, 8) * M2C_FIELD(temp_v1, f32 *, 0x14)) + M2C_FIELD(temp_v1, f32 *, 0x28);
    sp74 = temp_fv1f;
    sp78 = (M2C_FIELD(&D_8007BEA8, f32 *, 0) * M2C_FIELD(temp_v1, f32 *, 0x18)) + (M2C_FIELD(&D_8007BEA8, f32 *, 4) * M2C_FIELD(temp_v1, f32 *, 0x1C)) + (M2C_FIELD(&D_8007BEA8, f32 *, 8) * M2C_FIELD(temp_v1, f32 *, 0x20)) + M2C_FIELD(temp_v1, f32 *, 0x2C);
    var_s1 = 0;
    var_a0_2 = D_800619D8;
    var_a1_2 = 0;
    sp70 = (M2C_FIELD(&D_8007BEA8, f32 *, 0) * M2C_FIELD(D_8005EA2C, f32 *, 0x3C)) + (M2C_FIELD(&D_8007BEA8, f32 *, 4) * M2C_FIELD(temp_v1, f32 *, 4)) + (M2C_FIELD(&D_8007BEA8, f32 *, 8) * M2C_FIELD(temp_v1, f32 *, 8)) + M2C_FIELD(temp_v1, f32 *, 0x24);
    sp74 = temp_fv1f * M2C_FIELD(D_8005EA2C, f32 *, 0x104);
    if (temp_s2 != 0) {
        var_v1 = var_a0_2 + 8;
        temp_ft1 = *(f32 *)0x218110;
loop_4:
        temp_fv1f_2 = (*var_a0_2 - sp70) * temp_ft1;
        sp80 = temp_fv1f_2;
        sp84 = (M2C_FIELD(var_v1, f32 *, -4) - sp74) * temp_ft1;
        temp_fv0_2 = (M2C_FIELD(var_v1, f32 *, 0) - sp78) * temp_ft1;
        temp_fv1 = (temp_fv1f_2 * temp_fv1f_2) + (temp_fv0_2 * temp_fv0_2);
        sp88 = temp_fv0_2;
        if (temp_fv1 < temp_ft2f) {
            if (!(temp_fv1 < (temp_ft2f - *(f32 *)0x218114))) {
                temp_fv1_2 = (*(f32 *)0x21811C - ((temp_ft2f - temp_fv1) * *(f32 *)0x218118)) * *(f32 *)0x218120;
                *var_a0_2 = sp70 + (temp_fv1_2 * temp_fv1f_2);
                M2C_FIELD(var_v1, f32 *, -4) = (f32) (sp74 + (temp_fv1_2 * sp84));
                func_802BD094(var_a0_2, var_a1_2, 0);
                return;
            }
            *var_a0_2 = sp70;
            M2C_FIELD(var_v1, f32 *, -4) = sp74;
            func_802BD094(var_a0_2, var_a1_2, 1);
            return;
        }
        var_s1 += 1;
        var_a1_2 += 1;
        var_v1 += 0x10;
        var_a0_2 += 0x10;
        if (var_a1_2 >= (s32) temp_s2) {
            goto block_13;
        }
        goto loop_4;
    }
block_13:
    var_v0 = &D_80045438 + 4;
    if (!(*(f32 *)0x218124 < D_80045440)) {
        if (temp_s2 == 0) {
            var_v0 = &D_80045438 + 4;
            goto block_16;
        }
    } else {
block_16:
        if (*var_v0 == *(f32 *)0x218128) {
            if (M2C_FIELD(&D_80075518, s16 *, 4) == 0x3A) {
                func_8022DDD0(4, 0x32, 0, 0, 0);
            }
            func_8023DF7C(&D_80075568, &D_80075518, 0, 0xA, 0, 2);
            if (!(func_8022DEA0() & 0xFF)) {
                var_v1_2 = D_8007BE00;
                if ((D_80074BB0 == 2) || (D_80074BB0 == 0x12)) {
                    var_v1_2 += 7;
                }
                if ((D_80074BB0 == 0x13) || (D_80074BB0 == 3)) {
                    var_v1_2 = 0xA;
                }
                if ((D_80074BB0 == 1) || (D_80074BB0 == 0x11)) {
                    var_v1_2 = 6;
                }
                temp_v0 = &sp18 + (var_v1_2 * 8);
                temp_a1 = M2C_FIELD(temp_v0, s32 *, 0);
                D_8005E9CC = temp_a1;
                D_80075F21 = M2C_FIELD(temp_v0, u8 *, 7);
                func_8022B588(&D_8007DC30, temp_a1);
                func_8022B090();
            }
        }
    }
    temp_fv1_3 = *(f32 *)0x21812C;
    if ((D_80045440 <= temp_fv1_3) || (var_s1 == temp_s2)) {
        temp_fv0f = *(f32 *)0x218130;
        if (M2C_FIELD(&D_80045438, f32 *, 4) == temp_fv0f) {
            M2C_FIELD(&D_80045438, f32 *, 4) = temp_fv1_3;
            D_80045440 = temp_fv0f;
            func_8023DF7C(&D_80075568, &D_80075518, 0, 0xA, 0, 2);
        }
    }
}
