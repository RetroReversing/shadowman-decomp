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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern short D_8007DB74;
extern int D_8007DB6C;
extern int D_8007DC08;
extern signed char D_8007DB7C;
extern signed char D_8007DC04;
extern signed char D_8007DC05;
extern float D_800753DC;
extern int D_8007DB70;
extern signed char D_8007DB7A;
extern signed char D_8007DB82;
s32 func_80104BF0();
s32 func_80107D8C();
s32 func_80109D88();
s32 func_80221E98();
s32 func_80225570();
s32 func_80229470();
void *func_8022ADB0();
s32 func_8022D430();
s32 func_8022DAF0();
s32 func_8022DDD0();
s32 func_8022E66C();
s32 func_80236750();
s32 func_80262CA0();
s32 func_80268E9C();
s32 func_80296640();
s32 func_802D8228();
s32 func_802D8378();
s32 func_802D84A0();
s32 func_802D84A8();
s32 func_802DA500();
s32 func_802DB660();
extern char D_21A15C[];
extern char D_2D6D80[];
extern char D_2D7DD0[];
extern char D_2D8010[];
extern u32 D_80000318;
extern s16 D_80000320;
extern u16 D_80000322;
extern s8 D_8001E400;
extern s8 D_8002C1BC;
extern s32 D_8002D18C;
extern s32 D_800305B8;
extern s32 D_800460D8;
extern char D_8004ADF8[];
extern char D_8004AE08[];
extern s32 D_8004AEB0;
extern s32 D_8004AEB4;
extern u16 D_8004DF18;
extern s32 *D_80052778;
extern u8 D_80059084;
extern s32 D_80059818;
extern s32 *D_8005EA2C;
extern char D_800752D8[];
extern s32 D_80075F50;
extern s32 D_8007DAC0;
extern void *D_8007DB68;
extern char D_8007DB78[];

void func_802D810C(void) {
    signed char *__base_D_8007DB7A;
    int *__base_D_8007DC08;
    short *__base_D_8007DB74;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    char *var_v1;
    char *var_a0;
    s32 temp_v0;
    s32 var_a1;

    sp18 = M2C_FIELD(D_2D6D80, s32 *, 0);
    sp1C = M2C_FIELD(D_2D6D80, s32 *, 4);
    sp20 = M2C_FIELD(D_2D6D80, s32 *, 8);
    sp24 = M2C_FIELD(D_2D6D80, s32 *, 0xC);
    sp28 = M2C_FIELD(D_2D6D80, s32 *, 0x10);
    func_80109D88();
    D_8002D18C = func_80221E98(0x35);
    func_80225570();
    func_802DB660();
    *(s32 *)(void * *)(D_8007DB68 + 0) = func_8022ADB0(D_8004ADF8, 0, &sp18);
    __base_D_8007DB74 = &D_8007DB74;
    (*__base_D_8007DB74) = 0x708;
    D_8007DB6C = 0;
    D_80000320 = 0;
    (*__base_D_8007DB74) = (s32) ((s32) (*__base_D_8007DB74) & 0xFFFF7FFF & ~0x7F00);
    func_8022E66C(-0x7F01, 0xFFFF7FFF);
    __base_D_8007DC08 = &D_8007DC08;
    if ((*__base_D_8007DC08) != 3) {
        func_80268E9C();
    }
    D_8007DB7C = 1;
    D_8007DC04 = 3;
    D_8007DC05 = 0;
    D_800305B8 = 0;
    if ((u32) D_80000318 > 0x400000U) {
        func_802D8228();
        return;
    }
    D_800460D8 = 0;
    var_a1 = 0;
    var_a0 = &D_8007DAC0;
    var_v1 = D_21A15C;
    do {
        temp_v0 = M2C_FIELD(var_v1, s32 *, 8);
        var_v1 += 0x14;
        var_a1 += 1;
        *(s32 *)var_a0 = temp_v0;
        var_a0 += 4;
    } while (var_a1 < 0x29);
    func_80236750(var_a0, var_a1);
    func_80262CA0();
    D_8005EA2C = D_800752D8;
    D_800753DC = (f32) *(f32 *)0x2D6D98;
    func_80296640();
    D_8007DB70 = func_80104BF0(D_8004AE08, 0x36);
    switch ((*__base_D_8007DC08)) {  /* irregular */
    default:
        func_802D84A8(4);
        return;
    case 0:
        func_80107D8C(0, 0x4B, 0, 0x7F);
        func_8022DDD0(1, 0x1E, 0, 0, 0);
        D_80000322 = 0;
        (*__base_D_8007DC08) = 1;
        __base_D_8007DB7A = &D_8007DB7A;
        (*__base_D_8007DB7A) = 1;
        D_8007DB82 = 1;
        D_8007DC04 = 5;
        if (func_8022D430() == 0) {
            D_8001E400 = 0;
            func_802D8378(&D_8001E400);
            return;
        }
        if (!(D_80059084 & 1)) {
            D_8001E400 = 0;
            func_802D8378(&D_8001E400);
            return;
        }
        M2C_FIELD(*(s32 *)(void * *)(D_8007DB68 + 0), s32 *, 4) = (s32) M2C_FIELD(*(s32 *)(void * *)(D_8007DB68 + 0), s32 *, 8);
        D_8002C1BC = 1;
        D_80052778 = D_2D7DD0;
        func_802D84A0((void *)1);
        return;
    case 1:
        D_8007DC04 = 5;
        (*__base_D_8007DB7A) = 1;
        D_8007DB82 = 1;
        (*__base_D_8007DB74) = (s32) (((s32) (*__base_D_8007DB74) & ~0x7F00) | 0x200);
        func_8022DDD0(4, 0x3C, 0, 0, 0);
        D_8002C1BC = 1;
        func_802D84A0();
        return;
    case 2:
        if ((s16) D_8004DF18 != 0x4B) {
            func_80107D8C(0, 0x4B, 0, 0x7F);
        }
        func_8022DDD0(1, 0x1E, 0, 0, 0);
        D_8002C1BC = 1;
        D_80052778 = D_2D7DD0;
        func_802D84A0(*(s32 *)(void * *)(D_8007DB68 + 0), &D_80052778);
        return;
    case 3:
        D_8007DC04 = 1;
        D_8007DC05 = 1;
        D_80075F50 = 0;
        D_8002C1BC = 1;
        D_80052778 = D_2D8010;
        func_80107D8C(0, -1, 0, 0x7F);
        if (D_80059818 != D_80000322) {
            func_8022DAF0(D_80000322);
        }
        func_80229470(M2C_FIELD(*(s32 *)(void * *)(D_8007DB68 + 0), s32 *, 4));
        func_802DA500();
        D_8004AEB0 = 0;
        D_8004AEB4 = 0;
        return;
    }
}
