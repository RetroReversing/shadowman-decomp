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

M2C_UNK alHeapInit(M2C_UNK *, s32, M2C_UNK);        /* extern */
s32 func_801043F8(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
void *func_8010670C(s32, M2C_UNK);                  /* extern */
M2C_UNK func_80106848(void *, s32);                 /* extern */
M2C_UNK func_8010AB90(s32 *, M2C_UNK, s32 *);       /* extern */
M2C_UNK func_8010F160(void *, M2C_UNK *, void *, M2C_UNK *); /* extern */
M2C_UNK osCreateMesgQueue(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern s32 D_8004AE30;
extern s32 D_8004AEAC;
extern M2C_UNK D_8004DA70;
extern void *D_8004DA80;
extern M2C_UNK D_8004DA90;
extern void *D_8004DA9C;
extern s8 D_8004DAD4;
extern s32 D_8004DAD8;
extern M2C_UNK D_8004DAE0;
extern M2C_UNK D_8004DE90;
extern M2C_UNK D_8004DF10;
extern s16 D_8004DF18;
extern M2C_UNK D_8004DF20;

void func_80107BC0(void) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp20;
    M2C_UNK *sp24;
    s8 sp2C;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    f32 temp_fv0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    void *temp_a2;
    void *temp_v0;
    void *var_a1;
    void *var_v0;

    alHeapInit(&D_8004DA70, func_801043F8(0x16C00, 3, 0), 0x16C00);
    osCreateMesgQueue(&D_8004DF20, &D_8004DE90, 0x20);
    var_a0 = 0xF;
    var_a1 = &D_8004DAE0 + 0xB4;
    temp_fv0 = *(f32 *)0x100580;
    D_8004DF18 = -1;
    M2C_FIELD(&D_8004DA90, s32 *, 0) = 0;
    M2C_FIELD(&D_8004DA90, s32 *, 0xC) = 0;
    M2C_FIELD(&D_8004DA90, s32 *, 8) = 0;
    M2C_FIELD(&D_8004DA90, s16 *, 0x18) = -1;
    M2C_FIELD(&D_8004DF10, f32 *, 0) = temp_fv0;
    M2C_FIELD(&D_8004DF10, f32 *, 4) = temp_fv0;
    do {
        M2C_FIELD(var_a1, s32 *, 0x68) = 0;
        var_a0 -= 1;
        var_a1 -= 0xC;
    } while (var_a0 >= 0);
    var_a0_2 = 0x1F;
    var_v0 = &D_8004DAE0 + 0x26C;
    do {
        M2C_FIELD(var_v0, s32 *, 0x130) = 0;
        var_a0_2 -= 1;
        var_v0 -= 0x14;
    } while (var_a0_2 >= 0);
    sp18 = 0x80;
    sp58 = 0x5622;
    sp5C = 1;
    sp10 = 0x10;
    sp14 = 0x10;
    sp20 = 0;
    sp2C = 0;
    sp24 = &D_8004DA70;
    sp60 = 0x600;
    func_8010AB90(&sp10, 0x7A, &sp58);
    D_8004DAD8 = 0;
    temp_v0 = func_8010670C(D_8004AE30, 0);
    func_80106848(temp_v0, D_8004AEAC);
    temp_a2 = M2C_FIELD(temp_v0, void **, 4);
    temp_v1 = M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), s32 *, 0xC);
    D_8004DA80 = temp_a2;
    M2C_FIELD(&D_8004DAE0, s32 *, 0) = 0x10;
    M2C_FIELD(&D_8004DAE0, s32 *, 4) = 0x60;
    M2C_FIELD(&D_8004DAE0, M2C_UNK **, 8) = &D_8004DA70;
    M2C_FIELD(&D_8004DAE0, s32 *, 0x60) = temp_v1;
    M2C_FIELD(&D_8004DAE0, s32 *, 0x64) = (s32) (temp_v1 + 0x10);
    func_8010F160(&D_8004DAE0 + 0xC, &D_8004DAE0, temp_a2, &D_8004DAE0);
    D_8004DA9C = func_8010670C(0x9A800, 0);
    D_8004DAD4 = 0xF;
}
