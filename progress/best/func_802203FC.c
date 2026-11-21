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

s32 func_80220028(s32, u8, u8, s32, s32, s32, f32, f32, f32, f32, f32, f32); /* extern */
s32 func_802204A4(s32);                             /* extern */
extern u16 D_8002C112;
extern M2C_UNK D_800569E0;

s32 func_802203FC(s32 arg0, void *arg1) {
    f32 temp_fs0;
    f32 temp_fv0f;
    s16 temp_a1;
    s16 temp_s5;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 var_s4;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_t0;
    s32 var_a3;
    s32 var_s2;
    u16 var_s1;

    var_a3 = arg0;
    if (M2C_FIELD(arg1, s32 *, 0x10) != 0) {
        return func_802204A4(var_a3);
    }
    temp_a1 = M2C_FIELD(arg1, s16 *, 0xA);
    temp_lo = temp_a1 / (s16) (s32) (*(f32 *)0x2000F8 / ((f32) M2C_FIELD(arg1, s16 *, 8) * *((M2C_FIELD(arg1, u8 *, 0x15) * 4) + &D_800569E0)));
    temp_lo_2 = temp_a1 / (s16) temp_lo;
    var_s1 = M2C_FIELD(arg1, u16 *, 2);
    var_s2 = M2C_FIELD(arg1, s32 *, 0xC);
    temp_v1 = temp_lo - 1;
    var_s4 = temp_v1;
    if (temp_v1 != -1) {
        temp_fs0 = *(f32 *)0x2000FC;
        temp_s5 = (s16) (s32) ((f32) (M2C_FIELD(arg1, s16 *, 8) * (s16) temp_lo_2) * *((M2C_FIELD(arg1, u8 *, 0x15) * 4) + &D_800569E0));
loop_5:
        temp_t0 = (s16) var_s1 + (s16) temp_lo_2;
        if ((s16) var_s1 < (s32) D_8002C112) {
            if (temp_t0 > 0) {
                var_a3 = func_80220028(var_a3, M2C_FIELD(arg1, u8 *, 0x15), M2C_FIELD(arg1, u8 *, 0x14), var_s2, (s32) M2C_FIELD(arg1, s16 *, 8), (s32) (s16) temp_lo_2, (f32) M2C_FIELD(arg1, s16 *, 0), (f32) (s16) var_s1, (f32) (M2C_FIELD(arg1, s16 *, 0) + M2C_FIELD(arg1, s16 *, 8)), (f32) temp_t0, temp_fs0, temp_fs0);
            }
            var_s2 += temp_s5;
            temp_v0 = var_s4 - 1;
            var_s4 = temp_v0;
            var_s1 += temp_lo_2;
            if (temp_v0 == -1) {
                goto block_9;
            }
            goto loop_5;
        }
    } else {
block_9:
        temp_v0_2 = ((u16) M2C_FIELD(arg1, s16 *, 0xA) + M2C_FIELD(arg1, u16 *, 2)) - var_s1;
        if ((temp_v0_2 > 0) && ((s16) var_s1 < (s32) D_8002C112)) {
            temp_fv0f = *(f32 *)0x200100;
            var_a3 = func_80220028(var_a3, M2C_FIELD(arg1, u8 *, 0x15), M2C_FIELD(arg1, u8 *, 0x14), var_s2, (s32) M2C_FIELD(arg1, s16 *, 8), (s32) temp_v0_2, (f32) M2C_FIELD(arg1, s16 *, 0), (f32) (s16) var_s1, (f32) (M2C_FIELD(arg1, s16 *, 0) + M2C_FIELD(arg1, s16 *, 8)), (f32) ((s16) var_s1 + temp_v0_2), temp_fv0f, temp_fv0f);
        }
    }
    return var_a3;
}
