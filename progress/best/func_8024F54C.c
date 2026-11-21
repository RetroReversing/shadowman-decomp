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

M2C_UNK func_80109318(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_80230A3C(s16);                         /* extern */
M2C_UNK func_8024F5DC();                            /* extern */
M2C_UNK func_8026E4E8(void *, M2C_UNK);             /* extern */
M2C_UNK func_802A0170();                            /* extern */
extern M2C_UNK D_8002C2A0;
extern s32 D_80074BF4;
extern M2C_UNK D_80075F20;

void func_8024F54C(void *arg0) {
    M2C_UNK *__base_D_80075F20;
    M2C_UNK *__base_D_8002C2A0;
    f32 temp_fv0;
    f32 temp_fv0f;
    void *temp_s1;

    if ((D_80074BF4 & 1) && (temp_s1 = M2C_FIELD(arg0, void **, 8), (M2C_FIELD(temp_s1, s16 *, 0x7A) == 1)) && (M2C_FIELD(temp_s1, f32 *, 0x14) != *(f32 *)0x203104)) {
        temp_fv0 = M2C_FIELD(temp_s1, f32 *, 0xC);
        temp_fv0f = *(f32 *)0x203108;
        if (temp_fv0f <= temp_fv0) {
            M2C_FIELD(temp_s1, s16 *, 0x7A) = 0;
            func_8026E4E8(temp_s1 + 0x24, 0);
            __base_D_80075F20 = &D_80075F20;
            M2C_FIELD(__base_D_80075F20, s32 *, 0x2C) = (s32) (M2C_FIELD(__base_D_80075F20, s32 *, 0x2C) | (1 << ((s32) (temp_fv0 - temp_fv0f) | 0x80000000)));
            func_80109318(8, 0, 0);
            func_802A0170();
            __base_D_8002C2A0 = &D_8002C2A0;
            func_80230A3C(M2C_FIELD(__base_D_8002C2A0, s16 *, 0x1A2));
            M2C_FIELD(__base_D_8002C2A0, s16 *, 0x1A2) = 0x37;
            M2C_FIELD(temp_s1, f32 *, 0x14) = (f32) *(f32 *)0x20310C;
        } else {
            func_8024F5DC();
        }
    }
}
