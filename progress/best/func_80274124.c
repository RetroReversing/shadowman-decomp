typedef struct { u8 pad[0x40]; f32 f; u8 pad2[0x28]; } Row;
typedef struct { u8 pad[0x3B]; u8 b3B; u8 b3C; u8 pad3D[3]; u8 b40; u8 pad41[0xC]; s8 b4D; u8 pad4E[6]; u8 b54; } Obj;
extern Obj *D_8007AFF8;
extern Row D_00212078[];
u8 func_80272198(f32, u8);
u32 func_80113AD0(void);
void func_80270090(s32);

s32 func_80274124(s32 arg0, u32 arg1) {
    if (D_8007AFF8->b3C != 3) {
        if (func_80272198(D_00212078[D_8007AFF8->b40].f, D_8007AFF8->b3B) == 1) {
            if (D_8007AFF8->b4D-- <= 0) {
                D_8007AFF8->b4D = func_80113AD0() % arg1;
                D_8007AFF8->b4D += 0x1F;
                D_8007AFF8->b54 = 10;
                func_80270090(0x10);
                return 1;
            }
        } else return 0;
    }
    return 0;
}
