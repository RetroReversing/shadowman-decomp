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

void *func_8021E3F0();
void *func_8022016C();
void *func_802201BC();
void *func_80220210();
void *func_80220260();
void *func_802202BC();
void *func_80220308();
void *func_80220368();
void *func_802203B8();
extern u16 D_8002C110;
extern u16 D_8002C112;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x18, 0x1c, 0x20, 0x28, 0x2c, 0x40, 0x44, 0x48, 0x4c], gap at: 0x30. */
void *func_80220028(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, s32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11) {
    f32 temp_fv0;
    f32 temp_fv0_10;
    f32 temp_fv0_11;
    f32 temp_fv0_12;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv0_7;
    f32 temp_fv0_8;
    f32 temp_fv0_9;
    f32 temp_fv0f;
    f32 temp_fv0f_10;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv0f_4;
    f32 temp_fv0f_5;
    f32 temp_fv0f_6;
    f32 temp_fv0f_7;
    f32 temp_fv0f_8;
    f32 temp_fv0f_9;
    f32 var_fs0;
    f32 var_fs0f;
    f32 var_fs1;
    f32 var_fs1f;
    f32 var_fs2;
    f32 var_fs2f;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;

    var_fs1f = arg6;
    var_fs2 = arg7;
    var_fs0 = arg8;
    var_fs1 = arg9;
    var_fs0f = 0.0f;
    var_fs2f = 0.0f;
    temp_a0_4 = func_8021E3F0(arg1 & 0xFF, arg2 & 0xFF, (s32) arg4, (s32) (s16) arg5);
    if (var_fs1f < 0.0f) {
        temp_fv0 = var_fs0 - var_fs1f;
        temp_fv0f = -var_fs1f;
        var_fs1f = 0.0f;
        var_fs2f = (f32) arg4 * (temp_fv0f / temp_fv0);
    }
    if (var_fs2 < 0.0f) {
        temp_fv0_2 = var_fs1 - var_fs2;
        temp_fv0f_2 = -var_fs2;
        var_fs2 = 0.0f;
        var_fs0f = (f32) (s16) arg5 * (temp_fv0f_2 / temp_fv0_2);
    }
    temp_fv0_3 = (f32) D_8002C110;
    if (temp_fv0_3 < var_fs0) {
        var_fs0 = temp_fv0_3;
    }
    temp_fv0_4 = (f32) D_8002C112;
    if (temp_fv0_4 < var_fs1) {
        var_fs1 = temp_fv0_4;
    }
    temp_fv0_5 = var_fs0 * *(f32 *)0x2000B4;
    temp_fv0f_3 = *(f32 *)0x2000B8;
    temp_a0_3 = temp_a0_4 + 8;
    if (!(temp_fv0f_3 <= temp_fv0_5)) {
        return func_8022016C(temp_a0_3);
    }
    temp_fv0_6 = var_fs1 * *(f32 *)0x2000BC;
    temp_fv0f_4 = *(f32 *)0x2000C0;
    temp_a1_4 = (((s32) (temp_fv0_5 - temp_fv0f_3) | 0x80000000) & 0xFFF) << 0xC;
    if (!(temp_fv0f_4 <= temp_fv0_6)) {
        return func_802201BC(temp_a0_3, temp_a1_4, temp_a0_4);
    }
    temp_fv0_7 = var_fs1f * *(f32 *)0x2000C4;
    temp_fv0f_5 = *(f32 *)0x2000C8;
    M2C_FIELD(temp_a0_4, s32 *, 0) = (s32) (temp_a1_4 | ((((s32) (temp_fv0_6 - temp_fv0f_4) | 0x80000000) & 0xFFF) | 0xE4000000));
    if (!(temp_fv0f_5 <= temp_fv0_7)) {
        return func_80220210(temp_a0_3, temp_a1_4, temp_a0_4);
    }
    temp_fv0_8 = var_fs2 * *(f32 *)0x2000CC;
    temp_fv0f_6 = *(f32 *)0x2000D0;
    temp_a1_3 = (((s32) (temp_fv0_7 - temp_fv0f_5) | 0x80000000) & 0xFFF) << 0xC;
    if (!(temp_fv0f_6 <= temp_fv0_8)) {
        return func_80220260(temp_a0_3, temp_a1_3, temp_a0_4);
    }
    temp_a0_2 = temp_a0_3 + 8;
    temp_fv0f_7 = *(f32 *)0x2000D8;
    temp_fv0_9 = var_fs2f * *(f32 *)0x2000D4;
    M2C_FIELD(temp_a0_4, s32 *, 4) = (s32) (temp_a1_3 | (((s32) (temp_fv0_8 - temp_fv0f_6) | 0x80000000) & 0xFFF));
    M2C_FIELD(temp_a0_4, s32 *, 8) = 0xE1000000;
    if (!(temp_fv0f_7 <= temp_fv0_9)) {
        return func_802202BC(temp_a0_2, temp_a1_3, temp_a0_4, temp_a0_3);
    }
    temp_fv0_10 = var_fs0f * *(f32 *)0x2000DC;
    temp_fv0f_8 = *(f32 *)0x2000E0;
    temp_a1_2 = ((s32) (temp_fv0_9 - temp_fv0f_7) | 0x80000000) << 0x10;
    if (!(temp_fv0f_8 <= temp_fv0_10)) {
        return func_80220308(temp_a0_2, temp_a1_2, temp_a0_4, temp_a0_3);
    }
    temp_a0 = temp_a0_2 + 8;
    temp_fv0_11 = arg10 * *(f32 *)0x2000E4;
    M2C_FIELD(temp_a0_3, s32 *, 4) = (s32) (temp_a1_2 | (((s32) (temp_fv0_10 - temp_fv0f_8) | 0x80000000) & 0xFFFF));
    temp_fv0f_9 = *(f32 *)0x2000E8;
    M2C_FIELD(temp_a0_3, s32 *, 8) = 0xF1000000;
    if (!(temp_fv0f_9 <= temp_fv0_11)) {
        return func_80220368(temp_a0, temp_a1_2, temp_a0_2, temp_a0_3);
    }
    temp_fv0_12 = arg11 * *(f32 *)0x2000EC;
    temp_fv0f_10 = *(f32 *)0x2000F0;
    temp_a1 = ((s32) (temp_fv0_11 - temp_fv0f_9) | 0x80000000) << 0x10;
    if (!(temp_fv0f_10 <= temp_fv0_12)) {
        return func_802203B8(temp_a0, temp_a1, temp_a0_2, temp_a0_3);
    }
    M2C_FIELD(temp_a0_2, s32 *, 4) = (s32) (temp_a1 | (((s32) (temp_fv0_12 - temp_fv0f_10) | 0x80000000) & 0xFFFF));
    M2C_FIELD(temp_a0_2, s32 *, 8) = 0xE0000000;
    M2C_FIELD(temp_a0, s32 *, 4) = 0;
    return temp_a0 + 8;
}
