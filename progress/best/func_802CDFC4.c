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

s32 func_8023DF7C();
s32 func_8026B618();
s32 func_802CE040();
extern char D_209890[];
extern s32 D_80074BB0;
extern char D_80075518[];
extern char D_80075568[];
extern s32 D_8007BD90;

void func_802CDFC4(void) {
  int __repair_integer_one;
    s32 *__base_D_8007BD90;
    __base_D_8007BD90 = &D_8007BD90;
    if ((*(&D_8007BD90)) != 0) {
        __repair_integer_one = 1;
  (*__base_D_8007BD90) = 0;
        func_8026B618(__repair_integer_one, 0);
        if (M2C_FIELD(((D_80074BB0 * 0x34) + D_209890), s16 *, 8) == 0) {
            func_802CE040(D_80075568);
            return;
        }
        func_8023DF7C(D_80075568, D_80075518, 0xD1, 0xA, 0x28, __repair_integer_one);
    }
}
