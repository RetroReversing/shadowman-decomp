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
M2C_UNK func_802D85D0();                            /* extern */
u32 func_802D9EC4(s32);                             /* extern */
extern M2C_UNK D_80046380;
extern M2C_UNK D_8005901C;
extern M2C_UNK D_8007DC30;

void func_802D8510(s32 arg0) {
    s32 sp10;
    u32 temp_v0;

    func_80116EB0(&D_8005901C, &D_80046380, 1);
    func_80116D80(&D_8007DC30, &sp10, 1);
    temp_v0 = func_802D9EC4(sp10);
    switch (temp_v0) {                              /* irregular */
    case 2:
        func_802D85D0();
        return;
    case 3:
        func_802D85D0();
        return;
    case 4:
    case 6:
        func_802D85D0();
        return;
    default:
        func_802295C0(arg0, *(s32 *)0x8007E074);
        return;
    }
}
