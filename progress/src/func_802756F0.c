typedef struct { char pad[0x40]; f32 f40; char pad2[0x28]; } Ent;
extern Ent D_00212078[];
extern char *D_8007AFF8;
extern u8 func_80272144(f32, u8);
extern u8 func_802757B4(u8, f32);

u8 func_802756F0(u8 arg0, f32 arg1) {
    u8 r;
    if (*(u32 *)(D_8007AFF8 + 0x48) & 8) {
        r = func_80272144(D_00212078[(u8)D_8007AFF8[0x40]].f40, D_8007AFF8[0x3B]);
        if (r != 1) return 0;
        if (func_802757B4(arg0, arg1) != r) return 0;
        D_8007AFF8[0x3D] = 0x28;
        return 1;
    }
    return 0;
}
