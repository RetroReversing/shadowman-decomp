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

u8 func_8023646C(s32);                              /* extern */
s16 func_8023648C(s32);                             /* extern */
extern s32 D_8005E9FC;

void func_80232E84(u8 *arg0, s32 arg1) {
    s32 *__base_D_8005E9FC;
    s16 temp_v1;
    s16 var_s3;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    u8 *var_s0;
    u8 temp_a0;
    void *var_s1;

    var_s0 = arg0;
    var_s2 = arg1;
    var_s3 = 0;
    var_s1 = var_s0 + 8;
    __repair_rows: {
        __base_D_8005E9FC = &D_8005E9FC;
        *var_s0 = func_8023646C((*__base_D_8005E9FC));
        M2C_FIELD(var_s1, u8 *, -6) = func_8023646C((*__base_D_8005E9FC));
        temp_a0 = func_8023646C((*__base_D_8005E9FC));
        temp_v1 = (u16) *var_s0 & 0xFF80;
        *var_s0 = temp_v1;
        if (temp_a0 & 2) {
            *var_s0 = (s16) (temp_v1 | ((M2C_FIELD(var_s1, u8 *, -7) & 0x7F) | 1));
        }
        var_v0 = temp_a0 & 8;
        if (temp_a0 & 4) {
            *var_s0 = (s16) (((u16) *var_s0 & 0xFF80) | ((M2C_FIELD(var_s1, u8 *, -7) & 0x7F) | 2));
            var_v0 = temp_a0 & 8;
        }
        var_v0_2 = temp_a0 & 0x10;
        if (var_v0 != 0) {
            *var_s0 = (s16) (((u16) *var_s0 & 0xFF80) | ((M2C_FIELD(var_s1, u8 *, -7) & 0x7F) | 4));
            var_v0_2 = temp_a0 & 0x10;
        }
        var_v0_3 = temp_a0 & 0x20;
        if (var_v0_2 != 0) {
            *var_s0 = (s16) (((u16) *var_s0 & 0xFF80) | ((M2C_FIELD(var_s1, u8 *, -7) & 0x7F) | 8));
            var_v0_3 = temp_a0 & 0x20;
        }
        var_v0_4 = temp_a0 & 0x40;
        if (var_v0_3 != 0) {
            *var_s0 = (s16) (((u16) *var_s0 & 0xFF80) | ((M2C_FIELD(var_s1, u8 *, -7) & 0x7F) | 0x10));
            var_v0_4 = temp_a0 & 0x40;
        }
        if (var_v0_4 != 0) {
            *var_s0 = (s16) (((u16) *var_s0 & 0xFF80) | ((M2C_FIELD(var_s1, u8 *, -7) & 0x7F) | 0x20));
        }
        M2C_FIELD(var_s1, s16 *, -2) = var_s3;
        var_s3 += *var_s0;
        M2C_FIELD(var_s1, s16 *, 0) = func_8023648C((*__base_D_8005E9FC));
        var_s1 += 0x12;
        var_s2 -= 1;
        var_s0 += 0x12;
    }
if (var_s2 != 0) goto __repair_rows;
}
