/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80113AD0();                                /* extern */
f32 func_8022EBE8(f32);                             /* extern */
f32 func_8022EC3C(f32);                             /* extern */
s32 func_8023E724(s32 *, s32, s32 *, void *); /* extern */
s32 func_802A1140(void *, f32 *, s32, s32, f32, s32, f32, s32, s32, s32, s32); /* extern */
extern s32 D_80036B1C;
extern s32 D_80075518;
extern s32 D_8007DB88;

void func_802A5430(void *arg0) {
    f32 sp30[3];
    f32 temp_fs0;
    f32 temp_fv0;
    f32 temp_fs0_2;

    func_8023E724(&D_80075518, (*(s32 *)((char *)(arg0) + 0x6C)), &D_80036B1C, arg0);
    if ((*(s8 *)((char *)(arg0) + 0x73)) == 0) {
        (*(u8 *)((char *)(arg0) + 0x68)) = 0xFF;
        (*(u8 *)((char *)(arg0) + 0x69)) = 0;
        (*(u8 *)((char *)(arg0) + 0x6A)) = 0;
        (*(f32 *)((char *)(arg0) + 0x60)) = (f32) *(f32 *)0x216230;
        (*(u8 *)((char *)(arg0) + 0x72)) = (u8) ((*(u8 *)((char *)(arg0) + 0x72)) | 4);
        (*(s8 *)((char *)(arg0) + 0x73)) = (s8) ((u8) (*(s8 *)((char *)(arg0) + 0x73)) + 1);
    }
    temp_fs0 = *(f32 *)0x216234;
    sp30[0] = func_8022EBE8(temp_fs0);
    sp30[1] = func_8022EC3C(*(f32 *)0x216238) + *(f32 *)0x21623C;
    sp30[2] = func_8022EBE8(temp_fs0);
    temp_fs0_2 = func_8022EC3C(*(f32 *)0x216240) + *(f32 *)0x216244;
    func_802A1140(arg0, sp30, 0x3F733333, 0x41000000, temp_fs0_2, 0x1C, (f32) (func_80113AD0() % 3), 0xFF, 0, 0, 2);
    temp_fv0 = (*(f32 *)((char *)(arg0) + 0x54)) - (*(f32 *)((char *)(&D_8007DB88) + 4));
    (*(f32 *)((char *)(arg0) + 0x54)) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        (*(f32 *)((char *)(arg0) + 0x54)) = 0.0f;
    }
}
