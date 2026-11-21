/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80237428();                                /* extern */
extern s32 D_80069738;
extern s32 D_800698A0;
extern void *D_8007BAF4;
extern void *D_8007BD64;

typedef struct { unsigned char pad[48]; int value; } __repair_field_30;
void func_80237884(void) {
    s32 *__base_D_800698A0;
    s32 *__base_D_80069738;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_s1;
    void *temp_s1_2;
    void *var_s0;
    void *var_s0_2;
    void *var_v1;
    void *var_v1_2;

    var_s0 = D_8007BD64;
    __base_D_80069738 = &D_80069738;
    (*__base_D_80069738) += 1;
    if (var_s0 != NULL) {
        temp_fs0 = *(f32 *)0x202444;
loop_2:
        temp_s1 = (*(void **)((char *)(var_s0) + 0));
        if ((*(u8 *)((char *)(var_s0) + 0x50)) & 1) {
            var_v1 = (*(void **)((char *)(var_s0) + 0x18));
            if (var_v1 == NULL) {
                temp_v0 = func_80237428();
                if (temp_v0 != -1) {
                    __base_D_800698A0 = &D_800698A0;
                    var_v1 = ((temp_v0 * 0x5C)) + ((*__base_D_800698A0));
                    (*(void **)((char *)(var_s0) + 0x18)) = var_v1;
                    (*(f32 *)((char *)(var_v1) + 0x20)) = temp_fs0;
                    (*(f32 *)((char *)(var_v1) + 0x24)) = temp_fs0;
                    (*(f32 *)((char *)(var_v1) + 0x28)) = temp_fs0;
                    goto block_6;
                }
            } else {
block_6:
                ((__repair_field_30 *)var_v1)->value = (s32) (*__base_D_80069738);
                (*(s16 *)((char *)(var_v1) + 0)) = 6;
                (*(f32 *)((char *)(var_v1) + 0x18)) = (f32) *(f32 *)0x202448;
                (*(f32 *)((char *)(var_v1) + 4)) = (f32) (*(f32 *)((char *)(var_s0) + 0x54));
                (*(f32 *)((char *)(var_v1) + 8)) = (f32) (*(f32 *)((char *)(var_s0) + 0x58));
                (*(f32 *)((char *)(var_v1) + 0xC)) = (f32) (*(f32 *)((char *)(var_s0) + 0x5C));
                temp_fv0 = (*(f32 *)((char *)(var_s0) + 0x38));
                (*(f32 *)((char *)(var_v1) + 0x10)) = temp_fv0;
                (*(f32 *)((char *)(var_v1) + 0x14)) = (f32) (temp_fv0 * temp_fv0);
                (*(u8 *)((char *)(var_v1) + 0x1C)) = (u8) (*(u8 *)((char *)(var_s0) + 0x48));
                (*(u8 *)((char *)(var_v1) + 0x1D)) = (u8) (*(u8 *)((char *)(var_s0) + 0x49));
                (*(u8 *)((char *)(var_v1) + 0x1E)) = (u8) (*(u8 *)((char *)(var_s0) + 0x4A));
                goto block_7;
            }
        } else {
block_7:
            var_s0 = temp_s1;
            if (var_s0 == NULL) {
                goto block_8;
            }
            goto loop_2;
        }
    } else {
block_8:
        var_s0_2 = D_8007BAF4;
        if (var_s0_2 != NULL) {
            temp_fs0_2 = *(f32 *)0x20244C;
loop_10:
            temp_s1_2 = (*(void **)((char *)(var_s0_2) + 0x3C));
            if ((*(u8 *)((char *)(var_s0_2) + 0x72)) & 4) {
                var_v1_2 = (*(void **)((char *)(var_s0_2) + 0x64));
                if (var_v1_2 == NULL) {
                    temp_v0_2 = func_80237428();
                    if (temp_v0_2 != -1) {
                        var_v1_2 = (*__base_D_800698A0) + (temp_v0_2 * 0x5C);
                        (*(void **)((char *)(var_s0_2) + 0x64)) = var_v1_2;
                        (*(f32 *)((char *)(var_v1_2) + 0x20)) = temp_fs0_2;
                        (*(f32 *)((char *)(var_v1_2) + 0x24)) = temp_fs0_2;
                        (*(f32 *)((char *)(var_v1_2) + 0x28)) = temp_fs0_2;
                        goto block_14;
                    }
                } else {
block_14:
                    (*(s16 *)((char *)(var_v1_2) + 0)) = 6;
                    ((__repair_field_30 *)var_v1_2)->value = (s32) (*__base_D_80069738);
                    (*(f32 *)((char *)(var_v1_2) + 0x18)) = (f32) *(f32 *)0x202450;
                    (*(f32 *)((char *)(var_v1_2) + 4)) = (f32) (*(f32 *)((char *)(var_s0_2) + 0));
                    (*(f32 *)((char *)(var_v1_2) + 8)) = (f32) (*(f32 *)((char *)(var_s0_2) + 4));
                    (*(f32 *)((char *)(var_v1_2) + 0xC)) = (f32) (*(f32 *)((char *)(var_s0_2) + 8));
                    temp_fv0_2 = (*(f32 *)((char *)(var_s0_2) + 0x60));
                    (*(f32 *)((char *)(var_v1_2) + 0x10)) = temp_fv0_2;
                    (*(f32 *)((char *)(var_v1_2) + 0x14)) = (f32) (temp_fv0_2 * temp_fv0_2);
                    (*(u8 *)((char *)(var_v1_2) + 0x1C)) = (u8) (*(u8 *)((char *)(var_s0_2) + 0x68));
                    (*(u8 *)((char *)(var_v1_2) + 0x1D)) = (u8) (*(u8 *)((char *)(var_s0_2) + 0x69));
                    (*(u8 *)((char *)(var_v1_2) + 0x1E)) = (u8) (*(u8 *)((char *)(var_s0_2) + 0x6A));
                    goto block_15;
                }
            } else {
block_15:
                var_s0_2 = temp_s1_2;
                if (var_s0_2 != NULL) {
                    goto loop_10;
                }
            }
        }
    }
}
