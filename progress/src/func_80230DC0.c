extern struct { char pad[0xA]; s16 f; } D_8002D270[];
extern char D_8005E6C0[];

void func_80230DC0(void) {
    s32 i;
    for (i = 0; i < 2; i++) {
        D_8005E6C0[i] = 0;
        D_8002D270[i].f = 0;
    }
}
