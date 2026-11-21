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

void func_8023B83C(void *arg0) {
    void *temp_a0;
    void *temp_a1;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, void **, 0x68);
    if ((temp_v1 != NULL) && (*M2C_FIELD(temp_v1, s32 **, 0x10) & 2) && (temp_a0 = M2C_FIELD(arg0, void **, 0x64), temp_a1 = M2C_FIELD(temp_a0, void **, 0x2C), (temp_a1 != NULL))) {
        temp_v1_2 = (*(s32 *)(M2C_FIELD(temp_a1, s32 *, 4) + M2C_FIELD(temp_v1, s32 *, 0)) * 0xC) + temp_a1;
        if (M2C_FIELD(temp_v1_2, u8 *, 2) & 1) {
            M2C_FIELD(temp_a0, s32 *, 0x18) = (s32) M2C_FIELD(temp_v1_2, s32 *, 8);
            return;
        }
        M2C_FIELD(temp_a0, s32 *, 0x18) = (s32) M2C_FIELD(temp_a1, s32 *, 8);
    }
}
