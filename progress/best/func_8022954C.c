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

M2C_UNK func_8022957C();                            /* extern */
M2C_UNK func_80229588();                            /* extern */

void func_8022954C(void *arg0) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), M2C_UNK (**)(), 0x24);
    if (temp_v0 != NULL) {
        temp_v0();
        func_8022957C();
        return;
    }
    func_80229588();
}
