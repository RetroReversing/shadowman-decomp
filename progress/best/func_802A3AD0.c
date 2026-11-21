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

extern float D_80036B1C;
extern float D_80036B20;
extern float D_80036B24;
extern float D_8007DB8C;
void *func_80103878();
f32 func_801132A0();
s32 func_80113AD0();
f32 func_80113BE0();
void *func_80296BC0();
void *func_802A3CBC();
extern char D_80036C08[];
extern char D_8007DB88[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x20, 0x24], gap at: 0x18. */
void *func_802A3AD0(s32 arg0) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    s32 temp_ret;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_80296BC0(arg0, 0, D_80036C08);
    if (temp_v0 != NULL) {
        temp_fv0 = *(f32 *)0x2160FC;
        M2C_FIELD(temp_v0, s8 *, 0x73) = 0;
        M2C_FIELD(temp_v0, f32 *, 0x58) = (f32) *(f32 *)0x2160F8;
        M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fv0;
        M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv0;
        M2C_FIELD(temp_v0, f32 *, 0x2C) = 0.0f;
        M2C_FIELD(temp_v0, f32 *, 0x24) = 0.0f;
        M2C_FIELD(temp_v0, f32 *, 0x18) = (f32) D_80036B1C;
        M2C_FIELD(temp_v0, f32 *, 0x1C) = (f32) D_80036B20;
        M2C_FIELD(temp_v0, f32 *, 0x20) = (f32) D_80036B24;
        temp_v0_2 = func_80103878(0x9C, 2, 0, D_80036B1C);
        M2C_FIELD(temp_v0, void **, 0x44) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, s32 *, 0) = 0;
            M2C_FIELD(temp_v0_2, s32 *, 0x98) = 0;
        }
        temp_fs0 = *(f32 *)0x216104;
        M2C_FIELD(temp_v0, f32 *, 4) -= *(f32 *)0x216100;
        M2C_FIELD(temp_v0, f32 *, 0xC) = (f32) M2C_FIELD(temp_v0, f32 *, 0);
        M2C_FIELD(temp_v0, f32 *, 0x10) = (f32) M2C_FIELD(temp_v0, f32 *, 4);
        M2C_FIELD(temp_v0, f32 *, 0x14) = (f32) M2C_FIELD(temp_v0, f32 *, 8);
        temp_fs0_2 = *(f32 *)0x216108;
        temp_fv0f = M2C_FIELD(temp_v0, f32 *, 0x18) + (func_80113BE0(M2C_FIELD(temp_v0, f32 *, 0x28) * temp_fs0) * temp_fs0_2);
        M2C_FIELD(temp_v0, f32 *, 0x1C) = 0.0f;
        M2C_FIELD(temp_v0, f32 *, 0x18) = temp_fv0f;
        temp_fv0f_2 = M2C_FIELD(temp_v0, f32 *, 0x20) - (-func_801132A0(M2C_FIELD(temp_v0, f32 *, 0x28) * temp_fs0) * temp_fs0_2);
        M2C_FIELD(temp_v0, f32 *, 0x4C) = temp_fs0_2;
        M2C_FIELD(temp_v0, f32 *, 0x20) = temp_fv0f_2;
        M2C_FIELD(temp_v0, f32 *, 0) = M2C_BITWISE(f64, (M2C_FIELD(temp_v0, f32 *, 4) + M2C_FIELD(temp_v0, f32 *, 0x1C)));
        M2C_FIELD(temp_v0, f32 *, 8) += temp_fv0f_2;
        M2C_FIELD(temp_v0, u8 *, 0x72) = (u8) (func_80113AD0() % 2);
        temp_ret = func_80113AD0();
        temp_fv1 = (f32) (temp_ret % 360);
        M2C_FIELD(temp_v0, f32 *, 0x28) = temp_fv1;
        if (M2C_FIELD(temp_v0, u8 *, 0x72) == 1) {
            return func_802A3CBC((temp_ret / 360) * 3);
        }
        M2C_FIELD(temp_v0, f32 *, 0x28) = (f32) (temp_fv1 + (D_8007DB8C * *(f32 *)0x216110));
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return temp_v0;
    }
    return temp_v0;
}
