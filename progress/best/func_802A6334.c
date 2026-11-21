/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802329F0(void *, s32, s32);        /* extern */
extern void *D_8007BD64;
extern s32 D_8007DB78;

void func_802A6334(void) {
    s32 *__base_D_8007DB78;
    s32 (*temp_v1)(void *);
    s16 temp_v0;
    void *temp_s1;
    void *temp_s2;
    void *var_s0;

    var_s0 = D_8007BD64;
    if (var_s0 != NULL) {
        do {
            temp_v1 = (*(s32 (**)(void *))((char *)(temp_s1) + 0x10));
            temp_s1 = (*(void **)((char *)(var_s0) + 8));
            temp_s2 = (*(void **)((char *)(var_s0) + 0));
            __base_D_8007DB78 = &D_8007DB78;
            if ((temp_v1 != NULL) && ((*(const u8 *)((char *)(__base_D_8007DB78) + 0xB)) == 0)) {
                /*__repair_pointer_balance*/if ((unsigned long)__base_D_8007DB78 & 0x100) {
temp_v1(var_s0);
} else {
temp_v1(var_s0);
}
            }
            if (((*(s32 (**)(void *))((char *)(temp_s1) + 0x14)) != NULL) && ((*(const f32 *)((char *)(var_s0) + 0x30)) != 0.0f) && ((temp_v0 = (*(const s16 *)((char *)(var_s0) + 0x52)), (temp_v0 == 0x1E)) || (temp_v0 == 0x20) || ((s32)temp_v0 == 0x23) || (func_802329F0(var_s0 + 0x54, 0x42C80000, 7) != 0)) && ((*(const u8 *)((char *)(__base_D_8007DB78) + 0x20)) == 0)) {
                (*(s32 (**)(void *))((char *)(temp_s1) + 0x14))(var_s0);
            }
            var_s0 = temp_s2;
        } while (var_s0 != NULL);
    }
}
