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

M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_802C4308();                                /* extern */
s32 func_802C7FF4();                                /* extern */
M2C_UNK func_802C81E4(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_802C831C(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_802C8724(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_802C87E0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_802C87EC(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
f32 func_802C9F60(M2C_UNK *);                       /* extern */
f32 func_802CA1E4(M2C_UNK *);                       /* extern */
extern M2C_UNK D_209890;
extern s32 D_8002D420;
extern s32 D_8002D424;
extern M2C_UNK D_8002DBD0;
extern s32 D_800458AC;
extern s32 D_80074BB0;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007558C;

void func_802C8128(void) {
    M2C_UNK *temp_a0;
    s32 var_s1;
    s32 var_s2;

    var_s2 = (s32) func_802C9F60(&D_8007558C);
    var_s1 = (s32) func_802CA1E4(&D_8007558C);
    if (M2C_FIELD(&D_8002DBD0, s32 *, 8) != 0) {
        var_s2 = 0;
    }
    if (M2C_FIELD(&D_8002DBD0, s32 *, 0x18) != 0) {
        var_s1 = 0;
    }
    if (D_8002D420 & 0x80) {
        if (D_800458AC == 0) {
            D_800458AC = 1;
            if (M2C_FIELD(&D_80075518, s16 *, 4) == 0x43) {
                func_802C81E4(&D_8007558C - 0x24, &D_80075518);
                return;
            }
            temp_a0 = &D_8007558C - 0x24;
            if (M2C_FIELD(&D_80075518, s16 *, 4) == 0x42) {
                func_802C81E4(temp_a0, &D_80075518);
                return;
            }
            func_8023DF7C(temp_a0, &D_80075518, 0x5B, 0xA, 0, 2);
            goto block_13;
        }
        goto block_14;
    }
block_13:
block_14:
    if ((u32) ((u16) M2C_FIELD(&D_80075518, s16 *, 4) - 0x42) < 2U) {
        if ((var_s1 != 0) && (var_s2 != 0)) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x41, 0xA, 0x28, 2);
        }
        if ((M2C_FIELD(&D_80075518, s16 *, 4) == 0x43) && (var_s1 != 0) && (var_s2 == 0)) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x42, 0xA, 0x14, 2);
        }
        if ((M2C_FIELD(&D_80075518, s16 *, 4) == 0x42) && (var_s2 != 0) && (var_s1 == 0)) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x43, 0xA, 0x14, 2);
        }
    }
    if (M2C_FIELD(&D_80075518, s16 *, 4) == 0x41) {
        if (var_s1 == 0) {
            func_802C831C(&D_80075568, &D_80075518);
            return;
        }
        if (var_s2 == 0) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x42, 0xA, 0x28, 2);
        }
        goto block_32;
    }
block_32:
    if ((M2C_FIELD(&D_80075518, s16 *, 4) == 0x43) && (M2C_FIELD(&D_80075518, s16 *, 2) != -1)) {
        if (M2C_FIELD(((M2C_FIELD(&D_80075518, s16 *, 2) * 0x38) + M2C_FIELD(&D_80075518, s32 *, 0x30)), u16 *, 4) & 2) {
            func_8023DF7C(&D_80075568, &D_80075518, 0xBC, 0xA, 0, 2);
        }
    }
    if ((M2C_FIELD(&D_80075518, s16 *, 4) == 0x42) && (M2C_FIELD(&D_80075518, s16 *, 0) != -1) && (M2C_FIELD(((M2C_FIELD(&D_80075518, s16 *, 0) * 0x38) + M2C_FIELD(&D_80075518, s32 *, 0x30)), u16 *, 4) & 2)) {
        func_8023DF7C(&D_80075568, &D_80075518, 0xBE, 0xA, 0, 2);
    }
    if ((M2C_FIELD(&D_80075518, s16 *, 4) == 0xBE) && ((M2C_FIELD(&D_80075518, s16 *, 0) == -1) || !(M2C_FIELD(((M2C_FIELD(&D_80075518, s16 *, 0) * 0x38) + M2C_FIELD(&D_80075518, s32 *, 0x30)), u16 *, 4) & 2))) {
        func_8023DF7C(&D_80075568, &D_80075518, 0xBF, 0xA, 0, 2);
    }
    if ((M2C_FIELD(&D_80075518, s16 *, 4) == 0xBC) && ((M2C_FIELD(&D_80075518, s16 *, 2) == -1) || !(M2C_FIELD(((M2C_FIELD(&D_80075518, s16 *, 2) * 0x38) + M2C_FIELD(&D_80075518, s32 *, 0x30)), u16 *, 4) & 2))) {
        func_8023DF7C(&D_80075568, &D_80075518, 0xBD, 0xA, 0, 2);
    }
    if ((M2C_FIELD(&D_80075518, s16 *, 4) == 0x1B) && (D_8002D420 & 1) && (M2C_FIELD(&D_80075518, s16 *, 0x16) >= 0xAB)) {
        if (func_802C7FF4() != 0) {
            if (M2C_FIELD(((D_80074BB0 * 0x34) + &D_209890), s16 *, 8) == 0) {
                func_802C87EC(&D_80075568, &D_80075518, 0x20, 0x6E, 0x28);
                return;
            }
            func_802C87EC(&D_80075568, &D_80075518, 0x1F, 0x6E, 0x28);
            return;
        }
        goto block_59;
    }
block_59:
    if ((M2C_FIELD(&D_80075518, s16 *, 4) == 0x4B) && (D_8002D420 & 1) && (M2C_FIELD(&D_80075518, s16 *, 0x16) >= 0xAB)) {
        if (func_802C7FF4() != 0) {
            func_802C87EC(&D_80075568, &D_80075518, 0x47, 0x82, 0x28);
            return;
        }
        goto block_66;
    }
block_66:
    if ((M2C_FIELD(&D_80075518, s16 *, 4) == 0x4C) && (D_8002D420 & 1) && (M2C_FIELD(&D_80075518, s16 *, 0x16) >= 0x5B)) {
        if (func_802C7FF4() != 0) {
            func_802C87EC(&D_80075568, &D_80075518, 0x48, 0x82, 0x28);
            return;
        }
        goto block_73;
    }
block_73:
    if (((D_8002D424 & 1) || ((func_802C4308() != 0) && (D_8002D420 & 1))) && (func_802C7FF4() != 0)) {
        if (M2C_FIELD(&D_80075518, s16 *, 4) == 0x43) {
            func_802C8724(&D_80075568, &D_80075518);
            return;
        }
        if (M2C_FIELD(&D_80075518, s16 *, 4) == 0x42) {
            func_802C8724(&D_80075568, &D_80075518);
            return;
        }
        if (M2C_FIELD(((D_80074BB0 * 0x34) + &D_209890), s16 *, 8) == 0) {
            func_802C8724(&D_80075568, &D_80075518);
            return;
        }
        func_8023DF7C(&D_80075568, &D_80075518, 0x1F, 0xA, 0x28, 2);
        goto block_87;
    }
block_87:
    if ((var_s2 == 0) && (var_s1 == 0)) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x12, 0xA, 0x28, 2);
        M2C_FIELD(&D_80075518, s16 *, 0x22) = 0x40;
    }
    if (D_8002D424 & 2) {
        if (M2C_FIELD(&D_80075518, s16 *, 4) == 0x41) {
            func_802C87E0(&D_80075568, &D_80075518);
            return;
        }
        if (M2C_FIELD(&D_80075518, s16 *, 4) == 0x43) {
            func_802C87E0(&D_80075568, &D_80075518);
            return;
        }
        if (M2C_FIELD(&D_80075518, s16 *, 4) == 0x42) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x46, 0xA, 0, 2);
        }
    }
}
