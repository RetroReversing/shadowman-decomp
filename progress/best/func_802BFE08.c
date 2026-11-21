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

extern int D_8007558C;
extern int D_80075590;
extern int D_80075594;
extern short D_8007551C;
extern short D_8007551A;
extern short D_80075518;
extern short D_8007553A;
extern short D_80075538;
extern short D_80075536;
extern int D_80030E54;
extern int D_800755E8;
extern unsigned short D_800755E6;
extern signed char D_800755D9;
extern unsigned char D_8007DB9B;
extern unsigned char D_8007DC05;
extern short D_80075F5C;
extern short D_80075F5E;
extern short D_80075F60;
extern short D_80075F62;
extern int D_8007BE9C;
extern int D_8007BE98;
extern int D_8007BDEC;
extern int D_8007BDE8;
extern int D_8007BDF0;
extern int D_80075574;
extern int D_80075578;
extern int D_8007557C;
extern int D_8007BDA8;
extern int D_8007BDAC;
extern int D_8007BDB0;
extern int D_8007BDB8;
extern int D_8007BDBC;
extern int D_8007BDC0;
extern int D_8002DBE8;
extern int D_8002DBD8;
extern int D_8002DBD0;
extern int D_8002DBE0;
extern int D_8002DBDC;
extern int D_8002DBEC;
extern int D_8002DBD4;
extern int D_8002DBE4;
extern int D_8007BE68;
extern int D_8007BE6C;
extern int D_8007BE70;
extern int D_8007BEB8;
extern int D_8007BEBC;
extern int D_8007BEC0;
extern unsigned short D_800755E0;
void *func_801043F8();
s32 func_8021DD0C();
s32 func_8023B094();
s32 func_8023CEE0();
s32 func_8023DCBC();
s32 func_8023DF7C();
s32 func_8023EC64();
s32 func_8025FEA0();
s32 func_80267600();
s32 func_8026E26C();
s32 func_802BDFA8();
s32 func_802BE0A8();
s32 func_802BF468();
s32 func_802BF8EC();
s32 func_802BFC3C();
s32 func_802BFF08();
s32 func_802C00E8();
s32 func_802C05B8();
s32 func_802CC1F0();
s32 func_802D0B28();
extern char D_209890[];
extern char D_21A15C[];
extern s32 D_800305B8;
extern char D_80030E40[];
extern char D_800374B4[];
extern char D_8003A4F4[];
extern s32 D_80044E80;
extern s32 D_80044E8C;
extern char D_80044EA0[];
extern char D_80044EB0[];
extern s16 D_8004541C;
extern void *D_80045438;
extern f32 D_80045440;
extern s32 D_8004563C;
extern char D_80045640[];
extern char D_8004566C[];
extern char D_80045930[];
extern char D_8004AE48[];
extern s32 D_8005EA14;
extern s32 D_8006196C;
extern s32 D_80072BC0;
extern s32 D_80072BC4;
extern s32 D_80072BC8;
extern s32 D_80072BCC;
extern s32 D_80072BD0;
extern s32 D_80072BD4;
extern s32 D_80072BD8;
extern s32 D_80072BDC;
extern s32 D_80072BE0;
extern s32 D_80072BE4;
extern s32 D_80072BE8;
extern s32 D_80072BF0;
extern s32 D_80072BF4;
extern s32 D_80072BF8;
extern s32 D_80072C00;
extern s32 D_80072C04;
extern s32 D_80072C08;
extern s32 D_80072C0C;
extern s32 D_80072C10;
extern s32 D_80072C14;
extern s32 D_80072C18;
extern s32 D_80072C1C;
extern s32 D_80074BB0;
extern s32 D_800752D0;
extern void *D_80075510;
extern void *D_80075560;
extern char D_80075568[];
extern char D_80075598[];
extern s32 D_800755F8;
extern char D_80075F58[];
extern u8 D_8007BD98;
extern s32 D_8007BDF4;
extern s8 D_8007BDF8;
extern s32 D_8007BE2C;
extern s32 D_8007BE7C;
extern char D_8007DB78[];
extern u8 D_8007DB79;
extern u8 D_8007DC04;

void func_802BFE08(void) {
    s32 *var_a1;
    s32 *var_v1;
    s16 *var_s1;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a0;
    s32 var_a2;
    u16 temp_v0_5;
    u16 var_s2;
    u8 temp_v0_2;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;

    D_8007BD98 = M2C_FIELD(((D_80074BB0 * 0x34) + D_209890), u8 *, 9);
    if ((D_80074BB0 == 8) && (M2C_FIELD(((D_800305B8 * 0x14) + D_21A15C), s32 *, 4) == 0x10)) {
        D_8007558C = (s32) *(s32 *)0x2181D8;
        D_80075590 = (s32) *(s32 *)0x2181DC;
        D_80075594 = (s32) *(s32 *)0x2181E0;
    }
    if (M2C_FIELD(((D_80074BB0 * 0x34) + D_209890), s16 *, 8) == 0) {
        func_802BFF08(D_209890);
        return;
    }
    D_8004563C = 0;
    M2C_FIELD(D_80045930, s32 **, 8) = D_80075568;
    M2C_FIELD(D_80045930, s16 **, 0xC) = &D_80075518;
    M2C_FIELD(D_80045930, s32 **, 0x1C) = D_80075568;
    M2C_FIELD(D_80045930, s16 **, 0x20) = &D_80075518;
    func_8023DCBC(D_800374B4);
    D_800752D0 = 0;
    M2C_FIELD(D_80075568, s16 **, 0x6C) = &D_80075518;
    *(s32 *)(s32 * *)(D_80075518 + 0x30) = D_8003A4F4;
    *(s32 *)(s32 * *)(D_80075518 + 0x34) = D_800374B4;
    D_8007551C = -1;
    D_8007551A = -1;
    D_80075518 = -1;
    D_8007553A = -1;
    D_80075538 = -1;
    D_80075536 = -1;
    func_8023DF7C(D_80075568, &D_80075518, 1, 0xA, 0, 2);
    D_800755F8 = 0;
    if (M2C_FIELD(((D_80074BB0 * 0x34) + D_209890), s16 *, 8) == 0) {
        D_8007BDF8 = 0;
        func_802C00E8(D_8004563C);
        return;
    }
    D_8007BDF8 = 1;
    func_802BF8EC(D_209890);
    temp_v0 = (D_8004563C * 6) + D_80045640;
    var_s2 = (u16) M2C_FIELD(temp_v0, s16 *, 4);
    if (M2C_FIELD(temp_v0, s16 *, 4) == -1) {
        var_s2 = *((D_8007DB79 * 2) + D_80044EA0);
    }
    temp_v0_2 = *(D_8007DB79 + D_8004566C);
    D_80030E54 = (s32) temp_v0_2;
    if (temp_v0_2 & 1) {
        func_8026E26C(0x40);
    }
    if (D_80030E54 & 2) {
        func_8026E26C(0x41);
    }
    if (D_80030E54 & 4) {
        func_8026E26C(0x42);
    }
    if (D_80030E54 & 8) {
        func_8026E26C(0x43);
    }
    temp_v0_3 = D_80075598 + 4;
    D_80045438 = temp_v0_3;
    temp_v0_4 = temp_v0_3 - 0x34;
    M2C_FIELD(temp_v0_4, s32 *, 0x68) = 0;
    M2C_FIELD(temp_v0_4, f32 *, 0x30) = (f32) *(f32 *)0x2181E4;
    if ((D_80074BB0 == 0x10) && ((temp_s0 = func_8025FEA0(0x10), temp_s1 = func_8025FEA0(0x11), (((temp_s0 & 0xFF) + (temp_s1 & 0xFF) + (func_8025FEA0(0x1C) & 0xFF)) == 3)) || (D_8007DC04 == 4))) {
        if (D_8004563C < 2) {
            var_s2 = 5;
            D_8007BDF8 = 0;
            D_8007BD98 = 0;
        }
    }
    M2C_FIELD(D_80075568, void **, 0x64) = func_801043F8(0x8D40, 2, 0);
    D_80075560 = func_801043F8(0xA28, 2, 0);
    D_800755E8 = func_8021DD0C(D_8004AE48, (s16) var_s2);
    func_802BFC3C();
    if (M2C_FIELD(((D_80074BB0 * 0x34) + D_209890), s16 *, 8) == 1) {
        var_s1 = &D_80075518;
        if (D_8007DC05 != 0) {
            func_802BF468(0);
            goto block_28;
        }
    } else {
block_28:
        var_s1 = &D_80075518;
    }
    temp_v0_5 = *M2C_FIELD(var_s1, u16 **, 0x48);
    M2C_FIELD(var_s1, u16 *, 0x3E) = temp_v0_5;
    M2C_FIELD(var_s1, void **, 0x40) = func_801043F8((s32) (temp_v0_5 << 0x10) >> 0xA, 2, 0);
    M2C_FIELD(var_s1, void **, 0x44) = func_801043F8((s16) M2C_FIELD(var_s1, u16 *, 0x3E) * 0x30, 2, 0);
    D_80072BE4 = 3;
    D_80072BE0 = 2;
    D_80072BDC = 1;
    D_80072C14 = 0xA;
    D_80072BF8 = 0xB;
    D_80072C08 = 0xC;
    D_80072BCC = 0xD;
    D_80072C0C = 6;
    D_80072BF4 = 7;
    D_80072C00 = 8;
    D_80072BC8 = 9;
    D_80072C1C = 4;
    D_80072C18 = 5;
    D_80072BD8 = 0;
    D_80072BF0 = 0x12;
    D_80072C10 = 0x13;
    D_80072BD4 = 0x14;
    D_80072BC4 = 0x15;
    D_80072BE8 = 0xE;
    D_80072C04 = 0xF;
    D_80072BD0 = 0x10;
    D_80072BC0 = 0x11;
    func_8023EC64(M2C_FIELD(D_80075568, void **, 0x64), var_s1);
    D_800755E6 = (u16) (D_800755E6 | 0xC);
    func_8023B094(D_80075568);
    D_80075518 = -1;
    M2C_FIELD(var_s1, s16 *, 2) = -1;
    func_8023DF7C(D_80075568, var_s1, 0, 0xA, 0, 2);
    func_8023CEE0(D_80075568, var_s1);
    func_802D0B28(D_8005EA14, D_800755D9, 1);
    func_802BDFA8(D_8007558C, D_80075590, D_80075594);
    func_802BE0A8(D_8007558C, D_80075590, D_80075594);
    if (D_8007DB9B == 0) {
        func_80267600();
        func_802CC1F0();
    }
    if (D_80074BB0 != 0x14) {
        var_a2 = 0;
        if (D_8007DC05 == 0) {
            goto block_34;
        }
    } else {
block_34:
        D_80075F5C = -1;
        D_80075F5E = -1;
        D_80075F60 = -1;
        D_80075F62 = -1;
        var_a2 = 0;
    }
    var_a1 = D_80044EB0;
    D_8007BE2C = 0;
    D_8007BE9C = 0;
    D_8007BE98 = 0;
    D_8007BDEC = 0;
    D_8007BDE8 = 0;
    D_8007BDF0 = 0;
    D_80075574 = 0;
    D_80075578 = 0;
    D_8007557C = 0;
    D_8007BDA8 = (s32) D_80075574;
    D_8007BDAC = (s32) D_80075578;
    D_8007BDB0 = (s32) D_8007557C;
    D_8007BDB8 = (s32) D_8007558C;
    D_8007BDBC = (s32) D_80075590;
    D_8007BDC0 = (s32) D_80075594;
    D_8002DBE8 = 0;
    D_8002DBD8 = 0;
    D_8002DBD0 = 0;
    D_8002DBE0 = 0;
    D_8002DBDC = 0;
    D_8002DBEC = 0;
    D_8002DBD4 = -1;
    D_8002DBE4 = -1;
    D_80044E80 = 0;
    D_8006196C = 0;
    M2C_FIELD(M2C_FIELD(D_80075568, void **, 0x64), s16 *, 0x12) = 0x82;
    D_8004541C = 0;
    do {
        var_a0 = 0;
        var_v1 = var_a1;
loop_37:
        M2C_FIELD(var_v1, s32 *, 0x1C) = -1;
        var_v1 += 0xC;
        var_a0 += 1;
        M2C_FIELD(var_a1, s16 *, 0x16) = 0;
        if (var_a0 < 5) {
            goto loop_37;
        }
        var_a2 += 1;
        var_a1 += 0x58;
    } while (var_a2 < 0xF);
    if (D_80045440 != *(f32 *)0x2181E8) {
        func_802C05B8(var_a0, var_a1, var_a2, -1);
        return;
    }
    D_80044E8C = 0;
    D_8007BE68 = 0;
    D_8007BE6C = 0;
    D_8007BE70 = 0;
    D_8007BEB8 = 0;
    D_8007BEBC = 0;
    D_8007BEC0 = 0;
    D_8007BE7C = 0;
    D_8007BDF4 = 0;
    D_800755E0 = (u16) ((D_800755E0 & 0xFFF8) | 2);
    M2C_FIELD(D_80075510, s32 **, 8) = D_80075568;
    if (M2C_FIELD(((D_80074BB0 * 0x34) + D_209890), s16 *, 8) == 2) {
        D_800755D9 = -1;
    }
}
