typedef struct { u8 pad0[0x44]; s32 flags; u8 pad1[0x24]; f32 f6c; u8 pad2[0x0C]; u8 b7c; u8 pad3[0x7F]; s32 e4; } S;
extern S *volatile D_8007AFF8;
extern u16 D_8007AFB4;
extern s32 D_8006A588;
void func_80240418(void *, void *, f32, s32);

s32 func_8026F8FC(void) {
    S *p = D_8007AFF8;
    if (p->flags & 0x400) {
        if (p->f6c == 1.0f) {
            if (D_8007AFB4 != 0) {
                D_8007AFB4--;
                p->f6c = 0;
                func_80240418((u8 *)p + 0xE4, (u8 *)p + 0xF0, (f32)p->b7c, 3);
                if (D_8006A588 == 1) {
                    D_8007AFF8->f6c = 2.0f;
                }
                return 1;
            }
            return 0;
        }
    }
    return 1;
}
