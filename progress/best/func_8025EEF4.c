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

extern char D_80030630[];
extern char D_80074C3A[];

void func_8025EEF4(s32 arg0) {
    char *__base_D_80030630;
    s32 var_a0;
    s8 *temp_a2;
    s8 temp_v1;
    void *temp_v1_2;
    

    temp_a2 = (void *)(arg0); temp_a2 = (void *)((char *)temp_a2 + (s32)(D_80074C3A));
    temp_v1 = *temp_a2;
    if (temp_v1 != -1) {
        var_a0 = 0x20;
        if (arg0 == 0) {
            var_a0 = 0x10;
        }
        __base_D_80030630 = D_80030630;
        temp_v1_2 = (temp_v1 << 5) + __base_D_80030630;
        M2C_FIELD(temp_v1_2, u8 *, 3) &= ~var_a0;
        temp_v1_2 = (*temp_a2 << 5) + __base_D_80030630;
        M2C_FIELD(temp_v1_2, u8 *, 3) |= 8;
        *temp_a2 = -1;
    }
}
