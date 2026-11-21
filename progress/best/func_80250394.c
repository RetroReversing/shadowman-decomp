/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

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
    s32 sp18;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    f32 sp58;
    f32 sp5C;
    f32 sp60;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    s32 sp78;
    f32 sp7C;
    s32 sp80;
    s32 *temp_s2;
    f32 temp_ft0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 temp_fv1f;
    s32 temp_v0;
    void *temp_a0;
    void *temp_s3;

    temp_s3 = M2C_FIELD(arg0, void **, 8);
    temp_s2 = D_8002DC88 + 4;
    if (M2C_FIELD(arg0, s16 *, 0x16) == 0) {
        temp_v0 = func_80230EC0(D_8004AEA0, 0xF0);
        temp_a0 = D_8002DC88 + 4;
        temp_fv0 = *(f32 *)0x2031C4;
        M2C_FIELD(temp_a0, s32 *, 0x14) = temp_v0;
        D_8002DCB8 = temp_v0;
        M2C_FIELD(temp_a0, s32 *, 0xC) = 0;
        D_8002DCB0 = (f32) *(f32 *)0x2031C0;
        M2C_FIELD(temp_a0, f32 *, 0x10) = temp_fv0;
        D_8002DCB4 = temp_fv0;
        func_80250524(temp_a0);
        return;
    }
    func_80263D48(temp_s2);
    func_80263D48(D_8002DCA4);
    M2C_FIELD(temp_s3, f32 *, 0x24) = (f32) D_8002DC8C;
    M2C_FIELD(temp_s3, f32 *, 0x28) = (f32) (M2C_FIELD(temp_s2, f32 *, 4) - *(f32 *)0x2031C8);
    M2C_FIELD(temp_s3, f32 *, 0x2C) = (f32) M2C_FIELD(temp_s2, f32 *, 8);
    func_80236A18(temp_s2, D_8002DCA4, temp_s3 + 0x18);
    M2C_FIELD(temp_s3, f32 *, 0x1C) -= *(f32 *)0x2031CC;
    sp78 = M2C_FIELD(temp_s3, s32 *, 0x18);
    sp7C = M2C_FIELD(temp_s3, f32 *, 0x1C);
    sp80 = M2C_FIELD(temp_s3, s32 *, 0x20);
    func_80239AEC(&sp78, &sp18);
    temp_fv0_2 = *(f32 *)0x2031D0;
    temp_fv1 = M2C_FIELD(&sp18, f32 *, 8) * temp_fv0_2;
    temp_fv1f = M2C_FIELD(&sp18, f32 *, 0x14) * temp_fv0_2;
    temp_ft0 = M2C_FIELD(&sp18, f32 *, 0x20) * temp_fv0_2;
    sp4C = 0.0f;
    sp48 = 0.0f;
    sp50 = temp_fv0_2;
    sp58 = temp_fv1;
    sp5C = temp_fv1f;
    sp60 = temp_ft0;
    sp68 = M2C_FIELD(temp_s3, f32 *, 0x24) + temp_fv1;
    sp6C = M2C_FIELD(temp_s3, f32 *, 0x28) + temp_fv1f;
    sp70 = M2C_FIELD(temp_s3, f32 *, 0x2C) + temp_ft0;
    do { func_8029FB2C(&sp68, 0x40000000, 0x44160000, 0xFF, 0xFF, 0xFF); } while (0);
}
