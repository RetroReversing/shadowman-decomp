extern u8 D_8007DB78[];
extern s8 D_8007DC29;
extern s32 D_8007E014;
extern u8 D_8007E01D;
extern s32 D_8007E074;
void *func_80229AD8();
s32 func_8011BA20();
s32 func_802DA5CC();
s32 str_len();

void func_802D9E20(void) {
char *__repair_addr;

    s32 *p;
    s32 len;

    p = func_80229AD8(D_8007E074, D_8007E01D);
    while (p != 0) {
__repair_addr = (char *)((u8 *)p + D_8007DB78[0x8E] * 4);

        len = str_len(*(s32 *)(__repair_addr));
        func_8011BA20(*(s32 *)((u8 *)p + (D_8007DB78[0x8E] << 2)), 0, len);
        p = (s32 *)p[0x34 / 4];
    }
    func_802DA5CC(0);
    D_8007DC29 = 0;
    D_8007E014 = 3;
}
