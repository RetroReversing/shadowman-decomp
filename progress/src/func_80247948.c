typedef struct { char pad[0x24]; f32 x, y, z; } S;
extern S D_80075568;
extern s32 D_800755F8;
extern s32 D_8007BE5C;
void func_80239FCC(void *, void *, void *);
void func_802478C0(void *, void *);
void func_8024E094(void);

void func_80247948(void *arg0) {
    f32 v[3];
    f32 w[3];
    char *s0 = *(char **)((char *)arg0 + 8);
    void *s1 = *(void **)(s0 + 0x6C);
    if (D_800755F8 != 0) {
        func_8024E094();
    }
    if (D_8007BE5C != 0) {
        v[0] = D_80075568.x - *(f32 *)(s0 + 0x24);
        v[1] = D_80075568.y - *(f32 *)(s0 + 0x28);
        v[2] = D_80075568.z - *(f32 *)(s0 + 0x2C);
        func_80239FCC(v, w, s0 + 0x34);
        if (!(w[0] > *(f32 *)0x202C78) || !(w[2] < 0.0f)) return;
    }
    func_802478C0((char *)s1 + 4, s0 + 0x24);
}
