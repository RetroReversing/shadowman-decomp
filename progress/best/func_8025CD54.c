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

M2C_UNK func_80239030();                            /* extern */
s32 func_8023904C();                                /* extern */
M2C_UNK func_802D0850(M2C_UNK *);                   /* extern */
extern M2C_UNK D_20A124;
extern M2C_UNK D_8002DBD0;
extern M2C_UNK D_80045930;
extern s32 D_80074BA0;
extern s32 D_80074BA4;
extern s32 D_80074BA8;
extern s32 D_80074BF0;

void func_8025CD54(void) {
    M2C_UNK *var_a0;
    s32 var_a1;

    func_802D0850(&D_20A124);
    func_80239030();
    D_80074BF0 = func_8023904C();
    D_80074BA8 = func_8023904C();
    D_80074BA4 = func_8023904C();
    var_a1 = 0;
    var_a0 = &D_80045930;
    D_80074BA0 = func_8023904C();
    M2C_FIELD(&D_8002DBD0, s32 *, 0) = 0;
    M2C_FIELD(&D_8002DBD0, s32 *, 0x10) = 0;
    do {
        M2C_FIELD(var_a0, s32 *, 8) = 0;
        M2C_FIELD(var_a0, s32 *, 0xC) = 0;/*__repair_loop_weight*/do {
        var_a1 += 1;} while (0);
        var_a0 += 5;
    } while (var_a1 < 0x14);
}
