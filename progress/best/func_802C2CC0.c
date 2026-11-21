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
M2C_UNK func_802C2DD4(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_802C2DDC(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_802C2DE4(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern f32 D_8002D418;
extern s32 D_8002D420;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_802C2CC0(void) {
    if (D_8002D420 & 1) {
        if (((D_8002D420 & 0x24) == 0x24) || (D_8002D420 & 0x800000)) {
            func_802C2DDC(&D_80075568, &D_80075518, 0xA6, 0xA);
            return;
        }
        if (((D_8002D420 & 0x28) == 0x28) || (D_8002D420 & 0x01000000)) {
            func_802C2DDC(&D_80075568, &D_80075518, 0xA7, 0xA);
            return;
        }
        if (D_8002D418 < *(f32 *)0x2183A0) {
            func_802C2DD4(&D_80075568, &D_80075518);
            return;
        }
        if (M2C_FIELD(&D_80075518, s16 *, 4) == 0) {
            func_802C2DE4(&D_80075568, &D_80075518, 2, 0xA);
            return;
        }
        if (M2C_FIELD(&D_80075518, s16 *, 4) == 1) {
            func_802C2DE4(&D_80075568, &D_80075518, 3, 0xA);
            return;
        }
        func_8023DF7C(&D_80075568, &D_80075518, 4, 0xA, 0x4B, 2);
        goto block_19;
    }
block_19:
    if ((D_8002D420 & 2) && ((D_8002D420 & 0x24) != 0x24) && ((D_8002D420 & 0x28) != 0x28)) {
        func_8023DF7C(&D_80075568, &D_80075518, 9, 0xA, 0x28, 2);
    }
}
