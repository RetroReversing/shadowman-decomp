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

M2C_UNK func_8026A714(M2C_UNK *, f32, f32, f32, s32); /* extern */
extern M2C_UNK D_80030F58;
extern M2C_UNK D_80075AA8;

void func_802692DC(void) {
    M2C_UNK *__base_D_80075AA8;
    f32 temp_fs0;

    temp_fs0 = *(f32 *)0x20E200;
    __base_D_80075AA8 = &D_80075AA8;
    func_8026A714(&D_80030F58, temp_fs0, 0.0f, (f32) M2C_FIELD(__base_D_80075AA8, s32 *, 0x74), 0xAF9);
    if (M2C_FIELD(__base_D_80075AA8, s32 *, 0x74) != 0x2710) {
        func_8026A714(&D_80030F58, temp_fs0, (f32) M2C_FIELD(__base_D_80075AA8, s32 *, 0x74), 10000.0f, 0);
    }
}
