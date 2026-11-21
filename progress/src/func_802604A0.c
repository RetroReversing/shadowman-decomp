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

M2C_UNK func_8025BF10(s32);                         /* extern */
extern M2C_UNK D_8002DBD0;

void func_802604A0(void) {
    if (M2C_FIELD(&D_8002DBD0, s32 *, 0) != 0) {
        func_8025BF10(M2C_FIELD(&D_8002DBD0, s32 *, 0));
        M2C_FIELD(&D_8002DBD0, s32 *, 0) = 0;
        M2C_FIELD(&D_8002DBD0, s32 *, 8) = 0;
        M2C_FIELD(&D_8002DBD0, s32 *, 4) = -1;
    }
    if (M2C_FIELD(&D_8002DBD0, s32 *, 0x10) != 0) {
        func_8025BF10(M2C_FIELD(&D_8002DBD0, s32 *, 0x10));
        M2C_FIELD(&D_8002DBD0, s32 *, 0x10) = 0;
        M2C_FIELD(&D_8002DBD0, s32 *, 0x18) = 0;
        M2C_FIELD(&D_8002DBD0, s32 *, 0x14) = -1;
    }
}
