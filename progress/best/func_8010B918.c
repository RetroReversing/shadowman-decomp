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

s32 func_8010BA98();                                /* extern */
s32 func_80231D44(f32, f32, s32, void *);           /* extern */
M2C_UNK func_8027363C(s32, s16);                    /* extern */
extern void **D_8002D494;
extern M2C_UNK D_8004EC20;
extern M2C_UNK D_8004EC80;
extern M2C_UNK D_8004EC90;
extern M2C_UNK D_80075568;
extern u8 D_8007AFA4;
extern u8 D_8007AFE2;

s32 func_8010B918(void) {
    s16 temp_v1;
    s16 temp_v1_2;
    void *temp_a3;
    void *temp_s0;
    void *temp_v0;
    void *var_s1;
    M2C_UNK *__base_D_8004EC20;
    M2C_UNK *__base_D_8004EC80;

    __base_D_8004EC80 = &D_8004EC80;

    __base_D_8004EC20 = &D_8004EC20;

    if (D_8002D494 != NULL) {
        var_s1 = *D_8002D494;
        if (var_s1 != NULL) {
loop_3:
            temp_s0 = M2C_FIELD(var_s1, void **, 8);
            if (temp_s0 != NULL) {
                temp_a3 = M2C_FIELD(temp_s0, void **, 0x18);
                if ((temp_a3 != NULL) && (M2C_FIELD(temp_a3, s32 *, 0xC) == M2C_FIELD(&D_80075568, s8 *, 0x71))) {
                    temp_v1 = M2C_FIELD(temp_s0, s16 *, 0x14);
                    if ((*((temp_v1 * 4) + &D_8004EC90) != 0) && (*(temp_v1 + __base_D_8004EC80) == 0) && (func_80231D44(M2C_FIELD(&D_80075568, f32 *, 0x24), M2C_FIELD(&D_80075568, f32 *, 0x28) + *(f32 *)0x101F60, M2C_FIELD(&D_80075568, s32 *, 0x2C), temp_a3 + 0x10) != 0)) {
                        temp_v1_2 = M2C_FIELD(temp_s0, s16 *, 0x14);
                        if (((temp_v1_2 == 0) && (D_8007AFE2 == 0)) || ((temp_v1_2 == 2) && (D_8007AFA4 == 0))) {
                            temp_v0 = M2C_FIELD(*((M2C_FIELD(temp_s0, s16 *, 0x14) * 4) + &D_8004EC90), void **, 8);
                            M2C_FIELD(temp_v0, s32 *, 0x24) = (s32) M2C_FIELD(temp_s0, s32 *, 0);
                            M2C_FIELD(temp_v0, s32 *, 0x28) = (s32) M2C_FIELD(temp_s0, s32 *, 4);
                            M2C_FIELD(temp_v0, s32 *, 0x2C) = (s32) M2C_FIELD(temp_s0, s32 *, 8);
                            M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
                            M2C_FIELD(temp_v0, s32 *, 0x20) = 0;
                            M2C_FIELD(temp_v0, f32 *, 0x1C) = (f32) M2C_FIELD(temp_s0, f32 *, 0xC);
                            func_8027363C(*((M2C_FIELD(temp_s0, s16 *, 0x14) * 4) + &D_8004EC90), M2C_FIELD(temp_s0, s16 *, 0x12));
                        }
                        *((M2C_FIELD(temp_s0, s16 *, 0x14) * 2) + __base_D_8004EC20) = M2C_FIELD(temp_s0, u16 *, 0x10);
                        return func_8010BA98();
                    }
                }
            }
            var_s1 = M2C_FIELD(var_s1, void **, 0);
            if (var_s1 == NULL) {
                /* Duplicate return node #17. Try simplifying control flow for better match */
                return 0xFFFF;
            }
            goto loop_3;
        }
    }
    return 0xFFFF;
}
