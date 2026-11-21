typedef struct { u8 pad0[0x24]; f32 x, y, z; } A;
typedef struct { u8 pad0[0x44]; s32 flags; u8 pad1[0x98-0x48]; s16 s98; s16 sx; s16 s9c; u8 pad2[0x12]; f32 b0, b4, b8; } B;
extern A *D_8006A4FC;
extern B *D_8007AFF8;
s32 func_80113AD0(void);
void func_8027003C(void);
void func_8027006C(void);
void func_80271F88(s32, s32);

void func_8027C03C(void) {
    B *p;
    s32 r;
    func_8027003C();
    p = D_8007AFF8;
    p->b0 = D_8006A4FC->x;
    p->b4 = D_8006A4FC->y;
    p->b8 = D_8006A4FC->z;
    p->s9c = 2;
    p->flags |= 0x20004;
    r = func_80113AD0();
    D_8007AFF8->s98 = r % 127;
    func_80271F88(0x11, 0xA);
    func_8027006C();
}
