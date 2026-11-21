typedef struct { char pad0[0x14]; s16 id; char pad16[2]; s32 kind; } Sub;
typedef struct { char pad0[0x71]; u8 b71; char pad72[0x88-0x72]; Sub *sub; } Obj;
typedef struct { s32 a; s32 b; Obj *obj; char pad[8]; } Ent;
extern Ent D_80045930[];
extern char D_80075568[];
s32 func_80257138();
s32 func_8027363C();

void *func_802D5004(char *arg0) {
    Ent *e = D_80045930;
    Obj *o = e[*(s32 *)(arg0 + 4)].obj;
    o->b71 = arg0[0xB];
    if (o->sub != NULL) {
        if ((char *)o != D_80075568 && o->sub->kind == 1) {
            func_8027363C(o->sub, *(s32 *)(arg0 + 8));
        }
        if (o->sub->kind == 2 && o->sub->id == 0x20B) {
            func_80257138(o->sub, *(s32 *)(arg0 + 8));
        }
    }
    return arg0 + 0xC;
}
