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
M2C_UNK func_80268428(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_80269DB8();                                /* extern */
extern s32 D_800458F0;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern s32 D_800755F8;

void func_802683B0(void) {
    if (((func_80269DB8() & 0xFF) == 1) && (D_800458F0 == 0)) {
        if (!(M2C_FIELD(&D_80075518, u16 *, 0x1C) & 4)) {
            if (D_800755F8 != 0) {
                func_80268428(&D_80075568, &D_80075518, 0x67, 0xA);
                return;
            }
            func_8023DF7C(&D_80075568, &D_80075518, 0x4F, 0xA, 0x4B, 2);
            goto block_7;
        }
block_7:
        if (M2C_FIELD(&D_80075518, s16 *, 0) != -1) {
            func_8023DF7C(&D_80075568, &D_80075518, -1, 0xA, 0x4B, 0);
        }
        if (M2C_FIELD(&D_80075518, s16 *, 2) != -1) {
            func_8023DF7C(&D_80075568, &D_80075518, -1, 0xA, 0x4B, 1);
        }
    }
}
