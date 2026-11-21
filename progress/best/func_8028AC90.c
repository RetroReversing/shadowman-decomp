/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern int D_80045A50;
extern int D_80045A54;
s32 func_8026F6BC();
s32 func_8027003C();
s32 func_8027006C();
s32 func_8027206C();
extern char D_80045930[];
extern s16 D_8004EC20;
extern s8 D_8004EC80;
extern void *D_8006A4FC;
extern s8 D_8007AFE2;
extern void *D_8007AFF8;

void func_8028AC90(s32 arg0) {
    s32 temp_a2;

    do { func_8027003C(); } while (0);
    D_80045A50 = arg0;
    temp_a2 = (*(const s32 *)((char *)(D_8007AFF8) + 0x10C));
    D_8007AFE2 = 0;
    D_80045A54 = temp_a2;
    (*(s32 *)((char *)(D_8006A4FC) + 0x24)) = 0;
    (*(s32 *)((char *)(D_8006A4FC) + 0x28)) = 0;
    (*(s32 *)((char *)(D_8006A4FC) + 0x2C)) = 0;
    func_8027206C(0x16, 0, temp_a2);
    (*(s32 *)((char *)(D_8007AFF8) + 0x44)) = (s32) (((((((*(const s32 *)((char *)(D_8007AFF8) + 0x44)) | 0x22008) & ~0x80) | 0x10010) & ~2) | 0x02000000) & 0xF7FFFFFF);
    D_8004EC20 = -1;
    func_8026F6BC(0x2D, D_8007AFF8, 0x10010, 0xF7FFFFFF);
    D_8004EC80 = 0;
    func_8026F6BC(0x2C);
    func_8027006C();
}
