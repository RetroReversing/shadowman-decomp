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
extern int D_8006A588;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023DF7C();
s32 func_802BAAF8();
s32 func_802C4308();
s32 func_802C5290();
s32 func_802C5CCC();
s32 func_802C5CF0();
s32 func_802C651C();
f32 func_802C880C();
extern s32 D_8002D420;
extern char D_8006A510[];
extern char D_80075518[];
extern char D_80075568[];
extern char D_80075598[];

void func_802C5B44(void) {
    s32 sp18[3];
    f32 sp28[3];
    s32 temp_fs0;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft1f;
    f32 temp_fv0f;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    void *temp_s0;
    void *temp_v0;

    if ((func_802C4308() == 0) || (D_8002D420 & 1)) {
        func_802C651C();
        func_802C5290();
        temp_v0 = D_80075598 + 4;
        temp_ft1f = *(f32 *)0x2184C4;
        sp18[0] = 0;
        sp18[1] = temp_ft1f;
        sp18[2] = *(s32 *)0x2184C8;
        temp_fv1f = M2C_FIELD(sp18, f32 *, 4);
        temp_ft0f = M2C_FIELD(sp18, f32 *, 8);
        temp_ft0 = (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 4)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 8));
        temp_fv0f = (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 0x10)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 0x14));
        temp_s0 = temp_v0 - 0x34;
        temp_fv1f_2 = (temp_fv1f * M2C_FIELD(temp_v0, f32 *, 0x1C)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 0x20));
        sp28[0] = temp_ft0;
        sp28[1] = temp_fv0f;
        sp28[2] = temp_fv1f_2;
        temp_fs0 = sp18[0];
        sp28[0] = temp_ft0 + M2C_FIELD(temp_s0, f32 *, 0x24);
        sp28[1] = temp_fv0f + M2C_FIELD(temp_s0, f32 *, 0x28);
        sp28[2] = temp_fv1f_2 + M2C_FIELD(temp_s0, f32 *, 0x2C);
        sp18[0] = M2C_FIELD(temp_v0, s32 *, -0x10);
        sp18[1] = M2C_FIELD(temp_v0, s32 *, -0xC);
        sp18[2] = M2C_FIELD(temp_v0, s32 *, -8);
        sp18[1] += temp_ft1f;
        func_802BAAF8(sp18, sp28, 0x40A00000);
        if ((M2C_FIELD(D_8006A510, void **, 0x90) == NULL) || (D_8006A588 == 0)) {
            M2C_FIELD(temp_s0, f32 *, 0xC) = temp_fs0;
            M2C_FIELD(temp_s0, f32 *, 0x10) = temp_fs0;
            func_802C5CCC(temp_s0, D_80075518, 0x36);
            return;
        }
        if (!(M2C_FIELD(M2C_FIELD(D_8006A510, void **, 0x90), u8 *, 1) & 8)) {
            /* Duplicate return node #7. Try simplifying control flow for better match */
            func_8023DF7C(D_80075568, D_80075518, 0x35, 0xA, 0x1E, 2);
            func_802C5CF0();
            return;
        }
        M2C_FIELD(temp_s0, f32 *, 0x1C) = func_802C880C(M2C_FIELD(D_8006A510, void **, 0x90));
        return;
    }
    func_8023DF7C(D_80075568, D_80075518, 0x35, 0xA, 0x1E, 2);
    func_802C5CF0();
}
