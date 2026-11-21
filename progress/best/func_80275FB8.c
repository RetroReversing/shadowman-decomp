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

M2C_UNK func_8027363C(s32, M2C_UNK);                /* extern */
s32 func_80275F40(M2C_UNK, M2C_UNK *);              /* extern */
extern M2C_UNK D_8004EC80;
extern s32 D_80074BB0;
extern s8 D_8007AFA4;
extern s8 D_8007AFBC;
extern M2C_UNK D_8007AFE0;
extern s8 D_8007AFE2;
extern s8 D_8007B008;

void func_80275FB8(void) {
    s32 temp_v0;
    s32 var_a0;

    var_a0 = 6;
    D_8007B008 = 1;
    D_8007AFA4 = 1;
    D_8007AFBC = 1;
    D_8007AFE2 = 1;
    M2C_FIELD(&D_8007AFE0, s8 *, 1) = 1;
    do {
        var_a0 -= 1;
        *(var_a0 + &D_8004EC80) = 0;
    } while (var_a0 != 0);
    M2C_FIELD(&D_8007AFE0, s8 *, 0) = 0;
    if ((D_80074BB0 == 3) || (D_80074BB0 == 0x13)) {
        temp_v0 = func_80275F40(0x1F, &D_8004EC80);
        if (temp_v0 != 0) {
            func_8027363C(temp_v0, 0x10);
        }
    }
}
