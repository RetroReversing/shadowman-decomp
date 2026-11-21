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
extern char D_80045930[];

void *func_802D3E18(void *arg0) {
    char *__base_D_80045930;
    void *temp_v0;

    __base_D_80045930 = D_80045930;
    M2C_FIELD(M2C_FIELD(((M2C_FIELD(arg0, s32 *, 4) * 0x14) + __base_D_80045930), void **, 0xC), s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(M2C_FIELD(((M2C_FIELD(arg0, s32 *, 4) * 0x14) + __base_D_80045930), void **, 0xC), s16 *, 4) = -1;
    M2C_FIELD(M2C_FIELD(((M2C_FIELD(arg0, s32 *, 4) * 0x14) + __base_D_80045930), void **, 0xC), s16 *, 2) = -1;
    *M2C_FIELD(((M2C_FIELD(arg0, s32 *, 4) * 0x14) + __base_D_80045930), s16 **, 0xC) = -1;
    temp_v0 = (M2C_FIELD(arg0, s32 *, 4) * 0x14) + __base_D_80045930;
    func_8023DF7C(M2C_FIELD(temp_v0, s32 *, 8), M2C_FIELD(temp_v0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 8), 0xA, M2C_FIELD(arg0, s32 *, 0xC));
    return arg0 + 0x14;
}
