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

u8 func_802D9F5C(u8);                               /* extern */
M2C_UNK func_802DA208();                            /* extern */
M2C_UNK func_802DA268();                            /* extern */
extern M2C_UNK D_2D706C;

void func_802DA198(void *arg0, u8 *arg1) {
    s32 var_s2;
    u8 *temp_s3;
    u8 *var_s0;
    u8 *var_s1;
    u8 temp_a0;

    var_s0 = arg1;
    temp_s3 = var_s0;
    var_s1 = arg0 + 0xE;
    var_s2 = 0;
loop_1:
    if (*var_s1 == 0) {
        *var_s0 = 0x20;
        func_802DA208();
        return;
    }
    temp_a0 = *var_s1;
    var_s1 += 1;
    *var_s0 = func_802D9F5C(temp_a0);
    var_s0 += 1;
    if (*var_s0 == 0xFF) {
        M2C_FIELD(temp_s3, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(&D_2D706C, M2C_UNK *, 0));
        M2C_FIELD(temp_s3, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(&D_2D706C, M2C_UNK *, 4));
        M2C_FIELD(temp_s3, s8 *, 8) = (s8) M2C_FIELD(&D_2D706C, s8 *, 8);
        M2C_FIELD(temp_s3, s8 *, 9) = (s8) M2C_FIELD(&D_2D706C, s8 *, 9);
        M2C_FIELD(temp_s3, s8 *, 0xA) = (s8) M2C_FIELD(&D_2D706C, s8 *, 0xA);
        func_802DA268();
        return;
    }
    var_s2 += 1;
    if (var_s2 >= 0x10) {
        if (M2C_FIELD(arg0, u8 *, 0xA) != 0) {
            M2C_FIELD(var_s0, u8 *, 0) = 0x2E;
            M2C_FIELD(var_s0, u8 *, 1) = func_802D9F5C(M2C_FIELD(arg0, u8 *, 0xA));
            var_s0 = var_s0 + 1 + 1;
        }
        *var_s0 = 0;
        return;
    }
    goto loop_1;
}
