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

s32 func_80113AD0();                                /* extern */
f32 func_80272260();                                /* extern */
extern void *D_8007AFF8;

void func_8027ABF0(void) {
    void **__base_D_8007AFF8;
    f32 temp_fv0;
    f32 var_fv0f;

    __base_D_8007AFF8 = &D_8007AFF8;
    if ((M2C_FIELD((*__base_D_8007AFF8), u16 *, 0x96) == 0) && (M2C_FIELD((*__base_D_8007AFF8), s16 *, 0xA4) == 0)) {
        var_fv0f = func_80272260() + *(f32 *)0x2144C4;
        if (var_fv0f < 0.0f) {
            var_fv0f += *(f32 *)0x2144C8;
        }
        temp_fv0 = *(f32 *)0x2144CC;
        if (temp_fv0 < var_fv0f) {
            var_fv0f -= temp_fv0;
        }
        if ((*(f32 *)0x2144D0 < var_fv0f) && (var_fv0f < *(f32 *)0x2144D4)) {
            M2C_FIELD((*__base_D_8007AFF8), s16 *, 0xA4) = 1;
            M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x9E) = (s16) ((func_80113AD0() & 3) + 3);
        }
    }
}
