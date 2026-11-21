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

M2C_UNK func_80116D80(M2C_UNK *, s32 *, M2C_UNK);   /* extern */
M2C_UNK func_80116EB0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_802295C0(s32, s32);                    /* extern */
M2C_UNK func_802D9710(M2C_UNK *);                   /* extern */
M2C_UNK func_802D97D0(u32, s32);                    /* extern */
u32 func_802D9EC4(s32);                             /* extern */
extern M2C_UNK D_80046380;
extern M2C_UNK D_8005901C;
extern M2C_UNK D_8007DC10;
extern M2C_UNK D_8007DC30;
extern s32 D_8007E038;
extern s32 D_8007E03C;
extern s32 D_8007E050;

void func_802D9658(s32 arg0) {
    s32 sp10;
    u32 var_a0;

    M2C_FIELD(&D_8007DC10, s32 *, 0) = 0;
    M2C_FIELD(&D_8007DC10, s8 *, 4) = 0;
    func_80116EB0(&D_8005901C, &D_80046380, 1);
    func_80116D80(&D_8007DC30, &sp10, 1);
    var_a0 = func_802D9EC4(sp10);
    if (var_a0 != 2) {
        if (var_a0 < 3U) {
            var_a0 = 0x8005901C;
            if (var_a0 != 0) {
                func_802D9710((M2C_UNK *) (u32) &D_8005901C);
                return;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            func_802D97D0(var_a0, D_8007E050);
            return;
        }
        if (var_a0 != 3) {
            if (var_a0 != 7) {
                func_802D9710(&D_8005901C);
                return;
            }
            func_802295C0(arg0, D_8007E038);
            return;
        }
        func_802D97D0(var_a0, D_8007E050);
        return;
    }
    func_802D97D0(var_a0, D_8007E03C);
}
