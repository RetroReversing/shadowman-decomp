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

s32 func_80230A3C();
s32 func_80247084();
s32 func_802470A0();
s32 func_8025BF10();
s32 func_8026D780();
extern char D_8002DBD0[];
extern char D_80075B40[];
extern char D_8007DB78[];

void func_80246F50(s32 arg0, s32 arg1) {
    u16 *temp_s0_2;
    u16 temp_v0_2;
    u16 temp_v1_2;
    void *temp_s0;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_3;

    func_8026D780(arg1);
    temp_s0 = (arg1 * 0x10) + D_8002DBD0;
    temp_v0 = M2C_FIELD(temp_s0, void **, 0);
    if (temp_v0 != NULL) {
        temp_v1 = M2C_FIELD(M2C_FIELD(temp_v0, void **, 8), void **, 0x64);
        if (temp_v1 != NULL) {
            M2C_FIELD(temp_v1, u16 *, 0x3C) |= 4;
        }
        func_8025BF10(M2C_FIELD(temp_s0, void **, 0));
        M2C_FIELD(temp_s0, void **, 0) = NULL;
        M2C_FIELD(temp_s0, s32 *, 8) = 0;
        M2C_FIELD(temp_s0, s32 *, 4) = -1;
    }
    if (arg0 != -1) {
        temp_v1_2 = *((arg1 * 2) + D_80075B40);
        if (temp_v1_2 != 0xFFFF) {
            func_80230A3C(temp_v1_2);
        }
        temp_v1_3 = (arg1 * 0x10) + D_8002DBD0;
        M2C_FIELD(temp_v1_3, s32 *, 8) = 1;
        M2C_FIELD(temp_v1_3, s32 *, 4) = arg0;
        func_802470A0(arg0, arg1);
        func_80247084();
        return;
    }
    temp_s0_2 = (arg1 * 2) + D_80075B40;
    temp_v0_2 = *temp_s0_2;
    if (temp_v0_2 != 0xFFFF) {
        func_80230A3C(temp_v0_2);
    }
    *temp_s0_2 = 0xFFFF;
    M2C_FIELD(((arg1 * 0x10) + D_8002DBD0), s32 *, 4) = arg0;
    M2C_FIELD(((arg1 * 4) + D_8007DB78), s32 *, 0x30) = arg0;
    M2C_FIELD((arg1 + D_8007DB78), s8 *, 0x2C) = 0;
}
