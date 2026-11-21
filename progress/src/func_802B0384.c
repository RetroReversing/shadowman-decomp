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

M2C_UNK func_802A6448();                            /* extern */

void func_802B0384(void *arg0) {
    f32 temp_fv0;

    temp_fv0 = M2C_FIELD(arg0, const f32 *, 0x30) - *(f32 *)0x21685C;
    M2C_FIELD(arg0, f32 *, 0x30) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        func_802A6448();
    }
}
