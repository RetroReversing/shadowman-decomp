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

M2C_UNK func_80113B00(M2C_UNK *, f32, f32, M2C_UNK); /* extern */
extern M2C_UNK D_800591A0;
extern M2C_UNK D_80059200;

void func_80225CD0(void) {
    f32 temp_fv0;
    s16 *var_v0;
    s32 var_v1;

    var_v1 = 0xFF;
    var_v0 = &D_80059200 + 0x1FE;
    do {
        *var_v0 = -1;
        var_v1 -= 1;
        var_v0 -= 2;
    } while (var_v1 >= 0);
    temp_fv0 = *(f32 *)0x2001B0;
    func_80113B00(&D_800591A0, temp_fv0, temp_fv0, 0xBE800000);
}
