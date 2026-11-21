typedef struct { char pad[0x64]; struct { char p[0xC]; s16 a, b, c; } *p64; char pad2[0x88-0x68]; s32 f88; } B4;
typedef struct { char pad[0x9A]; s16 f9a; } B0;
extern struct { char pad[0x10C]; void *f10c; s32 f110; } D_80045930;
extern char *D_8007AFF8;
extern B0 *D_8007B0B0;
extern B4 *D_8007B0B4;
extern s32 D_8007B0B8;
s32 func_8026E2F4();
void func_8027003C();
void func_8027006C();
void func_8027363C();

void func_80278074(void *arg0) {
    s32 t;
    func_8027003C();
    D_80045930.f10c = arg0;
    D_8007B0B4 = arg0;
    t = *(s32 *)(D_8007AFF8 + 0x10C);
    D_8007B0B0 = (B0 *)D_8007AFF8;
    D_80045930.f110 = t;
    ((B0 *)D_8007AFF8)->f9a = 0;
    if (func_8026E2F4(0x6E, t) != 0 && func_8026E2F4(0x8A) != 0) {
        D_8007B0B4->p64->a = 0;
        D_8007B0B4->p64->b = 0;
        D_8007B0B4->p64->c = 0;
        func_8027363C(D_8007B0B4->f88, 8);
        D_8007B0B0->f9a = 2;
    }
    D_8007B0B8 = 0;
    func_8027006C();
}
