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

void *func_8021E37C(s32);                           /* extern */
M2C_UNK func_8021E990(f32, f32, f32, M2C_UNK32, M2C_UNK32, f32, s32, s32, s32, s32, void *); /* extern */
M2C_UNK func_80222D10(void *, s32, M2C_UNK, void *, s32); /* extern */
f32 func_8022EBE8(f32);                             /* extern */
f32 func_8022EC3C(M2C_UNK32);                       /* extern */
M2C_UNK func_8025D960(f32 *);                       /* extern */
void *func_80296738(M2C_UNK);                       /* extern */
M2C_UNK func_80298BF0();                            /* extern */
M2C_UNK func_8029B6C4(f32 *, f32 *);                /* extern */
extern void *D_8002C1B0;
extern void *D_8005EA2C;
extern M2C_UNK D_8007DB78;
extern M2C_UNK D_8007DB88;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x80, 0x84, 0x88, 0x8c, 0x90, 0x94, 0x98, 0xa8, 0xac, 0xb0, 0xb4], gap at: 0x9c. */
void func_80298AF4(void *arg0) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    M2C_UNK32 temp_fs0_2;
    f32 temp_fs0;
    f32 temp_fs0_3;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_ft0f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv1;
    f32 temp_t2;
    f32 temp_t2_2;
    f32 temp_t3;
    f32 temp_t3_2;
    f32 temp_t4;
    f32 temp_t4_2;
    s32 temp_s2;
    s32 var_a1;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_4;
    u32 temp_v0_2;
    u32 var_s3_3;
    void *temp_a0;
    void *temp_s0;
    void *temp_s1;
    void *temp_s5;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *var_a2;
    void *var_a2_2;
    void *var_a3;

    temp_fv0 = M2C_FIELD(arg0, f32 *, 0xC) - M2C_FIELD(arg0, f32 *, 0);
    temp_s5 = M2C_FIELD(arg0, void **, 0x44);
    sp30 = temp_fv0;
    temp_fv0_2 = M2C_FIELD(arg0, f32 *, 0x10) - M2C_FIELD(arg0, f32 *, 4);
    sp34 = temp_fv0_2;
    temp_fv0_3 = M2C_FIELD(arg0, f32 *, 0x14) - M2C_FIELD(arg0, f32 *, 8);
    temp_fs0 = *(f32 *)0x2159EC;
    sp38 = temp_fv0_3;
    if (temp_fs0 <= sqrtf((temp_fv0 * temp_fv0) + (temp_fv0_2 * temp_fv0_2) + (temp_fv0_3 * temp_fv0_3))) {
        func_8025D960(&sp30);
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) (sp30 * temp_fs0);
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (sp34 * temp_fs0);
        func_80298BF0();
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x50) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0xC) - M2C_FIELD(arg0, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 0x1C) = M2C_BITWISE(f64, (M2C_FIELD(arg0, f32 *, 0x14) - M2C_FIELD(arg0, f32 *, 8)));
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) + (M2C_FIELD(arg0, f32 *, 0x18) * M2C_FIELD(&D_8007DB78, f32 *, 0x14)));
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + (M2C_FIELD(arg0, f32 *, 0x1C) * M2C_FIELD(&D_8007DB78, f32 *, 0x14)));
    temp_fs0_2 = *(M2C_UNK32 *)0x2159F0;
    temp_fs1 = *(f32 *)0x2159F4;
    temp_fs0f = *(f32 *)0x2159F8;
    var_s3 = 2;
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + (M2C_FIELD(arg0, f32 *, 0x20) * M2C_FIELD(&D_8007DB78, f32 *, 0x14)));
    do {
        sp50 = M2C_FIELD(arg0, f32 *, 0x18) * func_8022EC3C(temp_fs0_2) * temp_fs1;
        sp54 = M2C_FIELD(arg0, f32 *, 0x1C) * func_8022EC3C(temp_fs0_2) * temp_fs1;
        sp58 = M2C_FIELD(arg0, f32 *, 0x20) * func_8022EC3C(temp_fs0_2) * temp_fs1;
        sp40 = M2C_FIELD(arg0, f32 *, 0) + func_8022EBE8(temp_fs0f);
        sp44 = M2C_FIELD(arg0, f32 *, 4) + func_8022EBE8(temp_fs0f);
        var_s3 -= 1;
        sp48 = M2C_FIELD(arg0, f32 *, 8) + func_8022EBE8(temp_fs0f);
        func_8029B6C4(&sp40, &sp50);
    } while (var_s3 != 0);
    temp_fv0_4 = M2C_FIELD(arg0, f32 *, 0x54) - M2C_FIELD(&D_8007DB88, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x54) = temp_fv0_4;
    if (temp_fv0_4 <= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
    }
    temp_v0 = func_80296738(0x17);
    D_8002C1B0 = temp_v0;
    if (temp_v0 != NULL) {
        func_8021E990(M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(arg0, f32 *, 8), temp_fs0_2, temp_fs0_2, *(f32 *)0x2159FC, 0xFF, 0xFF, 0xFF, 0xFF, temp_v0);
    }
    if (temp_s5 != NULL) {
        temp_v0_2 = M2C_FIELD(temp_s5, u32 *, 4) + 1;
        M2C_FIELD(temp_s5, u32 *, 4) = temp_v0_2;
        if (temp_v0_2 >= 0xAU) {
            M2C_FIELD(temp_s5, u32 *, 4) = 0xAU;
        }
        var_s3_2 = M2C_FIELD(temp_s5, u32 *, 4) - 1;
        if (var_s3_2 > 0) {
            temp_fs0_3 = *(f32 *)0x215A00;
            do {
                temp_s2 = var_s3_2 - 1;
                temp_s0 = temp_s5 + (temp_s2 * 0xC);
                temp_s1 = temp_s5 + (var_s3_2 * 0xC);
                M2C_FIELD(temp_s1, f32 *, 8) = (f32) (M2C_FIELD(temp_s0, f32 *, 8) + func_8022EBE8(temp_fs0_3));
                M2C_FIELD(temp_s1, f32 *, 0xC) = (f32) (M2C_FIELD(temp_s0, f32 *, 0xC) + func_8022EBE8(temp_fs0_3));
                var_s3_2 = temp_s2;
                M2C_FIELD(temp_s1, f32 *, 0x10) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x10) + func_8022EBE8(temp_fs0_3));
            } while (var_s3_2 > 0);
        }
        M2C_FIELD(temp_s5, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0);
        M2C_FIELD(temp_s5, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 4);
        M2C_FIELD(temp_s5, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 8);
        if ((u32) M2C_FIELD(temp_s5, u32 *, 4) >= 2U) {
            temp_v0_3 = func_80296738(0x18);
            D_8002C1B0 = temp_v0_3;
            if (temp_v0_3 != NULL) {
                temp_v0_4 = func_8021E37C((M2C_FIELD(temp_s5, u32 *, 4) - 1) * 4);
                var_s3_3 = 1;
                if (temp_v0_4 != NULL) {
                    temp_t2 = M2C_FIELD(temp_s5, f32 *, 8);
                    temp_t3 = M2C_FIELD(temp_s5, f32 *, 0xC);
                    temp_t4 = M2C_FIELD(temp_s5, f32 *, 0x10);
                    sp70 = temp_t2;
                    sp74 = temp_t3;
                    sp78 = temp_t4;
                    sp60 = temp_t2;
                    sp64 = temp_t3;
                    sp68 = temp_t4;
                    temp_ft0f = *(f32 *)0x215A04;
                    sp60 += temp_ft0f;
                    sp64 += temp_ft0f;
                    sp68 += temp_ft0f;
                    sp70 -= temp_ft0f;
                    sp78 -= temp_ft0f;
                    sp74 -= temp_ft0f;
                    var_a1 = 0;
                    if ((u32) M2C_FIELD(temp_s5, u32 *, 4) > 1U) {
                        var_a2 = temp_v0_4;
                        var_a3 = temp_s5 + 0xC;
                        do {
                            M2C_FIELD(var_a2, s16 *, 0) = (s16) (s32) (sp60 - M2C_FIELD(D_8005EA2C, f32 *, 0));
                            M2C_FIELD(var_a2, s16 *, 2) = (s16) (s32) (sp64 - M2C_FIELD(D_8005EA2C, f32 *, 4));
                            M2C_FIELD(var_a2, s16 *, 4) = (s16) (s32) (sp68 - M2C_FIELD(D_8005EA2C, f32 *, 8));
                            M2C_FIELD(var_a2, s16 *, 0x10) = (s16) (s32) (sp70 - M2C_FIELD(D_8005EA2C, f32 *, 0));
                            temp_v1 = var_a2 + 0x10;
                            M2C_FIELD(temp_v1, s16 *, 2) = (s16) (s32) (sp74 - M2C_FIELD(D_8005EA2C, f32 *, 4));
                            M2C_FIELD(temp_v1, s16 *, 4) = (s16) (s32) (sp78 - M2C_FIELD(D_8005EA2C, f32 *, 8));
                            temp_t2_2 = M2C_FIELD(var_a3, f32 *, 8);
                            temp_t3_2 = M2C_FIELD(var_a3, f32 *, 0xC);
                            temp_t4_2 = M2C_FIELD(var_a3, f32 *, 0x10);
                            sp70 = temp_t2_2;
                            sp74 = temp_t3_2;
                            sp78 = temp_t4_2;
                            sp60 = temp_t2_2;
                            sp64 = temp_t3_2;
                            sp68 = temp_t4_2;
                            temp_fv0_5 = sp60 + temp_ft0f;
                            temp_fv1 = sp70 - temp_ft0f;
                            sp60 = temp_fv0_5;
                            sp64 += temp_ft0f;
                            sp68 += temp_ft0f;
                            sp70 = temp_fv1;
                            sp74 -= temp_ft0f;
                            sp78 -= temp_ft0f;
                            M2C_FIELD(var_a2, s16 *, 0x20) = (s16) (s32) (temp_fv1 - M2C_FIELD(D_8005EA2C, f32 *, 0));
                            temp_v1_2 = var_a2 + 0x20;
                            M2C_FIELD(temp_v1_2, s16 *, 2) = (s16) (s32) (sp74 - M2C_FIELD(D_8005EA2C, f32 *, 4));
                            M2C_FIELD(temp_v1_2, s16 *, 4) = (s16) (s32) (sp78 - M2C_FIELD(D_8005EA2C, f32 *, 8));
                            M2C_FIELD(var_a2, s16 *, 0x30) = (s16) (s32) (temp_fv0_5 - M2C_FIELD(D_8005EA2C, f32 *, 0));
                            temp_v1_3 = var_a2 + 0x30;
                            M2C_FIELD(temp_v1_3, s16 *, 2) = (s16) (s32) (sp64 - M2C_FIELD(D_8005EA2C, f32 *, 4));
                            var_s3_3 += 1;
                            var_a1 += 4;
                            var_a3 += 0xC;
                            M2C_FIELD(temp_v1_3, s16 *, 4) = (s16) (s32) (sp68 - M2C_FIELD(D_8005EA2C, f32 *, 8));
                            var_a2 += 0x40;
                        } while (var_s3_3 < (u32) M2C_FIELD(temp_s5, u32 *, 4));
                    }
                    var_s3_4 = 0;
                    if (var_a1 > 0) {
                        var_a2_2 = temp_v0_4;
                        do {
                            temp_v1_4 = var_a2_2 + 0x10;
                            M2C_FIELD(var_a2_2, s16 *, 6) = 0;
                            M2C_FIELD(var_a2_2, s16 *, 8) = 0;
                            M2C_FIELD(var_a2_2, s16 *, 0xA) = 0;
                            M2C_FIELD(var_a2_2, s32 *, 0xC) = 0xE39693FF;
                            M2C_FIELD(temp_v1_4, s16 *, 6) = 0;
                            M2C_FIELD(temp_v1_4, s16 *, 0xA) = 0;
                            M2C_FIELD(temp_v1_4, s32 *, 0xC) = 0xE39693FF;
                            M2C_FIELD(temp_v1_4, s16 *, 8) = (s16) ((s32) (f32) M2C_FIELD(D_8002C1B0, u8 *, 4) << 6);
                            temp_v1_5 = var_a2_2 + 0x20;
                            M2C_FIELD(temp_v1_5, s16 *, 6) = 0;
                            temp_a0 = var_a2_2 + 0x30;
                            M2C_FIELD(temp_v1_5, s16 *, 8) = (s16) ((s32) (f32) M2C_FIELD(D_8002C1B0, u8 *, 4) << 6);
                            var_s3_4 += 4;
                            M2C_FIELD(temp_v1_5, s32 *, 0xC) = 0xE39693FF;
                            M2C_FIELD(temp_v1_5, s16 *, 0xA) = (s16) ((s32) (f32) M2C_FIELD(D_8002C1B0, u8 *, 5) << 6);
                            M2C_FIELD(temp_a0, s16 *, 6) = 0;
                            M2C_FIELD(temp_a0, s16 *, 8) = 0;
                            M2C_FIELD(temp_a0, s32 *, 0xC) = 0xE39693FF;
                            M2C_FIELD(temp_a0, s16 *, 0xA) = (s16) ((s32) (f32) M2C_FIELD(D_8002C1B0, u8 *, 5) << 6);
                            var_a2_2 += 0x40;
                        } while (var_s3_4 < var_a1);
                    }
                    func_80222D10(temp_v0_4, var_a1, 4, D_8002C1B0, 0);
                }
            }
        }
    }
}
