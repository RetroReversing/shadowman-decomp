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

void *func_80103878(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
f32 func_8022EBE8(f32);                             /* extern */
void *func_80296BC0(const void *, M2C_UNK, M2C_UNK *);            /* extern */
M2C_UNK func_8029B6C4(f32 *, f32 *);                /* extern */
extern M2C_UNK D_80036CC8;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x30, 0x34, 0x38, 0x3c, 0x40, 0x50, 0x54], gap at: 0x44. */
void func_80298994(const void *arg1) {
    f32 sp10[3];
    f32 sp20[3];
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fv0;
    u32 var_s1;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_80296BC0(arg1, 0, &D_80036CC8);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, f32 *, 0x4C) = (f32) *(f32 *)0x2159DC;
        temp_v0_2 = func_80103878(0x84, 2, 0);
        M2C_FIELD(temp_v0, void **, 0x44) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            var_s1 = 0;
            temp_fs0f = *(f32 *)0x2159E0;
            temp_fs0 = *(f32 *)0x2159E4;
            temp_fv0 = *(f32 *)0x2159E8;
            M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, const s32 *, 0);
            M2C_FIELD(temp_v0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, const s32 *, 4);
            M2C_FIELD(temp_v0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, const s32 *, 8);
            M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fv0;
            M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv0;
            M2C_FIELD(temp_v0_2, s32 *, 0) = 0;
            M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
            do {
                sp20[0] = func_8022EBE8(temp_fs0f);
                sp20[1] = func_8022EBE8(temp_fs0f);
                sp20[2] = func_8022EBE8(temp_fs0f);
                sp10[0] = M2C_FIELD(temp_v0, const f32 *, 0);
                sp10[1] = M2C_FIELD(temp_v0, const f32 *, 4);
                sp10[2] = M2C_FIELD(temp_v0, const f32 *, 8);
                sp10[0] += func_8022EBE8(temp_fs0);
                sp10[1] += func_8022EBE8(temp_fs0);
                var_s1 += 1;
                sp10[2] += func_8022EBE8(temp_fs0);
                func_8029B6C4(sp10, sp20);
            } while (var_s1 < 0x20U);
        }
    }
}
