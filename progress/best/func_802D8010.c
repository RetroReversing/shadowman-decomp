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

M2C_UNK func_80103B98(s32);                         /* extern */
M2C_UNK func_801042FC();                            /* extern */
M2C_UNK func_802255C0();                            /* extern */
M2C_UNK func_80227B4C();                            /* extern */
M2C_UNK func_8022AD04(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8022AD94(s32);                         /* extern */
M2C_UNK func_802D80CC(M2C_UNK, s32 *);              /* extern */
extern M2C_UNK D_25C440;
extern s8 D_8002C1BC;
extern M2C_UNK D_8002D180;
extern M2C_UNK D_8004635C;
extern M2C_UNK *D_80052778;
extern s32 D_800591E0;
extern M2C_UNK D_8007DB68;
extern s16 D_8007DB74;
extern M2C_UNK D_8007DB78;

void func_802D8010(void) {
    func_8022AD94(M2C_FIELD(&D_8007DB68, s32 *, 0));
    func_80103B98(M2C_FIELD(&D_8007DB68, s32 *, 8));
    func_80103B98(M2C_FIELD(&D_8002D180, s32 *, 0xC));
    M2C_FIELD(&D_8002D180, s32 *, 0xC) = 0;
    func_8022AD04(&D_8004635C, 1);
    func_801042FC();
    func_80227B4C();
    func_802255C0();
    D_800591E0 &= ~0x80;
    if (M2C_FIELD(&D_8007DB68, s32 *, 0xC) & 0x8000) {
        D_8002C1BC = 1;
        func_802D80CC(-0x81, &D_800591E0);
        return;
    }
    D_8002C1BC = 1;
    D_80052778 = &D_25C440;
    if ((M2C_FIELD(&D_8007DB78, u8 *, 2) == 0) && (M2C_FIELD(&D_8007DB78, u8 *, 0x8C) != 5)) {
        M2C_FIELD(&D_8007DB78, s8 *, 4) = 0;
    }
    D_8007DB74 = 0;
}
