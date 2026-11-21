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

void *func_80103878();
s32 func_802A7CD4();

void func_802B1D64(void *arg0) {
    void *temp_v0;

    func_802A7CD4();
    M2C_FIELD(arg0, u8 *, 0x49) = 0xB4;
    M2C_FIELD(arg0, u8 *, 0x4A) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, u8 *, 0x50) |= 1;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) *(f32 *)0x2169A4;
    temp_v0 = func_80103878(0x9C, 2, 0);
    M2C_FIELD(arg0, void **, 0xC) = temp_v0;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
    }
}
