/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8022117C(s32, s32, s32, s16, s32, s32, s32, s32); /* extern */
u32 func_802D5620(s32);                             /* extern */
s32 func_802D5864(s32, s32, s32);               /* extern */
extern s32 D_80052770;
extern s32 D_8007BF58;
extern s32 D_8007C8B0;
extern s32 D_8007C8F0;
extern s32 D_8007C8F8;
extern s32 D_8007C8FC;
extern s32 D_8007DB78;

void func_802D5668(void) {
    s32 *__base_D_8007BF58;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    u32 temp_v0;
    void *temp_a1_2;
    void *temp_a2_2;
    
    void *temp_v0_2;

    if (*((D_8007C8F8 * 0x10) + &D_8007C8B0) != 0) {
        var_s1 = 0;
        if (((*(s32 *)((char *)(&D_80052770) + 4)) * 2) > 0) {
            do {
                temp_a1_2 = (D_8007C8F8 * 0x10) + &D_8007C8B0;
                temp_v0 = (*(u32 *)((char *)(temp_a1_2) + 0xC));
                (*(u32 *)((char *)(temp_a1_2) + 8)) = temp_v0;
                if (temp_v0 >= temp_v0) {
                    if ((u32) (*(u32 *)((char *)(temp_a1_2) + 8)) >= func_802D5620((*(s32 *)((char *)(temp_a1_2) + 0)))) {
                        __base_D_8007BF58 = &D_8007BF58;
                        (*(s32 *)((char *)(__base_D_8007BF58) + 0x384)) = -1;
                    } else {
                        temp_v0_2 = (D_8007C8F8 * 0x10) + &D_8007C8B0;
                        temp_a2 = (*(s32 *)((char *)(temp_v0_2) + 0));
                        temp_a1 = (*(s32 *)((char *)(temp_v0_2) + 0xC));
                        (*(s32 *)((char *)(temp_v0_2) + 8)) = temp_a1;
                        func_802D5864((*(s32 *)((char *)(temp_v0_2) + 4)), temp_a2 + temp_a1, temp_a2);
                    }
                }
                var_s1 += 1;
            } while (var_s1 < ((*(s32 *)((char *)(&D_80052770) + 4)) * 2));
        }
    }
    var_s1_2 = 0;
    do {
        temp_v1 = D_8007C8F0 + var_s1_2;
        var_v0 = temp_v1;
        if (temp_v1 < 0) {
            var_v0 = temp_v1 + 3;
        }
        temp_a2_2 = ((temp_v1 - ((var_v0 >> 2) * 4)) * 0x10) + &D_8007C8B0;
        if ((*(s32 *)((char *)(temp_a2_2) + 0)) != 0) {
            temp_a1_2 = (*(void **)((char *)((*(void **)((char *)(temp_a2_2) + 4))) + 0xC));
            D_8007C8FC = (*(s32 *)((char *)(temp_a1_2) + 8));
            if ((*(u8 *)((char *)(&D_8007DB78) + 2)) == 0) {
                func_8022117C(0x100000, (*(s32 *)((char *)(temp_a2_2) + 8)), (*(s32 *)((char *)(temp_a2_2) + 0)), (s16) (s32) ((f32) (((*(u8 *)0x100F80 & 0x7F) - 2) * var_s1_2) + *(f32 *)0x21B194), (s32) (*(u8 *)((char *)(temp_a1_2) + 0x11)), (s32) (*(u8 *)((char *)(temp_a1_2) + 0x12)), (s32) (*(u8 *)((char *)(temp_a1_2) + 0x13)), 0xFF);
            }
        }
        var_s1_2 += 1;
    } while (var_s1_2 < 4);
}
