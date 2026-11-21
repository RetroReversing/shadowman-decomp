/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

extern M2C_UNK D_80052770;

void func_8024B720(void *arg0) {
    s32 temp_a0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    void *temp_a1;
    void *temp_a2;
    void *temp_a3;
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 8);
    temp_a2 = M2C_FIELD(temp_v0, void **, 0x6C);
    temp_a1 = M2C_FIELD(temp_v0, void **, 0x68);
    temp_a0 = M2C_FIELD(temp_a2, s32 *, 0);
    temp_a3 = M2C_FIELD(temp_a1, void **, 0x10);
    switch (temp_a0) {                              /* irregular */
    case 1:
        temp_v0_2 = M2C_FIELD(temp_a2, s32 *, 4) - M2C_FIELD(&D_80052770, s32 *, 4);
        M2C_FIELD(temp_a2, s32 *, 4) = temp_v0_2;
        if (temp_v0_2 <= 0) {
            M2C_FIELD(temp_a1, s32 *, 0) = (s32) (M2C_FIELD(temp_a1, s32 *, 0) + M2C_FIELD(&D_80052770, s32 *, 4));
            M2C_FIELD(temp_a2, s32 *, 4) = (s32) M2C_FIELD(temp_a3, s32 *, 4);
        }
        temp_v1 = M2C_FIELD(temp_a3, s32 *, 8) - 1;
        if (M2C_FIELD(temp_a1, s32 *, 0) >= temp_v1) {
            M2C_FIELD(temp_a1, s32 *, 0) = temp_v1;
            M2C_FIELD(temp_a2, s32 *, 0) = 2;
            return;
        }
    case 2:
        return;
    case 0:
        M2C_FIELD(temp_a1, s32 *, 0) = 0;
        return;
    case 3:
        temp_v0_3 = M2C_FIELD(temp_a2, s32 *, 4) - M2C_FIELD(&D_80052770, s32 *, 4);
        M2C_FIELD(temp_a2, s32 *, 4) = temp_v0_3;
        if (temp_v0_3 <= 0) {
            M2C_FIELD(temp_a1, s32 *, 0) = (s32) (M2C_FIELD(temp_a1, s32 *, 0) - M2C_FIELD(&D_80052770, s32 *, 4));
            M2C_FIELD(temp_a2, s32 *, 4) = (s32) M2C_FIELD(temp_a3, s32 *, 4);
        }
        if (M2C_FIELD(temp_a1, s32 *, 0) <= 0) {
            M2C_FIELD(temp_a1, s32 *, 0) = 0;
            M2C_FIELD(temp_a2, s32 *, 0) = 0;
        }
        return;
    }
}
