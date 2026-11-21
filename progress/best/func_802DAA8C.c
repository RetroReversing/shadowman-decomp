typedef struct { u8 pad[0x36]; u16 flags; s16 v38; } S;
typedef struct { u8 pad[0xC]; u16 timer; u8 pad2[1]; u8 b; } T;
typedef struct { u8 pad[2]; u8 b2; u8 pad2[7]; u8 bA; u8 pad3[0x81]; u8 b8C; u8 pad4[3]; s32 w90; } U;
extern s32 D_800590B0;
extern u16 D_8007DB74;
extern T D_8007DB68;
extern U D_8007DB78;
extern void func_8022953C(void);
extern f32 func_8022A308(S *, s32);
void func_802DAA8C(S *a) {
    f32 f;
    if (!(a->flags & 0x100) && D_800590B0 == 0) {
        if ((s16)--D_8007DB68.timer <= 0) {
            func_8022953C();
            D_8007DB78.w90 = 1;
            D_8007DB78.b8C = 5;
            D_8007DB78.b2 = 1;
            D_8007DB78.bA = 1;
        }
    } else {
        D_8007DB74 = 0x708;
    }
    f = func_8022A308(a, a->v38) * *(f32 *)0x2D70D8;
    D_8007DB68.b = (u32)f;
}
