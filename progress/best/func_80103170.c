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

s32 func_80116200();
s32 osViBlack();
extern s32 D_80000300;
extern char D_8001E404[];
extern char D_800278A0[];
extern void *D_8002D210;
extern char D_800597C8[];

void func_80103170(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_v0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    void *var_v1;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    if (D_8002D210 != NULL) {
        var_v1 = D_8002D210;
        var_v0 = D_800597C8;
        do {
            var_a1 = M2C_FIELD(var_v0, s32 *, 0);
            var_a2 = M2C_FIELD(var_v0, s32 *, 4);
            var_a3 = M2C_FIELD(var_v0, s32 *, 8);
            M2C_FIELD(var_v1, s32 *, 0) = var_a1;
            M2C_FIELD(var_v1, s32 *, 4) = var_a2;
            M2C_FIELD(var_v1, s32 *, 8) = var_a3;
            M2C_FIELD(var_v1, s32 *, 0xC) = (s32) M2C_FIELD(var_v0, s32 *, 0xC);
            var_v0 += 0x10;
            var_v1 += 0x10;
        } while (var_v0 != (D_800597C8 + 0x50));
    }
    func_80116200((*((D_80000300 * 2) + D_8001E404) * 0x50) + D_800278A0, var_a1, var_a2, var_a3);
    osViBlack(1);
}
