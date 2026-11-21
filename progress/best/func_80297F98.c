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
f32 func_8022EBE8();
f32 func_8022EC3C();
void *func_80296BC0();
s32 func_80298048();
extern char D_80036D90[];
extern char D_8007DB88[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x50, 0x54], gap at: 0x48. */
void func_80297F98(void *arg0, s32 arg1, s32 arg2) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 temp_a3;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    s32 temp_ret;
    u32 temp_v1;
    u32 var_s1;
    void *temp_v0;

    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x54) - D_8007DB8C;
    M2C_FIELD(arg0, f32 *, 0x54) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
    }
    if ((M2C_FIELD(arg0, f32 *, 0x50) - *(f32 *)0x215964) < M2C_FIELD(arg0, f32 *, 0x54)) {
        temp_fv0_2 = M2C_FIELD(arg0, f32 *, 0x14);
        temp_fv0f = *(f32 *)0x215968;
        if (temp_fv0f <= temp_fv0_2) {
            temp_v1 = (s32) (temp_fv0_2 - temp_fv0f) | 0x80000000;
            temp_fs0 = *(f32 *)0x21596C;
            temp_a3 = M2C_FIELD(arg0, f32 *, 0);
            sp20 = temp_a3;
            sp24 = M2C_FIELD(arg0, f32 *, 4);
            sp28 = M2C_FIELD(arg0, f32 *, 8);
            sp20 += func_8022EBE8(arg0, arg1, arg2, temp_fs0, temp_a3);
            var_s1 = 0;
            sp28 += func_8022EBE8(temp_fs0);
            sp24 += *(f32 *)0x215970;
            if (temp_v1 != 0) {
                temp_fs0_2 = *(f32 *)0x215974;
                do {
                    sp10 = func_8022EBE8(M2C_FIELD(arg0, f32 *, 0xC));
                    sp18 = func_8022EBE8(M2C_FIELD(arg0, f32 *, 0xC));
                    sp14 = func_8022EC3C(M2C_FIELD(arg0, f32 *, 0x10)) + temp_fs0;
                    temp_v0 = func_80296BC0(&sp20, &sp10, D_80036D90);
                    if (temp_v0 != NULL) {
                        M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fs0_2;
                        M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fs0_2;
                        M2C_FIELD(temp_v0, f32 *, 0x4C) = (f32) *(f32 *)0x215978;
                        temp_ret = func_80113AD0();
                        M2C_FIELD(temp_v0, f32 *, 0x24) = (f32) (temp_ret % 360);
                        M2C_FIELD(temp_v0, f32 *, 0x30) = func_8022EBE8(*(f32 *)0x21597C, M2C_BITWISE(f32, ((temp_ret / 360) * 3)));
                    }
                    var_s1 += 1;
                } while (var_s1 < temp_v1);
            }
        } else {
            func_80298048();
        }
    }
}
