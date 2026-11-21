/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 alHeapInit(s32 *, s32, s32);        /* extern */
s32 func_801043F8(s32, s32, s32);       /* extern */
void *func_8010670C(s32, s32);                  /* extern */
s32 func_80106848(void *, s32);                 /* extern */
s32 func_8010AB90(s32 *, s32, s32 *);       /* extern */
s32 func_8010F160(void *, s32 *, void *, s32 *); /* extern */
s32 osCreateMesgQueue(s32 *, s32 *, s32); /* extern */
extern s32 D_8004AE30;
extern s32 D_8004AEAC;
extern s32 D_8004DA70;
extern void *D_8004DA80;
extern s32 D_8004DA90;
extern void *D_8004DA9C;
extern s8 D_8004DAD4;
extern s32 D_8004DAD8;
extern s32 D_8004DAE0;
extern s32 D_8004DE90;
extern s32 D_8004DF10;
extern s16 D_8004DF18;
extern s32 D_8004DF20;

void func_80107BC0(void) {
    s32 sp10[3];
    s32 *sp24;
    register s32 sp20;
    s8 sp2C;
    s32 sp58[3];
    f32 temp_fv0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    void *temp_a2;
    void *temp_v0;
    
    void *var_v0;

    alHeapInit(&D_8004DA70, func_801043F8(0x16C00, 3, 0), 0x16C00);
    osCreateMesgQueue(&D_8004DF20, &D_8004DE90, 0x20);
    var_a0 = 0xF;
    temp_a2 = &D_8004DAE0 + 0xB4;
    temp_fv0 = *(f32 *)0x100580;
    D_8004DF18 = -1;
    (*(s32 *)((char *)(&D_8004DA90) + 0)) = 0;
    (*(s32 *)((char *)(&D_8004DA90) + 0xC)) = 0;
    (*(s32 *)((char *)(&D_8004DA90) + 8)) = 0;
    (*(s16 *)((char *)(&D_8004DA90) + 0x18)) = -1;
    (*(f32 *)((char *)(&D_8004DF10) + 0)) = temp_fv0;
    (*(f32 *)((char *)(&D_8004DF10) + 4)) = temp_fv0;
    do {
        (*(s32 *)((char *)(temp_a2) + 0x68)) = 0;
        var_a0 -= 1;
        temp_a2 -= 0xC;
    } while (var_a0 >= 0);
    var_a0_2 = 0x1F;
    var_v0 = &D_8004DAE0 + 0x26C;
    do {
        (*(s32 *)((char *)(var_v0) + 0x130)) = 0;
        var_a0_2--;
        var_v0 -= 0x14;
    } while (var_a0_2 >= 0);
    sp10[2] = 0x80;
    sp58[0] = 0x5622;
    sp10[0] = 0x10;
    sp58[1] = 1;
    sp10[1] = 0x10;
    sp20 = 0;
    sp2C = 0;
    sp24 = &D_8004DA70;
    sp58[2] = 0x600;
    func_8010AB90(sp10, 0x7A, sp58);
    D_8004DAD8 = 0;
    temp_v0 = func_8010670C(D_8004AE30, 0);
    func_80106848(temp_v0, D_8004AEAC);
    temp_a2 = (*(void **)((char *)(temp_v0) + 4));
    temp_v1 = (*(s32 *)((char *)((*(void **)((char *)(temp_a2) + 4))) + 0xC));
    D_8004DA80 = temp_a2;
    (*(s32 *)((char *)(&D_8004DAE0) + 0)) = 0x10;
    (*(s32 *)((char *)(&D_8004DAE0) + 4)) = 0x60;
    (*(s32 **)((char *)(&D_8004DAE0) + 8)) = &D_8004DA70;
    (*(s32 *)((char *)(&D_8004DAE0) + 0x60)) = temp_v1;
    (*(s32 *)((char *)(&D_8004DAE0) + 0x64)) = (s32) (temp_v1 + 0x10);
    func_8010F160(&D_8004DAE0 + 0xC, &D_8004DAE0, temp_a2, &D_8004DAE0);
    D_8004DA9C = func_8010670C(0x9A800, 0);
    D_8004DAD4 = 0xF;
}
