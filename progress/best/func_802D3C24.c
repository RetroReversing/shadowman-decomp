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

M2C_UNK func_8022DDD0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_802D2B40(s8);                          /* extern */
extern M2C_UNK D_80075568;
extern s8 D_80075F21;
extern M2C_UNK D_8007C330;

void func_802D3C24(void) {
    func_8022DDD0(1, 0x20, 0, 0, 0);
    M2C_FIELD(&D_80075568, s32 *, 0x24) = (s32) M2C_FIELD(&D_8007C330, s32 *, 0);
    M2C_FIELD(&D_80075568, s32 *, 0x28) = (s32) M2C_FIELD(&D_8007C330, s32 *, 4);
    M2C_FIELD(&D_80075568, s32 *, 0x2C) = (s32) M2C_FIELD(&D_8007C330, s32 *, 8);
    func_802D2B40(D_80075F21);
}
