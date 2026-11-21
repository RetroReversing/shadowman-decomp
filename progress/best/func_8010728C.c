/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80106240();
s32 func_801072C8();
s32 func_80116D80();
s32 func_80116EB0();
s32 func_80118370();
s32 func_80118410();
s32 osCreateMesgQueue();
extern char D_8004C680[];
extern char D_80080000[];

void func_8010728C(void) {
    char sp20[0x18];
    char sp38[0x18];
    u8 sp50[0x10];
    void *sp54;
    void *sp58;
    char *__base_D_80080000;
    char *__base_D_8004C680;

    __base_D_8004C680 = D_8004C680;

    __base_D_80080000 = D_80080000;

    osCreateMesgQueue(sp38, sp50, 1);
    func_80116D80(__base_D_8004C680, &sp54, 1);
    if (*(*(u8 **)((char *)(sp54) + 0x18)) == 0xFF) {
        do { func_80106240(sp20, 1, 0, (*(s32 *)((char *)(sp54) + 4)), ((*(u8 *)((char *)((*(void **)((char *)(sp54) + 0x10))) + 0xA)) << 0xC) + __base_D_80080000, ((*(s32 *)((char *)(sp54) + 8)) + 1) & ~1); } while (0);
        func_80116D80(sp38, &sp58, 1);
        func_80118370(((*(u8 *)((char *)((*(void **)((char *)(sp54) + 0x10))) + 0xA)) << 0xC) + __base_D_80080000, 0x1000);
        func_80118410(((*(u8 *)((char *)((*(void **)((char *)(sp54) + 0x10))) + 0xA)) << 0xC) + __base_D_80080000, 0x1000);
    }
    func_80116EB0(__base_D_8004C680 - 0x1234);
    (*(s16 *)((char *)(sp54) + 0)) = 1;
    func_801072C8();
}
