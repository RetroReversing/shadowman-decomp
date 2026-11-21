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

M2C_UNK func_8011365C(M2C_UNK *, s32);              /* extern */
s32 func_8021D4C0();                                /* extern */
void *func_8021E344(s32);                           /* extern */
s32 func_802228F0(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_80224674();                            /* extern */
M2C_UNK func_802255D4(s32, void *);                 /* extern */
M2C_UNK func_80225660(s32, void *);                 /* extern */
M2C_UNK func_802256EC(s32, void *);                 /* extern */
M2C_UNK func_80225910(s32);                         /* extern */
M2C_UNK func_802259B0(s32);                         /* extern */
M2C_UNK func_80225A50(s32);                         /* extern */
M2C_UNK func_80238A54(void *, M2C_UNK *);           /* extern */
extern s32 D_8002C1B0;
extern void *D_8005387C;
extern void *D_80056998;
extern void *D_800569A4;
extern s32 D_8005EA2C;
extern s32 D_80069838;

void func_802245B8(void *arg1) {
    M2C_UNK sp10;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s4;
    void *temp_a0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *var_a1;

    var_s4 = 0;
    if ((func_802228F0(D_8005EA2C + 0x3C, &sp10) != 0) && (temp_v0 = func_8021D4C0(), (temp_v0 != 0))) {
        func_8011365C(&sp10, temp_v0);
        if ((M2C_FIELD(arg1, u16 *, 0x3C) & 8) && (D_80069838 != 0)) {
            temp_v0_2 = func_8021E344(D_80069838 + 6);
            if (temp_v0_2 != NULL) {
                func_80238A54(temp_v0_2, &sp10);
                func_80224674();
            }
        } else {
            temp_v0_3 = func_8021E344(4);
            if (temp_v0_3 != NULL) {
                var_s1 = 0x38;
                if (!(M2C_FIELD(arg1, u16 *, 0x3C) & 1)) {
                    var_s1 = 0x38 | 7;
                } else {
                    var_s4 = 7;
                }
                M2C_FIELD(temp_v0_3, s32 *, 0) = 0xDB060004;
                M2C_FIELD(temp_v0_3, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 0x4C);
                var_a1 = temp_v0_3 + 8;
                if ((s32) M2C_FIELD(arg1, u16 *, 0x3C) & 0x80) {
                    temp_a0 = var_a1;
                    var_a1 += 8;
                    M2C_FIELD(temp_a0, s32 *, 0) = 0xDB060008;
                    M2C_FIELD(temp_a0, s32 *, 4) = (s32) D_8002C1B0;
                }
                M2C_FIELD(var_a1, s32 *, 0) = 0xDA380000;
                M2C_FIELD(var_a1, s32 *, 4) = temp_v0;
                M2C_FIELD(var_a1, s32 *, 8) = 0xDF000000;
                M2C_FIELD((var_a1 + 8), s32 *, 4) = 0;
                if (((s32) M2C_FIELD(arg1, u16 *, 0x3C) & 0x7F) == 1) {
                    if (M2C_FIELD(arg1, void **, 0x40) != NULL) {
                        func_802255D4(var_s4 & 0xFFFF, var_a1);
                        func_80225910(var_s1 & 0xFFFF);
                        temp_v0_4 = D_8005387C + 8;
                        M2C_FIELD(D_8005387C, s32 *, 0) = 0xDE000000;
                        M2C_FIELD(D_8005387C, void **, 4) = temp_v0_3;
                        M2C_FIELD(D_8005387C, s32 *, 8) = 0xDE000000;
                        var_a1 = M2C_FIELD(arg1, void **, 0x40);
                        D_8005387C = temp_v0_4;
                        D_8005387C = temp_v0_4 + 8;
                        M2C_FIELD(temp_v0_4, void **, 4) = var_a1;
                    }
                    if (M2C_FIELD(arg1, void **, 0x44) != NULL) {
                        func_80225660(var_s4 & 0xFFFF, var_a1);
                        func_802259B0(var_s1 & 0xFFFF);
                        temp_v0_5 = D_80056998 + 8;
                        M2C_FIELD(D_80056998, s32 *, 0) = 0xDE000000;
                        M2C_FIELD(D_80056998, void **, 4) = temp_v0_3;
                        M2C_FIELD(D_80056998, s32 *, 8) = 0xDE000000;
                        var_a1 = M2C_FIELD(arg1, void **, 0x44);
                        D_80056998 = temp_v0_5;
                        D_80056998 = temp_v0_5 + 8;
                        M2C_FIELD(temp_v0_5, void **, 4) = var_a1;
                    }
                    if (M2C_FIELD(arg1, s32 *, 0x48) != 0) {
                        func_802256EC(var_s4 & 0xFFFF, var_a1);
                        func_80225A50(var_s1 & 0xFFFF);
                        temp_v0_6 = D_800569A4 + 8;
                        M2C_FIELD(D_800569A4, s32 *, 0) = 0xDE000000;
                        M2C_FIELD(D_800569A4, void **, 4) = temp_v0_3;
                        M2C_FIELD(D_800569A4, s32 *, 8) = 0xDE000000;
                        D_800569A4 = temp_v0_6;
                        D_800569A4 = temp_v0_6 + 8;
                        M2C_FIELD(temp_v0_6, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 0x48);
                    }
                }
            }
        }
    }
}
