extern void *D_8006A4FC;
void func_80109318(s16, void *, int);

typedef struct { s16 a; s16 b; void (*fn)(void); s32 pad; } Ent;
typedef struct { s16 count; s16 pad; Ent *ents; } Tbl;
typedef struct { s32 flags; s32 p[10]; } Sub;
typedef struct { s32 time; s32 pad[3]; Sub *sub; s16 idx; } Obj;

void func_80246834(Obj *arg0, void *arg1) {
    Tbl *t = *(Tbl **)((char *)arg0->sub + 0x28);
    Ent *e;
    s32 v;
    if (t == 0) return;
    e = t->ents + arg0->idx;
    D_8006A4FC = arg1;
    if (arg0->sub->flags & 4) {
        v = (s32)*(f32 *)(*(s32 *)((char *)arg1 + 0x6C) + 0xC);
    } else {
        v = arg0->time;
    }
    if ((s16)(u16)arg0->idx < t->count && v >= e->a) {
        if (e->b != -1) func_80109318(e->b, (char *)arg1 + 0x24, 0);
        if (e->fn) e->fn();
        arg0->idx = (u16)arg0->idx + 1;
    }
}
