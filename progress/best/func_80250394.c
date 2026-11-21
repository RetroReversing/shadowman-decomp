/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern int D_8002DCB8;
extern float D_8002DCB0;
extern float D_8002DCB4;
extern float D_8002DC8C;
s32 func_80230EC0();
s32 func_80236A18();
s32 func_80239AEC();
s32 func_80250524();
s32 func_80263D48();
s32 func_8029FB2C();
extern char D_8002DC88[];
extern char D_8002DCA4[];
extern char D_8004AEA0[];

void func_80250394(void *arg0) {
    char sp18[0x30];
    f32 sp48[3];
    f32 sp58[3];
    f32 sp68[3];
    s32 sp78[3];
    s32 *temp_s2;
    f32 temp_ft0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 temp_fv1f;
    s32 temp_v0;
    void *temp_a0;
    void *temp_s3;

    temp_s3 = (*(void **)((char *)(arg0) + 8));
    temp_s2 = D_8002DC88 + 4;
    if ((*(s16 *)((char *)(arg0) + 0x16)) == 0) {
        temp_v0 = func_80230EC0(D_8004AEA0, 0xF0);
        temp_a0 = D_8002DC88 + 4;
        temp_fv0 = *(f32 *)0x2031C4;
        (*(s32 *)((char *)(temp_a0) + 0x14)) = (int)temp_v0;
        D_8002DCB8 = (int)temp_v0;
        (*(s32 *)((char *)(temp_a0) + 0xC)) = 0;
        D_8002DCB0 = (f32) *(f32 *)0x2031C0;
        (*(f32 *)((char *)(temp_a0) + 0x10)) = temp_fv0;
        D_8002DCB4 = temp_fv0;
        func_80250524(temp_a0);
        return;
    }
    func_80263D48((D_8002DC88 + 4));
    func_80263D48(D_8002DCA4);
    (*(f32 *)((char *)(temp_s3) + 0x24)) = (f32) D_8002DC8C;
    (*(f32 *)((char *)(temp_s3) + 0x28)) = (f32) ((*(f32 *)((char *)((D_8002DC88 + 4)) + 4)) - *(f32 *)0x2031C8);
    (*(f32 *)((char *)(temp_s3) + 0x2C)) = (f32) (*(f32 *)((char *)((D_8002DC88 + 4)) + 8));
    func_80236A18((D_8002DC88 + 4), D_8002DCA4, temp_s3 + 0x18);
    (*(f32 *)((char *)(temp_s3) + 0x1C)) -= *(f32 *)0x2031CC;
    sp78[1] = (*(f32 *)((char *)(temp_s3) + 0x1C));
    sp78[0] = (*(s32 *)((char *)(temp_s3) + 0x18));
    sp78[2] = (*(s32 *)((char *)(temp_s3) + 0x20));
    func_80239AEC(sp78, sp18);
    temp_fv0_2 = *(f32 *)0x2031D0;
    temp_fv1 = (*(f32 *)((char *)(sp18) + 8)) * temp_fv0_2;
    temp_fv1f = (*(f32 *)((char *)(sp18) + 0x14)) * temp_fv0_2;
    temp_ft0 = (*(f32 *)((char *)(sp18) + 0x20)) * temp_fv0_2;
    sp48[1] = 0.0f;
    sp48[0] = 0.0f;
    sp48[2] = temp_fv0_2;
    sp58[0] = temp_fv1;
    sp58[1] = temp_fv1f;
    sp58[2] = temp_ft0;
    sp68[0] = (*(f32 *)((char *)(temp_s3) + 0x24)) + temp_fv1;
    sp68[1] = (temp_fv1f) + ((*(f32 *)((char *)(temp_s3) + 0x28)));
    sp68[2] = (*(f32 *)((char *)(temp_s3) + 0x2C)) + temp_ft0;
    { func_8029FB2C(sp68, 0x40000000, 0x44160000, 0xFF, 0xFF, 0xFF); }
}
