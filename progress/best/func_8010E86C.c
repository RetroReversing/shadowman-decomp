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

s32 func_8011BA20();
extern char D_8004EC20[];
extern char D_8004EC80[];
extern char D_8004ECB4[];
extern char D_8004ED08[];
extern char D_8004ED0C[];

void func_8010E86C(void) {
    char *__base_D_8004EC20;
    char *var_a0;
    s32 var_v1;
    char *__base_D_8004EC80;

    __base_D_8004EC80 = D_8004EC80;

    var_v1 = 6;
    __base_D_8004EC20 = D_8004EC20;
    var_a0 = __base_D_8004EC20 + 0xC;
    do {
        var_a0 -= 2;
        var_v1 -= 1;
        *(s16 *)var_a0 = -1;
        *(var_v1 + __base_D_8004EC80) = 0;
    } while (var_v1 != 0);
    func_8011BA20(D_8004ECB4, 0, 4);
    func_8011BA20(D_8004ED0C, 0, 4);
    func_8011BA20(D_8004ED08, 0, 4);
}
