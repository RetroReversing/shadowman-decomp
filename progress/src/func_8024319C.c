typedef struct { s32 flags; char pad[0x34]; s32 x; s32 z; } S;
typedef struct { char pad[0x10]; S *p; } T;
s32 func_802456B4(s32, s32);
extern f32 D_80075580;
extern f32 D_80075584;

s32 func_8024319C(T *arg0) {
    S *s = arg0->p;
    if (s->flags & 8) {
        if (func_802456B4((s32)D_80075580, s->z) >= 0x29) return 0;
    }
    if (s->flags & 0x10) {
        if (func_802456B4((s32)D_80075584, 0x168 - s->x) >= 0x29) return 0;
    }
    return 1;
}
