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

M2C_UNK func_8022EF10(f32, f32, f32, f32, s32, s32, M2C_UNK *); /* extern */
M2C_UNK func_80239FCC(M2C_UNK *, f32 *, void *);    /* extern */
M2C_UNK func_802401D0(f32 *, f32 *, M2C_UNK);       /* extern */
M2C_UNK func_80266C04(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_80296738(M2C_UNK);                         /* extern */
M2C_UNK func_802A2BE8(f32, f32);                    /* extern */
extern M2C_UNK D_2A290C;
extern u16 D_8002C110;
extern u16 D_8002C112;
extern s32 D_8002C1B0;
extern u8 D_80036B18;
extern M2C_UNK D_80036BD0;
extern void *D_8005EA2C;
extern M2C_UNK D_8006A510;
extern s32 D_8006A5B4;
extern M2C_UNK D_8007BAD8;
extern M2C_UNK D_8007BAE8;
extern M2C_UNK D_8007BB10;
extern M2C_UNK D_8007BBC0;

void func_802A2A78(void) {
    u8 *__base_D_80036B18;
    f32 sp20[3];
    f32 sp30[3];
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fv0f;
    s32 temp_v0;

    sp20[0] = M2C_FIELD(D_8005EA2C, const f32 *, 0);
    sp20[1] = M2C_FIELD(D_8005EA2C, const f32 *, 4);
    sp20[2] = M2C_FIELD(D_8005EA2C, const f32 *, 8);
    func_80239FCC(&D_80036BD0, sp30, D_8005EA2C + 0x3C);
    D_8006A5B4 = 3;
    sp30[0] += sp20[0];
    sp30[1] += sp20[1];
    sp30[2] += sp20[2];
    func_802401D0(sp20, sp30, 0x3F800000);
    M2C_FIELD(&D_8007BAE8, f32 *, 0) = sp20[0];
    M2C_FIELD(&D_8007BAE8, f32 *, 4) = sp20[1];
    M2C_FIELD(&D_8007BAE8, f32 *, 8) = sp20[2];
    M2C_FIELD(&D_8007BBC0, f32 *, 0) = sp30[0];
    M2C_FIELD(&D_8007BBC0, f32 *, 4) = sp30[1];
    M2C_FIELD(&D_8007BBC0, f32 *, 8) = sp30[2];
    __base_D_80036B18 = &D_80036B18;
    (*__base_D_80036B18) = 0;
    M2C_FIELD(&D_8007BB10, f32 *, 0) = (f32) M2C_FIELD(&D_8006A510, f32 *, 0x80);
    M2C_FIELD(&D_8007BB10, f32 *, 4) = (f32) M2C_FIELD(&D_8006A510, f32 *, 0x84);
    M2C_FIELD(&D_8007BB10, f32 *, 8) = (f32) M2C_FIELD(&D_8006A510, f32 *, 0x88);
    func_80266C04(1, &D_2A290C);
    temp_v0 = func_80296738(0x35);
    D_8002C1B0 = temp_v0;
    if (temp_v0 != 0) {
        temp_fv0f = *(f32 *)0x216064;
        temp_fa0 = (f32) ((u16) D_8002C110 >> 1);
        temp_fa1 = (f32) ((u16) D_8002C112 >> 1);
        if ((*__base_D_80036B18) != 0) {
            func_802A2BE8(temp_fa0, temp_fa1);
            return;
        }
        func_8022EF10(temp_fa0, temp_fa1, temp_fv0f, temp_fv0f, 1, 0x46, &D_8007BAD8);
    }
}
