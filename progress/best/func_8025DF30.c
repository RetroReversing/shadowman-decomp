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

extern M2C_UNK D_80030630;
extern s8 D_80030BD0;
extern s8 D_80074C34;
extern s8 D_80074C35;
extern s8 D_80074C36;
extern M2C_UNK D_80074C48;

void func_8025DF30(void) {
    M2C_UNK *var_v1;
    s32 var_a0;
    s32 var_a0_2;
    s8 *var_v0;

    var_a0 = 0;
    var_v1 = &D_80030630;
    __repair_rows: {
        var_a0 += 1;
        M2C_FIELD(var_v1, u8 *, 3) = (u8) (M2C_FIELD(var_v1, u8 *, 3) & 0xC7);
        var_v1 += 8;
    }
if (var_a0 < 0x1E) goto __repair_rows;
    var_a0_2 = 2;
    var_v0 = &D_80074C48 + 2;
    do {
        *var_v0 = 0;
        var_a0_2 -= 1;
        var_v0 -= 1;
    } while (var_a0_2 >= 0);
    D_80074C34 = 0;
    D_80074C35 = 0;
    D_80074C36 = 0;
    D_80030BD0 = 0;
}
