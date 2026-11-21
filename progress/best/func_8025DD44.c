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

extern s32 D_80074C10;

void func_8025DD44(void *arg0) {
    u32 var_v1;
    void *var_a1;

    var_a1 = M2C_FIELD(arg0, void **, 0x28);
    var_v1 = 0;
    if (M2C_FIELD(arg0, u16 *, 0x3A) != 0) {
        __repair_rows: {
            M2C_FIELD(var_a1, s32 *, 4) = (s32) D_80074C10;
            var_v1 += 1;
            var_a1 += 8;
        }
if (var_v1 < (u16) M2C_FIELD(arg0, u16 *, 0x3A)) goto __repair_rows;
    }
}
