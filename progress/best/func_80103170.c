/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80116200();
s32 osViBlack();
extern s32 D_80000300;
extern char D_8001E404[];
extern char D_800278A0[];
extern void *D_8002D210;
extern char D_800597C8[];

void func_80103170(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    char *__base_D_800278A0;
    s32 *var_v0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    void *var_v1;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    if (D_8002D210 != NULL) {
        var_v1 = D_8002D210;
        var_v0 = D_800597C8;
        do {
            var_a1 = (*(s32 *)((char *)(var_v0) + 0));
            var_a2 = (*(s32 *)((char *)(var_v0) + 4));
            var_a3 = (*(s32 *)((char *)(var_v0) + 8));
            (*(s32 *)((char *)(var_v1) + 0)) = var_a1;
            (*(s32 *)((char *)(var_v1) + 4)) = var_a2;
            (*(s32 *)((char *)(var_v1) + 8)) = var_a3;
            (*(s32 *)((char *)(var_v1) + 0xC)) = (s32) (*(s32 *)((char *)(var_v0) + 0xC));
            var_v0 += 0x10;
            var_v1 += 0x10;
        } while (var_v0 != (D_800597C8 + 0x50));
    }
    func_80116200((*((D_80000300 * 2) + D_8001E404) * 0x50) + __base_D_800278A0, var_a1, var_a2, var_a3);
    __base_D_800278A0 = D_800278A0;
    osViBlack(1);
}
