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

s32 func_80109918(void *, M2C_UNK, s16);            /* extern */
s32 func_80113AD0();                                /* extern */
f32 func_8022EBE8(f32, s32);                        /* extern */
M2C_UNK func_802A7CD4();                            /* extern */
M2C_UNK func_802B3494();                            /* extern */

void func_802B33D8(void *arg0) {
    f32 temp_fs0;
    f32 temp_fv0;
    s32 temp_ret;

    func_802A7CD4();
    M2C_FIELD(arg0, u8 *, 0x49) = 0xB4;
    M2C_FIELD(arg0, u8 *, 0x4A) = 0xFF;
    M2C_FIELD(arg0, u8 *, 0x48) = 0;
    M2C_FIELD(arg0, u8 *, 0x50) = (u8) (M2C_FIELD(arg0, u8 *, 0x50) | 1);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) *(f32 *)0x216A10;
    temp_ret = func_80113AD0();
    temp_fs0 = *(f32 *)0x216A14;
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) (temp_ret % 360);
    temp_fv0 = func_8022EBE8(temp_fs0, (temp_ret / 360) * 3);
    M2C_FIELD(arg0, f32 *, 0x98) = temp_fv0;
    if (temp_fv0 < 0.0f) {
        func_802B3494();
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) (temp_fv0 + temp_fs0);
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, u8 *, 0x51) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = func_80109918(arg0 + 0x54, 0x7F, *(s16 *)0x216C3E);
}
