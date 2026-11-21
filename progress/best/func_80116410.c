/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_801164B0();
s32 func_80116538();
s32 func_80116578();
void *func_801176C0();
extern void *D_80027780;
extern void *D_80027784;
extern s32 D_A4400000;

void func_80116410(void) {
    s32 __repair_store_0;
    s32 __repair_store_1;
    s32 __repair_store_2;
    s32 __repair_store_3;
    s32 sp10;
    s32 *sp14;
    void *sp18;
    void *sp1C;
    f32 temp_fv0;
    f32 temp_fv0f;
    f64 var_fv1;
    s32 temp_a2;
    s32 temp_s7;
    s32 temp_v0;
    u16 temp_v1;
    void *temp_a3;
    void *temp_fp;
    void *temp_v0_2;
    void *var_a1;
    void *var_a3;
    void *var_t4;
    void *var_t8;

    temp_fp = D_80027784;
    temp_a3 = (*(void **)((char *)(temp_fp) + 8));
    temp_s7 = *(volatile s32 *)0xA4400010 & 1;
    sp18 = temp_a3;
    var_a3 = temp_a3;
    var_a1 = func_801176C0((*(s32 *)((char *)(temp_fp) + 4))) + (*(s32 *)((char *)((var_a3 + (temp_s7 * 0x14))) + 0x28));
    if ((*(u16 *)((char *)(temp_fp) + 0)) & 2) {
        func_801164B0((*(s32 *)((char *)(temp_fp) + 0x20)) | ((*(s32 *)((char *)(var_a3) + 0x20)) & ~0xFFF));
        return;
    }
    (*(s32 *)((char *)(temp_fp) + 0x20)) = (s32) (*(s32 *)((char *)(var_a3) + 0x20));
    if ((*(u16 *)((char *)(temp_fp) + 0)) & 4) {
        temp_v0 = (*(s32 *)((char *)((var_a3 + (temp_s7 * 0x14))) + 0x2C)) & 0xFFF;
        var_fv1 = (f64) temp_v0;
        if (temp_v0 < 0) {
            var_fv1 += *(f64 *)0x102570;
        }
        temp_fv0 = (*(f32 *)((char *)(temp_fp) + 0x24)) * (f32) var_fv1;
        temp_fv0f = *(f32 *)0x102578;
        if (temp_fv0f <= temp_fv0) {
            (*(s32 *)((char *)(temp_fp) + 0x2C)) = (s32) ((s32) (temp_fv0 - temp_fv0f) | 0x80000000);
            func_80116578(-0x1000);
            return;
        }
        func_80116538(temp_fp + 0x2C);
        return;
    }
    (*(s32 *)((char *)(temp_fp) + 0x2C)) = (s32) (*(s32 *)((char *)((var_a3 + (temp_s7 * 0x14))) + 0x2C));
    temp_v1 = (*(u16 *)((char *)(temp_fp) + 0));
    temp_a2 = (*(s32 *)((char *)(var_a3) + 0x1C));
    sp10 = temp_a2;
    if (temp_v1 & 0x20) {
        sp10 = 0;
    }
    if (temp_v1 & 0x40) {
        (*(s32 *)((char *)(temp_fp) + 0x2C)) = 0;
        sp18 = var_a3;
        var_a1 = func_801176C0((*(s32 *)((char *)(temp_fp) + 4)), var_a1, temp_a2);
    }
    if ((*(u16 *)((char *)(temp_fp) + 0)) & 0x80) {
        (*(s32 *)((char *)(temp_fp) + 0x2C)) = (s32) (((*(u16 *)((char *)(temp_fp) + 0x28)) << 0x10) & 0x03FF0000);
        sp18 = var_a3;
        var_a1 = func_801176C0((*(s32 *)((char *)(temp_fp) + 4)), var_a1);
    }
    var_t8 = temp_fp;
    sp14 = (s32 *)0xA4400008;
    var_t4 = D_80027780;
    sp1C = var_t8 + 0x30;
    *(void **)0xA4400004 = var_a1;
    D_80027780 = var_t8;
    temp_v0_2 = var_a3 + (temp_s7 * 0x14);
    *sp14 = (*(s32 *)((char *)(var_a3) + 8));
    *(volatile s32 *)0xA4400014 = (*(s32 *)((char *)(var_a3) + 0xC));
    *(volatile s32 *)0xA4400018 = (*(s32 *)((char *)(var_a3) + 0x10));
    *(volatile s32 *)0xA440001C = (*(s32 *)((char *)(var_a3) + 0x14));
    *(volatile s32 *)0xA4400020 = (*(s32 *)((char *)(var_a3) + 0x18));
    *(volatile s32 *)0xA4400024 = sp10;
    *(volatile s32 *)0xA4400028 = (*(s32 *)((char *)(temp_v0_2) + 0x30));
    *(volatile s32 *)0xA440002C = (*(s32 *)((char *)(temp_v0_2) + 0x34));
    *(volatile s32 *)0xA440000C = (*(s32 *)((char *)(temp_v0_2) + 0x38));
    *(volatile s32 *)0xA4400030 = (*(s32 *)((char *)(var_t8) + 0x20));
    *(volatile s32 *)0xA4400034 = (*(s32 *)((char *)(var_t8) + 0x2C));
    D_A4400000 = (*(s32 *)((char *)(var_t8) + 0xC));
    D_80027784 = var_t4;
    do {
        __repair_store_0 = (s32) (*(s32 *)((char *)(var_t8) + 0));
        __repair_store_1 = (s32) (*(s32 *)((char *)(var_t8) + 4));
        __repair_store_3 = (s32) (*(s32 *)((char *)(var_t8) + 0xC));
        __repair_store_2 = (s32) (*(s32 *)((char *)(var_t8) + 8));
        (*(s32 *)((char *)(var_t4) + 0)) = __repair_store_0;
        (*(s32 *)((char *)(var_t4) + 4)) = __repair_store_1;
        (*(s32 *)((char *)(var_t4) + 8)) = __repair_store_2;
        (*(s32 *)((char *)(var_t4) + 0xC)) = __repair_store_3;
        var_t8 += 0x10;
        var_t4 += 0x10;
    } while (var_t8 != sp1C);
}
