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
M2C_UNK func_802C3274();                            /* extern */
s32 func_802C43C0();                                /* extern */
M2C_UNK func_802C7100(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_802C717C();                            /* extern */
M2C_UNK func_802CC190();                            /* extern */
extern M2C_UNK D_8002D410;
extern s32 D_8002D420;
extern M2C_UNK D_8002DBD0;
extern f32 D_80074BC0;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_802C70B4(void) {
    if (!(D_8002D420 & 0x40)) {
        if (func_802C43C0() == 0) {
            func_802C7100(&D_80075568, &D_80075518);
            return;
        }
        func_8023DF7C(&D_80075568, &D_80075518, 0xE, 0xA, 0x1E, 2);
        goto block_5;
    }
block_5:
    if (D_8002D420 & 4) {
        func_802C717C();
        return;
    }
    if (D_8002D420 & 8) {
        M2C_FIELD(&D_80075568, f32 *, 0x1C) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x1C) + (D_80074BC0 * M2C_FIELD(&D_8002D410, f32 *, 4)));
    }
    if ((M2C_FIELD(&D_8002DBD0, s32 *, 0xC) == 0) && (M2C_FIELD(&D_8002DBD0, s32 *, 0x1C) == 0)) {
        func_8023DF7C(&D_80075568, &D_80075518, 0xC, 0xA, 0x46, 2);
    }
    func_802C3274();
    func_802CC190();
}
