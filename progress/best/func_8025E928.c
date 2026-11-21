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

M2C_UNK func_802255C0();                            /* extern */
M2C_UNK func_80246F50(s16, M2C_UNK);                /* extern */
M2C_UNK func_8025E9CC(M2C_UNK);                     /* extern */
M2C_UNK func_8025EA40(M2C_UNK);                     /* extern */
M2C_UNK func_8025EAE0(M2C_UNK *, M2C_UNK *, M2C_UNK, s32 *); /* extern */
M2C_UNK func_80268E6C(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_802C074C(s16, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK D_209890;
extern s8 D_8002C1BC;
extern s32 D_8002D424;
extern M2C_UNK D_8002DBD0;
extern s32 D_8002DBD4;
extern s32 D_8002DBE4;
extern M2C_UNK D_80030630;
extern s16 D_80044E9A;
extern s32 D_80052778;
extern s32 D_80074BB0;
extern M2C_UNK D_80074C3A;
extern s32 D_80074C3C;
extern s32 D_80074C44;
extern M2C_UNK D_80075F58;

void func_8025E928(void) {
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_v0;

    func_802255C0();
    D_8002C1BC = 1;
    D_80052778 = D_80074C44;
    func_80268E6C(4, -0x7530);
    temp_a0 = *((M2C_FIELD(&D_80074C3A, s8 *, 0) << 5) + &D_80030630);
    if (temp_a0 != D_8002DBD4) {
        if (M2C_FIELD(&D_80074C3A, s8 *, 0) == -1) {
            func_80246F50(-1, 0);
            func_8025E9CC(-1);
            return;
        }
        func_80246F50(temp_a0, 0);
        func_802C074C(*((M2C_FIELD(&D_80074C3A, s8 *, 0) << 5) + &D_80030630), 0, 0);
        goto block_5;
    }
block_5:
    temp_a0_2 = *((M2C_FIELD(&D_80074C3A, s8 *, 1) << 5) + &D_80030630);
    if (temp_a0_2 != D_8002DBE4) {
        if (M2C_FIELD(&D_80074C3A, s8 *, 1) == -1) {
            func_80246F50(-1, 1);
            func_8025EA40(-1);
            return;
        }
        func_80246F50(temp_a0_2, 1);
        func_802C074C(*((M2C_FIELD(&D_80074C3A, s8 *, 1) << 5) + &D_80030630), 1, 0);
        goto block_10;
    }
block_10:
    D_80074C3C = -1;
    M2C_FIELD(&D_80075F58, s16 *, 8) = -1;
    M2C_FIELD(&D_80075F58, s16 *, 0xA) = -1;
    if (M2C_FIELD(((D_80074BB0 * 0x34) + &D_209890), s16 *, 8) == 0) {
        func_8025EAE0(&D_209890, &D_80030630, -1, &D_80074C3C);
        return;
    }
    if (*((M2C_FIELD(&D_80074C3A, s8 *, 0) << 5) + &D_80030630) == 0x19) {
        D_80074C3C = 0x19;
    }
    temp_v0 = *((M2C_FIELD(&D_80074C3A, s8 *, 1) << 5) + &D_80030630);
    if (temp_v0 == 0x19) {
        D_80074C3C = (s32) temp_v0;
    }
    D_80044E9A = 0;
    D_8002D424 = 0;
    M2C_FIELD(&D_8002DBD0, s32 *, 0xC) = 0;
    M2C_FIELD(&D_8002DBD0, s32 *, 0x1C) = 0;
}
