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

M2C_UNK func_80239480(M2C_UNK *);                   /* extern */
M2C_UNK func_8023959C(M2C_UNK *);                   /* extern */
M2C_UNK func_802C1EB4(void *, s32);                 /* extern */
M2C_UNK func_802C2B3C(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK D_2C1E7C;
extern s32 D_80030E34;
extern f32 D_80044E9C;
extern s32 D_8004588C;
extern s32 D_800458F0;
extern s32 D_800753E4;
extern M2C_UNK D_80075518;
extern M2C_UNK D_8007BDE8;
extern M2C_UNK D_8007BE70;
extern f32 D_8007BEB4;
extern u8 D_8007DB9B;

void func_802C296C(void) {
    M2C_UNK *var_a0;
    void *temp_a0;

    var_a0 = &D_80075518;
    if (!(M2C_FIELD(&D_80075518, s32 *, 0x1C) & 0x01040000) && (D_800458F0 == 0) && !((u16) M2C_FIELD(&D_80075518, s32 *, 0x1C) & 0x400) && (D_8007DB9B == 0)) {
        var_a0 = M2C_FIELD(&D_80075518, M2C_UNK **, 0x30);
        if (!(M2C_FIELD(((M2C_FIELD(&D_80075518, s16 *, 4) * 0x38) + var_a0), u16 *, 4) & 0x10) && (D_800753E4 == 0)) {
            if (D_80030E34 >= 3) {
                /* Duplicate return node #8. Try simplifying control flow for better match */
                func_802C2B3C(var_a0, &D_80075518);
                return;
            }
            if ((M2C_FIELD(&D_80075518, s16 *, 0) != -1) && (M2C_FIELD(((M2C_FIELD(&D_80075518, s16 *, 0) * 0x38) + var_a0), u16 *, 4) & 2)) {
                func_802C2B3C(var_a0, &D_80075518);
                return;
            }
            if ((M2C_FIELD(&D_80075518, s16 *, 2) != -1) && (M2C_FIELD(((M2C_FIELD(&D_80075518, s16 *, 2) * 0x38) + M2C_FIELD(&D_80075518, M2C_UNK **, 0x30)), u16 *, 4) & 2)) {
                func_802C2B3C(&D_80075518, &D_80075518);
                return;
            }
            if (M2C_FIELD(&D_8007BDE8, s32 *, 0) != 0) {
                func_802C2B3C(&D_80075518, &D_8007BDE8);
                return;
            }
            if (M2C_FIELD(&D_8007BDE8, s32 *, 4) != 0) {
                func_802C2B3C(&D_80075518, &D_8007BDE8);
                return;
            }
            D_8004588C = 2;
            M2C_FIELD(&D_8007BE70, s32 *, 4) = 0;
            D_8007BEB4 = *(f32 *)0x218380;
            D_80044E9C = *(f32 *)0x218384;
            if (M2C_FIELD(&D_8007BDE8, void **, 8) != NULL) {
                temp_a0 = M2C_FIELD(M2C_FIELD(&D_8007BDE8, void **, 8), void **, 0x88);
                M2C_FIELD(&D_8007BDE8, void **, 8) = NULL;
                if (M2C_FIELD(temp_a0, s16 *, 0x16) != 0x10) {
                    func_802C1EB4(temp_a0, M2C_FIELD(temp_a0, s32 *, 8));
                }
            }
            func_8023959C(&D_2C1E7C);
            func_80239480(&D_2C1E7C);
            return;
        }
    }
    func_802C2B3C(var_a0, &D_80075518);
}
