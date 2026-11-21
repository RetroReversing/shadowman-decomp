/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_80036944;
extern s32 D_80075568;
extern void *D_8007AFF8;
extern u16 D_8007B0FC;

void func_8027A428(void) {
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 var_ft0;
    s16 temp_v0;
    s16 var_t0;
    u16 *temp_a1;
    u16 *var_a1;
    u16 temp_a0;
    u16 var_a3;
    void *temp_v0_2;
    s32 *__base_D_80075568;

    __base_D_80075568 = &D_80075568;

    var_ft0 = *(f32 *)0x214464;
    var_t0 = 0;
    temp_a1 = (*(u16 **)((char *)(D_8007AFF8) + 0xC));
    var_a3 = *temp_a1;
    var_a1 = (s8 *) temp_a1 + 2;
    do {
        temp_a0 = *var_a1;
        temp_v0_2 = ((s16) temp_a0 * 0x34) + D_80036944;
        temp_fv1f = (*(f32 *)((char *)(temp_v0_2) + 4));
        temp_fv1 = fabsf((*(f32 *)((char *)(__base_D_80075568) + 0x24)) - temp_fv1f) + fabsf((*(f32 *)((char *)(__base_D_80075568) + 0x2C)) - (*(f32 *)((char *)(temp_v0_2) + 0xC)));
        var_a1 += 2;
        D_8007B0FC = temp_a0;
        if (var_ft0 < temp_fv1) {
            (*(f32 *)((char *)(D_8007AFF8) + 0xB0)) = temp_fv1f;
            var_ft0 = temp_fv1;
            (*(f32 *)((char *)(D_8007AFF8) + 0xB4)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 8));
            var_a3 = temp_a0;
            (*(f32 *)((char *)(D_8007AFF8) + 0xB8)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0xC));
        }
        temp_v0 = var_t0 + 1;
        var_t0 = temp_v0;
    } while (temp_v0 < 2);
    if ((s16) var_a3 != (*(u16 *)((char *)(D_8007AFF8) + 0x92))) {
        (*(s32 *)((char *)(D_8007AFF8) + 0xC0)) = 0;
        (*(s16 *)((char *)(D_8007AFF8) + 0xA8)) = 0;
        (*(u16 *)((char *)(D_8007AFF8) + 0x92)) = var_a3;
    }
}
