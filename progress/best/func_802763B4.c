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

s32 func_802D0B28(s32, s16, M2C_UNK);               /* extern */
extern s8 D_8002D2B4;
extern s32 D_8005EA14;
extern s8 D_800755D9;

void func_802763B4(s16 arg0) {
    s32 *__base_D_8005EA14;
    __base_D_8005EA14 = &D_8005EA14;
    if ((func_802D0B28((*__base_D_8005EA14), arg0, 0) == 0) && (D_800755D9 != -1) && (func_802D0B28((*__base_D_8005EA14), (s16) D_800755D9, 0) == 0)) {
        func_802D0B28((*(&D_8005EA14)), (s16) D_8002D2B4, 0);
    }
}
