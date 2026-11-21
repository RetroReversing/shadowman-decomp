typedef struct { char pad[0x11]; u8 a, b, c; } E;
extern E D_80045930[];

void *func_802D42D0(u8 *arg0) {
    D_80045930[*(int *)(arg0 + 4)].a = arg0[0xB];
    D_80045930[*(int *)(arg0 + 4)].b = arg0[0xF];
    D_80045930[*(int *)(arg0 + 4)].c = arg0[0x13];
    return arg0 + 0x14;
}
