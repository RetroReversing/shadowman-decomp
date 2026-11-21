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

extern float D_8005EA70;
extern float D_8005EA74;
extern float D_8005EA78;
extern s32 D_80061988;
extern void *D_80061A10;

s32 func_80234C50(s32 arg0) {
char *__repair_addr;

    s32 var_v0;
    void *temp_v1;
__repair_addr = (char *)((arg0 * 0x22) + D_80061988);


    temp_v1 = M2C_FIELD(D_80061A10, s32 *, 0x1C) + (*(s32 *)(__repair_addr) * 0x10);
    var_v0 = -1;
    if (!(((M2C_FIELD(temp_v1, f32 *, 0) * D_8005EA70) + (M2C_FIELD(temp_v1, f32 *, 4) * D_8005EA74) + (M2C_FIELD(temp_v1, f32 *, 8) * D_8005EA78) + M2C_FIELD(temp_v1, f32 *, 0xC)) < 0.0f)) {
        var_v0 = 1;
    }
    return var_v0;
}
