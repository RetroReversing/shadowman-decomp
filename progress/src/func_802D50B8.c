extern f32 D_80075568[];
extern s32 D_80045C40;
extern s32 D_8007C2C0;
f32 func_8011B7E0(f32, f32);
void func_802391FC(void *);
#define K(n) (*(f32 *)(0x21AC98 + n))

void func_802D50B8(void *arg0) {
    f32 *p = D_80075568;
    f32 *q = *(f32 **)((char *)arg0 + 8);
    f32 x = func_8011B7E0(q[1] - p[9], q[3] - p[11]) * K(0) - p[7];
    if (x < K(4)) {
        D_80045C40 = 4;
        if (K(8) < x) {
            D_80045C40 = 5;
        }
    } else if (K(12) < x) {
        D_80045C40 = 8;
        if (x < K(16)) {
            D_80045C40 = 9;
        }
    } else {
        D_80045C40 = 1;
        D_8007C2C0 = 0;
        func_802391FC(arg0);
    }
}
