/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80273FB8();
s16 func_802761B0();
s32 func_802776C0();
s32 func_802776C8();
s32 func_802776D8();
extern s32 D_80036944;
extern s32 D_8003694C;
extern s32 D_8006A4FC;
extern void *D_8007AFF8;

void func_80277528(s32 arg0) {
    s16 temp_v0;
    s32 temp_a1;
    s32 temp_v0_3;
    u16 temp_v1;
    void *temp_v0_2;

    temp_v0 = func_802761B0(D_8006A4FC + 0x24, 0x44FA0000);
    if (0 <= temp_v0) {
        if ((*(s16 *)((char *)(D_8007AFF8) + 0x24)) < 0) {
            (*(s16 *)((char *)(D_8007AFF8) + 0x24)) = temp_v0;
        }
        temp_v0_2 = (temp_v0 * 0x34) + D_80036944;
        (*(f32 *)((char *)(D_8007AFF8) + 0x70)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 4));
        (*(f32 *)((char *)(D_8007AFF8) + 0x74)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 8));
        (*(s16 *)((char *)(D_8007AFF8) + 0x16)) = temp_v0;
        (*(s16 *)((char *)(D_8007AFF8) + 0x1A)) = temp_v0;
        (*(f32 *)((char *)(D_8007AFF8) + 0x78)) = (f32) (*(f32 *)((char *)(temp_v0_2) + 0xC));
        if ((*(s32 *)((char *)(D_8007AFF8) + 0xC)) == 0) {
            temp_a1 = *(s32 *)((temp_v0 * 4) + D_8003694C);
            if (temp_a1 == -1) {
                if ((*(u8 *)((char *)(D_8007AFF8) + 0x40)) != 0x21) {
                    (*(u16 *)((char *)(D_8007AFF8) + 0x22)) = (u16) temp_a1;
                    (*(s16 *)((char *)(D_8007AFF8) + 0x16)) = (s16) temp_a1;
                    (*(s16 *)((char *)(D_8007AFF8) + 0x1A)) = (s16) temp_a1;
                    (*(u16 *)((char *)(D_8007AFF8) + 0x18)) = (u16) temp_a1;
                    (*(s8 *)((char *)(D_8007AFF8) + 0x4F)) = 0;
                    (*(s32 *)((char *)(D_8007AFF8) + 0x44)) &= ~0x800 & ~0x400;
                    func_802776C0(D_8007AFF8, temp_a1, temp_v0);
                    return;
                }
                temp_v1 = (u16) (*(s16 *)((char *)(D_8007AFF8) + 0x24));
                (*(s8 *)((char *)(D_8007AFF8) + 0x4F)) = 6;
                (*(u16 *)((char *)(D_8007AFF8) + 0x18)) = temp_v1;
                (*(u16 *)((char *)(D_8007AFF8) + 0x22)) = temp_v1;
                /* Duplicate return node #9. Try simplifying control flow for better match */
                (*(s8 *)((char *)(D_8007AFF8) + 0x3C)) = 3;
                (*(f32 *)((char *)(D_8007AFF8) + 0x6C)) = (f32) *(f32 *)0x2142C4;
                temp_v0_3 = (*(s32 *)((char *)(D_8007AFF8) + 0x44)) & ~0x800 & ~0x400;
                (*(s32 *)((char *)(D_8007AFF8) + 0x44)) = temp_v0_3;
                (*(s32 *)((char *)(D_8007AFF8) + 0x44)) = (s32) (temp_v0_3 | 0x40);
                func_802776D8(arg0 & 0xFF, D_8007AFF8, temp_v0);
                func_802776C8();
                return;
            }
        }
        (*(s8 *)((char *)(D_8007AFF8) + 0x3C)) = 3;
        (*(f32 *)((char *)(D_8007AFF8) + 0x6C)) = (f32) *(f32 *)0x2142C4;
        temp_v0_3 = (*(s32 *)((char *)(D_8007AFF8) + 0x44)) & ~0x800 & ~0x400;
        (*(s32 *)((char *)(D_8007AFF8) + 0x44)) = temp_v0_3;
        (*(s32 *)((char *)(D_8007AFF8) + 0x44)) = (s32) (temp_v0_3 | 0x40);
        func_802776D8(arg0 & 0xFF, D_8007AFF8, temp_v0);
        func_802776C8();
        return;
    }
    (*(u16 *)((char *)(D_8007AFF8) + 0x22)) = -1U;
    (*(s8 *)((char *)(D_8007AFF8) + 0x4F)) = 0;
    (*(f32 *)((char *)(D_8007AFF8) + 0x6C)) = (f32) *(f32 *)0x2142C8;
    (*(s32 *)((char *)(D_8007AFF8) + 0x44)) &= ~0x800 & ~0x400;
    func_80273FB8();
}
