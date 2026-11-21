struct S { float x, y; int pad[2]; int *p; char pad2[0x57]; unsigned char b; };
extern struct S D_80075AA8;
void func_8026A5E8(float, float, int, int, int, int, int);
void func_802691D0(void) {
/* Inferred frame reservation; original purpose unknown. */
char __repair_stack_padding[8];
    func_8026A5E8(D_80075AA8.x, D_80075AA8.y, 0x40, 0x40, *D_80075AA8.p + 0x200, *D_80075AA8.p, D_80075AA8.b);
}
