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

M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_80265348();                            /* extern */
s32 func_802654E8();                                /* extern */
M2C_UNK func_802CC680();                            /* extern */
M2C_UNK func_802CD5BC();                            /* extern */
M2C_UNK func_802CD5C0();                            /* extern */
extern s32 D_8002D420;
extern s32 D_8002D424;
extern M2C_UNK D_8002DBD0;
extern f32 D_8003AD88;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_802CD43C(void) {
    func_802CC680();
    M2C_FIELD(&D_80075568, s32 *, 0x18) = 0;
    func_80265348();
    if (D_8002D420 & 1) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x24, 0xA, 0x8C, 2);
        func_802CD5C0();
        return;
    }
    if (D_8002D424 & 0x80) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x28, 0xA, 0x1E, 2);
        M2C_FIELD(M2C_FIELD(&D_80075518, void **, 0x44), s32 *, 0x14C) = 0;
        M2C_FIELD(M2C_FIELD(&D_80075518, void **, 0x44), s32 *, 0x20C) = 0;
    }
    if (func_802654E8() == 0) {
        func_8023DF7C(&D_80075568, &D_80075518, 0, 0xA, 0x28, 2);
    }
    if ((D_8002D420 & 0x28) != 0x28) {
        if (!(D_8002D420 & 0x01000000)) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x23, 0xA, 0x8C, 2);
        }
    }
    if (M2C_FIELD(&D_8002DBD0, s32 *, 8) != 0) {
        if (M2C_FIELD(&D_8002DBD0, s32 *, 0x18) != 0) {
            func_802CD5C0();
            return;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        func_802CD5BC();
        return;
    }
    if (M2C_FIELD(&D_8002DBD0, s32 *, 0x18) != 0) {
        func_802CD5BC();
        return;
    }
    D_8003AD88 = *(f32 *)0x2187EC;
}
