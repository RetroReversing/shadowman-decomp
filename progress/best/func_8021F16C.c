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

extern float D_8002D204;
extern char D_8002D200[];
extern u8 D_80056A00;
extern s32 D_80058E08;

void func_8021F16C(s32 arg0) {
    s32 var_a0;
    char *var_a1;
    char *var_v1;

    var_a1 = &D_80056A00;
    var_a0 = 0;
    if (D_80058E08 > 0) {
        var_v1 = D_80056A00 + 6;
        do {
            var_a0 += 1;
            if (*(u8 *)var_a1 == 0) {
                *(u8 *)var_v1 = (u16) (*(u8 *)var_v1 - (s32) ((f32) ((s32) (arg0 << 0x10) >> 0xF) * D_8002D204));
            }
            var_v1 += 0x18;
            var_a1 += 0x18;
        } while (var_a0 < D_80058E08);
    }
}
