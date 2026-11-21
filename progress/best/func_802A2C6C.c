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

void *func_80103878(M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_80113AD0();                                /* extern */
f32 func_8022EBE8(f32);                             /* extern */
f32 func_8022EC3C(f32);                             /* extern */
void *func_80296BC0(void *, f32 *, M2C_UNK *);      /* extern */
extern M2C_UNK D_80036CB8;
extern M2C_UNK D_8007DB88;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x20, 0x24, 0x30, 0x34], gap at: 0x28. */
void func_802A2C6C(void *arg0) {
    f32 sp10[3];
    f32 temp_fs0f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    s32 temp_ret;
    void *temp_v0;
    void *temp_v1;

    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x54) - M2C_FIELD(&D_8007DB88, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x54) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
    }
    temp_fs0f = *(f32 *)0x21606C;
    temp_fv0_2 = func_8022EBE8(temp_fs0f);
    sp10[0] = temp_fv0_2;
    if (temp_fv0_2 < 0.0f) {
        sp10[0] = temp_fv0_2 - *(f32 *)0x216070;
    }
    if (sp10[0] > 0.0f) {
        sp10[0] += *(f32 *)0x216074;
    }
    temp_fv0_3 = func_8022EC3C(temp_fs0f);
    sp10[1] = temp_fv0_3;
    if (temp_fv0_3 < 0.0f) {
        sp10[1] = temp_fv0_3 - *(f32 *)0x216078;
    }
    if (sp10[1] > 0.0f) {
        sp10[1] += *(f32 *)0x21607C;
    }
    temp_fv0_4 = func_8022EBE8(temp_fs0f);
    sp10[2] = temp_fv0_4;
    if (temp_fv0_4 < 0.0f) {
        sp10[2] = temp_fv0_4 - *(f32 *)0x216080;
    }
    if (sp10[2] > 0.0f) {
        sp10[2] += *(f32 *)0x216084;
    }
    temp_v0 = func_80296BC0(arg0, sp10, &D_80036CB8);
    if (temp_v0 != NULL) {
        temp_fv0_5 = *(f32 *)0x216088;
        M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fv0_5;
        M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv0_5;
        temp_ret = func_80113AD0();
        M2C_FIELD(temp_v0, s32 *, 0x6C) = (s32) (temp_ret % 22);
        M2C_FIELD(temp_v0, void **, 0x44) = func_80103878(0xBC, 2, 0, temp_ret / 22);
        temp_v1 = M2C_FIELD(temp_v0, void **, 0x44);
        M2C_FIELD(temp_v0, u8 *, 0x72) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x72) | 8);
        if (temp_v1 != NULL) {
            M2C_FIELD(temp_v1, s32 *, 4) = 0;
            M2C_FIELD(temp_v1, s32 *, 0) = 0;
        }
    }
}
