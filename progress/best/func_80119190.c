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

M2C_UNK func_80119204(M2C_UNK);                     /* extern */
M2C_UNK func_80119320();                            /* extern */
s32 func_8011D5C0(s32, s32, M2C_UNK, M2C_UNK);      /* extern */
u64 func_8011DB50(s32, s32, M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK D_80028670;
extern M2C_UNK D_80028684;

void func_80119190(void *arg0, s32 arg1) {
    u8 sp10[0x28];
    M2C_UNK *var_s7;
    M2C_UNK var_s6;
    s32 temp_a1;
    s32 temp_ret;
    s32 temp_v1;
    s32 var_s2;
s32 __repair_result_var_s2;
    s32 var_s3;
s32 __repair_result_var_s3;
    s32 var_v0;

    var_s7 = &D_80028670;
    temp_v1 = arg1 & 0xFF;
    if (temp_v1 == 0x58) {
        var_s7 = &D_80028684;
    }
    if (temp_v1 != 0x6F) {
        var_s6 = 0x10;
        if (temp_v1 != 0x78) {
            if (temp_v1 != 0x58) {
                var_s6 = 0xA;
                goto block_10;
            }
            func_80119204(0x58);
            return;
        }
        goto block_10;
    }
    var_s6 = 8;
block_10:
    __repair_result_var_s2 = M2C_FIELD(arg0, s32 *, 0);
    __repair_result_var_s3 = M2C_FIELD(arg0, s32 *, 4);
    temp_a1 = arg1 & 0xFF;
    if ((temp_a1 == 0x64) || (var_v0 = __repair_result_var_s3 | __repair_result_var_s2, (temp_a1 == 0x69))) {
        var_v0 = __repair_result_var_s3 | __repair_result_var_s2;
        if (M2C_FIELD(arg0, s32 *, 0) < 0) {
            var_s3 = -var_s3;
            var_s2 = -var_s2 - (var_s3 != 0);
            var_v0 = var_s3 | var_s2;
        }
    }
    if ((var_v0 != 0) || (M2C_FIELD(arg0, s32 *, 0x24) != 0)) {
        M2C_FIELD(sp10, u8 *, 0x17) = (u8) *(var_s7 + (u32) func_8011DB50(var_s2, var_s3, 0, var_s6));
    }
    temp_v1 = func_8011D5C0(var_s2, var_s3, 0, var_s6);
    M2C_FIELD(arg0, s32 *, 0) = temp_v1;
    M2C_FIELD(arg0, s32 *, 4) = (s32) (u32) (u64) temp_v1;
    func_80119320();
}
