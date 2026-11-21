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
extern int D_8007C330;
extern int D_8007C334;
extern int D_8007C338;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8022DDD0();
s32 func_802D2B40();
extern char D_80075568[];
extern s8 D_80075F21;

void func_802D3C24(void) {
    s32 *__base_D_80075568;
    func_8022DDD0(1, 0x20, 0, 0, 0);
    __base_D_80075568 = D_80075568;
    M2C_FIELD(__base_D_80075568, s32 *, 0x24) = (s32) D_8007C330;
    M2C_FIELD(__base_D_80075568, s32 *, 0x28) = (s32) D_8007C334;
    M2C_FIELD(__base_D_80075568, s32 *, 0x2C) = (s32) D_8007C338;
    do { func_802D2B40(D_80075F21); } while (0);
}
