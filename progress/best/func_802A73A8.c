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

M2C_UNK func_802401D0(f32 *, f32 *, s32);           /* extern */
s32 func_802D0B28(s32, s32, M2C_UNK);               /* extern */
extern s32 D_8002D2B4;
extern u32 D_80036E08;
extern s32 D_8005EA14;
extern M2C_UNK D_8006A510;
extern s32 D_8006A5B4;
extern M2C_UNK D_8007BBD0;
extern void *D_8007BD70;
extern M2C_UNK D_8007DB88;

void func_802A73A8(void *arg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 temp_ft0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_t1;
    f32 temp_t2;
    f32 temp_t3;
    s32 var_s0;
    u8 temp_v0;
    void *temp_a0;

    temp_v0 = M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x44) * 0x50) + M2C_FIELD(D_8007BD70, s32 *, 8)), u8 *, 0x30);
    var_s0 = (temp_v0 & 8) != 0;
    if (temp_v0 & 4) {
        var_s0 |= 2;
    }
    if (var_s0 != 0) {
        temp_t1 = M2C_FIELD(arg0, f32 *, 0x54);
        temp_t2 = M2C_FIELD(arg0, f32 *, 0x58);
        temp_t3 = M2C_FIELD(arg0, f32 *, 0x5C);
        sp20 = temp_t1;
        sp24 = temp_t2;
        sp28 = temp_t3;
        sp10 = temp_t1;
        sp14 = temp_t2;
        sp18 = temp_t3;
        temp_fv1 = sp20 + (M2C_FIELD(arg0, f32 *, 0x6C) * M2C_FIELD(&D_8007DB88, f32 *, 4));
        sp20 = temp_fv1;
        temp_ft0 = sp24 + (M2C_FIELD(arg0, f32 *, 0x70) * M2C_FIELD(&D_8007DB88, f32 *, 4));
        sp24 = temp_ft0;
        temp_fv0f = sp28 + (M2C_FIELD(arg0, f32 *, 0x74) * M2C_FIELD(&D_8007DB88, f32 *, 4));
        sp28 = temp_fv0f;
        if (sp10 == temp_fv1) {
            if ((sp14 == temp_ft0) && (sp18 == temp_fv0f)) {
                sp24 = temp_ft0 + *(f32 *)0x216304;
            }
        }
        if (func_802D0B28(D_8005EA14, D_8002D2B4, 0) != 0) {
            D_8006A5B4 = var_s0;
            func_802401D0(&sp10, &sp20, M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x44) * 0x50) + M2C_FIELD(D_8007BD70, s32 *, 8)), s32 *, 8));
            if ((M2C_FIELD(&D_8006A510, s32 *, 0x78) == 1) && ((u32) D_80036E08 < 0xAU)) {
                *((D_80036E08 * 0x24) + &D_8007BBD0) = 0;
                temp_a0 = (D_80036E08 * 0x24) + &D_8007BBD0;
                M2C_FIELD(temp_a0, s32 *, 4) = (s32) M2C_FIELD(&D_8006A510, s32 *, 0x8C);
                M2C_FIELD(temp_a0, s32 *, 8) = (s32) M2C_FIELD(&D_8006A510, s32 *, 0x90);
                M2C_FIELD(temp_a0, f32 *, 0xC) = (f32) M2C_FIELD(&D_8006A510, f32 *, 0x80);
                M2C_FIELD(temp_a0, f32 *, 0x10) = (f32) M2C_FIELD(&D_8006A510, f32 *, 0x84);
                M2C_FIELD(temp_a0, f32 *, 0x14) = (f32) M2C_FIELD(&D_8006A510, f32 *, 0x88);
                M2C_FIELD(temp_a0, f32 *, 0x20) = (f32) M2C_FIELD(&D_8006A510, f32 *, 0x9C);
                if (M2C_FIELD(&D_8006A510, void **, 0x98) != NULL) {
                    if (M2C_FIELD(M2C_FIELD(&D_8006A510, void **, 0x98), s32 *, 0x18) == 2) {
                        M2C_FIELD(temp_a0, s8 *, 0) = (s8) M2C_FIELD(&D_8006A510, s32 *, 0x78);
                        M2C_FIELD(((D_80036E08 * 0x24) + &D_8007BBD0), void **, 0x18) = (void *) M2C_FIELD(&D_8006A510, void **, 0x98);
                    }
                }
                D_80036E08 += 1;
            }
        }
    }
}
