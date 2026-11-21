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

s32 func_80113AD0();                                /* extern */
M2C_UNK func_8022B114(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80239480(M2C_UNK *, s32);              /* extern */
M2C_UNK func_80239A3C(f32);                         /* extern */
M2C_UNK func_802A5EC4(void *, f32 *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_802A6508(void *, M2C_UNK);             /* extern */
M2C_UNK func_802A6588(void *, M2C_UNK);             /* extern */
extern M2C_UNK D_217A0C;
extern M2C_UNK D_2ADCB4;
extern M2C_UNK D_8002D390;
extern M2C_UNK D_80036DD8;
extern void *D_8007BD4C;
extern s32 D_8007BD68;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x58, 0x5c, 0x60, 0x64], gap at: 0x50. */
void func_802ADA4C(void *arg0, s32 arg1, M2C_UNK arg2) {
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 var_fs0;
    s32 temp_a1;
    s32 temp_hi;
    s32 temp_v0;
    s32 temp_v1;
    u32 var_s1;

    temp_fs1 = *(f32 *)0x2166A4;
    if ((M2C_FIELD(arg0, s8 *, 0x51) == 0) && ((arg1 == 0) || (arg1 == 2))) {
        var_s1 = 0;
        temp_v0 = func_80113AD0();
        temp_hi = MULT_HI(temp_v0, 0xB60B60B7);
        temp_a1 = temp_v0 >> 0x1F;
        D_8007BD4C = arg0;
        temp_v1 = ((s32) (temp_hi + temp_v0) >> 8) - temp_a1;
        var_fs0 = (f32) (temp_v0 - (temp_v1 * 0x168));
        D_8007BD68 = 0;
        func_80239480(&D_2ADCB4, temp_v1 * 3);
        if (D_8007BD68 != 5) {
            temp_fs0f = *(f32 *)0x2166A8;
            do {
                func_80239A3C(var_fs0);
                temp_ft1 = (M2C_FIELD(&D_80036DD8, f32 *, 0) * M2C_FIELD(&D_8002D390, f32 *, 0)) + (M2C_FIELD(&D_80036DD8, f32 *, 4) * M2C_FIELD(&D_8002D390, f32 *, 4)) + (M2C_FIELD(&D_80036DD8, f32 *, 8) * M2C_FIELD(&D_8002D390, f32 *, 8));
                sp18 = temp_ft1;
                M2C_FIELD(&sp18, f32 *, 4) = (f32) ((M2C_FIELD(&D_80036DD8, f32 *, 0) * M2C_FIELD(&D_8002D390, f32 *, 0xC)) + (M2C_FIELD(&D_80036DD8, f32 *, 4) * M2C_FIELD(&D_8002D390, f32 *, 0x10)) + (M2C_FIELD(&D_80036DD8, f32 *, 8) * M2C_FIELD(&D_8002D390, f32 *, 0x14)));
                M2C_FIELD(&sp18, f32 *, 8) = (f32) ((M2C_FIELD(&D_80036DD8, f32 *, 0) * M2C_FIELD(&D_8002D390, f32 *, 0x18)) + (M2C_FIELD(&D_80036DD8, f32 *, 4) * M2C_FIELD(&D_8002D390, f32 *, 0x1C)) + (M2C_FIELD(&D_80036DD8, f32 *, 8) * M2C_FIELD(&D_8002D390, f32 *, 0x20)));
                var_s1 += 1;
                var_fs0 += temp_fs1;
                sp18 = temp_ft1 * temp_fs0f;
                sp1C += temp_fs0f;
                sp20 *= temp_fs0f;
                func_802A5EC4(D_8007BD4C + 0x54, &sp18, &D_217A0C, 0, 0, 0);
            } while (var_s1 < (u32) (5 - D_8007BD68));
        }
        temp_fv0 = *(f32 *)0x2166AC;
        M2C_FIELD(arg0, f32 *, 0x30) = temp_fv0;
        M2C_FIELD(arg0, f32 *, 0x2C) = temp_fv0;
        M2C_FIELD(arg0, s8 *, 0x51) = (s8) ((u8) M2C_FIELD(arg0, s8 *, 0x51) + 1);
        func_802A6508(arg0, 5);
        func_8022B114(1, 0x42200000, 0x40A00000, 0x41200000);
        if (arg1 == 2) {
            func_802A6588(arg0, arg2);
        }
    }
}
