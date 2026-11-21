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

s32 func_80113AD0();
s32 func_8026F078();
s32 func_80270090();
s32 func_8027206C();
extern char D_212078[];
extern void *D_8007AFF8;

void func_802748D4(s32 arg0, u8 arg1) {
    char *__base_D_212078;
    s32 var_a0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    s32 var_v1;
    void *temp_v0;
    void *temp_v0_2;

    if ((func_8026F078(2) & 0xFF) != 1) {
        __base_D_212078 = D_212078;
        temp_v0 = (M2C_FIELD(D_8007AFF8, u8 *, 0x40) * 0x6C) + __base_D_212078;
        temp_fv0 = M2C_FIELD(temp_v0, f32 *, 0x14);
        temp_fv0f = M2C_FIELD(D_8007AFF8, f32 *, 0x80);
        var_a0 = 2;
        if (!(temp_fv0f < (temp_fv0 * temp_fv0)) && (temp_fv0_2 = M2C_FIELD(temp_v0, f32 *, 0x18), !((temp_fv0_2 * temp_fv0_2) < temp_fv0f))) {
            if (!(M2C_FIELD(D_8007AFF8, s32 *, 0x44) & 0x400)) {
                var_v1 = 0;
                if ((u32) (arg1 & 0xFF) >= 2U) {
                    var_v1 = ((func_80113AD0(2, D_8007AFF8) % (s32) (((arg1 & 0xFF) * 0x64) - 1)) & 0xFFFF) / 100;
                }
                temp_v0_2 = ((var_v1 & 0xFFFF) * 4) + arg0;
                func_8027206C(M2C_FIELD(temp_v0_2, s16 *, 0), M2C_FIELD(temp_v0_2, s16 *, 2));
                var_a0 = 0xA;
                goto block_7;
            }
        } else {
block_7:
            func_80270090(var_a0);
        }
    }
}
