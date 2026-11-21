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

s8 func_802364D0(s32);                              /* extern */
M2C_UNK func_80241EAC();                            /* extern */
extern s32 D_8005E9FC;
extern M2C_UNK D_8006A920;

void func_80241DC0(void) {
    M2C_UNK *var_s0;
    s32 var_s2;

    func_80241EAC();
    var_s2 = 0;
    func_802364D0(D_8005E9FC);
    var_s0 = &D_8006A920;
    __repair_rows: {
        var_s2 += 1;
        M2C_FIELD(var_s0, s8 *, 0) = func_802364D0(D_8005E9FC);
        M2C_FIELD(var_s0, s8 *, 1) = func_802364D0(D_8005E9FC);
        M2C_FIELD(var_s0, s8 *, 2) = func_802364D0(D_8005E9FC);
        M2C_FIELD(var_s0, s8 *, 3) = func_802364D0(D_8005E9FC);
        M2C_FIELD(var_s0, s16 *, 4) = (s16) (func_802364D0(D_8005E9FC) * 2);
        var_s0 += 0xC;
    }
if (var_s2 < 8) goto __repair_rows;
}
