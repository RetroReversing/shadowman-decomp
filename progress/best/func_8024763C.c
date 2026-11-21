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

M2C_UNK func_802BAAF8(f32 *, f32 *, M2C_UNK);       /* extern */
extern s32 D_8002DC4C;
extern M2C_UNK D_8003A4F4;
extern s32 D_8006A588;
extern M2C_UNK D_80075568;

void func_8024763C(void *arg0) {
    s32 *__base_D_8002DC4C;
    f32 sp10[3];
    f32 sp20[3];
    f32 temp_ft0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    void *temp_s0;
    void *temp_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 8);
    temp_v0 = M2C_FIELD(temp_v1, void **, 0x68);
    if ((temp_v0 != NULL) && (*M2C_FIELD(temp_v0, s32 **, 0x10) & 4)) {
        temp_s0 = M2C_FIELD(temp_v1, void **, 0x6C);
        if (M2C_FIELD(temp_s0, s32 *, 0) != 0) {
            __base_D_8002DC4C = &D_8002DC4C;
            if ((*__base_D_8002DC4C) == 0) {
                (*__base_D_8002DC4C) = 1;
            }
            temp_ft0f = *(f32 *)0x202C70;
            sp20[0] = M2C_FIELD(&D_80075568, f32 *, 0x24);
            sp20[2] = M2C_FIELD(&D_80075568, f32 *, 0x2C);
            sp20[1] = M2C_FIELD(&D_80075568, f32 *, 0x28) - temp_ft0f;
            temp_fv1f = (f32) (*__base_D_8002DC4C);
            sp10[0] = M2C_FIELD(&D_80075568, f32 *, 0x24) + (M2C_FIELD(temp_s0, f32 *, 0x28) * temp_fv1f);
            sp10[1] = (M2C_FIELD(&D_80075568, f32 *, 0x28) + (M2C_FIELD(temp_s0, f32 *, 0x2C) * temp_fv1f)) - temp_ft0f;
            sp10[2] = M2C_FIELD(&D_80075568, f32 *, 0x2C) + (M2C_FIELD(temp_s0, f32 *, 0x30) * temp_fv1f);
            func_802BAAF8(sp20, sp10, 0x41200000);
            if (D_8006A588 == 0) {
                temp_fv1 = (f32) (*__base_D_8002DC4C);
                M2C_FIELD(&D_80075568, f32 *, 0x24) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x24) + (M2C_FIELD(temp_s0, f32 *, 0x28) * temp_fv1));
                M2C_FIELD(&D_80075568, f32 *, 0x28) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x28) + (M2C_FIELD(temp_s0, f32 *, 0x2C) * temp_fv1));
                M2C_FIELD(&D_80075568, f32 *, 0x2C) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x2C) + (M2C_FIELD(temp_s0, f32 *, 0x30) * temp_fv1));
            }
            (*__base_D_8002DC4C) = 0;
            M2C_FIELD(&D_8003A4F4, u16 *, 0x378) = (u16) (M2C_FIELD(&D_8003A4F4, u16 *, 0x378) & ~0x40);
            M2C_FIELD(&D_8003A4F4, u16 *, 0x7A0) = (u16) (M2C_FIELD(&D_8003A4F4, u16 *, 0x7A0) & ~0x40);
        }
    }
}
