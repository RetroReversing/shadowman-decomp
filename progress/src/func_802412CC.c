typedef struct { s32 w[40]; } Blk;
extern Blk D_8006A510;
extern Blk D_8006A660;
extern char D_24136C[];
extern void func_8023959C(char *);

void func_802412CC(void) {
    D_8006A660 = D_8006A510;
    func_8023959C(D_24136C);
    D_8006A510 = D_8006A660;
}
