typedef struct N {
    u8 pad[0x1E];
    u16 flags;
    u8 pad2[0x14];
    struct N *next;
} N;
typedef struct H {
    u32 pad;
    N *first;
} H;
extern u8 D_8005E6C0;

N *func_80229EDC(H *arg0, N *arg1) {
    for (;;) {
        if (arg1->flags & 0x40) {
            return arg1;
        }
        arg1 = arg1->next;
        if (arg1 == NULL) {
            arg1 = arg0->first;
        }
        if (!(arg1->flags & 0x100) || D_8005E6C0 != 0) {
            return arg1;
        }
    }
}
