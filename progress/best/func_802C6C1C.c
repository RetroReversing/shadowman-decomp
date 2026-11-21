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

extern short D_8007551C;
extern float D_80075584;
extern float D_8002D414;
s32 func_8023DF7C();
s32 func_802C2CC0();
s32 func_802C3274();
s32 func_802C413C();
s32 func_802C6CC8();
s32 func_802C6CF0();
s32 func_802C6D48();
s32 func_802C6E98();
s32 func_802CC190();
extern char D_8002D410[];
extern s32 D_8002D420;
extern f32 D_80074BC0;
extern char D_80075518[];
extern char D_80075568[];

void func_802C6C1C(void) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv0f_4;
    f32 temp_fv0f_5;
    f32 temp_fv0f_6;
    f32 temp_fv0f_7;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    f32 temp_fv1f_2;

    if (D_8007551C != 6) {
        if (D_8007551C != 7) {
            func_802C6CF0(D_80075518);
            return;
        }
        D_80075584 = (f32) (D_80075584 + (D_80074BC0 * (D_8002D414 * *(f32 *)0x218510)));
        if (!(D_8002D420 & 8)) {
            func_8023DF7C(D_80075568, D_80075518, 0, 0xA, 0x4B, 2);
        }
        if (((D_8002D420 & 0x24) == 0x24) || (D_8002D420 & 0x800000)) {
            func_802C6D48(D_80075568, D_80075518);
            return;
        }
        if ((D_8002D420 & 0x28) == 0x28) {
            func_8023DF7C(D_80075568, D_80075518, 0xA7, 0xA, 0x3C, 2);
        }
        if (D_8002D420 & 4) {
            temp_fv0f = M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0x1C);
            temp_fv1f = *(f32 *)0x218518;
            M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0x1C) = (f32) (temp_fv0f + ((*(f32 *)0x218514 - temp_fv0f) * temp_fv1f));
            temp_fv1 = *(f32 *)0x21851C;
            temp_fv0f_2 = M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0xA8);
            M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0xA8) = (f32) (temp_fv0f_2 + ((temp_fv1 - temp_fv0f_2) * temp_fv1f));
            temp_fv0f_3 = M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0x78);
            M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0x78) = (f32) (temp_fv0f_3 + ((temp_fv1 - temp_fv0f_3) * temp_fv1f));
            temp_fv0 = M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0x48);
            M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0x48) = (f32) (temp_fv0 + ((temp_fv1 - temp_fv0) * temp_fv1f));
            func_802C6E98();
            return;
        }
        if (D_8002D420 & 8) {
            temp_fv0f_4 = M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0x1C);
            temp_fv1f_2 = *(f32 *)0x218528;
            M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0x1C) = (f32) (temp_fv0f_4 + ((*(f32 *)0x218524 - temp_fv0f_4) * temp_fv1f_2));
            temp_fv1_2 = *(f32 *)0x21852C;
            temp_fv0f_5 = M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0xA8);
            M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0xA8) = (f32) (temp_fv0f_5 + ((temp_fv1_2 - temp_fv0f_5) * temp_fv1f_2));
            temp_fv0f_6 = M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0x78);
            M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0x78) = (f32) (temp_fv0f_6 + ((temp_fv1_2 - temp_fv0f_6) * temp_fv1f_2));
            temp_fv0_2 = M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0x48);
            M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0x48) = (f32) (temp_fv0_2 + ((temp_fv1_2 - temp_fv0_2) * temp_fv1f_2));
            temp_fv0f_7 = M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0x108);
            M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0x108) = (f32) (temp_fv0f_7 + ((*(f32 *)0x218530 - temp_fv0f_7) * temp_fv1f_2));
        }
        func_802C413C();
        func_802C2CC0();
        func_802C3274();
        func_802CC190();
        return;
    }
    func_802C6CC8(D_80075568, D_80075518);
}
