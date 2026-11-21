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

extern u32 D_8006973C;
extern void *D_800698A0;
extern void *D_8007BAF4;
extern void *D_8007BD64;

void func_80237AA8(void) {
    u32 var_a0;
    void *var_v1_3;
    
    void *var_v1;

    var_a0 = 0;
    if (D_8006973C != 0) {
        var_v1 = D_800698A0;
        __repair_rows: {
            var_a0 += 1;
            if (M2C_FIELD(var_v1, s16 *, 0) >= 6) {
                M2C_FIELD(var_v1, s16 *, 0) = -1;
                M2C_FIELD(var_v1, s32 *, 0x34) = 0;
                M2C_FIELD(var_v1, s16 *, 2) = 0;
                M2C_FIELD(var_v1, s32 *, 0x2C) = 0;
            }
            var_v1 += 0x5C;
        }
if (var_a0 < (u32) D_8006973C) goto __repair_rows;
    }
    var_v1 = D_8007BAF4;
    if (var_v1 != NULL) {
        do {
            if (M2C_FIELD(var_v1, u8 *, 0x72) & 4) {
                M2C_FIELD(var_v1, s32 *, 0x64) = 0;
            }
            var_v1 = M2C_FIELD(var_v1, void **, 0x3C);
        } while (var_v1 != NULL);
    }
    var_v1_3 = D_8007BD64;
    if (var_v1_3 != NULL) {
        do {
            if (M2C_FIELD(var_v1_3, u8 *, 0x50) & 1) {
                M2C_FIELD(var_v1_3, s32 *, 0x18) = 0;
            }
            var_v1_3 = M2C_FIELD(var_v1_3, void **, 0);
        } while (var_v1_3 != NULL);
    }
}
