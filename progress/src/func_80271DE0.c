extern void *D_8006A4FC;
extern f32 D_8007AFC0[3];
extern f32 D_8007AFD0[3];
void func_8023A0DC(f32, f32, s32, void *, void *);
void func_802403F8(void *, void *, f32, s32);

void func_80271DE0(f32 a0, f32 a1, s32 a2) {
    f32 *p = D_8006A4FC;
    D_8007AFC0[0] = p[0x24 / 4];
    D_8007AFC0[1] = p[0x28 / 4] + a1;
    D_8007AFC0[2] = p[0x2C / 4];
    func_8023A0DC(a0, 0.0f, a2, D_8007AFD0, (char *)D_8006A4FC + 0x34);
    D_8007AFD0[1] = D_8007AFC0[1];
    D_8007AFD0[0] += D_8007AFC0[0];
    D_8007AFD0[2] += D_8007AFC0[2];
    func_802403F8(D_8007AFC0, D_8007AFD0, 1.0f, 3);
}
