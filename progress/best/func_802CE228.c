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
M2C_UNK func_802CE2BC(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern s32 D_8002D424;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern u8 D_8007DBC1;

void func_802CE228(void) {
    if (D_8007DBC1 == 0) {
        if (M2C_FIELD(((M2C_FIELD(&D_80075518, s16 *, 4) * 0x38) + M2C_FIELD(&D_80075518, s32 *, 0x30)), u16 *, 4) & 4) {
            if (D_8002D424 & 0x200) {
                func_802CE2BC(&D_80075568, &D_80075518, 0xE5, 0xA, 0x14);
            }
        } else if (D_8002D424 & 0x200) {
            func_8023DF7C(&D_80075568, &D_80075518, 0xE3, 0xA, 0, 1);
        }
    }
}
