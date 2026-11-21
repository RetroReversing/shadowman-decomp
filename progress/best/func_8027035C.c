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

s32 func_802703A0(u16 *);                           /* extern */
u16 func_802761B0(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK D_8007558C;
extern u16 D_8007AFFE;
extern u16 D_8007B0A2;

s32 func_8027035C(void) {
    u16 *__base_D_8007B0A2;
    u16 temp_v0;

    temp_v0 = func_802761B0(&D_8007558C, 0x44FA0000);
    __base_D_8007B0A2 = &D_8007B0A2;
    (*__base_D_8007B0A2) = temp_v0;
    if (temp_v0 & 0x8000) {
        return func_802703A0(__base_D_8007B0A2);
    }
    D_8007AFFE = temp_v0;
    return 1;
}
