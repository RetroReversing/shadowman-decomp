/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80237428();
s32 func_8026E2F4();
extern s32 D_8002D2B4;
extern void *D_8005E9F0;
extern s32 D_80069738;
extern s32 D_800698A0;

void func_80249744(void *arg0) {
    s32 *__base_D_800698A0;
    f32 temp_fv0;
    s32 temp_v0;
    void **temp_s1;
    void *temp_s0;
    void *var_v1;

    if (func_8026E2F4(0xA7) != 0) {
void *__repair_cached_pointer = D_8005E9F0;

        temp_s0 = (*(void **)((char *)(arg0) + 8));
        temp_s1 = (*(void ***)((char *)(temp_s0) + 0x6C));
        __base_D_800698A0 = &D_800698A0;
        if (((*(s8 *)((char *)(temp_s0) + 0x71)) == D_8002D2B4) && ((*__base_D_800698A0) == (*(s32 *)((char *)(__repair_cached_pointer) + 0x10)))) {
            var_v1 = *temp_s1;
            if ((var_v1 == NULL) || ((*(s32 *)((char *)(var_v1) + 0x2C)) != arg0)) {
                temp_v0 = func_80237428();
                if (temp_v0 != -1) {
                    var_v1 = (*__base_D_800698A0) + (temp_v0 * 0x5C);
                    temp_fv0 = *(f32 *)0x202D70;
                    *temp_s1 = var_v1;
                    (*(void **)((char *)(var_v1) + 0x2C)) = arg0;
                    (*(f32 *)((char *)(var_v1) + 0x18)) = temp_fv0;
                    (*(f32 *)((char *)(var_v1) + 0x48)) = temp_fv0;
                    (*(f32 *)((char *)(var_v1) + 0x20)) = (f32) (*(f32 *)((char *)(var_v1) + 4));
                    (*(f32 *)((char *)(var_v1) + 0x24)) = (f32) (*(f32 *)((char *)(var_v1) + 8));
                    (*(f32 *)((char *)(var_v1) + 0x28)) = (f32) (*(f32 *)((char *)(var_v1) + 0xC));
                    (*(f32 *)((char *)(var_v1) + 4)) = (f32) (*(f32 *)((char *)(temp_s0) + 0x24));
                    (*(f32 *)((char *)(var_v1) + 8)) = (f32) ((*(f32 *)((char *)(temp_s0) + 0x28)) - *(f32 *)0x202D74);
                    (*(s16 *)((char *)(var_v1) + 0)) = 6;
                    (*(s8 *)((char *)(var_v1) + 0x1C)) = 0x78;
                    (*(u8 *)((char *)(var_v1) + 0x1D)) = 0xC4;
                    (*(f32 *)((char *)(var_v1) + 0x14)) = (f32) *(f32 *)0x202D78;
                    (*(u8 *)((char *)(var_v1) + 0x1E)) = 0xFF;
                    (*(f32 *)((char *)(var_v1) + 0x10)) = (f32) *(f32 *)0x202D7C;
                    (*(f32 *)((char *)(var_v1) + 0xC)) = (f32) (*(f32 *)((char *)(temp_s0) + 0x2C));
                    goto block_7;
                }
            } else {
block_7:
                (*(s32 *)((char *)(var_v1) + 0x30)) = (s32) (D_80069738 + 1);
            }
        }
    }
}
