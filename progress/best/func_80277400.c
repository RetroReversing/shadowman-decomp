/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80270090();
s32 func_80270E0C(f32);
f32 func_802712B0(s32, f32, u16, s32);
s32 func_8027750C();
extern char D_212078[];
extern void *D_8006A4FC;
extern void *D_8007AFF8;

s32 func_80277400(s32 arg0) {
    char *__base_D_212078;
    void **__base_D_8007AFF8;
    register s8 temp_v0;
    u16 temp_a0;
    register u8 var_s0;
u8 __repair_result_var_s0;
    void *temp_a2;
    void **__base_D_8006A4FC;

    __base_D_8006A4FC = &D_8006A4FC;

    __base_D_8007AFF8 = &D_8007AFF8;
    __base_D_212078 = D_212078;
    temp_a2 = ((*(u8 *)((char *)((*__base_D_8007AFF8)) + 0x40)) * 0x6C) + __base_D_212078;
    __repair_result_var_s0 = (*(volatile u8 *)((char *)(temp_a2) + 0xD));
    temp_a0 = (*(volatile u16 *)((char *)((*__base_D_8007AFF8)) + 0x2C));
    if ((*(s32 *)((char *)((*__base_D_8007AFF8)) + 0x44)) & 0x40) {
        __repair_result_var_s0 = (*(u8 *)((char *)(temp_a2) + 0xE));
    }
    if ((func_802712B0((*(f32 *)((char *)((*__base_D_8006A4FC)) + 0x1C)), (f32) temp_a0, temp_a0, (*__base_D_8007AFF8)) <= (f32) (s8) __repair_result_var_s0) || (temp_v0 = (*(s8 *)((char *)((*__base_D_8007AFF8)) + 0x5C)), (temp_v0 == 0))) {
        (*(f32 *)((char *)((*__base_D_8006A4FC)) + 0x1C)) = (f32) (*(u16 *)((char *)((*__base_D_8007AFF8)) + 0x2C));
        func_80270090(arg0 & 0xFF);
        return func_8027750C(-0x41, (*__base_D_8007AFF8), 0xFFBFFFFF);
    }
    func_80270E0C((f32) temp_v0);
    return 0;
}
