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

M2C_UNK func_8023A048(f32 *, s32);                  /* extern */
extern M2C_UNK D_8005EA80;
extern s32 D_8006196C;
extern void *D_80061A10;

void func_80235470(f32 arg1, void *arg2) {
    union {
        unsigned char bytes[16];
        struct { f32 value; } view_sp10;
        struct { unsigned char pad[4]; f32 value; } view_sp14;
        struct { unsigned char pad[8]; f32 value; } view_sp18;
    } m2c_initial_frame;

             
    f32 temp_ft1f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    s32 var_a2;
    s32 var_a3;
    s32 var_t0;
    void **var_v1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;
    void *var_a0;
    void *var_a1;

    func_8023A048(&m2c_initial_frame.view_sp10.value, arg2 + 0x34);
    temp_a0 = M2C_FIELD(arg2, void **, 0x64);
    temp_v1 = temp_a0 + 0xC;
    temp_fv1f = (f32) M2C_FIELD(temp_v1, u16 *, 6);
    temp_ft1f = arg1 * arg1 * *(f32 *)0x2023AC;
    temp_fv0f = (f32) M2C_FIELD(temp_a0, s16 *, 0xC) - m2c_initial_frame.view_sp10.value;
    temp_fv1 = (f32) M2C_FIELD(temp_v1, s16 *, 2) - m2c_initial_frame.view_sp14.value;
    temp_fv0 = (f32) M2C_FIELD(temp_v1, s16 *, 4) - m2c_initial_frame.view_sp18.value;
    if (((temp_fv0f * temp_fv0f) + (temp_fv1 * temp_fv1) + (temp_fv0 * temp_fv0)) < ((temp_fv1f * temp_fv1f) + temp_ft1f)) {
        var_a3 = D_8006196C;
        D_80061A10 = temp_a0;
        var_t0 = M2C_FIELD(temp_a0, s32 *, 0x14);
        var_v1 = (var_a3 * 0xC) + &D_8005EA80;
        var_a2 = M2C_FIELD(temp_a0, u16 *, 0x30) - 1;
        if (var_a2 != -1) {
            var_a0 = var_t0 + 0xE;
            var_a1 = var_v1 + 4;
loop_3:
            if (!(M2C_FIELD(var_a0, u8 *, -0xD) & 1) && (temp_v0 = M2C_FIELD(temp_a0, s32 *, 0x1C) + (M2C_FIELD(var_a0, u16 *, -6) * 0x10), (fabsf((M2C_FIELD(temp_v0, f32 *, 0) * m2c_initial_frame.view_sp10.value) + (M2C_FIELD(temp_v0, f32 *, 4) * m2c_initial_frame.view_sp14.value) + (M2C_FIELD(temp_v0, f32 *, 8) * m2c_initial_frame.view_sp18.value) + M2C_FIELD(temp_v0, f32 *, 0xC)) < arg1)) && (temp_fv1f_2 = (f32) M2C_FIELD(var_a0, u16 *, 2), temp_fv0f_2 = m2c_initial_frame.view_sp10.value - (f32) M2C_FIELD(var_a0, s16 *, -4), temp_fv1_2 = m2c_initial_frame.view_sp14.value - (f32) M2C_FIELD(var_a0, s16 *, -2), temp_fv0_2 = m2c_initial_frame.view_sp18.value - (f32) M2C_FIELD(var_a0, s16 *, 0), (((temp_fv0f_2 * temp_fv0f_2) + (temp_fv1_2 * temp_fv1_2) + (temp_fv0_2 * temp_fv0_2)) < ((temp_fv1f_2 * temp_fv1f_2) + temp_ft1f)))) {
                if (var_a3 < 0x3E8) {
                    *var_v1 = temp_a0;
                    M2C_FIELD(var_a1, s32 *, 4) = var_t0;
                    M2C_FIELD(var_a1, void **, 0) = arg2;
                    var_a1 += 0xC;
                    var_v1 += 0xC;
                    var_a3 += 1;
                    goto block_8;
                }
            } else {
block_8:
                var_a0 += 0x12;
                var_a2 -= 1;
                var_t0 += 0x12;
                if (var_a2 == -1) {

                } else {
                    goto loop_3;
                }
            }
        }
        D_8006196C = var_a3;
    }
}
