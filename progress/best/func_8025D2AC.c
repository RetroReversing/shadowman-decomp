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

extern unsigned char D_8007DB7E;
extern unsigned char D_8007DB98;
s32 func_8021FB8C();
s32 func_80228CE0();
s32 func_8022DEB0();
s32 func_80232310();
s32 func_80233CD8();
s32 func_802387D0();
s32 func_8023934C();
s32 func_80241EF8();
s32 func_8024249C();
s32 func_80242E68();
s32 func_8025D33C();
s32 func_8025D540();
s32 func_802610F4();
s32 func_802688E8();
s32 func_80268F50();
s32 func_80273634();
s32 func_80296D8C();
s32 func_8029FC10();
s32 func_802A6334();
s32 func_802B7760();
s32 func_802D65E8();
extern char D_209890[];
extern s32 D_8002C0F0;
extern s16 D_8002C110;
extern s16 D_8002C112;
extern u8 D_8002C1BD;
extern s32 D_8002D2B4;
extern char D_80036AF8[];
extern s32 D_800458F0;
extern void *D_8005387C;
extern s32 D_8005EA14;
extern s32 D_80074BB0;
extern s32 D_80074BF0;
extern u8 D_8007C2E1;
extern char D_8007DB78[];

void func_8025D2AC(void) {
    void *temp_v1;

    func_80241EF8();
    func_802387D0();
    func_802688E8();
    func_8024249C();
    if (D_8007DB98 == 0) {
        func_80232310(func_80233CD8(D_8005EA14, D_8002D2B4));
    }
    if (!(D_8002C0F0 & 0x8000)) {
        if (D_8002C1BD != 0) {
            func_8025D33C();
            return;
        }
        temp_v1 = D_8005387C;
        D_8005387C += 8;
        M2C_FIELD(temp_v1, s32 *, 0) = 0xE200001C;
        M2C_FIELD(temp_v1, s32 *, 4) = 0x552078;
        goto block_7;
    }
block_7:
    func_80273634();
    func_802B7760();
    if ((D_800458F0 != 0) && (D_8007C2E1 != 0)) {
        func_8021FB8C(0, 0, D_8002C110, D_8002C112, 2, 2, D_80036AF8, 0, 0, 3, 0, 0, 0, 0xFF);
    }
    func_8023934C(D_80074BF0);
    func_802610F4(D_8002D2B4);
    func_80296D8C();
    func_802A6334();
    if (D_8007DB7E != 0) {
        func_80228CE0();
    }
    if (D_8007DB98 == 0) {
        func_8029FC10();
    }
    if (D_800458F0 != 0) {
        func_802D65E8(0);
    }
    func_8022DEB0();
    func_80242E68();
    if ((D_8007DB7E == 0) && (D_800458F0 == 0)) {
        func_80268F50(M2C_FIELD(((D_80074BB0 * 0x34) + D_209890), s16 *, 8));
    }
    func_8025D540();
}
