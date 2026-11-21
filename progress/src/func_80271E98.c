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

M2C_UNK func_802403F8(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern void *D_8006A4FC;
extern M2C_UNK D_8007AFC0;
extern M2C_UNK D_8007AFD0;

void func_80271E98(f32 arg0) {
    M2C_FIELD(&D_8007AFC0, f32 *, 0) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    M2C_FIELD(&D_8007AFC0, f32 *, 4) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x28);
    M2C_FIELD(&D_8007AFC0, f32 *, 8) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    M2C_FIELD(&D_8007AFD0, f32 *, 0) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    M2C_FIELD(&D_8007AFD0, f32 *, 4) = (f32) (M2C_FIELD(D_8006A4FC, f32 *, 0x28) - arg0);
    M2C_FIELD(&D_8007AFD0, f32 *, 8) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    func_802403F8(&D_8007AFC0, &D_8007AFD0, 0x3F800000, 3);
}
