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

s32 func_8021E37C();
s32 func_8021E81C();
s32 func_80222C6C();
extern s32 D_8002C1B0;
extern char D_80058E68[];
extern void *D_8005EA2C;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x58, 0x5c, 0x68, 0x6c, 0x78, 0x7c, 0x88, 0x8c, 0x98, 0x9c, 0xa0, 0xa4], gap at: 0x4c. */
void func_8022E848(void *arg0, void *arg1, f32 arg2, s32 arg3, u8 arg4, s32 arg5, s32 arg6, void *arg7) {
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs0f_2;
    f32 temp_fs0f_3;
    f32 temp_fs0f_4;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1_3;
    f32 temp_fs1_4;
    f32 temp_fs1f;
    f32 temp_fs2;
    f32 temp_fs2f;
    f32 temp_fs3f;
    f32 temp_fs4;
    f32 temp_fs4f;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_ft2;
    f32 temp_ft2f;
    f32 temp_ft3;
    f32 temp_ft3f;
    f32 temp_ft4f;
    f32 temp_ft4f_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = func_8021E37C(4);
    if (temp_v0 != 0) {
        temp_fs1 = M2C_FIELD(arg0, f32 *, 0);
        temp_v0_2 = D_8005EA2C + 0x3C;
        temp_fv1 = M2C_FIELD(temp_v0_2, f32 *, 0xC);
        temp_fs0f = M2C_FIELD(arg0, f32 *, 4);
        temp_ft2 = M2C_FIELD(temp_v0_2, f32 *, 0x10);
        temp_ft4f = M2C_FIELD(arg0, f32 *, 8);
        temp_ft0f = M2C_FIELD(temp_v0_2, f32 *, 0x14);
        temp_ft1 = M2C_FIELD(temp_v0_2, f32 *, 8);
        temp_fa1 = temp_ft4f * temp_ft1;
        temp_ft2f = M2C_FIELD(temp_v0_2, f32 *, 0x1C);
        temp_ft3 = M2C_FIELD(temp_v0_2, f32 *, 0x20);
        temp_ft4f_2 = M2C_FIELD(arg1, f32 *, 8);
        temp_fv1f = M2C_FIELD(temp_v0_2, f32 *, 0x18);
        temp_fv0f = M2C_FIELD(D_8005EA2C, f32 *, 0x3C);
        temp_fs1_2 = M2C_FIELD(arg1, f32 *, 0);
        temp_fa0 = M2C_FIELD(temp_v0_2, f32 *, 0x28);
        temp_fv0 = M2C_FIELD(temp_v0_2, f32 *, 4);
        temp_ft3f = M2C_FIELD(D_8005EA2C, f32 *, 0x104);
        temp_fs2f = ((temp_fs1 * temp_fv1) + (temp_fs0f * temp_ft2) + (temp_ft4f * temp_ft0f) + temp_fa0) * temp_ft3f;
        temp_fs0f_2 = M2C_FIELD(arg1, f32 *, 4);
        temp_fs1f = ((temp_fs1_2 * temp_fv1) + (temp_fs0f_2 * temp_ft2) + (temp_ft4f_2 * temp_ft0f) + temp_fa0) * temp_ft3f;
        temp_fv0_2 = M2C_FIELD(temp_v0_2, f32 *, 0x24);
        temp_fs2 = (temp_fs1 * temp_fv0f) + (temp_fs0f * temp_fv0) + temp_fa1 + temp_fv0_2;
        temp_fs3f = (temp_fs1_2 * temp_fv0f) + (temp_fs0f_2 * temp_fv0) + (temp_ft4f_2 * temp_ft1) + temp_fv0_2;
        temp_fv0_3 = M2C_FIELD(temp_v0_2, f32 *, 0x2C);
        temp_fs4 = (temp_fs1 * temp_fv1f) + (temp_fs0f * temp_ft2f) + (temp_ft4f * temp_ft3) + temp_fv0_3;
        temp_fs4f = (temp_fs1_2 * temp_fv1f) + (temp_fs0f_2 * temp_ft2f) + (temp_ft4f_2 * temp_ft3) + temp_fv0_3;
        temp_fs1_3 = temp_fs3f - temp_fs2;
        temp_fs0f_3 = temp_fs1f - temp_fs2f;
        if ((temp_fs1_3 != 0.0f) && (temp_fs0f_3 != 0.0f)) {
            temp_fs0 = *(f32 *)0x20213C;
            temp_fv0_4 = temp_fs0 / sqrtf((temp_fs1_3 * temp_fs1_3) + (temp_fs0f_3 * temp_fs0f_3));
            temp_s2 = arg4 & 0xFF;
            temp_fs1_4 = temp_fs1_3 * temp_fv0_4 * arg2;
            temp_fs0f_4 = temp_fs0f_3 * temp_fv0_4 * arg2;
            temp_s1 = arg3 * 0x10;
            func_80222C6C(temp_fa0, temp_fa1, temp_v0, temp_fs3f - temp_fs0f_4, temp_fs1f + temp_fs1_4, temp_fs4f, 0.0f, temp_fs0, 0, (s32) M2C_FIELD(arg7, u8 *, 0), (s32) M2C_FIELD(arg7, u8 *, 1), (s32) M2C_FIELD(arg7, u8 *, 2), temp_s2, D_8002C1B0 + temp_s1);
            func_80222C6C(M2C_BITWISE(f32, (temp_v0 + 0x10)), temp_fs2 - temp_fs0f_4, M2C_BITWISE(s32, (temp_fs2f + temp_fs1_4)), temp_fs4, 0.0f, temp_fs0, temp_fs0, M2C_BITWISE(f32, M2C_FIELD(arg7, u8 *, 0)), (s32) M2C_FIELD(arg7, u8 *, 1), (s32) M2C_FIELD(arg7, u8 *, 2), temp_s2, D_8002C1B0 + temp_s1);
            func_80222C6C(M2C_BITWISE(f32, (temp_v0 + 0x20)), temp_fs2 + temp_fs0f_4, M2C_BITWISE(s32, (temp_fs2f - temp_fs1_4)), temp_fs4, 0.0f, 0.0f, temp_fs0, M2C_BITWISE(f32, M2C_FIELD(arg7, u8 *, 0)), (s32) M2C_FIELD(arg7, u8 *, 1), (s32) M2C_FIELD(arg7, u8 *, 2), temp_s2, D_8002C1B0 + temp_s1);
            func_80222C6C(M2C_BITWISE(f32, (temp_v0 + 0x30)), temp_fs3f + temp_fs0f_4, M2C_BITWISE(s32, (temp_fs1f - temp_fs1_4)), temp_fs4f, 0.0f, 0.0f, 0.0f, M2C_BITWISE(f32, M2C_FIELD(arg7, u8 *, 0)), (s32) M2C_FIELD(arg7, u8 *, 1), (s32) M2C_FIELD(arg7, u8 *, 2), temp_s2, D_8002C1B0 + temp_s1);
            func_8021E81C(temp_v0, 0, D_80058E68, 4, 2, D_8002C1B0 + temp_s1);
        }
    }
}
