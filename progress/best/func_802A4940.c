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

extern float D_8007DB8C;
s32 func_80113AD0();
s32 func_8022DDD0();
f32 func_8022EBE8();
f32 func_8022EC3C();
void *func_802A3AD0();
s32 func_802A49C8();
s32 func_802A4AD8();
s32 func_802A4B04();
s32 func_802A4B4C();
s32 func_802A4B78();
s32 func_802A4B90();
s32 func_802A4C1C();
void *func_802A5EC4();
extern char D_21782C[];
extern char D_80036B1C[];
extern char D_80075568[];
extern char D_8007DB88[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x38, 0x3c, 0x48, 0x4c, 0x50, 0x54], gap at: 0x30. */
void func_802A4940(void *arg0) {
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    u32 temp_s1;
    u32 var_s2;
    void *temp_v0;
    void *temp_v0_2;

    temp_fv0 = (M2C_FIELD(arg0, f32 *, 0x54) * *(f32 *)0x216178) + *(f32 *)0x21617C;
    temp_fv0f = *(f32 *)0x216180;
    if (temp_fv0f <= temp_fv0) {
        temp_s1 = (s32) (temp_fv0 - temp_fv0f) | 0x80000000;
        temp_fv0f_2 = M2C_FIELD(arg0, f32 *, 0xC);
        if (temp_fv0f_2 <= 0.0f) {
            var_s2 = 0;
            if (temp_s1 != 0) {
                temp_fs1 = *(f32 *)0x216184;
                temp_fs0f = *(f32 *)0x216188;
                temp_fs2 = *(f32 *)0x21618C;
                temp_fs0 = *(f32 *)0x216190;
loop_8:
                temp_v0 = func_802A3AD0(D_80075568, func_80113AD0() % 2);
                if (temp_v0 != NULL) {
                    M2C_FIELD(temp_v0, f32 *, 0x18) = func_8022EBE8(temp_fs1, D_80075568);
                    M2C_FIELD(temp_v0, f32 *, 0x1C) = func_8022EC3C(*(f32 *)0x216194);
                    M2C_FIELD(temp_v0, f32 *, 0x20) = func_8022EBE8(temp_fs1);
                }
                temp_v0_2 = func_802A5EC4(D_80075568, D_80036B1C, D_21782C, 0, 1, 0);
                if (temp_v0_2 != NULL) {
                    if (temp_s1 >= 5U) {
                        temp_fv0_2 = func_8022EBE8(*(f32 *)0x216198);
                        M2C_FIELD(temp_v0_2, f32 *, 0x6C) = temp_fv0_2;
                        if (temp_fv0_2 < 0.0f) {
                            func_802A4AD8();
                            return;
                        }
                        M2C_FIELD(temp_v0_2, f32 *, 0x6C) = (f32) (temp_fv0_2 + temp_fs0f);
                        temp_fv0_3 = func_8022EBE8(*(f32 *)0x21619C);
                        M2C_FIELD(temp_v0_2, f32 *, 0x74) = temp_fv0_3;
                        if (temp_fv0_3 < 0.0f) {
                            func_802A4B04();
                            return;
                        }
                        M2C_FIELD(temp_v0_2, f32 *, 0x74) = (f32) (temp_fv0_3 + temp_fs0f);
                        func_8022EBE8(temp_fs2);
                        func_802A4B90();
                        return;
                    }
                    temp_fv0_4 = func_8022EBE8(*(f32 *)0x2161A0);
                    M2C_FIELD(temp_v0_2, f32 *, 0x6C) = temp_fv0_4;
                    if (temp_fv0_4 < 0.0f) {
                        func_802A4B4C();
                        return;
                    }
                    M2C_FIELD(temp_v0_2, f32 *, 0x6C) = (f32) (temp_fv0_4 + temp_fs0);
                    temp_fv0_5 = func_8022EBE8(*(f32 *)0x2161A4);
                    M2C_FIELD(temp_v0_2, f32 *, 0x74) = temp_fv0_5;
                    if (temp_fv0_5 < 0.0f) {
                        func_802A4B78();
                        return;
                    }
                    M2C_FIELD(temp_v0_2, f32 *, 0x74) = (f32) (temp_fv0_5 + temp_fs0);
                    M2C_FIELD(temp_v0_2, f32 *, 0x54) += func_8022EBE8(temp_fs1);
                    M2C_FIELD(temp_v0_2, f32 *, 0x5C) += func_8022EBE8(temp_fs1);
                    M2C_FIELD(temp_v0_2, f32 *, 0x70) = (f32) *(f32 *)0x2161A8;
                    M2C_FIELD(temp_v0_2, f32 *, 0x58) += (func_8022EC3C(*(f32 *)0x2161AC) + *(f32 *)0x2161B0);
                    goto block_27;
                }
block_27:
                var_s2 += 1;
                if (var_s2 >= temp_s1) {
                    goto block_28;
                }
                goto loop_8;
            }
block_28:
            if (temp_s1 >= 5U) {
                func_802A4C1C();
                return;
            }
            func_802A4C1C();
            return;
        }
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) (temp_fv0f_2 - D_8007DB8C);
        M2C_FIELD(arg0, f32 *, 0x54) += D_8007DB8C;
        if (M2C_FIELD(arg0, s8 *, 0x73) == 2) {
            func_8022DDD0(1, 5, 0xFF, 0xFF, 0xFF);
            M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
            M2C_FIELD(arg0, f32 *, 0x50) = 0.0f;
        }
        return;
    }
    func_802A49C8();
}
