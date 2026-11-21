extern s32 D_8002D420;
extern struct { char pad[0x44]; char *p; } D_80075518;
extern char D_80075568;
void func_8023DF7C(void *, void *, int, int, int, int);
int func_80268AF8(int);
void func_802CD7F0(int);

void func_802CDEE0(void) {
    if (!(D_8002D420 & 0x100) || func_80268AF8(3) == 0) {
        *(f32 *)(D_80075518.p + 0x14C) = *(f32 *)0x218828;
        func_8023DF7C(&D_80075568, &D_80075518, 0xDE, 0xA, 0, 0);
    }
    func_802CD7F0(0);
}
