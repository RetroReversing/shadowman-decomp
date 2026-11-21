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

extern int D_80052774;
extern float D_8007558C;
extern float D_8007BDB8;
extern float D_80075590;
extern float D_8007BDBC;
extern float D_80075594;
extern float D_8007BDC0;
extern int D_80044FB8;
s32 func_8010A05C();
s32 func_8010BB8C();
s32 func_80231DC8();
s32 func_8023934C();
s32 func_8023C450();
s32 func_80242BDC();
s32 func_8025349C();
s32 func_802534B0();
s32 func_8025C2B0();
s32 func_8025D160();
s32 func_8025D1C4();
s32 func_802610F4();
s32 func_80274CD0();
s32 func_802D0B28();
extern char D_209890[];
extern s32 D_8002D2B4;
extern s32 D_8002D424;
extern s32 D_800305B0;
extern s32 D_800305BC;
extern s32 D_800305F8;
extern u16 D_8003120E;
extern char D_80044EB0[];
extern s32 D_800458F0;
extern s32 D_8005276C;
extern char D_80052770[];
extern s32 D_8005EA14;
extern void *D_8005EA2C;
extern s32 D_80074BB0;
extern char D_80074BC8[];
extern s32 D_80074BF0;
extern s32 D_800753E4;
extern char D_80075568[];
extern s32 D_8007AF94;
extern u16 D_8007AFB4;
extern s32 D_8007B000;
extern u8 D_8007DB7E;

void func_8025CF80(void) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fv0f;
    f32 temp_fv1f;
    s32 *temp_a0_2;
    s32 temp_a0;

    if (D_800305F8 == 1) {
        func_8025C2B0();
    }
    if ((D_800305B0 == 0) && (D_8005276C >= 5) && (D_800458F0 == 0)) {
        if (D_8007DB7E == 0) {
            D_800305B0 = 1;
        }
    }
    D_8007AFB4 = D_8003120E;
    if (D_8007AF94 < D_8007B000) {
        D_8007AF94 = D_8007B000;
    }
    D_8007B000 = 0;
    temp_a0 = (D_800305BC + 1) % 10;
    D_800305BC = temp_a0;
    temp_a0_2 = (temp_a0 * 4) + D_80074BC8;
    *temp_a0_2 = D_8002D424;
    func_8023C450(temp_a0_2, &D_800305BC, &D_8007AF94, &D_8007B000);
    func_802D0B28(D_8005EA14, D_8002D2B4, 0);
    func_80242BDC();
    if ((D_800753E4 == 2) || (D_800753E4 == 5) || (D_800753E4 == 4)) {
        func_8025D1C4(M2C_FIELD(D_8005EA2C, f32 *, 0), M2C_FIELD(D_8005EA2C, f32 *, 4), M2C_FIELD(D_8005EA2C, s32 *, 8));
        return;
    }
    if (D_80052774 > 0) {
        temp_fv1f = (f32) D_80052774;
        sp10 = (D_8007558C - D_8007BDB8) / temp_fv1f;
        sp14 = (D_80075590 - D_8007BDBC) / temp_fv1f;
        sp18 = (D_80075594 - D_8007BDC0) / temp_fv1f;
        sp20 = D_8007BDB8;
        sp24 = D_8007BDBC;
        sp28 = D_8007BDC0;
        if (D_80052774 > 0) {
            temp_fa0 = sp20 + sp10;
            temp_fv0f = sp28 + sp18;
            temp_fa1 = sp24 + sp14;
            sp20 = temp_fa0;
            sp24 = temp_fa1;
            sp28 = temp_fv0f;
            func_80231DC8(temp_fa0, temp_fa1, &D_8007BDB8, D_80052774, temp_fv0f);
            if (D_80052774 > 1) {
                func_8025D160();
                return;
            }
        }
        goto block_21;
    }
    func_80231DC8(D_8007558C, D_80075590, (s32 *) D_80052774, M2C_BITWISE(s32, D_80075594));
block_21:
    func_802534B0();
    if (M2C_FIELD(((D_80074BB0 * 0x34) + D_209890), s16 *, 0x18) != 0) {
        func_80274CD0(D_209890);
    }
    func_8010A05C();
    func_8025349C();
    func_8023934C(D_80074BF0);
    if (D_80044FB8 != 0) {
        D_80075590 = (f32) (D_80075590 + *(f32 *)0x20A198);
    }
    func_802610F4(D_8002D2B4);
    func_8010BB8C();
    if (D_80044FB8 != 0) {
        D_80075590 = (f32) (D_80075590 - *(f32 *)0x20A19C);
    }
}
