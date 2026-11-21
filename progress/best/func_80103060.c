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

extern int D_8007DC08;
extern signed char D_8007DC06;
extern int D_8000031C;
extern short D_80000320;
extern short D_80000322;
extern short D_80000324;
extern signed char D_80000326;
extern signed char D_8007DB82;
extern signed char D_8007DB84;
extern signed char D_8007DB85;
s32 func_8010311C();
s32 func_801034E0();
s32 func_801069C0();
s32 func_80116920();
s32 func_80118320();
extern char D_103298[];
extern char D_34280[];
extern char D_4A440[];
extern s32 D_8000030C;
extern s8 D_8004DF48;
extern s32 D_80075B10;
extern char D_8007DB78[];

void func_80103060(s32 arg0, s32 *arg1) {
    int *__base_D_8000031C;
    s32 *var_a1;
    s32 var_a0;
    u32 var_v1;

    var_a1 = arg1;
    var_a0 = (s32) &D_4A440 | 0x80000000;
    var_v1 = 0;
    if (D_34280 != NULL) {
        var_a1 = D_34280;
        do {
            *(s32 *)var_a0 = 0;
            var_v1 += 4;
            var_a0 += 4;
        } while (var_v1 < (u32) &D_34280);
    }
    func_80116920((s32 *) var_a0);
    func_80118320();
    D_8007DC08 = 0;
    D_8007DC06 = 0;
    if (D_8000030C == 1) {
        __base_D_8000031C = &D_8000031C;
        if ((*__base_D_8000031C) == 0x0C0DFACE) {
            func_8010311C((*__base_D_8000031C));
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        D_80000320 = 0;
        D_80000322 = 0;
        (*__base_D_8000031C) = 0x0C0DFACE;
        D_80000324 = 0x1E;
        D_80000326 = 0;
        D_80075B10 = 0xFF;
        D_8007DB82 = 0;
        D_8007DB84 = 0;
        D_8007DB85 = 1;
        D_8004DF48 = 0;
        func_801034E0(0x0C0DFACE);
        func_801069C0(D_103298, 0x80, 0, 0);
        return;
    }
    D_80000320 = 0;
    D_80000322 = 0;
    (*__base_D_8000031C) = 0x0C0DFACE;
    D_80000324 = 0x1E;
    D_80000326 = 0;
    D_80075B10 = 0xFF;
    D_8007DB82 = 0;
    D_8007DB84 = 0;
    D_8007DB85 = 1;
    D_8004DF48 = 0;
    func_801034E0(0x0C0DFACE);
    func_801069C0(D_103298, 0x80, 0, 0);
}
