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

extern u32 D_8005E9D4;
extern s32 D_8007BEF0;

void func_802D18FC(void) {
    s32 var_a0;
    u32 var_a1;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    var_a1 = 0;
    var_a0 = 0;
    do {
        temp_v1 = var_a0 + D_8007BEF0;
        temp_v0 = M2C_FIELD(temp_v1, void **, 0x20);
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
            M2C_FIELD(M2C_FIELD(temp_v1, void **, 0x20), s32 *, 0x14) = 0;
            M2C_FIELD(M2C_FIELD(temp_v1, void **, 0x20), s32 *, 0x1C) = 0;
            M2C_FIELD(M2C_FIELD(temp_v1, void **, 0x20), s32 *, 0x20) = 0;
            M2C_FIELD(M2C_FIELD(temp_v1, void **, 0x20), s32 *, 0x24) = 0;
            M2C_FIELD(M2C_FIELD(temp_v1, void **, 0x20), s32 *, 0x28) = 0;
            M2C_FIELD(M2C_FIELD(temp_v1, void **, 0x20), u8 *, 0x3E) = 0;
            temp_v1_2 = var_a0 + D_8007BEF0;
            M2C_FIELD(M2C_FIELD(temp_v1_2, void **, 0x24), s32 *, 0x10) = 0;
            M2C_FIELD(M2C_FIELD(temp_v1_2, void **, 0x24), s16 *, 0x1C) = 0;
            M2C_FIELD(temp_v1_2, s8 *, 0x1C) = -1;
        }
        var_a1 += 1;
        var_a0 += 0x28;
    } while ((u32) (*(s32 *)&D_8005E9D4) >= var_a1);
}
