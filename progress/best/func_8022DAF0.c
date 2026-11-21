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

M2C_UNK func_80103170(M2C_UNK);                     /* extern */
M2C_UNK func_80116200(void *);                      /* extern */
M2C_UNK func_80116250(M2C_UNK);                     /* extern */
M2C_UNK func_8011BA20(s32, M2C_UNK, s32, u16);      /* extern */
M2C_UNK func_8022D538();                            /* extern */
s16 func_8022D634(s32, s32);                        /* extern */
M2C_UNK func_8022D6A8(s32, u16, u16);               /* extern */
M2C_UNK func_8022D91C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8022DB3C();                            /* extern */
M2C_UNK osViBlack(M2C_UNK);                         /* extern */
M2C_UNK osViSwapBuffer(s32);                        /* extern */
M2C_UNK osWritebackDCacheAll();                     /* extern */
extern M2C_UNK D_201FD0;
extern M2C_UNK D_2020CC;
extern M2C_UNK D_800278A0;
extern s32 D_8002C0F0;
extern M2C_UNK D_8002C100;
extern u16 D_8002C110;
extern u16 D_8002C112;
extern s32 D_8002C114;
extern s8 D_8002C1BC;
extern s32 D_8002C240;
extern M2C_UNK D_8002D200;
extern M2C_UNK D_8002D208;
extern void *D_8002D210;
extern M2C_UNK D_8002D214;
extern s16 D_800597B8;
extern M2C_UNK D_800597C8;
extern s32 D_80059818;

void func_8022DAF0(s32 arg0) {
    M2C_UNK *var_a1;
    M2C_UNK var_a0;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    s16 temp_a0_3;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    u16 temp_a0;
    u16 temp_v1_4;
    u32 temp_v1_5;
    void *temp_a0_2;
    void *temp_v1_3;
    void *var_v1;

    if (arg0 == 1) {
        func_8022DB3C();
        return;
    }
    D_8002C0F0 &= 0xFFFF7FFF;
    temp_v1 = D_80059818;
    D_80059818 = arg0;
    temp_v1_2 = temp_v1 != arg0;
    if (temp_v1_2 & 0xFF) {
        func_80103170(0xFFFF7FFF);
        osViBlack(1);
    }
    temp_v1_3 = (arg0 * 8) + &D_201FD0;
    temp_a0 = M2C_FIELD(temp_v1_3, u16 *, 4);
    temp_v1_4 = M2C_FIELD(temp_v1_3, u16 *, 6);
    D_8002C110 = temp_a0;
    D_8002C112 = temp_v1_4;
    D_8002C1BC = 1;
    temp_v0 = func_8022D634(temp_a0 & 0xFFFF, temp_v1_4 & 0xFFFF);
    var_a1 = &D_800597C8;
    D_800597B8 = temp_v0;
    var_v1 = (*(temp_v0 + &D_2020CC) * 0x50) + &D_800278A0;
    temp_a0_2 = var_v1 + 0x50;
    D_8002D210 = var_v1;
    __repair_rows: {
        M2C_FIELD(var_a1, s32 *, 0) = (s32) M2C_FIELD(var_v1, s32 *, 0);
        M2C_FIELD(var_a1, s32 *, 4) = (s32) M2C_FIELD(var_v1, s32 *, 4);
        M2C_FIELD(var_a1, s32 *, 8) = (s32) M2C_FIELD(var_v1, s32 *, 8);
        M2C_FIELD(var_a1, s32 *, 0xC) = (s32) M2C_FIELD(var_v1, s32 *, 0xC);
        var_v1 += 0x10;
        var_a1 += 0x10;
    }
if (var_v1 != temp_a0_2) goto __repair_rows;
    func_8022D6A8(*((D_800597B8 * 4) + &D_8002D214), D_8002C110, D_8002C112);
    func_8022D91C(0, 0, 0, 0);
    func_8022D538();
    temp_a0_3 = D_8002C110 * 2;
    M2C_FIELD(&D_8002C100, s16 *, 0) = temp_a0_3;
    temp_v0_2 = D_8002C112 * 2;
    M2C_FIELD(&D_8002C100, s16 *, 2) = temp_v0_2;
    M2C_FIELD(&D_8002C100, s16 *, 0xA) = temp_v0_2;
    M2C_FIELD(&D_8002C100, s16 *, 8) = temp_a0_3;
    temp_fv0f = (f32) D_8002C110 * *(f32 *)0x2020F4;
    temp_fv1 = (f32) D_8002C112 * *(f32 *)0x2020F8;
    temp_fv0 = *(f32 *)0x2020FC;
    M2C_FIELD(&D_8002D200, f32 *, 0) = temp_fv0f;
    M2C_FIELD(&D_8002D200, f32 *, 4) = temp_fv1;
    M2C_FIELD(&D_8002D208, f32 *, 0) = (f32) (temp_fv0 / temp_fv0f);
    M2C_FIELD(&D_8002D208, f32 *, 4) = (f32) (temp_fv0 / temp_fv1);
    osViSwapBuffer((&D_8002C114)[D_8002C240]);
    temp_v1_5 = D_8002C240 + 1;
    D_8002C240 = temp_v1_5 - (((s32) (temp_v1_5 + (temp_v1_5 >> 0x1F)) >> 1) * 2);
    func_8011BA20(D_8002C114, 0, D_8002C110 * D_8002C112 * 4, D_8002C110);
    if (temp_v1_2 & 0xFF) {
        osWritebackDCacheAll();
        func_80116200(D_8002D210);
        var_a0 = 0x42;
        if (D_8002C0F0 & 0x8000) {
            var_a0 = 0xC2;
        }
        func_80116250(var_a0);
        osViBlack(0);
    }
}
