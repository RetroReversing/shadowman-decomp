/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80106EB4();                            /* extern */
s32 func_801073F4(s32 *, s32);              /* extern */
s32 func_80107424(s32 *, s32);              /* extern */
s32 func_80107554(s16, s32, u8, u8 *);          /* extern */
s32 func_80116EB0(s32 *, void *, s32);  /* extern */
s32 func_801171A0(void *);                      /* extern */
s32 func_80118370(s32, s32);                /* extern */
s32 func_80118410(s32, s32);                /* extern */
extern s32 D_8004C648;
extern s32 D_8004C798;

void func_80106E34(void *arg0) {
    if (*(*(u8 **)((char *)(arg0) + 0x18)) == 0xFF) {
        func_801073F4(&D_8004C798, (*(s32 *)((char *)(arg0) + 0x10)));
        func_80106EB4();
        func_80107554((*(s16 *)((char *)(arg0) + 0xE)), (*(s32 *)((char *)(arg0) + 0x10)), (*(u8 *)((char *)((*(void **)((char *)(arg0) + 0x14))) + 0x17)), (*(u8 **)((char *)(arg0) + 0x18)));
        func_80118370((u16) (*(s16 *)((char *)(arg0) + 0xE)) << 0xC, 0x1000);
        func_80118410((u16) (*(s16 *)((char *)(arg0) + 0xE)) << 0xC, 0x1000);
        return;
    }
    func_80107424(&D_8004C798, (*(s32 *)((char *)(arg0) + 0x10)));
    (*(s16 *)((char *)((*(void **)((char *)(arg0) + 0x14))) + 0x12)) = 2;
    func_801171A0((*(void **)((char *)(arg0) + 0x14)));
    func_80116EB0(&D_8004C648, arg0, 1);
}
