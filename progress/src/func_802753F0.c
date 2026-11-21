typedef struct { char p0[0xC]; s32 c; s32 x10; char p14[0xE]; s16 x22; char p24[0x24]; s32 f48; char p4c[3]; s8 x4f; char p50[4]; s8 x54; } S;
extern S *D_8007AFF8;
s32 func_80276148(void);

void func_802753F0(void) {
    S *p;
    if (!(D_8007AFF8->f48 & 0x1000)) {
        if ((u16)func_80276148() < 9) {
        } else {
            D_8007AFF8->c = 0;
        }
        p = D_8007AFF8;
        p->x54 = 10;
        p->c = 0;
        p->x22 = -1;
        p->x10 = 0;
        D_8007AFF8->x4f = 0;
    }
}
