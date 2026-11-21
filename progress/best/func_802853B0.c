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

extern float D_8007558C;
extern float D_80075590;
extern float D_80075594;
s32 func_80113AD0();
s32 func_80270090();
s32 func_8027206C();
f32 func_80272260();
s32 func_80285500();
s32 func_80285564();
extern char D_80075568[];
extern void *D_8007AFF8;

void func_802853B0(void) {
    s32 var_a0;
    f32 temp_fv1;
    f32 var_fv0;
    s32 temp_hi;
    s32 temp_ret;
    u32 temp_a0;

    temp_fv1 = func_80272260();
    var_fv0 = *(f32 *)0x214E80;
    M2C_FIELD(D_8007AFF8, f32 *, 0x70) = (f32) D_8007558C;
    M2C_FIELD(D_8007AFF8, f32 *, 0x74) = (f32) D_80075590;
    M2C_FIELD(D_8007AFF8, f32 *, 0x78) = (f32) D_80075594;
    if (var_fv0 < temp_fv1) {
        if (temp_fv1 < *(f32 *)0x214E84) {
            temp_ret = func_80113AD0();
            temp_hi = MULT_HI(temp_ret, 0x51EB851F);
            temp_a0 = temp_ret % 100;
            if (temp_a0 < 0x32U) {
                func_8027206C(8, 0x4B, temp_hi);
                func_80270090(0x14);
                func_80285500();
                return;
            }
            if (temp_a0 < 0x4BU) {
                func_8027206C(2, 0, temp_hi);
                M2C_FIELD(D_8007AFF8, u8 *, 0x5C) = (u8) M2C_FIELD(D_8007AFF8, u8 *, 0x97);
                func_80270090(0x1B);
                func_80285500();
                return;
            }
            func_8027206C(1, 0, temp_hi);
            M2C_FIELD(D_8007AFF8, u8 *, 0x5C) = (u8) -(s32) M2C_FIELD(D_8007AFF8, u8 *, 0x97);
            func_80270090(0x1B);
            func_80285500();
            return;
        }
        var_fv0 = *(f32 *)0x214E88;
        goto block_11;
    }
block_11:
    var_a0 = 1;
    if (temp_fv1 < var_fv0) {
        var_a0 = 2;
    }
    func_8027206C(var_a0, 0);
    func_80285564(0x1B);
}
