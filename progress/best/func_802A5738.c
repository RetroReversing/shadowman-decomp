/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80113AD0();
f32 func_8022EBE8();
f32 func_8022EC3C();
s32 func_8023E724();
s32 func_802A1140(void *, void *, s32, s32, s32, s32, f32, s32, s32, s32, s32);
extern char D_80036B1C[];
extern char D_80075518[];
extern char D_8007DB88[];

void func_802A5738(void *arg0) {
    f32 sp30[3];
    f32 *var_v0;
    f32 temp_fs0;
    f32 temp_fv0;
    s32 temp_ret;

    func_8023E724(D_80075518, (*(s32 *)((char *)(arg0) + 0x6C)), D_80036B1C, arg0);
    if ((*(s8 *)((char *)(arg0) + 0x73)) == 0) {
        (*(u8 *)((char *)(arg0) + 0x68)) = 0xFF;
        (*(s8 *)((char *)(arg0) + 0x69)) = 0;
        (*(s8 *)((char *)(arg0) + 0x6A)) = 0;
        (*(f32 *)((char *)(arg0) + 0x60)) = (f32) *(f32 *)0x21625C;
        (*(u8 *)((char *)(arg0) + 0x72)) |= 4;
        (*(s8 *)((char *)(arg0) + 0x73)) = (s8) ((u8) (*(s8 *)((char *)(arg0) + 0x73)) + 1);
    }
    temp_ret = func_80113AD0();
    var_v0 = D_8007DB88 + 4;
    if ((temp_ret % 5) >= 3) {
        temp_fs0 = *(f32 *)0x216260;
        sp30[0] = func_8022EBE8(temp_fs0, temp_ret / 5);
        sp30[2] = func_8022EBE8(temp_fs0);
        sp30[1] = func_8022EC3C(*(f32 *)0x216264) + *(f32 *)0x216268;
        func_802A1140(arg0, sp30, 0x3F733333, 0x40C00000, *(f32 *)0x21626C, 0x1C, (f32) (func_80113AD0() % 3), 0xFF, 0, 0, 2);
        var_v0 = D_8007DB88 + 4;
    }
    temp_fv0 = (*(f32 *)((char *)(arg0) + 0x54)) - *var_v0;
    (*(f32 *)((char *)(arg0) + 0x54)) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        (*(f32 *)((char *)(arg0) + 0x54)) = 0.0f;
    }
}
