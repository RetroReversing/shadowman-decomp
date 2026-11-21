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

extern int D_8007DC10;
extern short D_8007DC16;
extern int D_8007DC1C;
extern int D_8007DC18;
extern int D_8007DC24;
s32 func_80116D80();
s32 func_80116EB0();
s32 func_8021E320();
s32 func_802295C0();
s32 func_802D8C10();
s32 func_802D9260();
s32 func_802D9278();
u32 func_802D9EC4();
extern char D_80046380[];
extern char D_8005901C[];
extern char D_8007DC30[];
extern s32 D_8007E03C;
extern s32 D_8007E06C;

void func_802D9180(s32 arg0) {
    s32 sp10;
    s32 temp_v0;
    u32 temp_v0_2;

    temp_v0 = func_8021E320(0x4900);
    D_8007DC10 = 6;
    D_8007DC16 = 0;
    D_8007DC1C = 0;
    D_8007DC18 = 0x4900;
    D_8007DC24 = temp_v0;
    func_80116EB0(D_8005901C,  D_80046380);
    func_80116D80(D_8007DC30, &sp10, 1);
    temp_v0_2 = func_802D9EC4(sp10);
    switch (temp_v0_2) {                            /* irregular */
    case 2:
        func_802D9260(arg0, D_8007E03C);
        return;
    case 3:
        func_802D9260();
        return;
    case 4:
        func_802295C0(arg0, D_8007E06C);
        func_802D9278();
        return;
    default:
        func_802D8C10(arg0, temp_v0);
        return;
    }
}
