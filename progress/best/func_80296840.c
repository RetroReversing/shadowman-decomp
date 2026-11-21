/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80296878();
extern char D_200468[];
extern char D_8002C63C[];

void func_80296840(s32 arg0, s32 arg1) {
    char *var_a2;
    char *var_a3;
    register s16 temp_v1;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    u32 var_t0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_t0 = 0;
    var_a2 = D_200468;
    var_a3 = D_8002C63C;
loop_1:
    (*(s32 *)((char *)(var_a3) + 0)) = (s32) (*(s32 *)((char *)(var_a2) + 8));
    temp_v1 = (*(s16 *)((char *)(var_a2) + 4));
    (*(s32 *)((char *)(var_a3) + 4)) = (s32) temp_v1;
    if (temp_v1 != 0) {
        func_80296878(var_a0, var_a1, var_a2, var_a3);
        return;
    }
    (*(s8 *)((char *)(var_a3) + 0xD)) = 0;
    var_a1 = 0;
    if ((*(s16 *)((char *)(var_a2) + 4)) > 0) {
        do {do{
            temp_v0 = var_a1 * 4;}while(0);
            var_a1 += 1;
            var_a0 = (*(s32 *)((char *)(var_a2) + 8));
            *(s32 *)(temp_v0 + var_a0) = 0;
        } while (var_a1 < (*(s16 *)((char *)(var_a2) + 4)));
    }
    var_a2 += 0xC;
    var_t0 += 1;
    var_a3 += 0x10;
    if (var_t0 >= 0x28U) {
        return;
    }
    goto loop_1;
}
