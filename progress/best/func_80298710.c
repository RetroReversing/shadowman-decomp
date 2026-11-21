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

s32 func_80113AD0();                                /* extern */
f32 func_8022EC3C(f32, s32);                        /* extern */
void *func_80296BC0(M2C_UNK *);                     /* extern */
extern M2C_UNK D_80036CD8;

void *func_80298710(void) {
    f32 temp_fv0;
    s32 temp_a0;
    s32 temp_hi;
    s32 temp_v0_2;
    s32 temp_v1;
    void *temp_v0;

    temp_v0 = func_80296BC0(&D_80036CD8);
    if (temp_v0 != NULL) {
        temp_v0_2 = func_80113AD0();
        temp_hi = MULT_HI(temp_v0_2, 0xB60B60B7);
        temp_a0 = temp_v0_2 >> 0x1F;
        M2C_FIELD(temp_v0, s32 *, 0x58) = 0;
        M2C_FIELD(temp_v0, f32 *, 0x54) = (f32) *(f32 *)0x2159B8;
        M2C_FIELD(temp_v0, f32 *, 0x4C) = (f32) *(f32 *)0x2159BC;
        temp_v1 = ((s32) (temp_hi + temp_v0_2) >> 8) - temp_a0;
        M2C_FIELD(temp_v0, f32 *, 0x2C) = (f32) (temp_v0_2 - (temp_v1 * 0x168));
        temp_fv0 = func_8022EC3C(*(f32 *)0x2159C0, temp_v1 * 3) + *(f32 *)0x2159C4;
        M2C_FIELD(temp_v0, f32 *, 0x5C) = (f32) *(f32 *)0x2159C8;
        M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv0;
        M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fv0;
    }
    return temp_v0;
}
