typedef struct { int x, y, z; } V3;
extern char *D_8007AFF8;
extern char *D_8007B0C0;
int func_8010E8F0(V3 *, void *, int);
void func_8023E724(int, int, V3 *, V3 *);

void func_80278EA8(void) {
    V3 a;
    V3 b;
    a.x = 0;
    a.y = 0;
    a.z = 0;
    func_8023E724(*(int *)(D_8007AFF8 + 0x10C), 4, &a, &b);
    if (*(u8 *)(D_8007B0C0 + 0x66) == 0) {
        if (func_8010E8F0(&b, D_8007B0C0 + 0x150, 0x41C80000) & 0xFF) {
            *(u8 *)(D_8007B0C0 + 0x66) = 1;
        }
    }
    *(V3 *)(D_8007B0C0 + 0x150) = b;
}
