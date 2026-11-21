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

M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, s16, s32, s32); /* extern */
M2C_UNK func_802C2F30();                            /* extern */
M2C_UNK func_802C2FE4();                            /* extern */
M2C_UNK func_802C3274();                            /* extern */
M2C_UNK func_802C382C();                            /* extern */
M2C_UNK func_802C3934(f32);                         /* extern */
M2C_UNK func_802C3E58();                            /* extern */
M2C_UNK func_802C413C();                            /* extern */
M2C_UNK func_802C48BC(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_802C4944(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_802CC190();                            /* extern */
extern f32 D_8002D418;
extern s32 D_8002D420;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_802C4850(void) {
    if (D_8002D420 & 0x01800020) {
        if (D_8002D420 & 0x800004) {
            func_802C48BC(&D_80075568, &D_80075518);
            return;
        }
        if (D_8002D420 & 0x01000008) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x63, 0xA, 0x4B, 2);
        }
        goto block_6;
    }
block_6:
    if (M2C_FIELD(&D_80075518, s16 *, 4) == 4) {
        if (D_8002D418 < *(f32 *)0x21844C) {
            func_802C4944(&D_80075568, &D_80075518);
            return;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        func_802C413C();
        func_802C2FE4();
        func_802C3934(*(f32 *)0x218454);
        func_802C3274();
        func_802CC190();
        func_802C382C();
        func_802C3E58();
        func_802C2F30();
        return;
    }
    if ((M2C_FIELD(&D_80075518, s16 *, 4) == 8) && (*(f32 *)0x218450 < D_8002D418)) {
        func_8023DF7C(&D_80075568, &D_80075518, 4, M2C_FIELD(&D_80075518, s16 *, 0x16), 0, 2);
    }
    func_802C413C();
    func_802C2FE4();
    func_802C3934(*(f32 *)0x218454);
    func_802C3274();
    func_802CC190();
    func_802C382C();
    func_802C3E58();
    func_802C2F30();
}
