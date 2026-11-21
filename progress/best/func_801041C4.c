/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80103878(s32, s32, s32 *);     /* extern */
u16 func_80104114(s32 *);                       /* extern */
s32 memcpy(s32, s32 *, s32);                /* extern */
extern s32 D_100540;
extern s32 D_8004A510;
extern s32 D_8004A5A0;
extern s32 D_8004AD78;
extern s32 *D_8004AD7C;

void func_801041C4(void) {
    s32 *var_a0;
    s32 *var_a0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_a1;
    s16 var_a1_2;
    int var_v0;
    s32 var_v0_2;

    (*(u16 *)((char *)(&D_8004A510) + 4)) = 0x64U;
    (*(s32 *)((char *)(&D_8004A510) + 0x88)) = func_80103878(0x7D0, 3, &D_100540);
    (*(u16 *)((char *)(&D_8004A510) + 0)) = func_80104114((*(s32 **)((char *)(&D_8004AD78) + 0)));
    var_a0 = (*(s32 **)((char *)(&D_8004AD78) + 0));
    var_a1 = 0;
    (*(u16 *)((char *)(&D_8004A510) + 2)) = func_80104114((*(s32 **)((char *)(&D_8004AD78) + 4)));
    if ((*(u16 *)((char *)(&D_8004A510) + 0)) != 0) {
        var_v0 = 0 << 0x10;
        do {
            temp_v1 = var_a1 + 1;
            var_a1 = temp_v1;
            (*(s32 **)((char *)(((var_v0 >> 0xE) + &D_8004A510)) + 8)) = var_a0;
            var_v0 = var_a1 << 0x10;
            var_a0 = *var_a0;
        } while (temp_v1 < (s32) (*(u16 *)((char *)(&D_8004A510) + 0)));
    }
    var_a0_2 = D_8004AD7C;
    var_a1_2 = 0;
    if ((*(u16 *)((char *)(&D_8004A510) + 2)) != 0) {
        var_v0_2 = 0 << 0x10;
        do {
            temp_v1_2 = var_a1_2 + 1;
            var_a1_2 = temp_v1_2;
            (*(s32 **)((char *)(((var_v0_2 >> 0xE) + &D_8004A510)) + 0x48)) = var_a0_2;
            var_a0_2 = *var_a0_2;
            var_v0_2 = var_a1_2 << 0x10;
        } while (temp_v1_2 < (s32) (*(u16 *)((char *)(&D_8004A510) + 2)));
    }
    memcpy((*(s32 *)((char *)(&D_8004A510) + 0x88)), &D_8004A5A0, (*(u16 *)((char *)(&D_8004A510) + 4)) * 0x14);
}
