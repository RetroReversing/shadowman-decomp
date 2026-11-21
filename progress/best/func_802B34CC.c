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

s32 func_80113AD0();                                /* extern */
f32 func_8022EBE8(f32);                             /* extern */
f32 func_8022EC3C(f32, s32);                        /* extern */
M2C_UNK func_802A1140(f32 *, M2C_UNK *, M2C_UNK, f32, f32, s32, f32, s32, s32, s32, s32); /* extern */
M2C_UNK func_802A6448(void *);                      /* extern */
M2C_UNK func_802A6808(void *);                      /* extern */
M2C_UNK func_802B3610(s32);                         /* extern */
extern M2C_UNK D_80036B1C;
extern M2C_UNK D_8007DB78;
extern M2C_UNK D_8007DB88;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x78, 0x7c, 0x80, 0x84], gap at: 0x6c. */
void func_802B34CC(void *arg0) {
    f32 sp30;                                       /* compiler-managed */
    f32 sp34;
    f32 sp38;
    f32 sp40;                                       /* compiler-managed */
    f32 sp44;
    f32 sp48;
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fv0;
    f32 temp_fv0f;
    s32 temp_a0;
    s32 temp_ret;
    s32 temp_v0;
    u32 var_s3;

    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x30) - M2C_FIELD(&D_8007DB88, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x30) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
    }
    if (M2C_FIELD(arg0, s8 *, 0x51) == 0) {
        func_802A6808(arg0);
        sp30 = M2C_FIELD(arg0, f32 *, 0x6C);
        sp34 = M2C_FIELD(arg0, f32 *, 0x70);
        sp38 = M2C_FIELD(arg0, f32 *, 0x74);
        temp_fv0f = *(f32 *)0x216A18;
        sp30 = M2C_BITWISE(f64, (sp34 * temp_fv0f));
        sp38 *= temp_fv0f;
        sp40 = M2C_FIELD(arg0, f32 *, 0x54) - M2C_FIELD(arg0, f32 *, 0x6C);
        var_s3 = 0;
        sp44 = M2C_FIELD(arg0, f32 *, 0x58) - M2C_FIELD(arg0, f32 *, 0x70);
        temp_fs1 = *(f32 *)0x216A1C;
        sp48 = M2C_FIELD(arg0, f32 *, 0x5C) - M2C_FIELD(arg0, f32 *, 0x74);
loop_4:
        temp_ret = func_80113AD0();
        temp_a0 = temp_ret / 3;
        temp_v0 = temp_ret % 3;
        if (temp_v0 != 0) {
            if (temp_v0 != 1) {
                func_802B3610(temp_a0);
                return;
            }
            temp_fs0f = func_8022EC3C(temp_fs1, temp_a0) + temp_fs1;
            temp_fs0 = func_8022EBE8(*(f32 *)0x216A20) + *(f32 *)0x216A24;
            func_802A1140(&sp40, &D_80036B1C, 0x3F733333, temp_fs0f, temp_fs0, 0x1C, (f32) (func_80113AD0() % 3), 0xBE, 0x32, 0xFF, 1);
            var_s3 += 1;
            sp40 = M2C_BITWISE(f64, (sp44 + sp34));
            sp48 += sp38;
            if (var_s3 >= 8U) {
                goto block_12;
            }
            goto loop_4;
        }
        func_802B3610(temp_a0);
        return;
    }
block_12:
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) (M2C_FIELD(arg0, f32 *, 0x8C) + (M2C_FIELD(arg0, f32 *, 0x98) * M2C_FIELD(&D_8007DB78, f32 *, 0x14)));
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) (M2C_FIELD(arg0, f32 *, 0x68) + (2.0f * M2C_FIELD(&D_8007DB78, f32 *, 0x14)));
    if (M2C_FIELD(arg0, f32 *, 0x30) <= 0.0f) {
        func_802A6448(arg0);
    }
}
