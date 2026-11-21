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

M2C_UNK func_80107D8C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8021FB8C(M2C_UNK, M2C_UNK, s16, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_80229F98(M2C_UNK *);                       /* extern */
M2C_UNK func_8022DDD0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_8022DEA0();                                /* extern */
M2C_UNK func_8022DEB0();                            /* extern */
M2C_UNK func_8022F084();                            /* extern */
M2C_UNK func_80230DF8(M2C_UNK);                     /* extern */
M2C_UNK func_802D7FDC(M2C_UNK *, s8 *, u8);         /* extern */
M2C_UNK func_802DA9F0(u8);                          /* extern */
extern M2C_UNK D_2D8010;
extern M2C_UNK D_8000031C;
extern s16 D_8002C110;
extern s16 D_8002C112;
extern s8 D_8002C1BC;
extern M2C_UNK D_80046008;
extern M2C_UNK *D_80052778;
extern void *D_80056998;
extern M2C_UNK D_8007DB68;
extern u8 D_8007DC04;

void func_802D7DD0(void) {
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a2;
    void *temp_v0;
    void *temp_v1;

    func_80230DF8(1);
    func_8022F084();
    temp_v0 = D_80056998 + 8;
    M2C_FIELD(D_80056998, s32 *, 0) = 0xE7000000;
    M2C_FIELD(D_80056998, s32 *, 4) = 0;
    temp_a1 = temp_v0 + 8;
    M2C_FIELD(temp_v0, s32 *, 4) = 0x200004;
    temp_a2 = temp_v0 + 0x10;
    D_80056998 = temp_v0;
    D_80056998 = temp_a1;
    M2C_FIELD(D_80056998, s32 *, 8) = 0xD9FFFFFF;
    M2C_FIELD(temp_v0, s32 *, 8) = 0xE2001D00;
    M2C_FIELD(temp_a1, s32 *, 4) = 4;
    temp_a1_2 = temp_v0 + 0x18;
    M2C_FIELD(temp_v0, s32 *, 0x10) = 0xE3000C00;
    M2C_FIELD(temp_a2, s32 *, 4) = 0x80000;
    temp_v1 = temp_v0 + 0x20;
    D_80056998 = temp_a2;
    D_80056998 = temp_a1_2;
    D_80056998 = temp_v1;
    M2C_FIELD(temp_v0, s32 *, 0x18) = 0xFC119623;
    M2C_FIELD(temp_a1_2, s32 *, 4) = 0xFF2FFFFF;
    M2C_FIELD(temp_v0, s32 *, 0x20) = 0xE200001C;
    M2C_FIELD(temp_v1, s32 *, 4) = 0x504240;
    D_80056998 = temp_v0 + 0x28;
    if ((M2C_FIELD(&D_8007DB68, s32 *, 0xC) & 0x7F00) != 0x200) {
        func_8021FB8C(0, 0, D_8002C110, D_8002C112, 0x140, 0xF0, M2C_FIELD(&D_8007DB68, s32 *, 8) + 0x200, M2C_FIELD(&D_8007DB68, s32 *, 8), 0, 1, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    M2C_FIELD(&D_8007DB68, u8 *, 0xF) = 0U;
    if (!(func_8022DEA0() & 0xFF)) {
        if (M2C_FIELD(&D_8007DB68, s32 *, 0xC) & 0x7F00) {
            D_8002C1BC = 1;
            D_80052778 = &D_2D8010;
            func_802D7FDC(&D_8000031C, &D_8002C1BC, *(M2C_FIELD(&D_8000031C, u16 *, 4) + &D_80046008));
            return;
        }
        if (func_80229F98(&D_8000031C) == 0) {
            func_8022DDD0(4, 0x3C, 0, 0, 0);
            if (D_8007DC04 != 5) {
                func_80107D8C(0x3C, -1, 0, 0);
            }
            M2C_FIELD(&D_8007DB68, s32 *, 0xC) = (s32) ((M2C_FIELD(&D_8007DB68, s32 *, 0xC) & ~0x7F00) | 0x100);
        }
        goto block_10;
    }
block_10:
    if (M2C_FIELD(&D_8007DB68, u8 *, 0xF) != 0) {
        func_802DA9F0(M2C_FIELD(&D_8007DB68, u8 *, 0xF));
    }
    func_8022DEB0();
}
