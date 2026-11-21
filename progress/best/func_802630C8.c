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

extern unsigned short D_80075534;
extern short D_8007551C;
extern float D_80075584;
extern float D_8002D390;
extern float D_8002D394;
extern float D_8002D398;
extern float D_80075098;
extern float D_80075090;
extern float D_8002D3A8;
extern float D_8002D3AC;
extern float D_8002D3B0;
extern float D_80075094;
extern float D_80075084;
extern float D_80075088;
extern float D_8007508C;
extern float D_8007509C;
extern float D_800750A0;
extern float D_800750A4;
extern float D_8007507C;
extern float D_80075590;
extern float D_8002D39C;
extern float D_8002D3A0;
extern float D_8002D3A4;
extern float D_80075078;
extern float D_8007558C;
extern float D_80075080;
extern float D_80075594;
extern short D_8007553A;
extern float D_80030CD8;
extern float D_80030CDC;
extern float D_80030CE0;
extern float D_80030CF0;
extern float D_80030CE4;
extern float D_80030CF4;
extern float D_80030CE8;
extern float D_80030CF8;
extern float D_80030CEC;
extern float D_80030D1C;
extern float D_80030D20;
extern float D_80030D24;
extern float D_80030C6C;
s32 func_80234CDC();
s32 func_80234CE8();
s32 func_8023567C();
s32 func_8023641C();
s32 func_80236A18();
s32 func_80239A3C();
s32 func_8026344C();
s32 func_802634EC();
s32 func_80263818();
s32 func_80263A08();
s32 func_80263AC8();
extern char D_20DD60[];
extern s32 D_8002D320;
extern s32 D_8002D420;
extern s32 D_8002D424;
extern s32 D_8002D488;
extern s32 D_8002DC40;
extern char D_80030C68[];
extern f32 D_80030C70;
extern s32 D_80030C74;
extern s32 D_80030C78;
extern char D_80030CD4[];
extern void *D_80030D00;
extern char D_80030D38[];
extern char D_80030D44[];
extern s32 D_80030E34;
extern s32 D_80030E38;
extern s32 D_80044FB8;
extern f32 D_80045440;
extern s32 D_800458F0;
extern f32 D_80074BC0;
extern f32 D_800751A4;
extern s32 D_800752D0;
extern s32 D_800753E4;
extern void *D_80075510;
extern char D_80075518[];
extern char D_80075568[];
extern f32 D_80075580;
extern s32 D_800755F8;

void func_802630C8(void *arg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    f32 sp60;
    f32 sp64;
    f32 temp_a3;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft0_3;
    f32 temp_ft0f;
    f32 temp_ft0f_2;
    f32 temp_ft1;
    f32 temp_ft1_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv0f_4;
    f32 temp_fv0f_5;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    f32 temp_fv1f_3;
    f32 temp_fv1f_4;
    f32 temp_fv1f_5;
    f32 var_fv0f;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;

    if (!(D_80075534 & 8)) {
        if (D_8002D424 & 0x8000) {
            if (!(D_8002D420 & 0x01800020) && !(D_80075534 & 0x400) && (D_800458F0 == 0)) {
                if (D_80045440 == *(f32 *)0x20DD78) {
                    if (D_8002D488 == 0) {
                        if ((D_8007551C != 0x76) && (D_8007551C != 0x77) && (D_8007551C != 0x78) && (M2C_FIELD(D_80075510, s16 *, 0x16) != 1)) {
                            sp50 = M2C_FIELD(D_20DD60, f32 *, 0);
                            sp54 = M2C_FIELD(D_20DD60, f32 *, 4);
                            sp58 = M2C_FIELD(D_20DD60, f32 *, 8);
                            sp5C = M2C_FIELD(D_20DD60, f32 *, 0xC);
                            sp60 = M2C_FIELD(D_20DD60, f32 *, 0x10);
                            sp64 = M2C_FIELD(D_20DD60, f32 *, 0x14);
                            D_800753E4 = 6;
                            D_800752D0 = 1;
                            D_800751A4 = D_80075584;
                            func_80239A3C(D_80075584, (s32 *)1, D_80075518, M2C_FIELD(D_20DD60, f32 *, 0xC));
                            temp_ft1 = (sp50 * D_8002D390) + (sp54 * D_8002D394) + (sp58 * D_8002D398);
                            D_80075098 = 0.0f;
                            D_80075090 = 0.0f;
                            temp_fv1f = (sp50 * D_8002D3A8) + (sp54 * D_8002D3AC) + (sp58 * D_8002D3B0);
                            temp_ft0f = *(f32 *)0x20DD80;
                            temp_fv0f = -D_80075584;
                            D_80075094 = temp_fv0f;
                            D_80075084 = 0.0f;
                            D_80075088 = 0.0f;
                            D_8007508C = 0.0f;
                            D_8007509C = 0.0f;
                            D_800750A0 = temp_fv0f;
                            D_800750A4 = 0.0f;
                            D_8007507C = (f32) (D_80075590 + *(f32 *)0x20DD7C);
                            sp5C = temp_ft1;
                            sp60 = (sp50 * D_8002D39C) + (sp54 * D_8002D3A0) + (sp58 * D_8002D3A4);
                            sp64 = temp_fv1f;
                            D_80075078 = (f32) (D_8007558C + (temp_ft1 * temp_ft0f));
                            D_80075080 = (f32) (D_80075594 + (temp_fv1f * temp_ft0f));
                        }
                    }
                }
            }
        }
        if (D_800752D0 == 0) {
            if (D_80030E34 == 3) {
                D_80030E34 = D_80030E38;
            }
            D_80030E38 = D_80030E34;
            if (D_8002D424 & 0x40000) {
                temp_v0 = D_80030C78 + 1;
                D_80030C78 = temp_v0;
                if (temp_v0 >= 6) {
                    D_80030C78 = 0;
                }
            }
            if (D_8002D424 & 0x80000) {
                temp_v0_2 = D_80030C78 - 1;
                D_80030C78 = temp_v0_2;
                if (temp_v0_2 < 0) {
                    D_80030C78 = 5;
                }
            }
            if ((D_8002D424 & 0x10000) && (D_80030E34 > 0)) {
                D_80030E34 -= 1;
            }
            if ((D_8002D424 & 0x20000) && (D_80030E34 < 2)) {
                D_80030E34 += 1;
            }
            if (D_8002D424 & 0x100000) {
                D_80030C78 = 0;
                D_80030E34 = 1;
            }
            if (D_80030E34 < 3) {
                func_8026344C((f32) (D_80030C78 * 0x3C), &D_80075584);
                return;
            }
            func_80239A3C(D_80075584, &D_80030E34);
            goto block_34;
        }
block_34:
        if ((D_80044FB8 != 0) || (D_80075534 & 0x200) || (D_8007553A == 0x40)) {
            sp20 = D_8007558C;
            sp24 = D_80075590;
            sp28 = D_80075594;
            func_802634EC();
            return;
        }
        sp20 = D_8007558C;
        sp24 = D_80075590;
        sp28 = D_80075594;
        sp24 = M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x40), f32 *, 0xE8);
        M2C_FIELD(D_80030D00, f32 *, 0x10) = (f32) *(f32 *)0x20DD88;
        temp_v0_3 = (D_80030E34 * 0x1C) + D_80030D38;
        temp_a3 = M2C_FIELD(temp_v0_3, f32 *, 0);
        sp40 = temp_a3;
        sp44 = M2C_FIELD(temp_v0_3, f32 *, 4);
        sp48 = M2C_FIELD(temp_v0_3, f32 *, 8);
        if (D_8002DC40 != 0) {
            D_8002DC40 = 0;
            sp48 *= *(f32 *)0x20DD8C;
        }
        if ((D_800755F8 != 0) && (D_80030E34 == 0)) {
            var_fv0f = D_80075580;
            temp_fv0 = *(f32 *)0x20DD90;
            if (temp_fv0 < var_fv0f) {
                var_fv0f = temp_fv0;
            }
            sp48 -= var_fv0f;
        }
        if (D_80075534 & 0x400) {
            if (D_80030E34 == 2) {
                temp_fv1 = *(f32 *)0x20DD94;
                sp48 -= temp_fv1;
                sp40 -= temp_fv1;
            }
        }
        if ((D_80030E34 == 0) && ((D_8007551C == 0x14) || (D_8007551C == 0x64))) {
            sp48 -= *(f32 *)0x20DD98;
        }
        M2C_FIELD(&sp10, f32 *, 4) = (f32) ((sp40 * D_8002D39C) + (sp44 * D_8002D3A0) + (sp48 * D_8002D3A4));
        M2C_FIELD(&sp10, f32 *, 8) = (f32) ((sp40 * D_8002D3A8) + (sp44 * D_8002D3AC) + (sp48 * D_8002D3B0));
        sp10 = (sp40 * D_8002D390) + (sp44 * D_8002D394) + (sp48 * D_8002D398);
        if (D_80075534 & 0x400) {
            sp14 = 0.0f;
        }
        func_80234CDC(D_80030D38, &D_8002DC40, &D_80030E34, temp_a3);
        temp_fv0_2 = *(f32 *)0x20DD9C;
        D_8002D320 = 1;
        temp_fs0 = M2C_FIELD(((D_80030E34 * 0x1C) + D_80030D38), f32 *, 0x18);
        sp30 = sp20 + (sp10 * temp_fv0_2);
        sp38 = sp28 + (sp18 * temp_fv0_2);
        sp34 = sp24 + (sp14 * temp_fv0_2);
        func_80234CE8(&sp30, temp_fs0);
        func_8023641C(&sp30, temp_fs0);
        D_8002D320 = 0;
        D_80030CD8 = sp20;
        D_80030CDC = sp24;
        D_80030CE0 = sp28;
        D_80030CF0 = sp10;
        D_80030CE4 = sp10;
        D_80030CF4 = sp14;
        D_80030CE8 = sp14;
        D_80030CF8 = sp18;
        D_80030CEC = sp18;
        func_8023567C(D_80030CD4, 0);
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) D_80030D1C;
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) D_80030D20;
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) D_80030D24;
        if (D_80030C74 != 0) {
            func_80263818();
            return;
        }
        if (D_80074BC0 != 0.0f) {
            func_80263818();
            return;
        }
        temp_fs0_2 = D_80030C6C;
        temp_ft0 = M2C_FIELD(arg0, f32 *, 4);
        temp_fv1f_2 = M2C_FIELD(arg0, f32 *, 8);
        temp_v1 = (D_80030E34 * 0x1C) + D_80030D44;
        M2C_FIELD(arg0, f32 *, 0) = M2C_BITWISE(f64, (temp_ft0 + ((M2C_FIELD(arg0, f32 *, 0x10) - temp_ft0) / D_80030C70)));
        M2C_FIELD(arg0, f32 *, 8) = (f32) (temp_fv1f_2 + ((M2C_FIELD(arg0, f32 *, 0x14) - temp_fv1f_2) / D_80030C70));
        temp_fv1f_3 = M2C_FIELD(temp_v1, f32 *, 0);
        temp_ft1_2 = M2C_FIELD(temp_v1, f32 *, 4);
        temp_ft0_2 = M2C_FIELD(temp_v1, f32 *, 8);
        M2C_FIELD(&sp10, f32 *, 4) = (f32) ((temp_fv1f_3 * D_8002D39C) + (temp_ft1_2 * D_8002D3A0) + (temp_ft0_2 * D_8002D3A4));
        temp_ft0f_2 = (temp_fv1f_3 * D_8002D390) + (temp_ft1_2 * D_8002D394) + (temp_ft0_2 * D_8002D398);
        M2C_FIELD(&sp10, f32 *, 8) = (f32) ((temp_fv1f_3 * D_8002D3A8) + (temp_ft1_2 * D_8002D3AC) + (temp_ft0_2 * D_8002D3B0));
        sp10 = temp_ft0f_2;
        sp10 = temp_ft0f_2 + sp20;
        sp14 += sp24;
        sp18 += sp28;
        func_80236A18(arg0, &sp10, arg0 + 0x24);
        temp_ft0_3 = *(f32 *)0x20DDA4;
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) (temp_ft0_3 - M2C_FIELD(arg0, f32 *, 0x24));
        temp_fv1f_4 = M2C_FIELD(arg0, f32 *, 0x18);
        temp_fv0f_2 = M2C_FIELD(arg0, f32 *, 0x24) - temp_fv1f_4;
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) (temp_ft0_3 - M2C_FIELD(arg0, f32 *, 0x28));
        temp_fv1_2 = fabsf(temp_fv0f_2);
        if (temp_fv0f_2 >= 0.0f) {
            if (!(*(f32 *)0x20DDA8 < temp_fv1_2)) {
                func_80263A08();
                return;
            }
            temp_fv0_3 = temp_fv1f_4 - ((temp_ft0_3 - temp_fv1_2) / temp_fs0_2);
            M2C_FIELD(arg0, f32 *, 0x18) = temp_fv0_3;
            if (temp_fv0_3 < 0.0f) {
                func_80263A08();
                return;
            }
            goto block_78;
        }
        if (!(*(f32 *)0x20DDAC < temp_fv1_2)) {
            M2C_FIELD(arg0, f32 *, 0x18) = (f32) (temp_fv1f_4 - (temp_fv1_2 / temp_fs0_2));
            goto block_78;
        }
        temp_fv0f_3 = temp_fv1f_4 + ((temp_ft0_3 - temp_fv1_2) / temp_fs0_2);
        M2C_FIELD(arg0, f32 *, 0x18) = temp_fv0f_3;
        if (*(f32 *)0x20DDB0 < temp_fv0f_3) {
            func_80263A08();
            return;
        }
block_78:
        temp_fv1f_5 = M2C_FIELD(arg0, f32 *, 0x1C);
        temp_fv0f_4 = M2C_FIELD(arg0, f32 *, 0x28) - temp_fv1f_5;
        temp_fv1_3 = fabsf(temp_fv0f_4);
        if (temp_fv0f_4 >= 0.0f) {
            if (!(*(f32 *)0x20DDB4 < temp_fv1_3)) {
                func_80263AC8();
                return;
            }
            temp_fv0_4 = temp_fv1f_5 - ((*(f32 *)0x20DDB8 - temp_fv1_3) / temp_fs0_2);
            M2C_FIELD(arg0, f32 *, 0x1C) = temp_fv0_4;
            if (temp_fv0_4 < 0.0f) {
                func_80263AC8();
                return;
            }
            goto block_94;
        }
        if (!(*(f32 *)0x20DDBC < temp_fv1_3)) {
            M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (temp_fv1f_5 - (temp_fv1_3 / temp_fs0_2));
            goto block_94;
        }
        temp_fv0f_5 = temp_fv1f_5 + ((*(f32 *)0x20DDC0 - temp_fv1_3) / temp_fs0_2);
        M2C_FIELD(arg0, f32 *, 0x1C) = temp_fv0f_5;
        if (*(f32 *)0x20DDC4 < temp_fv0f_5) {
            func_80263AC8();
            return;
        }
block_94:
        if ((D_80030E34 == 3) && (D_800752D0 == 0) && ((fabsf(M2C_FIELD(arg0, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0xC)) + fabsf(M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(arg0, f32 *, 0x10)) + fabsf(M2C_FIELD(arg0, f32 *, 8) - M2C_FIELD(arg0, f32 *, 0x14))) < *(f32 *)0x20DDC8)) {
            D_800752D0 = 1;
        }
    }
}
