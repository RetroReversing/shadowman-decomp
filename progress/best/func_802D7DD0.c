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

extern int D_8007DB74;
extern int D_8007DB70;
extern unsigned char D_8007DB77;
extern unsigned short D_80000320;
s32 func_80107D8C();
s32 func_8021FB8C();
s32 func_80229F98();
s32 func_8022DDD0();
s32 func_8022DEA0();
s32 func_8022DEB0();
s32 func_8022F084();
s32 func_80230DF8();
s32 func_802D7FDC();
s32 func_802DA9F0();
extern char D_2D8010[];
extern char D_8000031C[];
extern s16 D_8002C110;
extern s16 D_8002C112;
extern s8 D_8002C1BC;
extern char D_80046008[];
extern s32 *D_80052778;
extern void *D_80056998;
extern char D_8007DB68[];
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
    if ((D_8007DB74 & 0x7F00) != 0x200) {
        func_8021FB8C(0, 0, D_8002C110, D_8002C112, 0x140, 0xF0, D_8007DB70 + 0x200, D_8007DB70, 0, 1, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    D_8007DB77 = 0U;
    if (!(func_8022DEA0() & 0xFF)) {
        if (D_8007DB74 & 0x7F00) {
            D_8002C1BC = 1;
            D_80052778 = D_2D8010;
            func_802D7FDC(D_8000031C, &D_8002C1BC, *(D_80000320 + D_80046008));
            return;
        }
        if (func_80229F98(D_8000031C) == 0) {
            func_8022DDD0(4, 0x3C, 0, 0, 0);
            if (D_8007DC04 != 5) {
                func_80107D8C(0x3C, -1, 0, 0);
            }
            D_8007DB74 = (s32) ((D_8007DB74 & ~0x7F00) | 0x100);
        }
        goto block_10;
    }
block_10:
    if (D_8007DB77 != 0) {
        func_802DA9F0(D_8007DB77);
    }
    func_8022DEB0();
}
