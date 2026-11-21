extern void func_80239FCC(f32 *, f32 *, s32);
extern s32 D_8005EA2C;

void func_80265E80(f32 *arg0, s32 arg1) {
    f32 in[3];
    f32 out[3];

    switch (arg1) {
    case 0:
        in[0] = *(f32 *)0x20DED0;
        in[1] = *(f32 *)0x20DED8;
        in[2] = 0;
        break;
    case 1:
        in[0] = *(f32 *)0x20DED4;
        in[1] = *(f32 *)0x20DED8;
        in[2] = 0;
        break;
    }
    func_80239FCC(in, out, D_8005EA2C + 0x3C);
    arg0[0] += out[0];
    arg0[1] += out[1];
    arg0[2] += out[2];
}
