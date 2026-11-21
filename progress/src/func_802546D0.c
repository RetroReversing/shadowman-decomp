extern f32 func_8023B800();
extern s32 ***D_80030C5C;

typedef struct N { struct N *next; s32 pad; struct { u8 p[0x6C]; struct { u8 q[0x48]; u32 flags; } *info; } *obj; } N;

s32 func_802546D0(u8 *arg0, f32 arg1) {
    N *n = (N *)**(s32 **)((s32)D_80030C5C + (s32)(((s8 *)arg0)[0x71]) * 4);
    while (n != 0) {
        if (n->next == 0) return 0;
        if (n->obj->info->flags & 0x40) {
            if (func_8023B800((u8 *)n->obj + 0x24, arg0 + 0x24) < arg1) return 1;
        }
        n = n->next;
    }
    return 0;
}
