typedef struct { u16 id; s16 x; s32 key; } Ent;
extern Ent *D_80059890;
extern u32 D_8005989C;

void func_80230BF4(s32 arg0) {
    u32 i, j;
    if (D_8005989C != 0) {
        for (i = 0; i < D_8005989C; i++) {
            Ent *e = &D_80059890[i];
            if (e->key == arg0) {
                u32 id = e->id;
                if (D_8005989C != 0) {
                    Ent *p = D_80059890;
                    j = 0;
                    do {
                        j++;
                        if (p->id == id) {
                            p->id = 0xFFFF;
                            p->x = 0;
                        }
                        p++;
                    } while (j < D_8005989C);
                }
                return;
            }
        }
    }
}
