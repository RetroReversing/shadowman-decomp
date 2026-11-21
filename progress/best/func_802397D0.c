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
/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */

extern s32 D_8002D3F0;
extern char D_800698C0[];

void func_802397D0(f32 *arg0) {
    char *var_a0;
    f32 temp_fv0;
    s32 var_a1;
    s32 var_v1;
    s32 *__base_D_800698C0;

    __base_D_800698C0 = D_800698C0;

    var_a0 = arg0;
    var_a1 = 0;
    var_v1 = D_8002D3F0 * 4;
    __repair_rows: {
        temp_fv0 = *(f32 *)var_a0;
        var_a0 += 4;
        var_a1 += 1;
        *(var_v1 + __base_D_800698C0) = temp_fv0;
        var_v1 += 0x100;
    }
if (var_a1 < 0xC) goto __repair_rows;
    D_8002D3F0 += 1;
}
