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

M2C_UNK func_8024E364(f32, f32, f32);               /* extern */
extern M2C_UNK D_20308C;
extern M2C_UNK D_24E640;
extern s32 D_8002D424;
extern f32 D_80045440;
extern s32 D_800752D0;
extern M2C_UNK D_80075568;
extern s32 D_8007BE00;
extern u8 D_8007DB9B;

void func_8024E434(void *arg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_ft3;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    void *temp_s0;
    void *temp_v0;

    if (D_8002D424 & 0x400) {
        if ((D_8007DB9B == 0) && (D_800752D0 == 0)) {
            sp10 = M2C_FIELD(&D_20308C, f32 *, 0);
            sp14 = M2C_FIELD(&D_20308C, f32 *, 4);
            sp18 = M2C_FIELD(&D_20308C, f32 *, 8);
            if (D_80045440 == *(f32 *)0x203098) {
                temp_s0 = M2C_FIELD(arg0, void **, 8);
                temp_fv0f = M2C_FIELD(temp_s0, f32 *, 0x24) - M2C_FIELD(&D_80075568, f32 *, 0x24);
                temp_fv1 = M2C_FIELD(temp_s0, f32 *, 0x28) - M2C_FIELD(&D_80075568, f32 *, 0x28);
                temp_fv0 = M2C_FIELD(temp_s0, f32 *, 0x2C) - M2C_FIELD(&D_80075568, f32 *, 0x2C);
                temp_ft3 = (temp_fv0f * temp_fv0f) + (temp_fv1 * temp_fv1) + (temp_fv0 * temp_fv0);
                temp_v0 = temp_s0 + 0x34;
                if (temp_ft3 < *(f32 *)0x20309C) {
                    temp_ft1 = M2C_FIELD(&sp10, f32 *, 4);
                    temp_ft0f = M2C_FIELD(&sp10, f32 *, 8);
                    temp_fv1f = (sp10 * M2C_FIELD(temp_s0, f32 *, 0x34)) + (temp_ft1 * M2C_FIELD(temp_v0, f32 *, 4)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 8));
                    sp20 = temp_fv1f;
                    temp_fv1_2 = (sp10 * M2C_FIELD(temp_v0, f32 *, 0xC)) + (temp_ft1 * M2C_FIELD(temp_v0, f32 *, 0x10)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 0x14));
                    sp24 = temp_fv1_2;
                    temp_ft0 = (sp10 * M2C_FIELD(temp_v0, f32 *, 0x18)) + (temp_ft1 * M2C_FIELD(temp_v0, f32 *, 0x1C)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 0x20));
                    sp28 = temp_ft0;
                    sp10 = M2C_FIELD(temp_s0, f32 *, 0) + temp_fv1f;
                    sp14 = M2C_FIELD(temp_s0, f32 *, 4) + temp_fv1_2;
                    sp18 = M2C_FIELD(temp_s0, f32 *, 8) + temp_ft0;
                    temp_fv0_2 = (M2C_FIELD(temp_s0, f32 *, 0) + temp_fv1f) - M2C_FIELD(&D_80075568, f32 *, 0x24);
                    sp10 = temp_fv0_2;
                    temp_fv0_3 = (M2C_FIELD(temp_s0, f32 *, 4) + temp_fv1_2) - M2C_FIELD(&D_80075568, f32 *, 0x28);
                    sp14 = temp_fv0_3;
                    temp_fv0_4 = (M2C_FIELD(temp_s0, f32 *, 8) + temp_ft0) - M2C_FIELD(&D_80075568, f32 *, 0x2C);
                    sp18 = temp_fv0_4;
                    if (((temp_fv0_2 * temp_fv0_2) + (temp_fv0_3 * temp_fv0_3) + (temp_fv0_4 * temp_fv0_4)) <= *(f32 *)0x2030A0) {
                        func_8024E364(temp_ft3, M2C_FIELD(&D_20308C, f32 *, 0), M2C_FIELD(&D_20308C, f32 *, 4));
                    }
                }
                D_8007BE00 = (s32) M2C_FIELD(temp_s0, s16 *, 0x7A);
            }
        }
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &D_24E640;
}
