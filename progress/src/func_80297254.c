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

M2C_UNK func_80103B98(s32);                         /* extern */
M2C_UNK func_80296C80(void *);                      /* extern */

void func_80297254(void *arg0) {
    s32 temp_a0;

    if ((M2C_FIELD(arg0, f32 *, 0x54) <= 0.0f) && (M2C_FIELD(arg0, f32 *, 0x50) >= 0.0f)) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x44);
        if (temp_a0 != 0) {
            func_80103B98(temp_a0);
        }
        func_80296C80(arg0);
    }
}
