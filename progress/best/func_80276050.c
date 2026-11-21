/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802403D4(s32 *, s32 *, f32, s32); /* extern */
extern s32 D_212078;
extern void *D_8006A4FC;
extern s32 D_8006A510;
extern void *D_8007AFF8;

void func_80276050(void) {
    s32 sp10[3];
    s32 sp20[3];
    s32 temp_a3;

    temp_a3 = (*(s32 *)((char *)(D_8006A4FC) + 0));
    sp10[0] = temp_a3;
    sp10[1] = (*(f32 *)((char *)(D_8006A4FC) + 4));
    sp10[2] = (*(s32 *)((char *)(D_8006A4FC) + 8));
    sp20[0] = sp10[0];
    sp20[2] = sp10[2];
    sp10[1] += (*(f32 *)((char *)((((*(u8 *)((char *)(D_8007AFF8) + 0x40)) * 0x6C) + &D_212078)) + 0x38));
    sp20[1] = (*(f32 *)((char *)(D_8006A4FC) + 0x28)) - *(f32 *)0x214290;
    do { func_802403D4(sp10, sp20, 5.0f, temp_a3); } while (0);
    if ((*(s32 *)((char *)(&D_8006A510) + 0x78)) != 0) {
        (*(s32 *)((char *)(D_8007AFF8) + 0xDC)) = (s32) ((*(s32 *)((char *)((*(void **)((char *)(&D_8006A510) + 0x8C))) + 0x1C)) + ((*(u16 *)((char *)((*(void **)((char *)(&D_8006A510) + 0x90))) + 8)) * 0x10));
        (*(f32 *)((char *)(D_8007AFF8) + 0xD8)) = (f32) (*(f32 *)((char *)(&D_8006A510) + 0x84));
        (*(s16 *)((char *)(D_8007AFF8) + 0xE0)) = (s16) (*(u8 *)((char *)((*(void **)((char *)(&D_8006A510) + 0x90))) + 2));
    }
}
