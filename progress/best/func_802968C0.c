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

s32 func_802308A4();
s32 func_80296924();
s32 func_802969E0();
extern char D_200468[];
extern char D_8002C63C[];

s32 func_802968C0(s32 arg0, f32 arg1) {
    char *__base_D_8002C63C;
    f32 temp_fv0f;
    s16 var_v1;
    s32 temp_s0;
    s32 temp_s1;
    void *temp_s0_2;
    void *temp_s2;

    temp_fv0f = *(f32 *)0x2158C0;
    if (!(temp_fv0f <= arg1)) {
        return func_80296924((s32) arg1);
    }
    __base_D_8002C63C = D_8002C63C;
    temp_s2 = (arg0 * 0x10) + __base_D_8002C63C;
    if (M2C_FIELD(temp_s2, s32 *, 4) > 0) {
        temp_s1 = ((s32) (arg1 - temp_fv0f) | 0x80000000) & 0xFFFF;
        temp_s0 = temp_s1 * 4;
        func_802308A4(*(s32 *)((temp_s1 * 2) + *((arg0 * 0xC) + D_200468)), M2C_FIELD(temp_s2, s32 *, 0) + temp_s0);
        temp_s0_2 = *(s32 *)(temp_s0 + M2C_FIELD(temp_s2, s32 *, 0));
        if (temp_s0_2 != NULL) {
            var_v1 = 7;
            if (temp_s1 == 1) {
                var_v1 = 6;
            }
            if (M2C_FIELD(((temp_s1 * 0x10) + __base_D_8002C63C), u8 *, 0xC) == 1) {
                var_v1 |= 8;
            }
            M2C_FIELD(temp_s0_2, s16 *, 0x3C) = var_v1;
        }
        return func_802969E0(1);
    }
    return 0;
}
