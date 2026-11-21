/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern u16 D_80036944;
extern s32 D_80075568;
extern void *D_8007AFF8;

void func_8028DFC0(void) {
    s32 *__base_D_80075568;
    f32 temp_fv1;
    f32 var_fv1f;
    s16 temp_v0;
    s16 var_a3;
    u16 *var_a1;
    u16 temp_t2;
    u16 var_a2;
    void *temp_v0_2;
    void *temp_v1;

    var_a1 = (*(u16 **)((char *)(D_8007AFF8) + 0xC));
    (*(s16 *)((char *)(D_8007AFF8) + 0x96)) = 0;
    var_a2 = *var_a1;
    var_a3 = 0;
    if (var_a1 != NULL) {
        var_fv1f = *(f32 *)0x2154F8;
        temp_t2 = var_a2;
        if ((s32) (*(u16 *)((char *)(D_8007AFF8) + 0x94)) >= 0) {
            do {
                __base_D_80075568 = &D_80075568;
                temp_v1 = ((s16) *var_a1 * 0x34) + D_80036944;
                temp_fv1 = fabsf((*(f32 *)((char *)(__base_D_80075568) + 0x24)) - (*(f32 *)((char *)(temp_v1) + 4))) + fabsf((*(f32 *)((char *)(__base_D_80075568) + 0x2C)) - (*(f32 *)((char *)(temp_v1) + 0xC)));
                var_a1 += 1;
                if (temp_fv1 < var_fv1f) {
                    var_fv1f = temp_fv1;
                    var_a2 = temp_t2;
                    if (((*(u16 *)((char *)(D_8007AFF8) + 0x94)) - 1) >= var_a3) {
                        var_a2 = *var_a1;
                    }
                    temp_v0_2 = ((s16) var_a2 * 0x34) + (s32)D_80036944;
                    (*(f32 *)((char *)(D_8007AFF8) + 0xB0)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 4));
                    (*(f32 *)((char *)(D_8007AFF8) + 0xB4)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 8));
                    (*(f32 *)((char *)(D_8007AFF8) + 0xB8)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0xC));
                }
                temp_v0 = var_a3 + 1;
                var_a3 = (int)temp_v0;
            } while ((s32) (*(u16 *)((char *)(D_8007AFF8) + 0x94)) >= temp_v0);
        }
        if ((s16) var_a2 != (*(u16 *)((char *)(D_8007AFF8) + 0x90))) {
            (*(s16 *)((char *)(D_8007AFF8) + 0xA2)) = 0;
            (*(s16 *)((char *)(D_8007AFF8) + 0x9E)) = 0;
            (*(u16 *)((char *)(D_8007AFF8) + 0x90)) = var_a2;
        }
    }
}
