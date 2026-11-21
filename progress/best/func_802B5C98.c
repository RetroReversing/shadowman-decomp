/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern float D_8007DB8C;
s32 func_802A6448();
s32 func_802A6508();
s32 func_802A6808();
extern char D_8007DB88[];

void func_802B5C98(void *arg0) {
    f32 *var_v0;
    f32 temp_fv0;
    f32 temp_fv1;

    var_v0 = D_8007DB88 + 4;
    if ((*(s8 *)((char *)(arg0) + 0x51)) == 0) {
        func_802A6808();
        temp_fv1 = (*(f32 *)((char *)(arg0) + 0x8C)) + (*(f32 *)((char *)(arg0) + 0x98));
        (*(f32 *)((char *)(arg0) + 0x84)) += (*(f32 *)((char *)(arg0) + 0x90));
        (*(f32 *)((char *)(arg0) + 0x88)) += (*(f32 *)((char *)(arg0) + 0x94));
        (*(f32 *)((char *)(arg0) + 0x8C)) = temp_fv1;
        (*(f32 *)((char *)(arg0) + 0x8C)) = (f32) (temp_fv1 + (D_8007DB8C * *(f32 *)0x216B00));
        var_v0 = D_8007DB88 + 4;
    }
    temp_fv0 = (*(f32 *)((char *)(arg0) + 0x30)) - *var_v0;
    (*(f32 *)((char *)(arg0) + 0x30)) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        (*(f32 *)((char *)(arg0) + 0x30)) = 0.0f;
    }
    if ((*(f32 *)((char *)(arg0) + 0x30)) <= 0.0f) {
        func_802A6508(arg0, 0x40);
        func_802A6448(arg0);
    }
}
