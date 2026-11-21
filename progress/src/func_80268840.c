typedef struct { char pad30[0x30]; float f30; char pad34[0x30]; void *p64; int i68; char pad6c[0x14]; int i80; } S75610;
extern char D_8004AEA0[];
extern S75610 D_80075610;
extern int D_8007569C;
extern int D_8002C1B0;
extern int D_800305A0;
int func_8021DD0C(void *, s16);
void *func_8023A1D0(void *, s16);

void func_80268840(int arg0, s16 arg1, s16 arg2) {
    void *v;
    if (arg1 == -1 || arg2 == -1) {
        D_800305A0 = 0;
        return;
    }
    {
        int t = func_8021DD0C(D_8004AEA0, arg1);
        D_8007569C = t;
        D_8002C1B0 = t;
    }
    v = func_8023A1D0(D_8004AEA0, arg2);
    D_80075610.p64 = v;
    ((unsigned short *)v)[0x3C/2] &= 0xFFF7;
    D_80075610.i68 = 0;
    D_80075610.i80 = D_8007569C;
    D_80075610.f30 = *(float *)0x20E1D0;
}
