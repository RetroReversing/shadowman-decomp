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

M2C_UNK func_80109A1C(s32);                         /* extern */
M2C_UNK func_8024ED8C(void *);                      /* extern */
s32 func_8026E2F4(M2C_UNK);                         /* extern */

void func_8024A6AC(void *arg0) {
    s32 temp_a0;
    void *temp_s0;

    if (func_8026E2F4(0xA7) != 0) {
        temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0x6C);
        temp_a0 = M2C_FIELD(temp_s0, s32 *, 4);
        if (temp_a0 != 0) {
            func_80109A1C(temp_a0);
            M2C_FIELD(temp_s0, s32 *, 4) = 0;
        }
        func_8024ED8C(arg0);
    }
}
