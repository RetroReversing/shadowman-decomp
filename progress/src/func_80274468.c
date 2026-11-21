typedef struct { char pad40[0x40]; unsigned char f40; char pad41[0x15]; signed char f56; char pad57[0x59]; float fB0; } S;
typedef struct { char pad[0x10]; int f10; } T;
extern S *D_8007AFF8;
extern T *D_8006A4FC;
extern void func_802BA2B0(int, S *, T *);
void func_80274468(void) {
    switch (D_8007AFF8->f56) {
    case -1:
    case 0:
    case 1:
        break;
    case 2:
        D_8006A4FC->f10 = 0;
        D_8007AFF8->fB0 = *(float *)0x214150;
        break;
    }
    if (D_8007AFF8->f40 != 0x38) {
        func_802BA2B0(1, D_8007AFF8, D_8006A4FC);
    }
}
