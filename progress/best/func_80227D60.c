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

M2C_UNK func_80268F50(s16);                         /* extern */
extern M2C_UNK D_209890;
extern s32 D_80074BB0;
extern M2C_UNK D_80075AA8;

void func_80227D60(s32 arg0) {
    u8 temp_s1;

    temp_s1 = M2C_FIELD(&D_80075AA8, u8 *, 0x6B);
    M2C_FIELD(&D_80075AA8, s32 *, 0x68) = (s32) (arg0 & 0xFF);
    M2C_FIELD(&D_80075AA8, s32 *, 0x2C) = 0xB4;
    M2C_FIELD(&D_80075AA8, s32 *, 0x34) = 0xB4;
    M2C_FIELD(&D_80075AA8, s32 *, 0x24) = 0xB4;
    M2C_FIELD(&D_80075AA8, s32 *, 0x3C) = 0xB4;
    M2C_FIELD(&D_80075AA8, s32 *, 0x1C) = 0xB4;
    M2C_FIELD(&D_80075AA8, s32 *, 0x28) = 1;
    M2C_FIELD(&D_80075AA8, s32 *, 0x30) = 1;
    M2C_FIELD(&D_80075AA8, s32 *, 0x20) = 1;
    M2C_FIELD(&D_80075AA8, s32 *, 0x38) = 1;
    M2C_FIELD(&D_80075AA8, s32 *, 0x18) = 1;
    func_80268F50(M2C_FIELD(((D_80074BB0 * 0x34) + &D_209890), s16 *, 8));
    M2C_FIELD(&D_80075AA8, s32 *, 0x68) = (s32) (temp_s1 & 0xFF);
}
