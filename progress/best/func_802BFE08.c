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

void *func_801043F8(s32, M2C_UNK, M2C_UNK);         /* extern */
s32 func_8021DD0C(M2C_UNK *, s16);                  /* extern */
M2C_UNK func_8023B094(M2C_UNK *);                   /* extern */
M2C_UNK func_8023CEE0(M2C_UNK *, s16 *);            /* extern */
M2C_UNK func_8023DCBC(M2C_UNK *);                   /* extern */
M2C_UNK func_8023DF7C(M2C_UNK *, s16 *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_8023EC64(void *, s16 *);               /* extern */
s32 func_8025FEA0(M2C_UNK);                         /* extern */
M2C_UNK func_80267600();                            /* extern */
M2C_UNK func_8026E26C(M2C_UNK);                     /* extern */
M2C_UNK func_802BDFA8(M2C_UNK32, M2C_UNK32, M2C_UNK32); /* extern */
M2C_UNK func_802BE0A8(M2C_UNK32, M2C_UNK32, M2C_UNK32); /* extern */
M2C_UNK func_802BF468(M2C_UNK);                     /* extern */
M2C_UNK func_802BF8EC(M2C_UNK *);                   /* extern */
M2C_UNK func_802BFC3C();                            /* extern */
M2C_UNK func_802BFF08(M2C_UNK *);                   /* extern */
M2C_UNK func_802C00E8(s32);                         /* extern */
M2C_UNK func_802C05B8(s32, M2C_UNK *, s32, M2C_UNK); /* extern */
M2C_UNK func_802CC1F0();                            /* extern */
M2C_UNK func_802D0B28(s32, s8, M2C_UNK);            /* extern */
extern M2C_UNK D_209890;
extern M2C_UNK D_21A15C;
extern M2C_UNK D_8002DBD0;
extern s32 D_800305B8;
extern M2C_UNK D_80030E40;
extern M2C_UNK D_800374B4;
extern M2C_UNK D_8003A4F4;
extern s32 D_80044E80;
extern s32 D_80044E8C;
extern M2C_UNK D_80044EA0;
extern M2C_UNK D_80044EB0;
extern s16 D_8004541C;
extern void *D_80045438;
extern f32 D_80045440;
extern s32 D_8004563C;
extern M2C_UNK D_80045640;
extern M2C_UNK D_8004566C;
extern M2C_UNK D_80045930;
extern M2C_UNK D_8004AE48;
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
extern s16 D_80075518;
extern void *D_80075560;
extern M2C_UNK D_80075568;
extern M2C_UNK D_80075598;
extern s32 D_800755F8;
extern M2C_UNK D_80075F58;
extern u8 D_8007BD98;
extern M2C_UNK D_8007BDA8;
extern M2C_UNK D_8007BDB8;
extern M2C_UNK D_8007BDE8;
extern s32 D_8007BDF4;
extern s8 D_8007BDF8;
extern s32 D_8007BE2C;
extern M2C_UNK D_8007BE68;
extern s32 D_8007BE7C;
extern M2C_UNK D_8007BE98;
extern M2C_UNK D_8007BEB8;
extern M2C_UNK D_8007DB78;
extern u8 D_8007DB79;
extern u8 D_8007DC04;
extern u8 D_8007DC05;

void func_802BFE08(void) {
    M2C_UNK *var_a1;
    M2C_UNK *var_v1;
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

    D_8007BD98 = M2C_FIELD(((D_80074BB0 * 0x34) + &D_209890), u8 *, 9);
    if ((D_80074BB0 == 8) && (M2C_FIELD(((D_800305B8 * 0x14) + &D_21A15C), s32 *, 4) == 0x10)) {
        M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x24) = (M2C_UNK32) *(M2C_UNK32 *)0x2181D8;
        M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x28) = (M2C_UNK32) *(M2C_UNK32 *)0x2181DC;
        M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x2C) = (M2C_UNK32) *(M2C_UNK32 *)0x2181E0;
    }
    if (M2C_FIELD(((D_80074BB0 * 0x34) + &D_209890), s16 *, 8) == 0) {
        func_802BFF08(&D_209890);
        return;
    }
    D_8004563C = 0;
    M2C_FIELD(&D_80045930, M2C_UNK **, 8) = &D_80075568;
    M2C_FIELD(&D_80045930, s16 **, 0xC) = &D_80075518;
    M2C_FIELD(&D_80045930, M2C_UNK **, 0x1C) = &D_80075568;
    M2C_FIELD(&D_80045930, s16 **, 0x20) = &D_80075518;
    func_8023DCBC(&D_800374B4);
    D_800752D0 = 0;
    M2C_FIELD(&D_80075568, s16 **, 0x6C) = &D_80075518;
    M2C_FIELD(&D_80075518, M2C_UNK **, 0x30) = &D_8003A4F4;
    M2C_FIELD(&D_80075518, M2C_UNK **, 0x34) = &D_800374B4;
    M2C_FIELD(&D_80075518, s16 *, 4) = -1;
    M2C_FIELD(&D_80075518, s16 *, 2) = -1;
    M2C_FIELD(&D_80075518, s16 *, 0) = -1;
    M2C_FIELD(&D_80075518, s16 *, 0x22) = -1;
    M2C_FIELD(&D_80075518, s16 *, 0x20) = -1;
    M2C_FIELD(&D_80075518, s16 *, 0x1E) = -1;
    func_8023DF7C(&D_80075568, &D_80075518, 1, 0xA, 0, 2);
    D_800755F8 = 0;
    if (M2C_FIELD(((D_80074BB0 * 0x34) + &D_209890), s16 *, 8) == 0) {
        D_8007BDF8 = 0;
        func_802C00E8(D_8004563C);
        return;
    }
    D_8007BDF8 = 1;
    func_802BF8EC(&D_209890);
    temp_v0 = (D_8004563C * 6) + &D_80045640;
    var_s2 = (u16) M2C_FIELD(temp_v0, s16 *, 4);
    if (M2C_FIELD(temp_v0, s16 *, 4) == -1) {
        var_s2 = *((D_8007DB79 * 2) + &D_80044EA0);
    }
    temp_v0_2 = *(D_8007DB79 + &D_8004566C);
    M2C_FIELD(&D_80030E40, s32 *, 0x14) = (s32) temp_v0_2;
    if (temp_v0_2 & 1) {
        func_8026E26C(0x40);
    }
    if (M2C_FIELD(&D_80030E40, s32 *, 0x14) & 2) {
        func_8026E26C(0x41);
    }
    if (M2C_FIELD(&D_80030E40, s32 *, 0x14) & 4) {
        func_8026E26C(0x42);
    }
    if (M2C_FIELD(&D_80030E40, s32 *, 0x14) & 8) {
        func_8026E26C(0x43);
    }
    temp_v0_3 = &D_80075598 + 4;
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
    M2C_FIELD(&D_80075568, void **, 0x64) = func_801043F8(0x8D40, 2, 0);
    D_80075560 = func_801043F8(0xA28, 2, 0);
    M2C_FIELD(&D_80075568, s32 *, 0x80) = func_8021DD0C(&D_8004AE48, (s16) var_s2);
    func_802BFC3C();
    if (M2C_FIELD(((D_80074BB0 * 0x34) + &D_209890), s16 *, 8) == 1) {
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
    func_8023EC64(M2C_FIELD(&D_80075568, void **, 0x64), var_s1);
    M2C_FIELD(&D_80075568, u16 *, 0x7E) = (u16) (M2C_FIELD(&D_80075568, u16 *, 0x7E) | 0xC);
    func_8023B094(&D_80075568);
    M2C_FIELD(&D_80075518, s16 *, 0) = -1;
    M2C_FIELD(var_s1, s16 *, 2) = -1;
    func_8023DF7C(&D_80075568, var_s1, 0, 0xA, 0, 2);
    func_8023CEE0(&D_80075568, var_s1);
    func_802D0B28(D_8005EA14, M2C_FIELD(&D_80075568, s8 *, 0x71), 1);
    func_802BDFA8(M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x24), M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x28), M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x2C));
    func_802BE0A8(M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x24), M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x28), M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x2C));
    if (M2C_FIELD(&D_8007DB78, u8 *, 0x23) == 0) {
        func_80267600();
        func_802CC1F0();
    }
    if (D_80074BB0 != 0x14) {
        var_a2 = 0;
        if (M2C_FIELD(&D_8007DB78, u8 *, 0x8D) == 0) {
            goto block_34;
        }
    } else {
block_34:
        M2C_FIELD(&D_80075F58, s16 *, 4) = -1;
        M2C_FIELD(&D_80075F58, s16 *, 6) = -1;
        M2C_FIELD(&D_80075F58, s16 *, 8) = -1;
        M2C_FIELD(&D_80075F58, s16 *, 0xA) = -1;
        var_a2 = 0;
    }
    var_a1 = &D_80044EB0;
    D_8007BE2C = 0;
    M2C_FIELD(&D_8007BE98, s32 *, 4) = 0;
    M2C_FIELD(&D_8007BE98, s32 *, 0) = 0;
    M2C_FIELD(&D_8007BDE8, s32 *, 4) = 0;
    M2C_FIELD(&D_8007BDE8, s32 *, 0) = 0;
    M2C_FIELD(&D_8007BDE8, s32 *, 8) = 0;
    M2C_FIELD(&D_80075568, s32 *, 0xC) = 0;
    M2C_FIELD(&D_80075568, s32 *, 0x10) = 0;
    M2C_FIELD(&D_80075568, s32 *, 0x14) = 0;
    M2C_FIELD(&D_8007BDA8, s32 *, 0) = (s32) M2C_FIELD(&D_80075568, s32 *, 0xC);
    M2C_FIELD(&D_8007BDA8, s32 *, 4) = (s32) M2C_FIELD(&D_80075568, s32 *, 0x10);
    M2C_FIELD(&D_8007BDA8, s32 *, 8) = (s32) M2C_FIELD(&D_80075568, s32 *, 0x14);
    M2C_FIELD(&D_8007BDB8, M2C_UNK32 *, 0) = (M2C_UNK32) M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x24);
    M2C_FIELD(&D_8007BDB8, M2C_UNK32 *, 4) = (M2C_UNK32) M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x28);
    M2C_FIELD(&D_8007BDB8, M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x2C);
    M2C_FIELD(&D_8002DBD0, s32 *, 0x18) = 0;
    M2C_FIELD(&D_8002DBD0, s32 *, 8) = 0;
    M2C_FIELD(&D_8002DBD0, s32 *, 0) = 0;
    M2C_FIELD(&D_8002DBD0, s32 *, 0x10) = 0;
    M2C_FIELD(&D_8002DBD0, s32 *, 0xC) = 0;
    M2C_FIELD(&D_8002DBD0, s32 *, 0x1C) = 0;
    M2C_FIELD(&D_8002DBD0, s32 *, 4) = -1;
    M2C_FIELD(&D_8002DBD0, s32 *, 0x14) = -1;
    D_80044E80 = 0;
    D_8006196C = 0;
    M2C_FIELD(M2C_FIELD(&D_80075568, void **, 0x64), s16 *, 0x12) = 0x82;
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
    M2C_FIELD(&D_8007BE68, s32 *, 0) = 0;
    M2C_FIELD(&D_8007BE68, s32 *, 4) = 0;
    M2C_FIELD(&D_8007BE68, s32 *, 8) = 0;
    M2C_FIELD(&D_8007BEB8, s32 *, 0) = 0;
    M2C_FIELD(&D_8007BEB8, s32 *, 4) = 0;
    M2C_FIELD(&D_8007BEB8, s32 *, 8) = 0;
    D_8007BE7C = 0;
    D_8007BDF4 = 0;
    M2C_FIELD(&D_80075568, u16 *, 0x78) = (u16) ((M2C_FIELD(&D_80075568, u16 *, 0x78) & 0xFFF8) | 2);
    M2C_FIELD(D_80075510, M2C_UNK **, 8) = &D_80075568;
    if (M2C_FIELD(((D_80074BB0 * 0x34) + &D_209890), s16 *, 8) == 2) {
        M2C_FIELD(&D_80075568, s8 *, 0x71) = -1;
    }
}
