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
M2C_UNK func_802C2CC0();                            /* extern */
M2C_UNK func_802C2F30();                            /* extern */
M2C_UNK func_802C3274();                            /* extern */
M2C_UNK func_802C382C();                            /* extern */
M2C_UNK func_802C3934(f32);                         /* extern */
M2C_UNK func_802C3E58();                            /* extern */
M2C_UNK func_802C413C();                            /* extern */
M2C_UNK func_802C6A70(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_802CC190();                            /* extern */
extern s32 D_8002D420;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_802C6A1C(void) {
    if (D_8002D420 & 0x20) {
        if (D_8002D420 & 4) {
            func_802C6A70(&D_80075568, &D_80075518);
            return;
        }
        if (D_8002D420 & 8) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x63, 0xA, 0x4B, 2);
        }
        goto block_6;
    }
block_6:
    if (D_8002D420 & 0x800000) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x62, 0xA, 0x4B, 2);
    }
    if (D_8002D420 & 0x01000000) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x63, 0xA, 0x4B, 2);
    }
    func_802C2CC0();
    func_802C413C();
    func_802C3934(*(f32 *)0x218508);
    func_802C3274();
    func_802CC190();
    func_802C382C();
    func_802C3E58();
    func_802C2F30();
}
