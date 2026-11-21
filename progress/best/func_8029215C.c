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

extern unsigned int D_80036928;
extern int D_8003692C;
s32 func_8011BA20();
s32 func_80292884();
s32 func_80292CDC();
extern char D_80036920[];
extern s32 D_8003693C;
extern s32 D_80036940;
extern s32 D_80036948;
extern s32 D_8003694C;
extern s32 D_80036950;

void func_8029215C(s16 arg0, s32 arg1) {
    s32 *__base_D_80036950;
    s32 *__base_D_8003694C;
    s32 *__base_D_80036948;
    s32 var_v0;

    if ((arg0 >= 0) && ((u32) arg0 < (u32) D_80036928)) {
        __base_D_8003694C = &D_8003694C;
        func_8011BA20((*__base_D_8003694C), -1, D_80036928 * 4);
        do { func_8011BA20(D_80036940, 0, D_8003692C * 4); } while (0);
        D_8003693C = (s32) arg0;
        __base_D_80036948 = &D_80036948;
        (*__base_D_80036948) = 0;
        *(s32 *)((arg0 * 4) + (*__base_D_8003694C)) = 0;
        func_80292CDC(arg0);
        __base_D_80036950 = &D_80036950;
        if ((*__base_D_80036950) != 0) {
            var_v0 = arg1 - 1;
loop_4:
            if ((var_v0 << 0x10) > 0) {
                (*__base_D_80036948) += 1;
                func_80292884();
                var_v0 -= 1;
                if ((*__base_D_80036950) != 0) {
                    goto loop_4;
                }
            }
        }
    }
}
