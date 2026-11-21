typedef struct { s32 pad0[3]; s16 *start; s16 *cur; s16 pad14[2]; s16 x18; s16 pad1a[4]; s16 x22; s32 pad24[8]; u32 flags; } P;
extern P *D_8007AFF8;
extern u16 D_8007B0A2;
void func_802753F0(void);
void func_80270090(int);
void func_8026F800(void) {
    P *p = D_8007AFF8;
    s16 *c;
    s16 *s;
    s32 v;
    if (p->cur != 0 && (s = p->start) != 0) {
        c = p->cur;
        if (*c == -1) {
            c = s;
            p->cur = c;
            v = *c;
            if (p->x18 != v) {
                func_802753F0();
                D_8007AFF8->x22 = D_8007B0A2;
                D_8007AFF8->x18 = D_8007B0A2;
                func_80270090(4);
                return;
            }
            p->cur = s + 1;
            c = s + 1;
        }
        p = D_8007AFF8;
        v = *c;
        if (p->x18 == v) {
            p->flags &= 0xFFFF7FFF;
            func_80270090(0x10);
        }
        D_8007AFF8->x22 = v;
        D_8007AFF8->x18 = v;
        D_8007AFF8->cur = D_8007AFF8->cur + 1;
    }
}
