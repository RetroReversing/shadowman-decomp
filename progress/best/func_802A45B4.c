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
void *func_802A16D4(M2C_UNK *, M2C_UNK *, f32, M2C_UNK *); /* extern */
void *func_802AAD2C(void *, M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_21782C;
extern M2C_UNK D_80036B1C;
extern M2C_UNK D_8007DB88;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x48, 0x4c], gap at: 0x40. */
void func_802A45B4(void *arg0) {
    M2C_UNK sp18;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv1;
    void *temp_v0;
    void *temp_v0_2;

    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x54) - M2C_FIELD(&D_8007DB88, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x54) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
    }
    if ((func_80113AD0() % 10) >= 7) {
        temp_v0 = func_802AAD2C(arg0, &D_80036B1C, 0, &D_21782C, 0);
        if (temp_v0 != NULL) {
            temp_fs0 = *(f32 *)0x216158;
            M2C_FIELD(temp_v0, s8 *, 0x51) = 0;
            M2C_FIELD(temp_v0, f32 *, 0x74) = 0.0f;
            M2C_FIELD(temp_v0, f32 *, 0x6C) = 0.0f;
            M2C_FIELD(temp_v0, f32 *, 0x70) = (f32) *(f32 *)0x21615C;
            temp_fs0_2 = *(f32 *)0x216160;
            M2C_FIELD(temp_v0, f32 *, 0x54) = (f32) (M2C_FIELD(temp_v0, f32 *, 0x54) + func_8022EBE8(temp_fs0));
            temp_fv0f = M2C_FIELD(temp_v0, f32 *, 0x5C) + func_8022EBE8(temp_fs0);
            M2C_FIELD(temp_v0, u8 *, 0x50) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x50) | 4);
            M2C_FIELD(temp_v0, f32 *, 0x5C) = temp_fv0f;
            M2C_FIELD(temp_v0, f32 *, 0x60) = (f32) (*(f32 *)0x2158D0 + func_8022EBE8(temp_fs0_2));
            temp_fv0_2 = func_8022EBE8(temp_fs0_2);
            M2C_FIELD(temp_v0, f32 *, 0x64) = (f32) *(f32 *)0x210004;
            temp_fv1 = *(f32 *)0x216164;
            M2C_FIELD(temp_v0, f32 *, 0x2C) = temp_fv1;
            M2C_FIELD(temp_v0, f32 *, 0x30) = temp_fv1;
            M2C_FIELD(temp_v0, f32 *, 0x68) = (f32) (*(f32 *)0x210008 + temp_fv0_2);
        }
        if ((func_80113AD0() % 10) >= 5) {
            temp_fs0_3 = *(f32 *)0x216168;
            temp_v0_2 = func_802A16D4(&D_80036B1C, &D_80036B1C, temp_fs0_3, &sp18);
            if (temp_v0_2 != NULL) {
                M2C_FIELD(temp_v0_2, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) + func_8022EBE8(temp_fs0_3));
                M2C_FIELD(temp_v0_2, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + func_8022EBE8(temp_fs0_3));
                M2C_FIELD(temp_v0_2, f32 *, 0x20) = 0.0f;
                M2C_FIELD(temp_v0_2, f32 *, 0x18) = 0.0f;
                M2C_FIELD(temp_v0_2, f32 *, 0x1C) = (f32) *(f32 *)0x21616C;
                M2C_FIELD(temp_v0_2, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
            }
        }
    }
}
