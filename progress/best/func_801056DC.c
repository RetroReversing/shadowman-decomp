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

void func_801056DC(s32 *arg0, s32 arg1) {
    char *var_v1;
    s32 temp_a1;
    
    s32 var_a2;
    void *var_a0;

    temp_a1 = arg1 - 1;
    var_a2 = temp_a1;
    var_v1 = arg0;
    if ((temp_a1 & 0xFF) != 0xFF) {
        var_a0 = arg0 + 0xC;
        do { {
            *(s32 *)var_v1 = 0;
            M2C_FIELD(var_a0, u16 *, -8) = 0xFFFF;
            M2C_FIELD(var_a0, s32 *, -4) = 0;
            M2C_FIELD(var_a0, s16 *, 0) = 0;
            var_a0 += 0x10;
            temp_a1 = var_a2 - 1;
            var_a2 = temp_a1;
            var_v1 += 0x10;
        }
} while ((temp_a1 & 0xFF) != 0xFF);
    }
}
