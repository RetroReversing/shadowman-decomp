/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_801056DC();
s32 func_80105730();

void func_80105530(void *arg0, s32 arg1, void *arg2) {
    s16 var_t0_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_t0;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_t2;
    s32 var_t4;
    u32 temp_a1;
    u32 temp_a1_2;
    u32 temp_v0_2;
    void *temp_v0;
    void *temp_v0_3;
    void *var_t3;

    func_801056DC(arg0, arg1 & 0xFF);
    var_t0 = 0;
    var_a3 = 1;
    var_t1 = 4;
    do {
        if ((*(u8 *)((char *)(arg2) + 0)) == 0) {
            temp_v0 = (*(void **)((char *)(arg2) + 4));
            (*(u8 *)((char *)(arg2) + 0)) = 0x10U;
            (*(void **)((char *)(arg2) + 4)) = (void *) (temp_v0 + 2);
            (*(u32 *)((char *)(arg2) + 0x10)) = (u32) (((*(u8 *)((char *)(temp_v0) + 3)) << 0x18) + ((*(u8 *)((char *)(temp_v0) + 2)) << 0x10) + ((*(u8 *)((char *)(temp_v0) + 1)) << 8) + (*(u8 *)((char *)(temp_v0) + 0)));
        }
        temp_a1 = (*(u32 *)((char *)(arg2) + 0x10));
        if (temp_a1 & 1) {
            var_t0 |= var_a3;
        }
        var_a3 *= 2;
        temp_a0 = var_t1 - 1;
        var_t1 = temp_a0;
        (*(u32 *)((char *)(arg2) + 0x10)) = (u32) (temp_a1 >> 1);
        (*(u8 *)((char *)(arg2) + 0)) -= 1;
    } while ((temp_a0 & 0xFF) != 0xFF);
    var_t4 = var_t0;
    temp_v0_2 = var_t4 & 0xFF;
    if (temp_v0_2) {
        if (0x11U <= temp_v0_2) {
            var_t4 = 0x10;
        }
        var_t3 = arg0;
        var_t2 = 0;
        if (var_t4 & 0xFF) {
            do {
                var_t0_2 = 0;
                var_a3_2 = 1;
                var_t1_2 = 3;
do {
                if ((*(u8 *)((char *)(arg2) + 0)) == 0) {
                    temp_v0_3 = (*(void **)((char *)(arg2) + 4));
                    (*(u8 *)((char *)(arg2) + 0)) = 0x10U;
                    (*(u32 *)((char *)(arg2) + 0x10)) = (u32) (((*(u8 *)((char *)(temp_v0_3) + 3)) << 0x18) + ((*(u8 *)((char *)(temp_v0_3) + 2)) << 0x10) + ((*(u8 *)((char *)(temp_v0_3) + 1)) << 8) + (*(u8 *)((char *)(temp_v0_3) + 0)));
                    (*(void **)((char *)(arg2) + 4)) = (void *) (temp_v0_3 + 2);
                }
                temp_a1_2 = (*(u32 *)((char *)(arg2) + 0x10));
                if (temp_a1_2 & 1) {
                    var_t0_2 |= var_a3_2;
                }
                var_a3_2 *= 2;
                temp_a0_2 = var_t1_2 - 1;
                var_t1_2 = temp_a0_2;
                (*(u32 *)((char *)(arg2) + 0x10)) = (u32) (temp_a1_2 >> 1);
                (*(u8 *)((char *)(arg2) + 0)) -= 1;
                } while ((temp_a0_2 & 0xFF) != 0xFF);
                (*(s16 *)((char *)(var_t3) + 0xC)) = var_t0_2;
                var_t2 += 1;
                var_t3 += 0x10;
            } while ((u32) (var_t2 & 0xFF) < (u32) (var_t4 & 0xFF));
        }/*__repair_call_balance*/if(var_t0){
        func_80105730(arg0, var_t4 & 0xFF);}else{
        func_80105730(arg0, var_t4 & 0xFF);}
    }
}
