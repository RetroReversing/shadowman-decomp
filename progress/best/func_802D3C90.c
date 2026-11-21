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

extern unsigned char D_80075F20;
extern unsigned char D_80075F21;
extern char D_21A15C[];

void func_802D3C90(s32 arg0) {
    char *__base_D_21A15C;
    void *temp_v0;

    __base_D_21A15C = D_21A15C;
    temp_v0 = (arg0 * 0x14) + __base_D_21A15C;
    D_80075F20 = (u8) M2C_FIELD(temp_v0, const u8 *, 3);
    D_80075F21 = (u8) M2C_FIELD(temp_v0, const u8 *, 7);
}
