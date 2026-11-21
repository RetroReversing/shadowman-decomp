/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern int D_80045A40;
s32 func_8026E2F4();
s32 func_8027003C();
s32 func_8027006C();
s32 func_8027363C();
extern char D_80045930[];
extern void *D_8007AFF8;
extern void *D_8007B0B0;
extern void *D_8007B0B4;
extern s32 D_8007B0B8;

void func_80278074(void *arg0) {
    u32 temp_a1;

    (*(void **)((char *)(D_80045930) + 0x10C)) = arg0;
    func_8027003C();
    D_8007B0B4 = arg0;
    temp_a1 = (*(s32 *)((char *)(D_8007AFF8) + 0x10C));
    D_8007B0B0 = D_8007AFF8;
    D_80045A40 = (s32)temp_a1;
    (*(s16 *)((char *)(D_8007AFF8) + 0x9A)) = 0;
    if ((func_8026E2F4(0x6E, (int)temp_a1) != 0) && (func_8026E2F4(0x8A) != 0)) {
        (*(s16 *)((char *)((*(void **)((char *)(D_8007B0B4) + 0x64))) + 0xC)) = 0;
        (*(s16 *)((char *)((*(void **)((char *)(D_8007B0B4) + 0x64))) + 0xE)) = 0;
        (*(s16 *)((char *)((*(void **)((char *)(D_8007B0B4) + 0x64))) + 0x10)) = 0;
        func_8027363C((*(s32 *)((char *)(D_8007B0B4) + 0x88)), 8);
        (*(s16 *)((char *)(D_8007B0B0) + 0x9A)) = 2;
    }
    D_8007B0B8 = 0;
    func_8027006C();
}
