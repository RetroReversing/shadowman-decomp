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

extern int D_8007BE68;
extern int D_8007BE6C;
extern int D_8007BE70;
extern int D_8007BEB8;
extern int D_8007BEBC;
extern int D_8007BEC0;
extern int D_8007BE08;
extern int D_8007BE0C;
extern int D_8007BE10;
extern int D_8007BF50;
extern int D_8007BF54;
extern int D_8007BF4C;
extern float D_8002C0F4;
s32 func_80107D8C();
s32 func_80109D88();
s32 func_8022B090();
s32 func_8022B588();
s32 func_80233E50();
s32 func_8023DF7C();
s32 func_80246F50();
extern char D_2D6340[];
extern char D_8002C0F0[];
extern u16 D_8002C110;
extern u16 D_8002C112;
extern s8 D_8002C1BC;
extern s32 D_8002DBD4;
extern s32 D_8002DBE4;
extern s32 D_80030C74;
extern s32 D_80044E84;
extern s32 D_80044E88;
extern s32 D_800458F0;
extern s8 D_80045C48;
extern s32 D_80045C4C;
extern s32 D_80045F80;
extern s32 D_8004AEB4;
extern u16 D_8004DF18;
extern s32 *D_80052778;
extern s32 D_8006A504;
extern s32 D_800752D0;
extern s32 D_800753E4;
extern void *D_80075510;
extern char D_80075518[];
extern char D_80075568[];
extern s8 D_800755D9;
extern s8 D_8007BF40;
extern char D_8007BF48[];
extern char D_8007C140[];
extern s32 D_8007C300;
extern s32 D_8007C304;
extern s32 D_8007C308;
extern s32 D_8007C30C;
extern s32 D_8007C310;
extern s32 D_8007C314;
extern u8 D_8007DC04;
extern char D_8007DC30[];

s32 func_802D1990(void) {
    void *temp_s0;

    if (D_800752D0 != 0) {
        D_800752D0 = 0;
        D_800753E4 = 0;
        D_80030C74 = 1;
    }
    D_80045F80 = 0;
    D_8007C30C = 0;
    D_8007C310 = 0;
    D_8007C314 = 0;
    D_8007C300 = 0;
    D_8007C304 = 0;
    D_8007C308 = 0;
    D_8007BE68 = 0;
    D_8007BE6C = 0;
    D_8007BE70 = 0;
    D_8007BEB8 = 0;
    D_8007BEBC = 0;
    D_8007BEC0 = 0;
    D_8007BE08 = 0;
    D_8007BE0C = 0;
    D_8007BE10 = 0;
    D_8006A504 = 0;
    M2C_FIELD(D_8007BF48, s32 **, 0) = (s32 *) D_80052778;
    D_8007BF50 = (s32) D_800755D9;
    D_8007BF54 = (s32) (s16) D_8004DF18;
    D_8007BF4C = (s32) D_800753E4;
    if ((D_8002DBD4 != -1) && (D_8002DBD4 != 0x1D)) {
        D_80044E84 = D_8002DBD4;
    }
    if ((D_8002DBE4 != -1) && (D_8002DBE4 != 0x1D)) {
        D_80044E88 = D_8002DBE4;
    }
    func_80246F50(-1, 0, D_800753E4);
    func_80246F50(-1, 1);
    func_8023DF7C(D_80075568, D_80075518, -1, 0xA, 0, 0);
    func_8023DF7C(D_80075568, D_80075518, -1, 0xA, 0, 1);
    func_80233E50(D_8007C140, 0, 0, (f32) D_8002C110, (f32) D_8002C112, D_8002C0F4, *(f32 *)0x218A48);
    temp_s0 = D_8007C140 - 0x1E8;
    M2C_FIELD(D_80075510, s16 *, 0x16) = 1;
    M2C_FIELD(temp_s0, s8 *, 0x388) = 1;
    M2C_FIELD(temp_s0, s32 *, 0x340) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x344) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x370) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x348) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x34C) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x350) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x358) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x378) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x380) = 0;
    M2C_FIELD(temp_s0, s8 *, 0x389) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x384) = -1;
    M2C_FIELD(temp_s0, s32 *, 0x36C) = (s32) (M2C_FIELD(temp_s0, s32 *, 4) + 4);
    func_80109D88();
    if (((s16) D_8004DF18 != 0xF) && ((s16) D_8004DF18 != 0x10) && (D_8007DC04 != 5)) {
        func_80107D8C(0x28, -1, 1, 0x7F);
    }
    D_80045C48 = 0;
    D_80045C4C = 0;
    D_800458F0 = 1;
    D_8002C1BC = 1;
    D_80052778 = D_2D6340;
    D_8007BF40 = 0;
    D_8004AEB4 = 0;
    func_8022B588(D_8007DC30);
    func_8022B090();
    return 1;
}
