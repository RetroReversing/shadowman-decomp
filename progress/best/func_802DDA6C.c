typedef struct { u8 b[8]; } Ent;
extern u8 D_8004EDEC;
extern u8 D_8004EE30;
extern Ent D_8007E680[];

void func_802DDA6C(u8 arg0) {
    Ent e;
    Ent *p;
    s32 i;

    p = D_8007E680;
    i = 0;
    D_8004EE30 = arg0;
    *(s8 *)((u8 *)D_8007E680 + 0x3C) = 1;
    e.b[0] = 0xFF;
    e.b[1] = 1;
    e.b[2] = 3;
    e.b[3] = arg0;
    e.b[4] = 0xFF;
    e.b[5] = 0xFF;
    e.b[6] = 0xFF;
    e.b[7] = 0xFF;
    for (i = 0; i < D_8004EDEC; i++) {
        *p++ = e;
    }
    p->b[0] = 0xFE;
}
