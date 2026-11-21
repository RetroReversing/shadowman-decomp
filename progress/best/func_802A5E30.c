static __inline__ int __repair_inline(s32 a, s32 b) { return a < b; }
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

void **func_801043F8(M2C_UNK, M2C_UNK, M2C_UNK);    /* extern */
extern void **D_8007BD40;
extern s32 D_8007BD44;
extern void **D_8007BD60;
extern s32 D_8007BD64;

void func_802A5E30(void) {
    s32 var_a0;
    s32 var_a1;
    void **temp_a2;
    void **var_v1;

    D_8007BD64 = 0;
    D_8007BD44 = 0;
    var_a0 = 0;
    var_v1 = func_801043F8(0x1E78, 2, 0);
    temp_a2 = var_v1;
    var_a1 = 0x9C;
    D_8007BD40 = var_v1;
    D_8007BD60 = var_v1;
    do {
        *var_v1 = temp_a2 + var_a1;
        var_v1 += 39;
        var_a0 += 1;
        var_a1 += 0x9C;
    } while (__repair_inline(var_a0, 0x31));
    *((var_a0 * 0x9C) + D_8007BD40) = 0;
}
