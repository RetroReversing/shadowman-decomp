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

s32 func_80230BF4();
s32 func_80230D5C();
extern char D_800598A0[];

void func_80230A3C(s32 arg0) {
    char *__base_D_800598A0;
    u16 temp_a0;
    void *temp_s0;

    __base_D_800598A0 = D_800598A0;
    temp_s0 = ((arg0 & 0xFFFF) * 0x28) + __base_D_800598A0;
    temp_a0 = M2C_FIELD(temp_s0, u16 *, 0);
    if (temp_a0 & 1) {
        M2C_FIELD(temp_s0, u16 *, 0) = (u16) (temp_a0 & 0xFFFC);
        func_80230BF4(*M2C_FIELD(temp_s0, s32 **, 8));
        func_80230D5C(temp_s0);
    }
}
