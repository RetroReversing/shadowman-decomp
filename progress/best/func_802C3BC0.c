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

M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_802C392C();                            /* extern */
M2C_UNK func_802C3C60(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_802C3C68(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_802C3CC0(M2C_UNK *, M2C_UNK *);        /* extern */
extern s32 D_8002D420;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_802C3BC0(void) {
    s32 temp_v0;

    func_802C392C();
    temp_v0 = D_8002D420 & 4;
    if (D_8002D420 & 0x20) {
        if ((D_8002D420 & 4) != 0) {
            func_802C3C68(&D_80075568, &D_80075518, 0x32, 0xA);
            return;
        }
        if (D_8002D420 & 8) {
            func_802C3C68(&D_80075568, &D_80075518, 0x33, 0xA);
            return;
        }
        goto block_12;
    }
    if ((D_8002D420 & 4) != 0) {
        func_802C3C60(&D_80075568, &D_80075518);
        return;
    }
    if (D_8002D420 & 8) {
        func_8023DF7C(&D_80075568, &D_80075518, 7, 0xA, 0x4B, 2);
    }
block_12:
    if (D_8002D420 & 0x800000) {
        func_802C3CC0(&D_80075568, &D_80075518);
        return;
    }
    if (D_8002D420 & 0x01000000) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x33, 0xA, 0x19, 2);
    }
}
