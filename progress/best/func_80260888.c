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

M2C_UNK func_80108AAC(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_80109318(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_8022B090();                            /* extern */
M2C_UNK func_8022B588(M2C_UNK *);                   /* extern */
M2C_UNK func_8023DF7C(void *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_8026092C();                                /* extern */
s32 func_80260A04();                                /* extern */
s32 func_80260A58();                                /* extern */
M2C_UNK func_8026413C(M2C_UNK);                     /* extern */
s32 func_80268AF8(M2C_UNK);                         /* extern */
M2C_UNK func_80268ED8(M2C_UNK, s32);                /* extern */
M2C_UNK func_8026E1F0(s32);                         /* extern */
M2C_UNK func_8026E26C(M2C_UNK);                     /* extern */
M2C_UNK func_802A376C(s32);                         /* extern */
extern s32 D_20B410;
extern s32 D_80074BB0;
extern M2C_UNK D_80074C50;
extern M2C_UNK D_80075518;
extern u16 D_80075534;
extern M2C_UNK D_8007558C;
extern M2C_UNK D_80075F20;
extern M2C_UNK D_8007DC30;

s32 func_80260888(s32 arg0) {
    M2C_UNK *var_a0;
    s32 *var_a0_2;
    s32 temp_s2;
    s32 var_s1;
    s32 var_v1;
    s32 var_v1_2;

    var_s1 = 0;
    func_8022B588(&D_8007DC30);
    func_8022B090();
    if (!(D_80075534 & 4)) {
        var_v1 = 0;
        var_a0 = &D_80074C50;
loop_2:
        var_v1 += 1;
        if (M2C_FIELD(var_a0, s32 *, 4) == arg0) {
            func_8026E1F0(M2C_FIELD(var_a0, s32 *, 0));
            if (D_80074BB0 < 0x10) {
                return func_80260A04();
            }
            return func_8026092C();
        }
        var_a0 += 8;
        if (var_v1 >= 0x14) {
            M2C_FIELD(&D_80075F20, u16 *, 0x28) = (u16) (M2C_FIELD(&D_80075F20, u16 *, 0x28) + 1);
            temp_s2 = func_80268AF8(3);
            var_v1_2 = 0;
            var_a0_2 = &D_20B410;
            do {
                if ((s32) M2C_FIELD(&D_80075F20, u16 *, 0x28) >= *var_a0_2) {
                    var_s1 = var_v1_2 + 1;
                }
                var_v1_2 += 1;
                var_a0_2 += 4;
            } while (var_v1_2 < 0xA);
            func_80268ED8(3, var_s1 * 0x3E8);
            if (temp_s2 != func_80268AF8(3)) {
                func_80109318(0xDA, &D_8007558C, 0);
                func_8026413C(1);
                func_8023DF7C(&D_8007558C - 0x24, &D_80075518, 0x8F, 0xA, 0, 2);
                return func_80260A58();
            }
            func_80109318(0xD9, &D_8007558C, 0);
            func_8026413C(0);
            func_8023DF7C(&D_8007558C - 0x24, &D_80075518, 0x39, 0xA, 0, 2);
            func_80108AAC(0x71, 0x3F, 0x7FFF);
            func_802A376C(0);
            func_8026E26C(9);
            if (var_s1 >= 2) {
                func_8026E26C(0x16);
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_2;
    }
    return 0;
}
