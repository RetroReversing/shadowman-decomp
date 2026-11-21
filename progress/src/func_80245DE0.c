/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

s32 func_8023904C(void *);                          /* extern */
M2C_UNK func_80239398(s32, void *, M2C_UNK, M2C_UNK, s32); /* extern */

void func_80245DE0(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0xC);
    if (M2C_FIELD(temp_s0, s16 *, 0x7A) != 0x7F) {
        if (M2C_FIELD(temp_s0, s32 *, 0x84) == 0) {
            M2C_FIELD(temp_s0, s32 *, 0x84) = func_8023904C(arg0);
        }
        func_80239398(M2C_FIELD(temp_s0, s32 *, 0x84), arg0, 0x4556, 0, 0);
    }
}
