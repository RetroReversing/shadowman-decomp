typedef struct { s32 pad[4]; void *p; s32 pad2[1]; } E18;
extern E18 D_8007D100[];

void *func_802D3DB8(char *arg0) {
    D_8007D100[((s32 *)arg0)[1]].p = arg0 + 8;
    return arg0 + 0x108;
}
