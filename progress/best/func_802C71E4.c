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

M2C_UNK func_802C721C();                            /* extern */
M2C_UNK func_802C7264();                            /* extern */
extern s32 D_8002D420;
extern f32 D_80030E44;
extern f32 D_80030E4C;
extern f32 D_800458A0;
extern f32 D_800458A4;

void func_802C71E4(void) {
    s32 *__base_D_8002D420;
    __base_D_8002D420 = &D_8002D420;
    if ((*(&D_8002D420)) & 1) {
        func_802C721C();
        return;
    }
    if ((*__base_D_8002D420) & 2) {
        D_80030E4C = -D_800458A4;
    }
    if ((*__base_D_8002D420) & 8) {
        func_802C7264();
        return;
    }
    if ((*__base_D_8002D420) & 4) {
        D_80030E44 = -D_800458A0 * *(f32 *)0x21853C;
    }
}
