typedef struct { u8 pad0[0x9A]; u16 state; u8 pad1[0xA6-0x9C]; s16 timer; } A;
typedef struct { u8 pad0[0x28]; f32 f; u8 pad1[0x71-0x2C]; s8 mode; u8 pad2[0x88-0x72]; void *p; } B;
extern s32 D_800458F0;
extern u16 D_80052776;
extern void *D_8006A4FC;
extern A *D_8007B0B0;
extern B *D_8007B0B4;
extern f32 D_802142E0;
extern f32 D_802142E4;
void func_802D2180(void *);
void func_8027363C(void *, s32);
void func_80273E28(void);

void func_80277950(void) {
    if (D_800458F0 != 0) {
        func_802D2180(D_8006A4FC);
    } else {
        switch (D_8007B0B0->state) {
        case 0:
            if (D_8007B0B4->mode != 9) {
                func_8027363C(D_8007B0B4->p, 9);
                D_8007B0B4->f = *(f32 *)0x2142E0;
            }
            break;
        case 1:
            func_80273E28();
            D_8007B0B0->timer -= D_80052776;
            if (D_8007B0B0->timer < 0) {
                D_8007B0B4->f -= *(f32 *)0x2142E4;
                D_8007B0B0->state = 0;
            }
            break;
        }
    }
}
