/* Partial candidate from function #85899348381 in project #20; rechecked locally. */
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

s32 func_80114D60(s32, s32, M2C_UNK, M2C_UNK *);    /* extern */
s32 func_80115120(s32, s32, M2C_UNK, M2C_UNK *, s32); /* extern */
s32 func_801154E0(M2C_UNK, s8 *, s8 *, u8 *);       /* extern */
extern M2C_UNK D_800B8FE0;
extern M2C_UNK D_8011B090;
extern u8 D_8011B190;
extern M2C_UNK D_8011B1B0;
extern u8 D_8011B2B0;

s32 func_80114878(s32 arg0, void *arg1, s32 arg2) {
    M2C_UNK sp18;
    u8 sp37;
    s8 sp38;
    s16 sp3C;
    M2C_UNK sp58;
    s32 *var_v0_3;
    s32 *var_v1_2;
    s32 var_a0;
    s32 var_a0_10;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_a0_7;
    s32 var_a0_8;
    s32 var_v0;
    s8 *temp_v0_2;
    s8 *var_a1;
    s8 *var_a2;
    s8 *var_s2;
    s8 *var_v1_3;
    u8 *temp_v0;
    u8 *temp_v1;
    u8 *var_a0_9;
    u8 *var_s1;
    u8 *var_s3;
    u8 *var_s4;
    u8 *var_v0_2;
    u8 *var_v1;
    void *temp_v0_3;

    var_a0 = 0x1F;
    var_v1 = &sp37;
    M2C_FIELD(arg1, s32 *, 4) = arg0;
    M2C_FIELD(arg1, s32 *, 8) = arg2;
    M2C_FIELD(arg1, s32 *, 0) = 0;
    M2C_FIELD(arg1, s8 *, 0x65) = 0x80;
    do {
        *var_v1 = 0xFE;
        var_a0 -= 1;
        var_v1 -= 1;
    } while (var_a0 >= 0);
    var_v0 = func_80115120(arg0, arg2, 0x400, &sp18, 0);
    if (var_v0 == 2) {
        var_v0 = func_80115120(arg0, arg2, 0x400, &sp18, 0);
    }
    if (var_v0 == 0) {
        var_v0 = func_80114D60(arg0, arg2, 0x400, &sp18);
        if (var_v0 == 2) {
            var_v0 = 4;
        }
        if (var_v0 == 0) {
            if (sp37 != 0xFE) {
                var_a0_2 = 0x1F;
                var_v0_2 = &sp37;
                do {
                    *var_v0_2 = 0x80;
                    var_a0_2 -= 1;
                    var_v0_2 -= 1;
                } while (var_a0_2 >= 0);
                var_v0 = func_80115120(arg0, arg2, 0x400, &sp18, 0);
                if (var_v0 == 2) {
                    var_v0 = func_80115120(arg0, arg2, 0x400, &sp18, 0);
                }
                if (var_v0 == 0) {
                    var_v0 = func_80114D60(arg0, arg2, 0x400, &sp18);
                    if (var_v0 == 2) {
                        var_v0 = 4;
                    }
                    if (var_v0 == 0) {
                        if (sp37 != 0x80) {
                            goto block_18;
                        }
                        var_v0 = 0;
                        if (*(&D_800B8FE0 + (arg2 * 4)) == 0) {
                            var_a0_3 = 0;
                            do {
                                temp_v0 = &(&D_8011B190)[var_a0_3];
                                temp_v1 = &(&D_8011B2B0)[var_a0_3];
                                var_a0_3 += 1;
                                *temp_v0 = 1;
                                *temp_v1 = 0;
                            } while (var_a0_3 < 0x20);
                            var_s3 = &D_8011B190;
                            var_s2 = (arg2 << 6) + &D_8011B090;
                            var_a0_4 = 0xE;
                            var_v0_3 = var_s2 + 0x38;
                            do {
                                *var_v0_3 = 0;
                                var_a0_4 -= 1;
                                var_v0_3 -= 4;
                            } while (var_a0_4 >= 0);
                            M2C_FIELD(var_s2, s32 *, 0x3C) = 1;
                            M2C_FIELD(&sp38, s8 *, 1) = 0x23;
                            M2C_FIELD(&sp38, s8 *, 0) = 0xFF;
                            M2C_FIELD(&sp38, s8 *, 2) = 1;
                            M2C_FIELD(&sp38, s8 *, 3) = 3;
                            var_a0_5 = 0;
                            sp3C = (func_801154E0(0x600, var_s2, (s8 *)1, &D_8011B190) & 0xFF) | (0x600 << 5);
                            M2C_FIELD(&sp38, s8 *, 0x26) = 0xFF;
                            do {
                                temp_v0_2 = &(&sp38)[var_a0_5];
                                var_a0_5 += 1;
                                M2C_FIELD(temp_v0_2, u8 *, 6) = (u8) *var_s3;
                                var_s3 += 1;
                            } while (var_a0_5 < 0x20);
                            var_a2 = var_s2;
                            if (arg2 != 0) {
                                var_a0_6 = 0;
                                if (arg2 > 0) {
                                    do {
                                        *var_s2 = 0;
                                        var_a0_6 += 1;
                                        var_s2 += 1;
                                    } while (var_a0_6 < arg2);
                                    var_a2 = var_s2;
                                }
                            }
                            var_a1 = &sp38;
                            if ((s32) var_s2 & 3) {
                                do {
                                    M2C_FIELD(var_a2, s8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a1, s8 *, 0));
                                    M2C_FIELD(var_a2, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a1, M2C_UNK *, 4));
                                    M2C_FIELD(var_a2, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_a1, M2C_UNK *, 8));
                                    M2C_FIELD(var_a2, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_a1, M2C_UNK *, 0xC));
                                    var_a1 += 0x10;
                                    var_a2 += 0x10;
                                } while (var_a1 != &sp58);
                            } else {
                                do {
                                    M2C_FIELD(var_a2, s32 *, 0) = (s32) M2C_FIELD(var_a1, s32 *, 0);
                                    M2C_FIELD(var_a2, s32 *, 4) = (s32) M2C_FIELD(var_a1, s32 *, 4);
                                    M2C_FIELD(var_a2, s32 *, 8) = (s32) M2C_FIELD(var_a1, s32 *, 8);
                                    M2C_FIELD(var_a2, s32 *, 0xC) = (s32) M2C_FIELD(var_a1, s32 *, 0xC);
                                    var_a1 += 0x10;
                                    var_a2 += 0x10;
                                } while (var_a1 != &sp58);
                            }
                            var_s4 = &D_8011B2B0;
                            var_s1 = (arg2 << 6) + &D_8011B1B0;
                            var_a0_7 = 0xE;
                            var_v1_2 = var_s1 + 0x38;
                            M2C_FIELD(var_a2, s8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a1, s8 *, 0));
                            M2C_FIELD(var_a2, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a1, M2C_UNK *, 4));
                            M2C_FIELD(var_s2, s8 *, 0x28) = 0xFE;
                            do {
                                *var_v1_2 = 0;
                                var_a0_7 -= 1;
                                var_v1_2 -= 4;
                            } while (var_a0_7 >= 0);
                            M2C_FIELD(var_s1, s32 *, 0x3C) = 1;
                            M2C_FIELD(&sp38, s8 *, 1) = 0x23;
                            M2C_FIELD(&sp38, s8 *, 0) = 0xFF;
                            M2C_FIELD(&sp38, s8 *, 2) = 1;
                            M2C_FIELD(&sp38, s8 *, 3) = 3;
                            var_a0_8 = 0;
                            sp3C = (func_801154E0(0x600, var_a1, var_a2, var_s1) & 0xFF) | (0x600 << 5);
                            M2C_FIELD(&sp38, s8 *, 0x26) = 0xFF;
                            do {
                                temp_v0_3 = &sp38 + var_a0_8;
                                var_a0_8 += 1;
                                M2C_FIELD(temp_v0_3, u8 *, 6) = (u8) *var_s4;
                                var_s4 += 1;
                            } while (var_a0_8 < 0x20);
                            var_a0_9 = var_s1;
                            if (arg2 != 0) {
                                var_a0_10 = 0;
                                if (arg2 > 0) {
                                    do {
                                        *var_s1 = 0;
                                        var_a0_10 += 1;
                                        var_s1 += 1;
                                    } while (var_a0_10 < arg2);
                                }
                                var_a0_9 = var_s1;
                            }
                            var_v1_3 = &sp38;
                            if ((s32) var_s1 & 3) {
                                do {
                                    M2C_FIELD(var_a0_9, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_3, s8 *, 0));
                                    M2C_FIELD(var_a0_9, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_3, M2C_UNK *, 4));
                                    M2C_FIELD(var_a0_9, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1_3, M2C_UNK *, 8));
                                    M2C_FIELD(var_a0_9, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1_3, M2C_UNK *, 0xC));
                                    var_v1_3 += 0x10;
                                    var_a0_9 += 0x10;
                                } while (var_v1_3 != &sp58);
                            } else {
                                do {
                                    M2C_FIELD(var_a0_9, s32 *, 0) = (s32) M2C_FIELD(var_v1_3, s32 *, 0);
                                    M2C_FIELD(var_a0_9, s32 *, 4) = (s32) M2C_FIELD(var_v1_3, s32 *, 4);
                                    M2C_FIELD(var_a0_9, s32 *, 8) = (s32) M2C_FIELD(var_v1_3, s32 *, 8);
                                    M2C_FIELD(var_a0_9, s32 *, 0xC) = (s32) M2C_FIELD(var_v1_3, s32 *, 0xC);
                                    var_v1_3 += 0x10;
                                    var_a0_9 += 0x10;
                                } while (var_v1_3 != &sp58);
                            }
                            M2C_FIELD(var_a0_9, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_3, s8 *, 0));
                            M2C_FIELD(var_a0_9, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_3, M2C_UNK *, 4));
                            M2C_FIELD(var_s1, s8 *, 0x28) = 0xFE;
                            *(&D_800B8FE0 + (arg2 * 4)) = 1;
                            var_v0 = 0;
                        }
                        /* Duplicate return node #53. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    /* Duplicate return node #53. Try simplifying control flow for better match */
                    return var_v0;
                }
                /* Duplicate return node #53. Try simplifying control flow for better match */
                return var_v0;
            }
block_18:
            return 0xB;
        }
        /* Duplicate return node #53. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
