/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023E724();
void *func_80296BC0();
void *func_802A53AC();
void *func_802A53CC();
void *func_802A53F0();
extern char D_80036B1C[];
extern char D_80036C40[];
extern char D_80036C48[];
extern char D_80036C50[];
extern char D_80036C58[];
extern char D_80075518[];
extern char D_8007BB30[];

void *func_802A52E4(u32 arg0, s32 arg1) {
    char *__base_D_8007BB30;
    u8 *temp_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s0;
    void *var_v0;

    __base_D_8007BB30 = D_8007BB30;
    temp_v1 = arg1 + __base_D_8007BB30;
    var_s0 = NULL;
    if (*temp_v1 != 1) {
        *(arg1 + __base_D_8007BB30) = 1;
        if (arg0 != 2) {
            if (arg0 >= 3U) {
                if (arg0 != 4) {
                    if (arg0 != 8) {
                        return func_802A53F0(D_80036B1C, 1);
                    }
                    temp_v0 = func_80296BC0(D_80036B1C, 0, D_80036C40);
                    var_v0 = temp_v0;
                    if (temp_v0 != NULL) {
                        (*(f32 *)((char *)(temp_v0) + 0x54)) = (f32) *(f32 *)0x21622C;
                        return func_802A53F0();
                    }
                    /* Duplicate return node #23. Try simplifying control flow for better match */
                    return var_v0;
                }
                var_s0 = func_80296BC0(D_80036B1C, 0, D_80036C48);
                if (var_s0 != NULL) {
                    (*(s8 *)((char *)(var_s0) + 0x73)) = 0;
                    func_8023E724(D_80075518, arg1, D_80036B1C, var_s0);
                    (*(s32 *)((char *)(var_s0) + 0x6C)) = arg1;
                }
                goto block_22;
            }
            if (arg0 != 1) {
                return func_802A53F0(D_80036B1C, 1);
            }
            return func_802A53AC(D_80036B1C, 0, D_80036C50);
        }
        temp_v0_2 = func_80296BC0(D_80036B1C, 0, D_80036C58);
        var_v0 = temp_v0_2;
        if (temp_v0_2 != NULL) {
            return func_802A53CC();
        }
        /* Duplicate return node #23. Try simplifying control flow for better match */
        return var_v0;
    }
block_22:
    var_v0 = var_s0;
    return var_v0;
}
