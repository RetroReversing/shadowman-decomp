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

M2C_UNK func_80109318(M2C_UNK, void *, M2C_UNK);    /* extern */
s32 func_8024F654(void *);                          /* extern */
M2C_UNK func_8026E26C(M2C_UNK);                     /* extern */
s32 func_8026E2F4(M2C_UNK);                         /* extern */

void func_8024F6D4(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 8);
    if ((*M2C_FIELD(temp_s0, s32 **, 0x6C) == 1) && (func_8026E2F4(0xA2) == 0) && (func_8024F654(temp_s0) & 0xFF)) {
        func_80109318(0x195, temp_s0 + 0x24, 0);
        func_8026E26C(0xA2);
    }
}
