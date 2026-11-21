/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_8002C0F0;
extern u8 D_8002C1BD;
extern void *D_80056998;
extern s32 D_8006A9AC;
extern u8 D_8007DB98;

void func_802428D8(void) {
    void *temp_a1;
    void *temp_a1_2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if ((D_8002C1BD != 0) && !(D_8006A9AC & 1) && (D_8002C0F0 & 0x40) && (D_8007DB98 == 0)) {
        D_8002C1BD = 0;
        temp_v0 = D_80056998 + 8;
        (*(s32 *)((char *)(D_80056998) + 0)) = 0xE7000000;
        (*(s32 *)((char *)(D_80056998) + 4)) = 0;
        temp_v1 = temp_v0 + 8;
        (*(s32 *)((char *)(D_80056998) + 8)) = 0xE3000A01;
        temp_a1 = temp_v0 + 0x10;
        D_80056998 = temp_v0;
        D_80056998 = temp_v1;
        (*(s32 *)((char *)(temp_v0) + 4)) = 0;
        (*(s32 *)((char *)(temp_v0) + 8)) = 0xE200001C;
        (*(s32 *)((char *)(temp_v1) + 4)) = 0x504A50;
        temp_v1_2 = temp_v0 + 0x18;
        D_80056998 = temp_a1;
        (*(s32 *)((char *)(temp_v0) + 0x10)) = 0xFC121824;
        (*(s32 *)((char *)(temp_a1) + 4)) = 0xFF33FFFF;
        temp_a1_2 = temp_v0 + 0x20;
        D_80056998 = temp_v1_2;
        (*(s32 *)((char *)(temp_v0) + 0x18)) = 0xD9FEFFFF;
        (*(s32 *)((char *)(temp_v1_2) + 4)) = 0;
        D_80056998 = temp_a1_2;
        (*(s32 *)((char *)(temp_v0) + 0x20)) = 0xE7000000;
        D_80056998 = temp_v0 + 0x28;
        (*(s32 *)((char *)(temp_a1_2) + 4)) = 0;
    }
}
