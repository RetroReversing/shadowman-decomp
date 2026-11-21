extern struct { u8 pad[0x8C]; u8 a; u8 b; s32 c; } D_8007DB78;
extern s32 D_8007E078;
void func_802295E8(void);
void func_80229588(void);

void func_802DAEE8(void) {
    D_8007DB78.a = 0;
    D_8007DB78.b = 1;
}

void func_802DAF20(void) {
    D_8007DB78.a = 4;
    D_8007DB78.b = 0;
    D_8007DB78.c = 2;
}

u16 func_802DEC54(u8 *p, s32 n) {
    u16 sum = 0;
    s32 i;
    for (i = 0; i < n; i++) {
        sum += *p++;
    }
    return sum;
}

void func_802D9620(void) {
    if (D_8007E078 != 0) {
        func_802295E8();
    } else {
        func_80229588();
    }
}
