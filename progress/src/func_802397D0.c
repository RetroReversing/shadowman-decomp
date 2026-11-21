extern s32 D_8002D3F0;
extern f32 D_800698C0[][64];

void func_802397D0(f32 *arg0) {
    s32 i;
    for (i = 0; i < 12; i++) {
        D_800698C0[i][D_8002D3F0] = arg0[i];
    }
    D_8002D3F0++;
}
