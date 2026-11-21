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

extern int D_8004EE2C;
extern u8 D_8004EDEC;
extern s8 D_8004EDF0;
extern s32 D_8004EE28;

void func_80114380(s8 arg0) {
    s8 sp0;
    s8 sp1;
    s8 sp2;
    s8 sp3;
    s8 sp4;
    s8 sp5;
    s8 sp6;
    s8 sp7;
    char *var_v0;
    s32 var_a1;
    s32 var_a1_2;
    char *var_a2;

    var_a1 = 0xE;
    var_v0 = &D_8004EE28;
    do {
        *(s32 *)var_v0 = 0;
        var_a1 -= 1;
        var_v0 -= 4;
    } while (var_a1 >= 0);
    var_a2 = &D_8004EDF0;
    var_a1_2 = 0;
    D_8004EE2C = 1;
    sp0 = 0xFF;
    sp1 = 1;
    sp2 = 3;
    sp3 = arg0;
    sp4 = 0xFF;
    sp5 = 0xFF;
    sp6 = 0xFF;
    sp7 = 0xFF;
    if (D_8004EDEC != 0) {
        do {
            M2C_FIELD(var_a2, s8 *, 0) = M2C_UNALIGNED32(sp0);
            M2C_FIELD(var_a2, s32 *, 4) = M2C_UNALIGNED32(sp4);
            var_a1_2 += 1;
            var_a2 += 8;
        } while (var_a1_2 < (s32) D_8004EDEC);
    }
    *(s8 *)var_a2 = 0xFE;
}
