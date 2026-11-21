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

s32 func_801043F8(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_80104C50(s16);                             /* extern */
M2C_UNK func_80104DE0(s32);                         /* extern */
s32 func_8023646C(s32);                             /* extern */
s16 func_8023648C(s32);                             /* extern */
f32 func_80236544(s32);                             /* extern */
extern M2C_UNK D_800312B4;

void func_8026ED38(s32 arg0, s16 arg1) {
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;
    void *var_s0;

    if ((arg0 != 0) && (arg1 != -1)) {
        temp_v0 = func_80104C50(arg1);
        temp_s2 = func_8023646C(temp_v0) & 0xFF;
        var_s2 = temp_s2 - 1;
        temp_s3 = func_801043F8(temp_s2 * 0x38, 2, 0);
        if (temp_s2 != 0) {
            var_s0 = temp_s3 + 0x34;
            do {
                temp_v0_2 = func_8023646C(temp_v0) & 0xFF;
                if (temp_v0_2 != 0) {
                    M2C_FIELD(var_s0, s32 *, -0x2C) = (s32) *(((temp_v0_2 - 1) * 4) + &D_800312B4);
                }
                M2C_FIELD(var_s0, f32 *, -0x28) = func_80236544(temp_v0);
                M2C_FIELD(var_s0, f32 *, -0x24) = func_80236544(temp_v0);
                M2C_FIELD(var_s0, f32 *, -0x20) = func_80236544(temp_v0);
                M2C_FIELD(var_s0, f32 *, -0x1C) = func_80236544(temp_v0);
                M2C_FIELD(var_s0, f32 *, -0x18) = func_80236544(temp_v0);
                M2C_FIELD(var_s0, f32 *, -0x14) = func_80236544(temp_v0);
                M2C_FIELD(var_s0, f32 *, -0x10) = func_80236544(temp_v0);
                M2C_FIELD(var_s0, s16 *, -8) = func_8023648C(temp_v0);
                M2C_FIELD(var_s0, s16 *, -6) = func_8023648C(temp_v0);
                M2C_FIELD(var_s0, s16 *, -4) = func_8023648C(temp_v0);
                M2C_FIELD(var_s0, s16 *, 0) = func_8023648C(temp_v0);
                var_s0 += 0x38;
                var_s2 -= 1;
            } while (var_s2 != 0);
        }
        func_80104DE0(temp_v0);
    }
}
