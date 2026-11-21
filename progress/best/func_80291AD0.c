extern int D_80045A8C;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_801043F8();
s32 func_8026F6BC();
s32 func_8027003C();
s32 func_8027006C();
s32 func_8027206C();
extern char D_80045930[];
extern s8 D_8007AFBC;
extern void *D_8007AFF8;
extern char D_8007B270[];

void func_80291AD0(s32 arg0) {
    s8 *__base_D_8007AFBC;
    void **__base_D_8007AFF8;
    char *var_a1;
    u16 var_a0;
    void *temp_a1;

    D_80045A8C = arg0;
    func_8027003C();
    __base_D_8007AFBC = &D_8007AFBC;
    (*__base_D_8007AFBC) = 0;
    __base_D_8007AFF8 = &D_8007AFF8;
    (*(void **)((char *)(D_80045930) + 0x160)) = (void *) (*(void **)((char *)((*__base_D_8007AFF8)) + 0x10C));
    (*(s32 *)((char *)((*__base_D_8007AFF8)) + 0x48)) |= 0x4000;
    (*(s32 *)((char *)((*__base_D_8007AFF8)) + 0x44)) |= 0x22088;
    func_8027206C(0x13, 0x4B);
    (*(s32 *)((char *)((*__base_D_8007AFF8)) + 0x44)) |= 0x10;
    func_8026F6BC(0x30);
    func_8026F6BC(0x3D);
    temp_a1 = (*(void **)((char *)((*__base_D_8007AFF8)) + 0xC));
    (*__base_D_8007AFBC) = 0;
    if (temp_a1 != NULL) {
        var_a1 = temp_a1 + 2;
        var_a0 = (u16) (*(s16 *)((char *)(temp_a1) + 2));
        if ((*(s16 *)((char *)(temp_a1) + 2)) != -1) {
            do {
                *(((*(u16 *)((char *)((*__base_D_8007AFF8)) + 0x90)) * 2) + D_8007B270) = var_a0;
                var_a1 += 2;
                (*(u16 *)((char *)((*__base_D_8007AFF8)) + 0x90)) += 1;
                var_a0 = (u16) *(s16 *)var_a1;
            } while (*(s16 *)var_a1 != -1);
        }
    }
    (*(s32 *)((char *)((*(void **)((char *)((*__base_D_8007AFF8)) + 0x10C))) + 0x44)) = func_801043F8((*(s16 *)((char *)((*(void **)((char *)((*__base_D_8007AFF8)) + 0x10C))) + 0x3E)) * 0x30, 2, 0);
    func_8027006C();
}
