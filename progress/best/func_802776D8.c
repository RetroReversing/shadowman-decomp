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

f32 func_80236880();
s32 func_80270090();
extern char D_212078[];
extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_802776D8(s32 arg0) {
    char *__base_D_212078;
    f32 sp10[3];
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fv1f;
    u8 var_a0;
    void *temp_v1;

    sp10[0] = M2C_FIELD(D_8007AFF8, f32 *, 0x70);
    sp10[1] = M2C_FIELD(D_8007AFF8, f32 *, 0x74);
    sp10[2] = M2C_FIELD(D_8007AFF8, f32 *, 0x78);
    temp_fv0 = func_80236880(D_8006A4FC + 0x24);
    var_fv1f = *(f32 *)0x2142CC;
    temp_fv1 = M2C_FIELD(D_8006A4FC, f32 *, 0x1C) - temp_fv0;
    M2C_FIELD(D_8007AFF8, s16 *, 0x2C) = (s16) (s32) temp_fv0;
    if (temp_fv1 > 0.0f) {
        var_fv1f = *(f32 *)0x2142D0;
    }
    __base_D_212078 = D_212078;
    temp_v1 = (M2C_FIELD(D_8007AFF8, u8 *, 0x40) * 0x6C) + __base_D_212078;
    var_a0 = M2C_FIELD(temp_v1, u8 *, 0xD);
    if (M2C_FIELD(D_8007AFF8, s32 *, 0x44) & 0x40) {
        var_a0 = M2C_FIELD(temp_v1, u8 *, 0xE);
    }
    M2C_FIELD(D_8007AFF8, u8 *, 0x5C) = var_a0;
    if (temp_fv1 < var_fv1f) {
        M2C_FIELD(D_8007AFF8, u8 *, 0x5C) = (u8) -(s32) var_a0;
    }
    func_80270090(arg0 & 0xFF);
    M2C_FIELD(D_8007AFF8, u8 *, 0x54) = (u8) M2C_FIELD(((M2C_FIELD(D_8007AFF8, u8 *, 0x40) * 0x6C) + __base_D_212078), u8 *, 0x44);
}
