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

void *func_801043F8(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_8029D51C();                            /* extern */
extern s8 D_80036AF0;
extern s32 D_80036B08;
extern s32 D_80036B0C;
extern M2C_UNK D_80036B10;
extern M2C_UNK D_8007BAB0;
extern M2C_UNK D_8007BAB4;
extern s32 D_8007BAB8;
extern M2C_UNK D_8007BAD8;
extern s32 D_8007BAE0;
extern s32 D_8007BAE4;
extern s32 D_8007BAF4;
extern void *D_8007BAFC;
extern M2C_UNK D_8007BB00;
extern void *D_8007BB1C;
extern s32 D_8007BB20;
extern void *D_8007BB28;
extern M2C_UNK D_8007BB30;

void func_80296A28(void) {
    M2C_UNK *var_a2;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s8 *var_a0_2;
    void *temp_v0;
    void *var_v1;
    M2C_UNK *__base_D_80036B10;
    M2C_UNK *__base_D_8007BAD8;
    M2C_UNK *__base_D_8007BAB4;

    __base_D_8007BAB4 = &D_8007BAB4;

    __base_D_8007BAD8 = &D_8007BAD8;

    __base_D_80036B10 = &D_80036B10;

    func_8029D51C();
    D_8007BAE0 = 0;
    D_8007BB20 = 0;
    D_8007BAFC = func_801043F8(0x708, 2, 0);
    temp_v0 = func_801043F8(0xB540, 2, 0);
    var_a1 = 0;
    var_a0 = 0x74;
    var_v1 = temp_v0;
    D_8007BB1C = temp_v0;
    D_8007BB28 = temp_v0;
    D_8007BAF4 = 0;
    __repair_rows: {
        M2C_FIELD(var_v1, void **, 0x3C) = (void *) (temp_v0 + var_a0);
        var_a0 += 0x74;
        var_a1 += 1;
        var_v1 += 0x74;
    }
if (var_a1 < 0x18F) goto __repair_rows;
    var_a1_2 = 0x15;
    var_a0_2 = &D_8007BB30 + 0x15;
    M2C_FIELD(((var_a1 * 0x74) + D_8007BB1C), s32 *, 0x3C) = 0;
    do {
        *var_a0_2 = 0;
        var_a1_2 -= 1;
        var_a0_2 -= 1;
    } while (var_a1_2 >= 0);
    var_a1_3 = 0;
    var_a2 = &D_8007BB00;
    D_80036B08 = 0;
    D_80036B0C = 0;
    D_8007BAB8 = 0;
    M2C_FIELD(__base_D_80036B10, s32 *, 4) = 0;
    D_80036AF0 = 0;
    M2C_FIELD(__base_D_80036B10, s32 *, 0) = 0;
    D_8007BAE4 = 0;
    M2C_FIELD(__base_D_8007BAB4, s8 *, 2) = 0x9D;
    M2C_FIELD(__base_D_8007BAB4, s8 *, 0) = 0x9D;
    M2C_FIELD(__base_D_8007BAB4, s8 *, 1) = 0x9D;
    M2C_FIELD(__base_D_8007BAB4, s8 *, 3) = 0xFF;
    M2C_FIELD(__base_D_8007BAD8, s8 *, 2) = 0xFF;
    M2C_FIELD(__base_D_8007BAD8, s8 *, 1) = 0xFF;
    M2C_FIELD(__base_D_8007BAD8, s8 *, 0) = 0xFF;
    M2C_FIELD(__base_D_8007BAD8, s8 *, 3) = 0x80;
    M2C_FIELD(&D_8007BAB0, s8 *, 0) = 0x64;
    M2C_FIELD(&D_8007BAB0, s8 *, 1) = 0;
    M2C_FIELD(&D_8007BAB0, s8 *, 2) = 0;
    do {
        M2C_FIELD(var_a2, s8 *, 3) = 0xFF;
        M2C_FIELD(var_a2, s8 *, 2) = 0xFF;
        M2C_FIELD(var_a2, s8 *, 0) = 0xFF;
        M2C_FIELD(var_a2, s8 *, 1) = 0xFF;
        var_a1_3 += 1;
        var_a2 += 4;
    } while (var_a1_3 < 4);
}
