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

M2C_UNK func_8026E26C(M2C_UNK);                     /* extern */
s32 func_8026E2F4(M2C_UNK);                         /* extern */
extern f32 D_80045440;

s32 func_802D39F8(void) {

    if (func_8026E2F4(0x8B) == 0) {
        if (D_80045440 == *(f32 *)0x21A090) {
            func_8026E26C(0x8B);
            return 1;
        }
    }
    return 0;
}
