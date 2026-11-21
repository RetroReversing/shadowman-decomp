typedef struct { char pad[0x12]; u16 s12; s32 f14, f18, f1C, f20, f24, f28; char pad2[4]; u16 s30; char pad3[8]; u16 s3A; u16 s3C; u8 b3E; } S;
extern s32 func_801043F8(s32, s32, s32);
extern s32 D_8002DC48;
extern S D_80072CB8;

void func_80247ECC(void) {
    S *p;
    s32 t = func_801043F8(8, 2, 0);
    p = &D_80072CB8;
    p->f28 = t;
    p->s3A = 1;
    p->f14 = func_801043F8(0x900, 2, 0);
    p->f18 = func_801043F8(0xC00, 2, 0);
    p->f1C = 0;
    p->f20 = func_801043F8(0xC00, 2, 0);
    p->f24 = func_801043F8(0x800, 2, 0);
    p->s30 = 0x80;
    p->s3C = 6;
    p->b3E = 2;
    p->s12 = 0x190;
    D_8002DC48 = 0;
    *(s32 *)&p->s3C &= ~0x7F;
}
