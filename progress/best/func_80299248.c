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

f32 func_8022EBE8(f32);                             /* extern */
void *func_80296BC0(M2C_UNK, M2C_UNK *);            /* extern */
extern M2C_UNK D_80036BE0;

typedef struct { s32 w[3]; } __repair_words3;
void *func_80299248(void) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fv0f;
    void *temp_v0;

    temp_v0 = func_80296BC0(0, &D_80036BE0);
    if (temp_v0 != NULL) {
        temp_fs0 = *(f32 *)0x215A08;
        M2C_FIELD(temp_v0, s8 *, 0x73) = 0;
        M2C_FIELD(temp_v0, f32 *, 0x4C) = (f32) *(f32 *)0x215A0C;
        M2C_FIELD(temp_v0, f32 *, 0x24) = func_8022EBE8(temp_fs0);
        M2C_FIELD(temp_v0, f32 *, 0x28) = func_8022EBE8(temp_fs0);
        M2C_FIELD(temp_v0, f32 *, 0x2C) = func_8022EBE8(temp_fs0);
        temp_fs0_2 = *(f32 *)0x215A10;
        M2C_FIELD(temp_v0, f32 *, 0x30) = func_8022EBE8(temp_fs0_2);
        M2C_FIELD(temp_v0, f32 *, 0x34) = func_8022EBE8(temp_fs0_2);
        temp_fv0f = *(f32 *)0x215A14;
        M2C_FIELD(temp_v0, f32 *, 0x38) = func_8022EBE8(temp_fs0_2);
        M2C_FIELD(temp_v0, __repair_words3 *, 0xC) = *(__repair_words3 *) ((s8 *) temp_v0 + 0x0);
        M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv0f;
        M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fv0f;
    }
    return temp_v0;
}
