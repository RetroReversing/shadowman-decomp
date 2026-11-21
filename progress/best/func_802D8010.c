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

extern int D_8007DB68;
extern int D_8007DB70;
extern int D_8002D18C;
extern int D_8007DB74;
extern unsigned char D_8007DB7A;
extern unsigned char D_8007DC04;
extern signed char D_8007DB7C;
s32 func_80103B98();
s32 func_801042FC();
s32 func_802255C0();
s32 func_80227B4C();
s32 func_8022AD04();
s32 func_8022AD94();
s32 func_802D80CC();
extern char D_25C440[];
extern s8 D_8002C1BC;
extern char D_8002D180[];
extern char D_8004635C[];
extern s32 *D_80052778;
extern s32 D_800591E0;
extern char D_8007DB78[];

void func_802D8010(void) {
    s32 *__base_D_800591E0;
    int *__base_D_8002D18C;
    s8 *__base_D_8002C1BC;
    int *__base_D_8007DB74;

    __base_D_8007DB74 = &D_8007DB74;

    __base_D_8002C1BC = &D_8002C1BC;
    func_8022AD94(D_8007DB68);
    func_80103B98(D_8007DB70);
    __base_D_8002D18C = &D_8002D18C;
    func_80103B98((*__base_D_8002D18C));
    (*__base_D_8002D18C) = 0;
    func_8022AD04(D_8004635C, 1);
    func_801042FC();
    func_80227B4C();
    func_802255C0();
    __base_D_800591E0 = &D_800591E0;
    (*__base_D_800591E0) &= ~0x80;
    if ((*__base_D_8007DB74) & 0x8000) {
        (*__base_D_8002C1BC) = 1;
        func_802D80CC(-0x81, __base_D_800591E0);
        return;
    }
    (*__base_D_8002C1BC) = 1;
    D_80052778 = D_25C440;
    if ((D_8007DB7A == 0) && (D_8007DC04 != 5)) {
        D_8007DB7C = 0;
    }
    (*__base_D_8007DB74) = 0;
}
