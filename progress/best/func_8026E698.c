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

void *func_80233CD8();
s32 func_8026E754();
s32 func_8026E75C();
s32 func_8026E808();
extern s32 D_80031110;
extern s32 D_8005EA14;
extern s32 D_80074BB0;
extern s16 D_80075F80;

s32 func_8026E698(void *arg0) {
    s32 sp10[3];
    char *var_s0;
    s16 temp_s3;
    s32 temp_fv0f;
    s32 var_s1;
    void *temp_v0;

    sp10[0] = (s32) M2C_FIELD(arg0, f32 *, 0);
    sp10[1] = (s32) M2C_FIELD(arg0, f32 *, 4);
    temp_s3 = D_80075F80;
    sp10[2] = (s32) M2C_FIELD(arg0, f32 *, 8);
    if (D_80074BB0 != 2) {
        if (D_80074BB0 < 3) {
            if (D_80074BB0 != 1) {
                return func_8026E75C();
            }
            return func_8026E754();
        }
        if (D_80074BB0 != 3) {
            if (D_80074BB0 != 0x10) {
                return func_8026E75C();
            }
            if (temp_s3 > 1) {
                var_s1 = 1;
                var_s0 = D_80075F80 + 0xA;
loop_19:
                D_80031110 = var_s1;
                if (M2C_FIELD(var_s0, u8 *, 6) != 0) {
                    var_s1 += 1;
                    goto block_25;
                }
                temp_v0 = func_80233CD8(D_8005EA14, M2C_FIELD(var_s0, u8 *, 8));
                var_s1 += 1;
                if ((sp10[0] != (M2C_FIELD(var_s0, s16 *, 0) + (s32) M2C_FIELD(temp_v0, f32 *, 0x24))) || (sp10[1] != (M2C_FIELD(var_s0, s16 *, 2) + (s32) M2C_FIELD(temp_v0, f32 *, 0x28))) || (temp_fv0f = (s32) M2C_FIELD(temp_v0, f32 *, 0x2C), (sp10[2] != (M2C_FIELD(var_s0, s16 *, 4) + temp_fv0f)))) {
block_25:
                    var_s0 += 0xA;
                    if (var_s1 >= temp_s3) {
                        /* Duplicate return node #26. Try simplifying control flow for better match */
                        return -1;
                    }
                    goto loop_19;
                }
                return func_8026E808(temp_fv0f);
            }
            return -1;
        }
        return func_8026E754();
    }
    return func_8026E754();
}
