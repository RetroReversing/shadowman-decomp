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

s32 func_8026FB28();                                /* extern */
M2C_UNK func_8026FCC4(M2C_UNK32, f32, M2C_UNK32, M2C_UNK32, f32, M2C_UNK32, f32); /* extern */
s32 func_80273800();                                /* extern */
M2C_UNK func_802776D8(s32);                  /* extern */
extern M2C_UNK D_212078;
extern void *D_8006A4FC;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007AFC0;
extern M2C_UNK D_8007AFD0;
extern void *D_8007AFF8;
extern f32 D_8007B0A4;

s32 func_8026F9B4(s32 arg0) {
    s32 ret;
s32 __repair_result_ret;
    f32 temp_fv0;
    f32 temp_fv0f;

    if (!(func_80273800() & 0xFFFF)) {
        return func_8026FB28();
    }
    temp_fv0f = *(f32 *)0x213F0C;
    temp_fv0 = M2C_FIELD(D_8007AFF8, f32 *, 0x6C);
    D_8007B0A4 = temp_fv0;
    if (temp_fv0 != temp_fv0f) {
        M2C_FIELD(D_8007AFF8, f32 *, 0x6C) = temp_fv0f;
        M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x44) & ~0x400);
    }
    if (D_8007B0A4 != 0.0f) {
        M2C_FIELD(&D_8007AFD0, M2C_UNK32 *, 0) = (M2C_UNK32) M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x24);
        M2C_FIELD(&D_8007AFD0, M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x2C);
        M2C_FIELD(&D_8007AFD0, f32 *, 4) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x28) + *(f32 *)0x213F10);
        M2C_FIELD(&D_8007AFC0, M2C_UNK32 *, 0) = (M2C_UNK32) M2C_FIELD(D_8006A4FC, M2C_UNK32 *, 0x24);
        M2C_FIELD(&D_8007AFC0, f32 *, 4) = (f32) (M2C_FIELD(D_8006A4FC, f32 *, 0x28) + M2C_FIELD(((M2C_FIELD(D_8007AFF8, u8 *, 0x40) * 0x6C) + &D_212078), f32 *, 0x30) + *(f32 *)0x213F14);
        M2C_FIELD(&D_8007AFC0, M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(D_8006A4FC, M2C_UNK32 *, 0x2C);
        func_8026FCC4(M2C_FIELD(&D_8007AFC0, M2C_UNK32 *, 0), M2C_FIELD(&D_8007AFC0, f32 *, 4), M2C_FIELD(&D_8007AFC0, M2C_UNK32 *, 8), M2C_FIELD(&D_8007AFD0, M2C_UNK32 *, 0), M2C_FIELD(&D_8007AFD0, f32 *, 4), M2C_FIELD(&D_8007AFD0, M2C_UNK32 *, 8), *(f32 *)0x213F18);
        __repair_result_ret = func_8026FB28();
    } else {
        M2C_FIELD(D_8007AFF8, M2C_UNK32 *, 0x70) = (M2C_UNK32) M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x24);
        M2C_FIELD(D_8007AFF8, f32 *, 0x74) = (f32) M2C_FIELD(&D_80075568, f32 *, 0x28);
        M2C_FIELD(D_8007AFF8, M2C_UNK32 *, 0x78) = (M2C_UNK32) M2C_FIELD(&D_80075568, M2C_UNK32 *, 0x2C);
        func_802776D8(arg0 & 0xFF);
        ret = 1;
    }
    return ret;
}
