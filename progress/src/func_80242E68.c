extern s32 D_8002D484;
struct E { s32 pad[3]; s32 x; s32 pad2[16]; };
extern struct E D_8006A9D8[];
extern void func_80246684(s32);

void func_80242E68(void) {
    s32 i;
    for (i = 0; i < D_8002D484; i++) {
        if (D_8006A9D8[i].x != 0) {
            func_80246684(D_8006A9D8[i].x);
        }
    }
}
