typedef struct { char pad[0x14]; s16 id; char pad2[2]; void *p; } Obj;
typedef struct { char pad[0x18]; char v18[0x24-0x18]; char v24[0x7A-0x24]; s16 k; s16 m; u16 flags; } Sub;
typedef struct { char pad[4]; s16 a; s16 b; } Tab;
extern struct { char pad[0x14]; s16 id; char pad2[2]; Sub *sub; } *D_8007BE78;
extern Tab D_80075F58;
extern char D_2040F0[];
void func_8026E26C(s32);
void func_8025BA08(void *, void *, s32, s32, s32, void *);

void func_802C8A48(void) {
    Sub *s = D_8007BE78->sub;
    if (D_8007BE78->id == 0x27) {
        s = *(Sub **)((char *)D_8007BE78 + 8);
        switch (s->k) {
        case 1: func_8026E26C(0x17); break;
        case 2: func_8026E26C(0x18); break;
        case 3: func_8026E26C(0x19); break;
        default: return;
        }
        func_8025BA08((char *)s + 0x24, (char *)s + 0x18, 0x28, s->k, s->m, D_2040F0);
        if (D_80075F58.b == 0x17) D_80075F58.b = -1;
        if (D_80075F58.a == 0x17) D_80075F58.a = -1;
        s->flags |= 0x1000;
    }
}
