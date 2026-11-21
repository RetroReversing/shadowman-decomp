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

f32 func_80236880(void *, s32);                     /* extern */
M2C_UNK func_8025DCDC(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8025DD7C(M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_80296738(M2C_UNK);                         /* extern */
s32 func_802968C0(M2C_UNK, M2C_UNK);                /* extern */
extern s32 D_8005EA2C;
extern M2C_UNK D_8007DB88;

void func_802A06B8(void *arg0) {
    char sp10[0x18];
    f32 sp28[7];
    s32 sp74[3];
    s8 sp80;
    s32 sp90;
    f32 temp_fv0;
    f32 temp_fv0f;
    s32 temp_s0;
    s32 temp_v0;

    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x58) + (M2C_FIELD(arg0, f32 *, 0x5C) * M2C_FIELD(&D_8007DB88, f32 *, 4));
    temp_fv0f = *(f32 *)0x215EBC;
    M2C_FIELD(arg0, f32 *, 0x58) = temp_fv0;
    if (temp_fv0f < temp_fv0) {
        M2C_FIELD(arg0, f32 *, 0x58) = temp_fv0f;
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
    }
    if (!(M2C_FIELD(arg0, f32 *, 0x54) <= 0.0f)) {
        temp_v0 = func_80296738(0x25);
        sp90 = temp_v0;
        if (temp_v0 != 0) {
            sp28[3] = M2C_FIELD(arg0, s32 *, 0);
            sp28[4] = M2C_FIELD(arg0, s32 *, 4);
            sp28[5] = M2C_FIELD(arg0, s32 *, 8);
            sp28[2] = 0.0f;
            sp28[0] = 0.0f;
            sp28[1] = func_80236880(arg0, D_8005EA2C);
            sp74[2] = 0;
            sp74[1] = 0;
            sp80 = 0xFF;
            sp28[6] = M2C_FIELD(arg0, f32 *, 0x4C);
            sp74[0] = func_802968C0(0x10, 0);
            temp_s0 = (s32) M2C_FIELD(arg0, f32 *, 0x58);
            func_8025DCDC(0xFF, 0xFF, 0xFF, 0xFF);
            func_8025DD7C(sp10, 4, 6, temp_s0);
        }
    }
}
