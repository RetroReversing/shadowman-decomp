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

M2C_UNK func_8023E724(M2C_UNK *, M2C_UNK, s32 *, M2C_UNK *); /* extern */
M2C_UNK func_802667A4(M2C_UNK *);                   /* extern */
M2C_UNK func_802667B8();                            /* extern */
M2C_UNK func_8026B618(s32, M2C_UNK);                /* extern */
M2C_UNK func_8026B718(s32, M2C_UNK);                /* extern */
s32 func_802A5EC4(M2C_UNK *, f32 *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_802A6548(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK D_2178CC;
extern M2C_UNK D_80030F78;
extern M2C_UNK D_80030F84;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075598;

void func_8026671C(s32 arg0) {
    M2C_UNK *__base_D_80030F84;
    M2C_UNK *__base_D_80075598;
    M2C_UNK *__base_D_80030F78;
    s32 sp18;
    M2C_UNK32 sp1C;
    s32 sp20;
    M2C_UNK sp28;
    f32 sp38[3];
    f32 temp_ft0f;
    f32 temp_fv0f;
    void *temp_v0;

    switch (arg0) {
        __base_D_80030F84 = &D_80030F84;
        case 1:
            sp18 = M2C_FIELD(__base_D_80030F84, s32 *, 0);
            sp1C = M2C_FIELD(__base_D_80030F84, M2C_UNK32 *, 4);
            sp20 = M2C_FIELD(__base_D_80030F84, s32 *, 8);
            func_8023E724(&D_80075518, 0xD, &sp18, &sp28);
            __base_D_80075598 = &D_80075598;
            temp_v0 = __base_D_80075598 + 4;
            sp18 = 0;
            sp20 = 0;
            sp1C = *(M2C_UNK32 *)0x20DEEC;
            temp_fv0f = M2C_FIELD(&sp18, f32 *, 4);
            temp_ft0f = M2C_FIELD(&sp18, f32 *, 8);
            sp38[0] = (temp_fv0f * M2C_FIELD(temp_v0, f32 *, 4)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 8));
            sp38[1] = (temp_fv0f * M2C_FIELD(temp_v0, f32 *, 0x10)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 0x14));
            sp38[2] = (temp_fv0f * M2C_FIELD(temp_v0, f32 *, 0x1C)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 0x20));
            if (func_802A5EC4(&sp28, sp38, &D_2178CC, 0, 0, 0) == 0) {
                func_802A6548(&sp28, 0x48);
            }
            func_8026B618(arg0, 1);
            func_8026B718(arg0, 0);
            return;
        __base_D_80030F78 = &D_80030F78;
        case 0:
            sp18 = M2C_FIELD(__base_D_80030F78, s32 *, 0);
            sp1C = M2C_FIELD(__base_D_80030F78, M2C_UNK32 *, 4);
            sp20 = M2C_FIELD(__base_D_80030F78, s32 *, 8);
            func_802667A4(&D_80075518);
            break;
    }
    func_802667B8();
    return;
}
