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

M2C_UNK func_802D2950();                            /* extern */
extern M2C_UNK D_80030C68;
extern M2C_UNK D_8007BF58;

void func_802D282C(void) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv0f_4;
    f32 temp_fv1f;
    f32 temp_fv1f_2;

    if (M2C_FIELD(&D_8007BF58, f32 *, 0x20C) < 0.0f) {
        M2C_FIELD(&D_8007BF58, f32 *, 0x20C) = (f32) (M2C_FIELD(&D_8007BF58, f32 *, 0x20C) + *(f32 *)0x218CAC);
    }
    if (M2C_FIELD(&D_8007BF58, f32 *, 0x210) < 0.0f) {
        M2C_FIELD(&D_8007BF58, f32 *, 0x210) = (f32) (M2C_FIELD(&D_8007BF58, f32 *, 0x210) + *(f32 *)0x218CB0);
    }
    temp_fv0 = M2C_FIELD(&D_8007BF58, f32 *, 0x20C) - M2C_FIELD(&D_8007BF58, f32 *, 0x200);
    temp_fv0f = fabsf(temp_fv0);
    if (temp_fv0 >= 0.0f) {
        if (*(f32 *)0x218CB4 < temp_fv0f) {
            temp_fv0_2 = M2C_FIELD(&D_8007BF58, f32 *, 0x200) - ((*(f32 *)0x218CB8 - temp_fv0f) / M2C_FIELD(&D_80030C68, f32 *, 4));
            M2C_FIELD(&D_8007BF58, f32 *, 0x200) = temp_fv0_2;
            if (temp_fv0_2 < 0.0f) {
                func_802D2950();
                return;
            }
            goto block_16;
        }
        func_802D2950();
        return;
    }
    if (*(f32 *)0x218CBC < temp_fv0f) {
        temp_fv0f_2 = M2C_FIELD(&D_8007BF58, f32 *, 0x200) + ((*(f32 *)0x218CC0 - temp_fv0f) / M2C_FIELD(&D_80030C68, f32 *, 4));
        M2C_FIELD(&D_8007BF58, f32 *, 0x200) = temp_fv0f_2;
        if (*(f32 *)0x218CC4 < temp_fv0f_2) {
            func_802D2950();
            return;
        }
        goto block_16;
    }
    M2C_FIELD(&D_8007BF58, f32 *, 0x200) = (f32) (M2C_FIELD(&D_8007BF58, f32 *, 0x200) - (temp_fv0f / M2C_FIELD(&D_80030C68, f32 *, 4)));
block_16:
    temp_fv0_3 = M2C_FIELD(&D_8007BF58, f32 *, 0x210) - M2C_FIELD(&D_8007BF58, f32 *, 0x204);
    temp_fv0f_3 = fabsf(temp_fv0_3);
    if (temp_fv0_3 >= 0.0f) {
        if (*(f32 *)0x218CC8 < temp_fv0f_3) {
            temp_fv1f = *(f32 *)0x218CCC;
            temp_fv0_4 = M2C_FIELD(&D_8007BF58, f32 *, 0x204) - ((temp_fv1f - temp_fv0f_3) / M2C_FIELD(&D_80030C68, f32 *, 4));
            M2C_FIELD(&D_8007BF58, f32 *, 0x204) = temp_fv0_4;
            if (temp_fv0_4 < 0.0f) {
                M2C_FIELD(&D_8007BF58, f32 *, 0x204) = (f32) (temp_fv0_4 + temp_fv1f);
            }
        } else {
            M2C_FIELD(&D_8007BF58, f32 *, 0x204) = (f32) (M2C_FIELD(&D_8007BF58, f32 *, 0x204) + (temp_fv0f_3 / M2C_FIELD(&D_80030C68, f32 *, 4)));
        }
    } else if (*(f32 *)0x218CD0 < temp_fv0f_3) {
        temp_fv1f_2 = *(f32 *)0x218CD4;
        temp_fv0f_4 = M2C_FIELD(&D_8007BF58, f32 *, 0x204) + ((temp_fv1f_2 - temp_fv0f_3) / M2C_FIELD(&D_80030C68, f32 *, 4));
        M2C_FIELD(&D_8007BF58, f32 *, 0x204) = temp_fv0f_4;
        if (*(f32 *)0x218CD8 < temp_fv0f_4) {
            M2C_FIELD(&D_8007BF58, f32 *, 0x204) = (f32) (temp_fv0f_4 - temp_fv1f_2);
        }
    } else {
        M2C_FIELD(&D_8007BF58, f32 *, 0x204) = (f32) (M2C_FIELD(&D_8007BF58, f32 *, 0x204) - (temp_fv0f_3 / M2C_FIELD(&D_80030C68, f32 *, 4)));
    }
}
