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

M2C_UNK func_802244AC(void *, M2C_UNK);             /* extern */
s32 func_8022C730(s16, s32, M2C_UNK, s32);          /* extern */
M2C_UNK func_802397D0(s32, s32);                    /* extern */
M2C_UNK func_8023981C(s32);                         /* extern */
M2C_UNK func_802398C8(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_8023AFD0(void *);                      /* extern */
M2C_UNK func_8023B094(void *);                      /* extern */
s32 func_80268AF8(M2C_UNK);                         /* extern */
extern s32 D_8002C1B0;
extern f32 D_80045440;
extern M2C_UNK D_80045624;
extern s32 D_8005EA2C;
extern s32 D_80072C18;
extern s32 D_80074BF4;
extern s32 D_800752D0;
extern M2C_UNK D_80075518;
extern u8 D_8007BDF8;
extern s32 D_8007BE14;
extern M2C_UNK D_8007BE38;
extern M2C_UNK D_8007BEA8;

void func_802BF5B4(void *arg0) {
    M2C_UNK sp10;
    M2C_UNK *temp_a0;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1f;
    s32 temp_ret;
    s32 temp_s0;
    void *temp_s1;
    void *temp_v0;

    if ((D_80074BF4 & 2) && (M2C_FIELD(&D_80075518, s16 *, 4) != 0xB0) && (D_8007BDF8 != 0) && (D_800752D0 == 0) && ((temp_s1 = M2C_FIELD(arg0, void **, 8), !(D_80045440 > 0.0f)) || (temp_v0 = (D_80072C18 << 6) + M2C_FIELD(&D_80075518, s32 *, 0x40), temp_fv0f = M2C_FIELD(temp_v0, f32 *, 0x24) - M2C_FIELD(&D_8007BEA8, f32 *, 0), temp_fv1f = M2C_FIELD(temp_v0, f32 *, 0x28) - M2C_FIELD(&D_8007BEA8, f32 *, 4), temp_fv0 = M2C_FIELD(temp_v0, f32 *, 0x2C) - M2C_FIELD(&D_8007BEA8, f32 *, 8), !(((temp_fv0f * temp_fv0f) + (temp_fv1f * temp_fv1f) + (temp_fv0 * temp_fv0)) < D_80045440)))) {
        M2C_FIELD(temp_s1, s32 *, 0x24) = (s32) M2C_FIELD(&D_8007BE38, s32 *, 0);
        M2C_FIELD(temp_s1, s32 *, 0x28) = (s32) M2C_FIELD(&D_8007BE38, s32 *, 4);
        M2C_FIELD(temp_s1, s32 *, 0x2C) = (s32) M2C_FIELD(&D_8007BE38, s32 *, 8);
        func_802397D0(D_8005EA2C + 0x3C, M2C_FIELD(&D_8007BE38, s32 *, 0));
        func_8023AFD0(temp_s1);
        func_8023B094(temp_s1);
        func_802398C8(M2C_FIELD(&D_80075518, s32 *, 0x40) + (D_80072C18 << 6), temp_s1 + 0x34, &sp10);
        temp_a0 = D_8005EA2C + 0x3C;
        func_802398C8(temp_a0, &sp10, temp_a0);
        D_8002C1B0 = M2C_FIELD(temp_s1, s32 *, 0x80);
        func_802244AC(temp_s1, 1);
        func_8023981C(D_8005EA2C + 0x3C);
        temp_ret = func_80268AF8(3);
        temp_s0 = temp_ret / 1000;
        if (temp_s0 != D_8007BE14) {
            M2C_FIELD(temp_s1, s32 *, 0x80) = func_8022C730(*((temp_s0 * 2) + &D_80045624), M2C_FIELD(temp_s1, s32 *, 0x80), 0, MULT_HI(temp_ret, 0x10624DD3));
            D_8007BE14 = temp_s0;
        }
    }
}
