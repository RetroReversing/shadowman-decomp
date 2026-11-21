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

extern unsigned char D_8007DC06;
s32 func_8011BA20();
void *func_80229AD8();
s32 func_802DA5CC();
s32 str_len();
extern char D_8007DB78[];
extern s8 D_8007DC29;
extern s32 D_8007E014;
extern u8 D_8007E01D;
extern s32 D_8007E074;

void func_802D9E20(void) {
int __repair_literal;

    unsigned char *__base_D_8007DC06;
    void *var_s0;

    var_s0 = func_80229AD8(D_8007E074, D_8007E01D);
    if (var_s0 != NULL) {
        do {
            __base_D_8007DC06 = &D_8007DC06;
__repair_literal = 4;

            func_8011BA20(*(s32 *)(var_s0 + ((*__base_D_8007DC06) * __repair_literal)), 0, str_len(*(s32 *)(var_s0 + ((*__base_D_8007DC06) * 4))));
            var_s0 = M2C_FIELD(var_s0, void **, 0x34);
        } while (var_s0 != NULL);
    }
    func_802DA5CC(0);
    D_8007DC29 = 0;
    D_8007E014 = 3;
}
