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

M2C_UNK func_80118370(s32, s32, M2C_UNK, s32);      /* extern */
extern u16 D_8002C110;
extern u16 D_8002C112;
extern s32 D_8002C11C;
extern s32 D_800591E0;

void func_80225570(void) {
    s32 temp_lo;

    temp_lo = D_8002C110 * D_8002C112;
    D_800591E0 &= ~0x40;
    func_80118370(D_8002C11C, temp_lo * 2, -0x41, temp_lo);
}
