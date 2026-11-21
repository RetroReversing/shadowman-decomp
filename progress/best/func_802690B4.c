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

s32 func_802691A8(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_80269224();                            /* extern */
M2C_UNK func_80269278(M2C_UNK *);                   /* extern */
M2C_UNK func_80269998();                            /* extern */
M2C_UNK func_80269A9C();                            /* extern */
M2C_UNK func_80269BA0();                            /* extern */
M2C_UNK func_8026A5E8(f32, f32, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern s32 D_8002C240;
extern M2C_UNK D_800756A0;
extern M2C_UNK D_80075AA8;

s32 func_802690B4(void) {
    f32 temp_fv0;
    f32 temp_fv0f;

    func_80269224();
    func_80269998();
    func_80269A9C();
    func_80269BA0();
    M2C_FIELD(((D_8002C240 << 9) + &D_800756A0), s16 *, 0x3E) = 0;
    if (M2C_FIELD(&D_80075AA8, s32 *, 0x7C) != 0) {
        if (M2C_FIELD(&D_80075AA8, s32 *, 0x7C) == M2C_FIELD(&D_80075AA8, s32 *, 0x78)) {
            func_80269278(&D_80075AA8);
        }
    }
    temp_fv0 = (f32) M2C_FIELD(&D_80075AA8, s32 *, 0x68) * *(f32 *)0x20E1F8;
    temp_fv0f = *(f32 *)0x20E1FC;
    if (!(temp_fv0f <= temp_fv0)) {
        return func_802691A8(&D_80075AA8, &D_80075AA8);
    }
    func_8026A5E8(M2C_FIELD(&D_80075AA8, f32 *, 0), M2C_FIELD(&D_80075AA8, f32 *, 4), &D_80075AA8, &D_80075AA8, 0x40, 0x40, ((s32) (temp_fv0 - temp_fv0f) | 0x80000000) & 0xFF);
    return 1;
}
