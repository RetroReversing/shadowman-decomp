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

s32 func_80240750(void *);                          /* extern */
M2C_UNK func_80240BC4(M2C_UNK, u16);                /* extern */
M2C_UNK func_80241AC0(M2C_UNK *, void *, M2C_UNK *); /* extern */
M2C_UNK func_80241C88(M2C_UNK *, void *, M2C_UNK *); /* extern */
extern void *D_80061A10;
extern M2C_UNK D_8006A510;
extern s32 D_8006A5B4;
extern M2C_UNK D_8006A660;

void func_8024136C(s32 arg0, void *arg1) {
    f32 temp_ft0f;
    f32 temp_ft1;
    u16 temp_v1;
    void *temp_v0;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v1 = M2C_FIELD(arg1, u16 *, 0x7E);
    if ((temp_v1 & 1) && (!(D_8006A5B4 & 8) || !(temp_v1 & 0x200))) {
        D_80061A10 = M2C_FIELD(arg1, void **, 0x64);
        func_80241AC0(&D_8006A660, arg1, &D_8006A510);
        M2C_FIELD(&D_8006A510, f32 *, 0x7C) = (f32) M2C_FIELD(&D_8006A660, f32 *, 0x7C);
        if (func_80240750(M2C_FIELD(arg1, void **, 0x64) + 0xC) != 0) {
            func_80241C88(&D_8006A660, arg1, &D_8006A510);
            func_80240BC4(0, M2C_FIELD(D_80061A10, u16 *, 0x30));
            temp_v1_2 = &D_8006A510 + 0x80;
            if (M2C_FIELD(&D_8006A510, s32 *, 0x78) == 1) {
                temp_v0 = arg1 + 0x34;
                temp_ft1 = M2C_FIELD(temp_v1_2, f32 *, 4);
                temp_ft0f = M2C_FIELD(temp_v1_2, f32 *, 8);
                temp_v1_3 = &D_8006A660 + 0x80;
                M2C_FIELD(temp_v1_3, f32 *, 4) = (f32) ((M2C_FIELD(&D_8006A510, f32 *, 0x80) * M2C_FIELD(temp_v0, f32 *, 0xC)) + (temp_ft1 * M2C_FIELD(temp_v0, f32 *, 0x10)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 0x14)) + M2C_FIELD(temp_v0, f32 *, 0x28));
                M2C_FIELD(&D_8006A660, s32 *, 0x78) = (s32) M2C_FIELD(&D_8006A510, s32 *, 0x78);
                M2C_FIELD(&D_8006A660, f32 *, 0x80) = (f32) ((M2C_FIELD(&D_8006A510, f32 *, 0x80) * M2C_FIELD(arg1, f32 *, 0x34)) + (temp_ft1 * M2C_FIELD(temp_v0, f32 *, 4)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 8)) + M2C_FIELD(temp_v0, f32 *, 0x24));
                M2C_FIELD(&D_8006A660, f32 *, 0x7C) = (f32) M2C_FIELD(&D_8006A510, f32 *, 0x7C);
                M2C_FIELD(&D_8006A660, s32 *, 0x90) = (s32) M2C_FIELD(&D_8006A510, s32 *, 0x90);
                M2C_FIELD(&D_8006A660, s32 *, 0x98) = arg0;
                M2C_FIELD(&D_8006A660, s32 *, 0x8C) = (s32) M2C_FIELD(&D_8006A510, s32 *, 0x8C);
                M2C_FIELD(temp_v1_3, f32 *, 8) = (f32) ((M2C_FIELD(&D_8006A510, f32 *, 0x80) * M2C_FIELD(temp_v0, f32 *, 0x18)) + (temp_ft1 * M2C_FIELD(temp_v0, f32 *, 0x1C)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 0x20)) + M2C_FIELD(temp_v0, f32 *, 0x2C));
            }
        }
    }
}
