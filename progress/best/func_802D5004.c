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

s32 func_80257138();
s32 func_8027363C();
extern char D_80045930[];
extern char D_80075568[];

void *func_802D5004(void *arg0) {
    char *__base_D_80045930;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;
    void *var_v0;

    __base_D_80045930 = D_80045930;
    temp_s0 = M2C_FIELD(((M2C_FIELD(arg0, s32 *, 4) * 0x14) + __base_D_80045930), void **, 8);
    temp_a0 = M2C_FIELD(temp_s0, void **, 0x88);
    M2C_FIELD(temp_s0, u8 *, 0x71) = (u8) M2C_FIELD(arg0, u8 *, 0xB);
    if (temp_a0 != NULL) {
        if ((temp_s0 != D_80075568) && (M2C_FIELD(temp_a0, s32 *, 0x18) == 1)) {
            func_8027363C(temp_a0, M2C_FIELD(arg0, s32 *, 8));
        }
        temp_a0_2 = M2C_FIELD(temp_s0, void **, 0x88);
        var_v0 = arg0 + 0xC;
        if (M2C_FIELD(temp_a0_2, s32 *, 0x18) == 2) {
            var_v0 = arg0 + 0xC;
            if (M2C_FIELD(temp_a0_2, s16 *, 0x14) == 0x20B) {
                func_80257138(temp_a0_2, M2C_FIELD(arg0, s32 *, 8));
                goto block_7;
            }
        }
    } else {
block_7:
        var_v0 = arg0 + 0xC;
    }
    return var_v0;
}
