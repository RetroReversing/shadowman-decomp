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

extern char D_8007BF58[];

typedef struct { s32 w[3]; } __repair_words3;
void *func_802D3D50(void *arg0) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = (M2C_FIELD(arg0, s32 *, 4) * 0x18) + D_8007BF58;
    M2C_FIELD(temp_v0, __repair_words3 *, 0x8) = *(__repair_words3 *) ((s8 *) arg0 + 0x8);
    temp_v0_2 = (M2C_FIELD(arg0, s32 *, 4) * 0x18) + D_8007BF58;
    M2C_FIELD(temp_v0_2, __repair_words3 *, 0x14) = *(__repair_words3 *) ((s8 *) arg0 + 0x14);
    return arg0 + 0x20;
}
