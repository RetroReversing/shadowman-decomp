typedef struct { u8 pad[0x3E]; u8 state; } Inner;
typedef struct { u8 pad[0x20]; Inner *p; u8 pad2[4]; } Ent;
extern void func_8022265C();
extern u32 D_8005E9D4;
extern Ent *D_8007BEF0;

void func_802D1834(void) {
    u32 i;
    for (i = 0; i <= D_8005E9D4; i++) {
        Inner *p = D_8007BEF0[i].p;
        if (p != NULL && p->state == 3) {
            do {
                func_8022265C();
            } while (D_8007BEF0[i].p->state == 3);
        }
        i++;
    }
}
