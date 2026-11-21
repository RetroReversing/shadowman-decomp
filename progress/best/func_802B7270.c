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

s32 func_801043F8(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_802BA2D4(void *, u32);     /* extern */
extern s32 D_8007BD80;
extern s32 D_8007BD84;
extern s32 D_8007BD88;

typedef struct { int field_0; unsigned char pad_4[4]; int field_8; unsigned char pad_C[8]; signed char field_14; unsigned char pad_15[19]; int field_28; } __repair_record_temp_v1;
void func_802B7270(void) {
    s32 temp_v0;
    s32 var_t0;
    u32 var_a1;
    u32 var_a2;
    void *temp_a0;
    void *temp_v0_2;
    void *temp_v1;

    D_8007BD88 = 0;
    temp_v0 = func_801043F8(0x960, 2, 0);
    var_a2 = 0;
    var_t0 = 0x30;
    var_a1 = 0;
    D_8007BD84 = temp_v0;
    D_8007BD80 = temp_v0;
    do {
        temp_v1 = var_a1 + D_8007BD84;
        ((__repair_record_temp_v1*)temp_v1)->field_14 = 0;
        ((__repair_record_temp_v1*)temp_v1)->field_28 = (s32) (D_8007BD84 + var_t0);
        ((__repair_record_temp_v1*)temp_v1)->field_0 = 0;
        ((__repair_record_temp_v1*)temp_v1)->field_8 = 0;
        temp_a0 = var_a1 + D_8007BD84;
        M2C_FIELD(temp_a0, s8 *, 0x15) = 0;
        temp_v0_2 = var_a1 + D_8007BD84;
        M2C_FIELD(temp_v0_2, s8 *, 0x16) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x20) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x24) = 0;
        M2C_FIELD((var_a1 + D_8007BD84), s8 *, 0x17) = 0;
        var_a2 += 1;
        M2C_FIELD((var_a1 + D_8007BD84), s8 *, 0x18) = 0;
        var_t0 += 0x30;
        M2C_FIELD((var_a1 + D_8007BD84), s8 *, 0x19) = 0;
        var_a1 += 0x30;
    } while (var_a2 < 0x31U);
    M2C_FIELD(((var_a2 * 0x30) + D_8007BD84), s32 *, 0x28) = 0;
    func_802BA2D4(temp_a0, var_a1);
}
