extern void *D_8007AFF8;
extern int D_8007B0C0;
extern float D_0021437C;
void func_8023E724(int, int, float *, int);
void func_80278DA0(void);
void func_80278E54(void) {
    float sp10[3];
    sp10[0] = 0;
    sp10[2] = 0;
    sp10[1] = *(float *)0x21437C;
    func_8023E724(*(int *)((char *)D_8007AFF8 + 0x10C), 0x1B, sp10, D_8007B0C0 + 0x144);
    func_80278DA0();
}
