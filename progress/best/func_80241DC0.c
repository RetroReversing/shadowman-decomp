s32 func_802364D0(s32);
void func_80241EAC(void);
extern s32 D_8005E9FC;
typedef struct { s8 a, b, c, d; s16 e; s16 pad[3]; } Ent;
extern Ent D_8006A920[8];

void func_80241DC0(void) {
    Ent *p;
    s32 i;

    func_80241EAC();
    func_802364D0(D_8005E9FC);
    for (i = 0, p = D_8006A920; i < 8; i++, p++) {
        p->a = func_802364D0(D_8005E9FC);
        p->b = func_802364D0(D_8005E9FC);
        p->c = func_802364D0(D_8005E9FC);
        p->d = func_802364D0(D_8005E9FC);
        p->e = func_802364D0(D_8005E9FC) * 2;
    }
}
