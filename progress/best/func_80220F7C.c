/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK func_802213DC(M2C_UNK *, s32, s16, s16, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_1007A0;
extern u16 D_8002C110;
extern u16 D_8002C112;
extern M2C_UNK D_80058E20;
extern void *D_8005EA2C;

void func_80220F7C(f32 arg0, f32 arg1, f32 arg2, s32 arg3) {
    f32 temp_ft1;
    f32 temp_ft2;
    s32 temp_ft2f;
    s32 temp_ft2f_2;

    if (arg3 != 0) {
        temp_ft2 = (M2C_FIELD(&D_80058E20, f32 *, 8) * arg0) + (M2C_FIELD(&D_80058E20, f32 *, 0x18) * arg1) + (M2C_FIELD(&D_80058E20, f32 *, 0x28) * arg2) + M2C_FIELD(&D_80058E20, f32 *, 0x38);
        if (!(temp_ft2 <= *(f32 *)0x20012C)) {
            temp_ft1 = (M2C_FIELD(&D_80058E20, f32 *, 0xC) * arg0) + (M2C_FIELD(&D_80058E20, f32 *, 0x1C) * arg1) + (M2C_FIELD(&D_80058E20, f32 *, 0x2C) * arg2) + M2C_FIELD(&D_80058E20, f32 *, 0x3C);
            if (temp_ft1 != 0.0f) {
                temp_ft2f = (s32) (((((M2C_FIELD(&D_80058E20, f32 *, 0) * arg0) + (M2C_FIELD(&D_80058E20, f32 *, 0x10) * arg1) + (M2C_FIELD(&D_80058E20, f32 *, 0x20) * arg2) + M2C_FIELD(&D_80058E20, f32 *, 0x30)) / temp_ft1) * M2C_FIELD(D_8005EA2C, f32 *, 0xCC)) + M2C_FIELD(D_8005EA2C, f32 *, 0xE0));
                temp_ft2f_2 = (s32) (((((M2C_FIELD(&D_80058E20, f32 *, 4) * arg0) + (M2C_FIELD(&D_80058E20, f32 *, 0x14) * arg1) + (M2C_FIELD(&D_80058E20, f32 *, 0x24) * arg2) + M2C_FIELD(&D_80058E20, f32 *, 0x34)) / temp_ft1) * M2C_FIELD(D_8005EA2C, f32 *, 0xD4)) + M2C_FIELD(D_8005EA2C, f32 *, 0xE4));
                if (((s16) temp_ft2f < (s32) D_8002C110) && ((s16) temp_ft2f_2 < (s32) D_8002C112) && !(*(f32 *)0x200130 < fabsf(temp_ft2 / temp_ft1))) {
                    func_802213DC(&D_1007A0, arg3, (s16) temp_ft2f, (s16) temp_ft2f_2, 0xFF, 0xFF, 0xFF, 0xFF);
                }
            }
        }
    }
}
