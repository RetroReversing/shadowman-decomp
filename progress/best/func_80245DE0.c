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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023904C();
s32 func_80239398();

void func_80245DE0(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0xC);
    if (M2C_FIELD(temp_s0, s16 *, 0x7A) != 0x7F) {
        if (M2C_FIELD(temp_s0, s32 *, 0x84) == 0) {
            M2C_FIELD(temp_s0, s32 *, 0x84) = func_8023904C(arg0, arg0);
        }
        func_80239398(M2C_FIELD(temp_s0, s32 *, 0x84), arg0, 0x4556, 0);
    }
}
