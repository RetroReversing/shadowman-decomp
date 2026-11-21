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

M2C_UNK func_80116EB0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_802DA610(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK D_80046380;
extern u8 D_8004638C;
extern M2C_UNK D_8005901C;
extern M2C_UNK D_8007DC10;
extern M2C_UNK D_8007DC30;

void func_802DA5CC(s8 arg0) {
    M2C_FIELD(&D_8007DC10, s32 *, 0) = 0;
    M2C_FIELD(&D_8007DC10, s8 *, 4) = arg0;
    if (D_8004638C != 0) {
        func_802DA610(&D_8005901C, &D_80046380);
        return;
    }
    func_80116EB0(&D_8007DC30, 0, 1);
    D_8004638C = 0;
    M2C_FIELD(&D_8007DC30, s8 *, 0x3EB) = 0;
    M2C_FIELD(&D_8007DC30, s32 *, 0x3E0) = 0;
    M2C_FIELD(&D_8007DC30, s8 *, 0x3E8) = 0;
    M2C_FIELD(&D_8007DC30, s8 *, 0x3EC) = 0;
    M2C_FIELD(&D_8007DC30, s16 *, 0x3F6) = 0;
    M2C_FIELD(&D_8007DC30, s16 *, 0x3F8) = 0;
    M2C_FIELD(&D_8007DC30, s16 *, 0x3FC) = 0;
    M2C_FIELD(&D_8007DC30, s16 *, 0x3FA) = 0;
}
