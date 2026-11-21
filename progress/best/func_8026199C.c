typedef struct { u16 a; u8 pad[0x10]; } Ent;
typedef struct { u8 pad0[0x14]; Ent *ents; u8 pad1[0x18]; u16 count; } Inner;
typedef struct { u8 pad[0x64]; Inner *in; } Outer;

void func_8026199C(Outer *arg0) {
    Inner *in = arg0->in;
    Ent *e = in->ents;
    s32 i = 0;
    if (in->count != 0) {
        do {
            i++;
            e->a = ((((u8 *)e)[1] & 0x7F) | 0x10) | (e->a & 0xFF80);
            e++;
        } while (i < in->count);
    }
}
