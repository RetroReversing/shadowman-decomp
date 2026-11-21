extern char D_8007E680[];
extern s8 D_8004EE30;

typedef struct {
    s8 a;
    s8 b;
    s8 c;
    s8 d;
    s8 e;
    s8 f;
} Pack6;

void func_802DCF28(s32 zero_count) {
    s32 i;
    Pack6 cmd;
    Pack6 *pif;
    u8 fill;

    pif = (Pack6 *)D_8007E680;
    i = 0;
    *(s32 *)(D_8007E680 + 0x3C) = 1;
    cmd.a = 1;
    cmd.b = 3;
    D_8004EE30 = 0;
    cmd.c = 0;
    fill = 0xFF;
    cmd.d = fill;
    cmd.e = fill;
    cmd.f = fill;
    if (zero_count > 0) {
        do {
            *(s8 *)pif = 0;
            i++;
            pif = (Pack6 *)((s8 *)pif + 1);
        } while (i < zero_count);
    }
    *pif = cmd;
    ((u8 *)pif)[6] = 0xFE;
}
