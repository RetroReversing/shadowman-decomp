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

M2C_UNK func_80109A78(s8);                          /* extern */
M2C_UNK func_802391FC(void *);                      /* extern */

void func_80109A1C(void *arg0) {
    void *temp_a0;

    if (arg0 != NULL) {
        temp_a0 = arg0 + 8;
        if ((M2C_FIELD(arg0, s32 *, 0x18) == 0x10) && (M2C_FIELD(temp_a0, s32 *, 4) & 0x800000)) {
            func_80109A78((s8) M2C_FIELD(temp_a0, s32 *, 4));
        }
        func_802391FC(arg0);
    }
}
