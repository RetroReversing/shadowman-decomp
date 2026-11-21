typedef struct { s32 a[13]; u16 n; } B;
typedef struct { s32 f0; s32 f4; s32 f8; } O;
extern u8 D_8001E400;
extern s32 D_800590B0;
extern B D_800596B0;
extern O *D_8007DB68;
extern char D_8007DC30[];
void osCreateMesgQueue(void *, void *, s32);
void func_80221EF0(void);
void func_80229470(s32);
void func_802DA2BC(B *);

void func_802DA500(void) {
    B *b = &D_800596B0;
    if (D_8001E400 != 0) {
        osCreateMesgQueue(D_8007DC30, D_8007DC30 + 0x18, 2);
        func_80221EF0();
        if (D_800590B0 & 0x1000) {
            func_80229470(D_8007DB68->f8 + 0x500);
            b->a[(s16)b->n++] = D_8007DB68->f4;
        } else {
            func_802DA2BC(b);
        }
        D_8001E400 = 0;
    }
}
