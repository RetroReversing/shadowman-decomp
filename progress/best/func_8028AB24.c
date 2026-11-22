/* adapted from similar verified C in func_8027D840 in Shadowman (matched), with its names changed by decompdecomp */
typedef struct { u8 pad0[0x24]; f32 x, y, z; } A;
typedef struct { u8 pad0[0x40]; u8 idx; } B;
typedef struct { u8 pad0[0x30]; f32 off; u8 pad1[0x6C-0x34]; } C;
extern f32 D_80075568[];
extern A *D_8006A4FC;
extern B *D_8007AFF8;
extern C D_212078[];
#define D_214758 (*(f32 *)0x214758)
extern u8 D_8006A58B;
void func_80240418(f32 *, f32 *, f32, s32);

u8 func_8028AB24(void) {
    f32 sp10[3];
    f32 sp20[3];
    sp10[0] = D_80075568[9];
    sp10[1] = D_80075568[10] + D_214758;
    sp10[2] = D_80075568[11];
    sp20[0] = D_8006A4FC->x;
    sp20[1] = D_8006A4FC->y + D_212078[D_8007AFF8->idx].off + D_214758;
    sp20[2] = D_8006A4FC->z;
    func_80240418(sp20, sp10, 40.0f, 3);
    return D_8006A58B;
}
