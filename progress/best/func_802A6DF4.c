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

s32 func_80241504(f32 *, f32 *, s32, f32 *, f32);   /* extern */
extern u32 D_80036E08;
extern s32 D_800458F0;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007BBD0;
extern void *D_8007BD6C;
extern void *D_8007BD70;
extern M2C_UNK D_8007DB88;

void func_802A6DF4(void *arg0) {
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 *var_v0;
    f32 temp_fs0;
    f32 temp_ft0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 temp_t1;
    f32 temp_t2;
    f32 temp_t3;
    u32 var_s1;
    void *temp_s3;
    void *temp_v0;
    void *var_s0;

    temp_s3 = D_8007BD6C;
    if ((M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x44) * 0x50) + M2C_FIELD(D_8007BD70, s32 *, 8)), u8 *, 0x30) & 2) && ((var_v0 = &D_8007DB88 + 4, (M2C_FIELD(D_8007BD70, s32 *, 0) != 0x1E)) || (var_v0 = &D_8007DB88 + 4, (D_800458F0 == 0)))) {
        temp_t1 = M2C_FIELD(temp_s3, f32 *, 0x54);
        temp_t2 = M2C_FIELD(temp_s3, f32 *, 0x58);
        temp_t3 = M2C_FIELD(temp_s3, f32 *, 0x5C);
        sp28 = temp_t1;
        sp2C = temp_t2;
        sp30 = temp_t3;
        sp18 = temp_t1;
        sp1C = temp_t2;
        sp20 = temp_t3;
        temp_fv1 = *var_v0;
        temp_fv1f = sp28 + (M2C_FIELD(temp_s3, f32 *, 0x6C) * temp_fv1);
        sp28 = temp_fv1f;
        temp_ft0 = sp2C + (M2C_FIELD(temp_s3, f32 *, 0x70) * temp_fv1);
        sp2C = temp_ft0;
        temp_fv0f = sp30 + (M2C_FIELD(temp_s3, f32 *, 0x74) * temp_fv1);
        sp30 = temp_fv0f;
        if ((temp_fv1f == sp18) && (temp_fv1f == sp1C) && (temp_fv0f == sp20)) {
            sp2C = temp_ft0 + *(f32 *)0x2162F0;
        }
        if (func_80241504(&sp18, &sp28, M2C_FIELD(temp_s3, s32 *, 0x24), &D_80075568 + 0x24, (f32) M2C_FIELD(M2C_FIELD(&D_80075568, void **, 0x64), u16 *, 0x12)) != 0) {
            var_s1 = 0;
            if (M2C_FIELD(&D_80075518, s16 *, 0x3E) != 0) {
                temp_fs0 = *(f32 *)0x2162F4;
                var_s0 = M2C_FIELD(&D_80075518, s32 *, 0x40) + 0x2C;
                do {
                    sp38 = M2C_FIELD(var_s0, f32 *, -8);
                    sp3C = M2C_FIELD(var_s0, f32 *, -4);
                    sp40 = M2C_FIELD(var_s0, f32 *, 0);
                    if ((func_80241504(&sp18, &sp28, M2C_FIELD(temp_s3, s32 *, 0x24), &sp38, temp_fs0) != 0) && ((u32) D_80036E08 < 0xAU)) {
                        *((D_80036E08 * 0x24) + &D_8007BBD0) = 3;
                        temp_v0 = (D_80036E08 * 0x24) + &D_8007BBD0;
                        M2C_FIELD(temp_v0, f32 *, 0xC) = sp28;
                        M2C_FIELD(temp_v0, f32 *, 0x10) = sp2C;
                        M2C_FIELD(temp_v0, f32 *, 0x14) = sp30;
                        M2C_FIELD(((D_80036E08 * 0x24) + &D_8007BBD0), u32 *, 0x1C) = var_s1;
                        D_80036E08 += 1;
                    }
                    var_s1 += 1;
                    var_s0 += 0x40;
                } while (var_s1 < (u32) M2C_FIELD(&D_80075518, s16 *, 0x3E));
            }
        }
    }
}
