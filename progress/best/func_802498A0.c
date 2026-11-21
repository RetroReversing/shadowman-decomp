/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80109318();
s32 func_80237428();
s32 func_8026E4CC();
extern s32 D_8002D2B4;
extern void *D_8005E9F0;
extern s32 D_80069738;
extern s32 D_800698A0;

void func_802498A0(void *arg0) {
    s32 *__base_D_800698A0;
    f32 temp_fv0;
    s16 temp_v1;
    s32 temp_v0;
    void **temp_s1;
    void *temp_s0;
    void *var_v1;

    temp_s0 = (*(void **)((char *)(arg0) + 8));
    temp_v1 = (*(const s16 *)((char *)(temp_s0) + 0x7A));
    if ((temp_v1 == 1) || (((*(const s16 *)((char *)(temp_s0) + 0x7A))) == 0x7F)) {
        if (temp_v1 != 0x7F) {
            func_8026E4CC(arg0, temp_s0);
            (*(s16 *)((char *)(temp_s0) + 0x7A)) = 0x7F;
            func_80109318(-1, temp_s0 + 0x24, 0);
        }
        temp_s1 = (*(void ***)((char *)(temp_s0) + 0x6C));
        __base_D_800698A0 = &D_800698A0;
        if (((*(const s8 *)((char *)(temp_s0) + 0x71)) == D_8002D2B4) && ((*__base_D_800698A0) == (*(const s32 *)((char *)(D_8005E9F0) + 0x10)))) {
            var_v1 = *temp_s1;
            if ((var_v1 == NULL) || ((*(const s32 *)((char *)(var_v1) + 0x2C)) != arg0)) {
                temp_v0 = func_80237428();
                if (temp_v0 != -1) {
                    temp_fv0 = *(f32 *)0x202D80;
                    var_v1 = (*__base_D_800698A0) + (temp_v0 * 0x5C);
                    *temp_s1 = var_v1;
                    (*(void **)((char *)(var_v1) + 0x2C)) = arg0;
                    (*(f32 *)((char *)(var_v1) + 0x18)) = temp_fv0;
                    (*(f32 *)((char *)(var_v1) + 0x48)) = temp_fv0;
                    (*(f32 *)((char *)(var_v1) + 0x20)) = (f32) (*(const f32 *)((char *)(var_v1) + 4));
                    (*(f32 *)((char *)(var_v1) + 0x24)) = (f32) (*(const f32 *)((char *)(var_v1) + 8));
                    (*(f32 *)((char *)(var_v1) + 0x28)) = (f32) (*(const f32 *)((char *)(var_v1) + 0xC));
                    (*(f32 *)((char *)(var_v1) + 4)) = (f32) (*(const f32 *)((char *)(temp_s0) + 0x24));
                    (*(f32 *)((char *)(var_v1) + 8)) = (f32) ((*(const f32 *)((char *)(temp_s0) + 0x28)) - *(f32 *)0x202D84);
                    (*(s16 *)((char *)(var_v1) + 0)) = 6;
                    (*(s8 *)((char *)(var_v1) + 0x1C)) = 0x78;
                    (*(f32 *)((char *)(var_v1) + 0x14)) = (f32) *(f32 *)0x202D88;
                    (*(u8 *)((char *)(var_v1) + 0x1D)) = 0xC4;
                    (*(u8 *)((char *)(var_v1) + 0x1E)) = 0xFF;
                    (*(f32 *)((char *)(var_v1) + 0x10)) = (f32) *(f32 *)0x202D8C;
                    (*(f32 *)((char *)(var_v1) + 0xC)) = (f32) (*(const f32 *)((char *)(temp_s0) + 0x2C));
                    goto block_10;
                }
            } else {
block_10:
                (*(s32 *)((char *)(var_v1) + 0x30)) = (s32) (D_80069738 + 1);
            }
        }
    }
}
