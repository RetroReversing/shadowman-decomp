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

M2C_UNK func_8023E724(M2C_UNK *, M2C_UNK, M2C_UNK *, f32 *); /* extern */
M2C_UNK func_802401D0(M2C_UNK *, f32 *, M2C_UNK);   /* extern */
M2C_UNK func_802645F0(s32, f32 *, f32 *);           /* extern */
M2C_UNK func_802655B0(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_802655BC();                            /* extern */
M2C_UNK func_802656E4();                            /* extern */
M2C_UNK func_802656E8();                            /* extern */
M2C_UNK func_80265744(M2C_UNK *);                   /* extern */
M2C_UNK func_80265E80(f32 *, s32);                  /* extern */
M2C_UNK func_8026B618(s32, M2C_UNK);                /* extern */
M2C_UNK func_8026B718(s32, M2C_UNK);                /* extern */
M2C_UNK func_802A5EC4(f32 *, f32 *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern u8 D_21790C[];
extern M2C_UNK D_80030E8C;
extern M2C_UNK D_80030E98;
extern s32 D_800458F0;
extern void *D_8005EA2C;
extern M2C_UNK D_8006A510;
extern s32 D_8006A5B4;
extern s32 D_800752D0;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007558C;
extern M2C_UNK D_80075598;
extern M2C_UNK D_8007BB10;
extern M2C_UNK D_8007BDE8;

void func_8026554C(s32 arg0) {
    s32 sp18[3];
    f32 sp28[3];
    f32 sp38[3];
    f32 temp_fs0;
    f32 temp_ft0;
    f32 temp_fv0f;
    void *temp_v0;

    if (arg0 != 0) {
        if (arg0 != 1) {
            func_802655BC();
            return;
        }
        func_8023E724(&D_80075518, 0xD, &D_80030E98, sp28);
        temp_fs0 = *(f32 *)0x20DEC0;
        sp18[0] = 0;
        sp18[1] = 0;
        sp18[2] = temp_fs0;
        if (D_800752D0 != 0) {
            sp28[0] = M2C_FIELD(D_8005EA2C, f32 *, 0);
            sp28[1] = M2C_FIELD(D_8005EA2C, f32 *, 4);
            sp28[2] = M2C_FIELD(D_8005EA2C, f32 *, 8);
            func_80265E80(sp28, arg0);
            sp38[0] = M2C_FIELD(&D_8007BB10, f32 *, 0) - sp28[0];
            func_802656E4();
            return;
        }
        if (*((arg0 * 4) + &D_8007BDE8) != 0) {
            func_802645F0(arg0, sp38, sp28);
            sp38[0] *= temp_fs0;
            sp38[1] *= temp_fs0;
            func_802656E8();
            return;
        }
        temp_v0 = &D_80075598 + 4;
        temp_fv0f = M2C_FIELD(sp18, f32 *, 4);
        temp_ft0 = M2C_FIELD(sp18, f32 *, 8);
        sp38[0] = (temp_fv0f * M2C_FIELD(temp_v0, f32 *, 4)) + (temp_ft0 * M2C_FIELD(temp_v0, f32 *, 8));
        sp38[1] = (temp_fv0f * M2C_FIELD(temp_v0, f32 *, 0x10)) + (temp_ft0 * M2C_FIELD(temp_v0, f32 *, 0x14));
        sp38[2] = (temp_fv0f * M2C_FIELD(temp_v0, f32 *, 0x1C)) + (temp_ft0 * M2C_FIELD(temp_v0, f32 *, 0x20));
        if (!(M2C_FIELD(((M2C_FIELD(&D_80075518, s16 *, 4) * 0x38) + M2C_FIELD(&D_80075518, s32 *, 0x30)), u16 *, 4) & 0x20)) {
            D_8006A5B4 = 3;
            if (D_800458F0 != 0) {
                func_80265744(&D_80075568);
                return;
            }
            func_802401D0(&D_8007558C, sp28, 0x3F800000);
            if (M2C_FIELD(&D_8006A510, s32 *, 0x78) != 0) {
                sp28[0] = M2C_FIELD(&D_8006A510, f32 *, 0x80);
                sp28[1] = M2C_FIELD(&D_8006A510, f32 *, 0x84);
                sp28[2] = M2C_FIELD(&D_8006A510, f32 *, 0x88);
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            func_802A5EC4(sp28, sp38, D_21790C, 0, 0, 0);
            func_802A5EC4(sp28, sp38, D_21790C + 0x120, 0, 0, 0);
            func_8026B618(arg0, 1);
            func_8026B718(arg0, 0);
            return;
        }
        func_802A5EC4(sp28, sp38, D_21790C, 0, 0, 0);
        func_802A5EC4(sp28, sp38, D_21790C + 0x120, 0, 0, 0);
        func_8026B618(arg0, 1);
        func_8026B718(arg0, 0);
        return;
    }
    func_802655B0(&D_80075518, 9, &D_80030E8C);
}
