/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern short D_80075F60;
extern short D_80075F5C;
extern float D_8007559C;
s32 func_8011BA20();
s32 func_80246F50();
s32 func_802601F4();
s32 func_802C8A48();
extern char D_218584[];
extern s32 D_80030C74;
extern s32 D_80030E34;
extern s32 D_80030E3C;
extern char D_80075598[];
extern char D_80075F58[];

void func_802C8B24(void) {
    f32 sp10;
    unsigned int sp14;
    s32 sp18;
    s32 sp20;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_ft1;
    f32 temp_ft1f;
    void *temp_v0;

    sp10 = (*(f32 *)((char *)(D_218584) + 0));
    sp14 = (*(s32 *)((char *)(D_218584) + 4));
    sp18 = (*(s32 *)((char *)(D_218584) + 8));
    D_80030C74 = 2;
    func_8011BA20(&sp20, 0, 0xC, (*(f32 *)((char *)(D_218584) + 0)));
    D_80030E34 = D_80030E3C;
    func_80246F50(-1, 0);
    func_802601F4(0x17);
    D_80075F60 = -1;
    D_80075F5C = -1;
    temp_v0 = D_80075598 + 4;
    temp_ft1f = (*(f32 *)((char *)(&sp10) + 4));
    temp_ft1 = (*(f32 *)((char *)(&sp10) + 8));
    sp30 = (sp10 * D_8007559C) + (temp_ft1f * (*(f32 *)((char *)(temp_v0) + 4))) + (temp_ft1 * (*(f32 *)((char *)(temp_v0) + 8)));
    sp34 = (sp10 * (*(f32 *)((char *)(temp_v0) + 0xC))) + (temp_ft1f * (*(f32 *)((char *)(temp_v0) + 0x10))) + (temp_ft1 * (*(f32 *)((char *)(temp_v0) + 0x14)));
    sp38 = (sp10 * (*(f32 *)((char *)(temp_v0) + 0x18))) + (temp_ft1f * (*(f32 *)((char *)(temp_v0) + 0x1C))) + (temp_ft1 * (*(f32 *)((char *)(temp_v0) + 0x20)));
    func_802C8A48();
}
