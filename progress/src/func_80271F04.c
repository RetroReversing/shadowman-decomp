typedef struct { u8 pad0[4]; s16 id; u8 pad6[0x16]; u16 flags; } Inner;
typedef struct { u8 pad[0x10C]; Inner *inner; } Outer;
extern Outer *D_8007AFF8;
extern u8 func_80271F88(s32, s32);

u8 func_80271F04(s32 a, s32 b, s32 c) {
    Inner *p;
    if (D_8007AFF8->inner->id != a && D_8007AFF8->inner->id != b) {
        return func_80271F88(a, c);
    }
    p = D_8007AFF8->inner;
    p->flags &= 2;
    if (p->flags == 0) return 0;
    if (D_8007AFF8->inner->id == b) return 0;
    return func_80271F88(b, c);
}
