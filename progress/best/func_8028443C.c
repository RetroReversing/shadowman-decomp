typedef struct { char pad0[0x38]; unsigned char f38; char pad39[0xB]; int f44; int f48; char pad4c[0x44]; short f90; } S;
extern S *D_8007AFF8;
void func_8027003C(void);
void func_8027006C(void);
void func_8028443C(void) {
    S *p;
    func_8027003C();
    p = D_8007AFF8;
    p->f90 = 0;
    p->f44 |= 0x22088;
    p->f48 |= 0x10;
    if (p->f38 == 1) {
        p->f90 = p->f38;
    }
    func_8027006C();
}
