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

extern float D_80075590;
extern float D_8007558C;
extern float D_8007559C;
extern int D_80052774;
extern float D_80075594;
f32 func_801132A0();
f32 func_80113BE0();
s32 func_80236A18();
s32 func_8026438C();
s32 func_802644B8();
s32 func_802644BC();
s32 func_8026450C(s32, f32);
s32 func_80264574();
extern f32 D_80030C70;
extern char D_80052770[];
extern s32 D_80072C1C;
extern s32 D_80074E60;
extern s32 D_800751A8;
extern s32 D_80075558;
extern char D_80075568[];
extern char D_80075598[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x40, 0x44, 0x48, 0x4c, 0x58, 0x5c, 0x60, 0x64], gap at: 0x50. */
void func_80264180(void *arg0) {
    f32 sp10[3];
    f32 sp20[3];
    f32 sp30[3];
    f32 temp_a3;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0f;
    f32 temp_fs0f_2;
    f32 temp_fs0f_3;
    f32 temp_fs1;
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft1f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 var_fv1;
    f32 var_fv1_2;
    s32 var_v0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    if (D_800751A8 != 1) {
        f32 sp24_arm;
        f32 sp20_arm;
        f32 sp14_arm;
        f32 sp10_arm;
        if (D_800751A8 < 2) {
            if (D_800751A8 != 0) {
                func_802644BC();
                return;
            }
            temp_fs0 = *(f32 *)0x20DDE8;
            temp_fs0f = (func_801132A0() * *(f32 *)0x20DDEC) + *(f32 *)0x20DDF0;
            var_fv1 = D_80075590;
            sp10_arm = D_8007558C + (temp_fs0f * func_80113BE0((f32) (D_80074E60 + 0xB4) * temp_fs0));
            if (D_80074E60 < 0x12C) {
                var_fv1 += (f32) (0x12C - D_80074E60);
            }
            sp14_arm = var_fv1;
            func_801132A0();
            func_8026438C();
            return;
        }
        if (D_800751A8 != 2) {
            func_802644BC();
            return;
        }
        temp_fs0f_2 = (f32) D_80074E60 * *(f32 *)0x20DE0C;
        temp_v0 = D_80075598 + 4;
        temp_fv1 = temp_fs0f_2 + *(f32 *)0x20DE10;
        temp_ft0 = *(f32 *)0x20DE14 - temp_fs0f_2;
        temp_ft1f = (temp_fv1 * D_8007559C) + (temp_ft0 * M2C_FIELD(temp_v0, f32 *, 4)) + (temp_fv1 * M2C_FIELD(temp_v0, f32 *, 8));
        sp30[2] = temp_fv1;
        sp30[0] = temp_fv1;
        sp30[1] = temp_ft0;
        sp10_arm = temp_ft1f;
        M2C_FIELD(&sp10_arm, f32 *, 4) = (f32) ((temp_fv1 * M2C_FIELD(temp_v0, f32 *, 0xC)) + (temp_ft0 * M2C_FIELD(temp_v0, f32 *, 0x10)) + (temp_fv1 * M2C_FIELD(temp_v0, f32 *, 0x14)));
        temp_v0_2 = temp_v0 - 0x34;
        M2C_FIELD(&sp10_arm, f32 *, 8) = (f32) ((temp_fv1 * M2C_FIELD(temp_v0, f32 *, 0x18)) + (temp_ft0 * M2C_FIELD(temp_v0, f32 *, 0x1C)) + (temp_fv1 * M2C_FIELD(temp_v0, f32 *, 0x20)));
        temp_fv0 = M2C_FIELD(temp_v0_2, f32 *, 0x24);
        sp20_arm = temp_fv0;
        temp_fv0_2 = M2C_FIELD(temp_v0_2, f32 *, 0x2C);
        sp20[2] = temp_fv0_2;
        sp10_arm = temp_ft1f + temp_fv0;
        sp14_arm = M2C_BITWISE(f64, (sp10[2] + temp_fv0_2));
        sp24_arm = M2C_FIELD(temp_v0_2, f32 *, 0x28) + *(f32 *)0x20DE18;
        M2C_FIELD(arg0, f32 *, 0xC) = sp10_arm;
        M2C_FIELD(arg0, f32 *, 0x10) = M2C_BITWISE(f32, sp14_arm);
        M2C_FIELD(arg0, f32 *, 0x14) = sp10[2];
        if (D_80074E60 == 0) {
            temp_a3 = M2C_FIELD(arg0, f32 *, 0xC);
            M2C_FIELD(arg0, f32 *, 0) = temp_a3;
            M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
            M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
            func_80264574(temp_a3);
            return;
        }
        var_v0 = D_80052774;
        if (var_v0 <= 0) {
            var_v0 = 1;
        }
        if (var_v0 > 0) {
            temp_ft0_2 = M2C_FIELD(arg0, f32 *, 0);
            temp_fv1f = M2C_FIELD(arg0, f32 *, 4);
            M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_ft0_2 + ((M2C_FIELD(arg0, f32 *, 0xC) - temp_ft0_2) / D_80030C70));
            M2C_FIELD(arg0, f32 *, 4) = (f32) (temp_fv1f + ((M2C_FIELD(arg0, f32 *, 0x10) - temp_fv1f) / D_80030C70));
            func_8026450C(D_80052770 + 4, sp10_arm);
            return;
        }
        func_80236A18(arg0, &sp20_arm, arg0 + 0x18);
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) -M2C_FIELD(arg0, f32 *, 0x18);
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) -M2C_FIELD(arg0, f32 *, 0x1C);
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
        D_80074E60 += D_80052774;
        return;
    }
    temp_fs0_2 = *(f32 *)0x20DDF8;
    temp_fs0f_3 = (func_801132A0() * *(f32 *)0x20DDFC) + *(f32 *)0x20DE00;
    temp_fs1 = func_80113BE0((f32) D_80074E60 * temp_fs0_2) * *(f32 *)0x20DE04;
    var_fv1_2 = D_80075590;
    sp10[0] = D_8007558C + (temp_fs0f_3 * func_80113BE0(temp_fs1 * temp_fs0_2));
    if (D_80074E60 < 0xC8) {
        var_fv1_2 += (f32) (0x32 - ((s32) D_80074E60 / 4));
    }
    sp10[1] = var_fv1_2;
    temp_v0_3 = (D_80072C1C << 6) + D_80075558;
    sp10[2] = D_80075594 + (temp_fs0f_3 * func_801132A0());
    sp20[0] = M2C_FIELD(temp_v0_3, f32 *, 0x24);
    sp20[1] = M2C_FIELD(temp_v0_3, f32 *, 0x28);
    func_802644B8();
}
