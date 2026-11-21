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

M2C_UNK func_80248210(void *);                      /* extern */
M2C_UNK func_8024F900();                            /* extern */
M2C_UNK func_8026E26C(M2C_UNK);                     /* extern */

void func_8024F8CC(void *arg0) {
    s8 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s8 *, 0x71);
    switch (temp_v1) {
        case 9:
            func_8026E26C(0x9C);
            func_80248210(arg0);
            break;
        case 1:
            func_8024F900();
            return;
    }
    func_80248210(arg0);
}
