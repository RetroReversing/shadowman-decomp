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

s32 func_8010F020(void *arg0, void *arg1) {
    s16 temp_v0;
    s16 var_t0;
    s32 temp_a3;
    s32 var_v0;
    void *temp_a2;

    var_t0 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x44) > 0) {
        var_v0 = 0 << 0x10;
loop_2:
        temp_a3 = var_v0 >> 0x10;
        temp_a2 = (temp_a3 * 0x30) + M2C_FIELD(arg0, s32 *, 0x40);
        temp_v0 = var_t0 + 1;
        if (M2C_FIELD(temp_a2, void **, 0x1C) == NULL) {
            M2C_FIELD(temp_a2, void **, 0x1C) = arg1;
            M2C_FIELD(temp_a2, s16 *, 0x20) = 5;
            M2C_FIELD(temp_a2, s32 *, 0x28) = 0;
            M2C_FIELD(temp_a2, f32 *, 0x24) = (f32) *(f32 *)0x1020F0;
            M2C_FIELD(temp_a2, s8 *, 0x2E) = 0x40;
            M2C_FIELD(temp_a2, s8 *, 0x2F) = 0;
            M2C_FIELD(temp_a2, s16 *, 0x2C) = (s16) ((M2C_FIELD(arg1, u8 *, 0xD) * 0x7FFF) / 127);
            return temp_a3;
        }
        var_t0 = temp_v0;
        var_v0 = var_t0 << 0x10;
        if (temp_v0 >= M2C_FIELD(arg0, s32 *, 0x44)) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return -1;
        }
        goto loop_2;
    }
    return -1;
}
