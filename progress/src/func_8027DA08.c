typedef struct {
    u8 pad0[0xC];
    s32 unkC;
    s16 *unk10;
    u8 pad14[0xE];
    s16 unk22;
    u8 pad24[0x14];
    u8 unk38;
    u8 pad39[0xB];
    u32 unk44;
    u8 pad48[0x62];
    s16 unkAA;
} Obj8027;

extern Obj8027 *D_8007AFF8;

void func_8027DA08(void) {
    Obj8027 *p = D_8007AFF8;
    s32 v;

    if (p->unk38 == 0xB) {
        if (p->unk10 == NULL) {
            p->unkC = 0;
            p->unk38 = 0;
            return;
        }
        p->unk44 |= 0x10000;
        v = *p->unk10;
        if (v == -1) {
            p->unkAA = 1;
            return;
        }
        p->unk22 = v;
        p->unk44 = (p->unk44 & 0xBFFFFFFF) | 0x40;
        p->unk44 &= ~8;
        p->unk44 &= 0xFFFDFFFF;
    }
}
