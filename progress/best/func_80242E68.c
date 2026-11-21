/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80246684(s32);                         /* extern */
extern s32 D_8002D484;
extern s32 D_8006A9D8;

void func_80242E68(void) {
    s32 *var_s1;
    s32 temp_a0;
    register s32 var_s0;

    var_s0 = 0;
    if (D_8002D484 > 0) {
        var_s1 = &D_8006A9D8;
        do {
            temp_a0 = (*(s32 *)((char *)(var_s1) + 0xC));
            if (temp_a0 != 0) {/*__repair_call_balance*/if(var_s0){
                func_80246684(temp_a0);}else{
                func_80246684(temp_a0);}
            }
            var_s1 += 20;
            var_s0 += 1;
        } while (var_s0 < D_8002D484);
    }
}
