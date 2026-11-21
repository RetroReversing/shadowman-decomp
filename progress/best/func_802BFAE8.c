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

extern s32 D_80072C18;
extern void *D_80075560;
extern void *D_800755CC;

void func_802BFAE8(f32 arg0) {
    char *var_a0;
    s32 var_a2;
    void *temp_a3;
    void *var_v1;

    var_a2 = 0;
    temp_a3 = M2C_FIELD(D_80075560, s32 *, 8) + (D_80072C18 * 0xC);
    var_a0 = M2C_FIELD(D_800755CC, s32 *, 0x18) + (M2C_FIELD(temp_a3, u16 *, 8) * 6);
    if (M2C_FIELD(temp_a3, u16 *, 4) != 0) {
        var_v1 = var_a0 + 4;
        __repair_rows: {
            *(s16 *)var_a0 = (s16) (s32) ((f32) *(s16 *)var_a0 * arg0);
            var_a2 += 1;
            var_a0 += 6;
            M2C_FIELD(var_v1, s16 *, -2) = (s16) (s32) ((f32) M2C_FIELD(var_v1, s16 *, -2) * arg0);
            M2C_FIELD(var_v1, s16 *, 0) = (s16) (s32) ((f32) M2C_FIELD(var_v1, s16 *, 0) * arg0);
            var_v1 += 6;
        }
if (var_a2 < (s32) M2C_FIELD(temp_a3, u16 *, 4)) goto __repair_rows;
    }
}
