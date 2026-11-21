/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023646C(s32);                             /* extern */
s32 func_8023648C(s32);                         /* extern */

void func_8026DE6C(s32 arg0, s32 arg1) {
    s16 temp_a1;
    s16 var_s0;
    u16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0;
    s16 var_s3;

    temp_a1 = arg1 - 1;
    var_s3 = temp_a1;
    if (temp_a1 != -1) {
        __repair_rows: {
            func_8023648C(arg0);
            func_8023646C(arg0);
            var_s0 = temp_v0_2;
            temp_v0_2 = func_8023646C((unsigned)arg0) - 1;
            if (temp_v0_2 != -1) {
                do {
                    func_8023648C(arg0);
                    temp_v0_3 = var_s0 - 1;
                    var_s0 = temp_v0_3;
                } while (temp_v0_3 != -1);
            }
            func_8023646C(arg0);
            func_8023646C(arg0);
            temp_v0 = var_s3 - 1;
            var_s3 = temp_v0;
        }
if (temp_v0 != -1) goto __repair_rows;
    }
}
