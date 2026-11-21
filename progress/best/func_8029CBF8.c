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

extern M2C_UNK D_8007DB78;

void func_8029CBF8(void *arg0) {
    M2C_UNK (*temp_v0)();
    f32 temp_fv0;

    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) + (M2C_FIELD(arg0, f32 *, 0x18) * M2C_FIELD(&D_8007DB78, f32 *, 0x14)));
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + (M2C_FIELD(arg0, f32 *, 0x1C) * M2C_FIELD(&D_8007DB78, f32 *, 0x14)));
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + (M2C_FIELD(arg0, f32 *, 0x20) * M2C_FIELD(&D_8007DB78, f32 *, 0x14)));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) - (M2C_FIELD(&D_8007DB78, f32 *, 0x14) * *(f32 *)0x215C60));
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x54) - M2C_FIELD(&D_8007DB78, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x54) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
    }
    temp_v0 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x44);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}
