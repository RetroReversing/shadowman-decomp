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

void *func_8021E6C0(M2C_UNK, s32, s32, void *);     /* extern */
void *func_8021E738(s32, s32, s32, s32);            /* extern */
void *func_8021E73C(s32, s32);                      /* extern */

void *func_8021E3F0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a1_7;
    s32 temp_a1_8;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a2_5;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_t6;
    void *temp_t6_10;
    void *temp_t6_11;
    void *temp_t6_2;
    void *temp_t6_3;
    void *temp_t6_4;
    void *temp_t6_5;
    void *temp_t6_6;
    void *temp_t6_7;
    void *temp_t6_8;
    void *temp_t6_9;

    temp_a1_3 = arg1 & 0xFF;
    if (temp_a1_3 != 1) {
        if (temp_a1_3 < 2) {
            if (temp_a1_3 != 0) {
                return func_8021E73C(arg4, temp_a1_3);
            }
            temp_t6_2 = arg0 + 8;
            temp_t6_3 = temp_t6_2 + 8;
            temp_t6_4 = temp_t6_3 + 8;
            temp_t6_5 = temp_t6_4 + 8;
            temp_t6_6 = temp_t6_5 + 8;
            temp_a3_2 = (arg2 & 7) << 0x15;
            temp_a1_5 = (s32) (arg4 << 0x10) >> 0x11;
            temp_a1_6 = (((s32) (temp_a1_5 + 7) >> 3) & 0x1FF) << 9;
            M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_a3_2 | (((temp_a1_5 - 1) & 0xFFF) | 0xFD080000));
            M2C_FIELD(arg0, s32 *, 4) = arg3;
            M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_a3_2 | (temp_a1_6 | 0xF5080000));
            M2C_FIELD(temp_t6_2, s32 *, 4) = 0x07000000;
            M2C_FIELD(temp_t6_2, s32 *, 8) = 0xE6000000;
            temp_a0 = (s16) arg4 - 1;
            M2C_FIELD(temp_t6_3, s32 *, 4) = 0;
            M2C_FIELD(temp_t6_3, s32 *, 8) = 0xF4000000;
            temp_v1 = (((s32) (arg5 << 0x10) >> 0xE) - 4) & 0xFFF;
            temp_a2_3 = temp_v1 | 0x07000000;
            M2C_FIELD(temp_t6_4, s32 *, 4) = (s32) ((((temp_a0 * 2) & 0xFFF) << 0xC) | temp_a2_3);
            M2C_FIELD(temp_t6_4, s32 *, 8) = 0xE7000000;
            temp_a1_4 = temp_a1_6 | 0xF5000000;
            temp_a3 = temp_a3_2 | temp_a1_4;
            M2C_FIELD(temp_t6_5, s32 *, 4) = 0;
            M2C_FIELD(temp_t6_5, s32 *, 8) = temp_a3;
            M2C_FIELD(temp_t6_6, s32 *, 4) = 0;
            M2C_FIELD(temp_t6_6, s32 *, 8) = 0xF2000000;
            return func_8021E738((((temp_a0 * 4) & 0xFFF) << 0xC) | temp_v1, temp_a1_4, temp_a2_3, temp_a3);
        }
        if (temp_a1_3 != 2) {
            if (temp_a1_3 != 3) {
                return func_8021E73C(arg4, temp_a1_3);
            }
            temp_t6_7 = arg0 + 8;
            temp_t6_8 = temp_t6_7 + 8;
            temp_t6_9 = temp_t6_8 + 8;
            temp_t6_10 = temp_t6_9 + 8;
            temp_t6_11 = temp_t6_10 + 8;
            temp_t6 = temp_t6_11 + 8;
            temp_a2_4 = (arg2 & 7) << 0x15;
            temp_a1_7 = (s16) arg4 - 1;
            M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_a2_4 | ((temp_a1_7 & 0xFFF) | 0xFD180000));
            temp_a2_5 = temp_a2_4 | (((((s32) (((s16) arg4 * 2) + 7) >> 3) & 0x1FF) << 9) | 0xF5180000);
            M2C_FIELD(arg0, s32 *, 4) = arg3;
            M2C_FIELD(arg0, s32 *, 8) = temp_a2_5;
            M2C_FIELD(temp_t6_7, s32 *, 4) = 0x07000000;
            M2C_FIELD(temp_t6_7, s32 *, 8) = 0xE6000000;
            temp_a1_8 = ((temp_a1_7 * 4) & 0xFFF) << 0xC;
            temp_v1_2 = (((s32) (arg5 << 0x10) >> 0xE) - 4) & 0xFFF;
            M2C_FIELD(temp_t6_8, s32 *, 4) = 0;
            M2C_FIELD(temp_t6_8, s32 *, 8) = 0xF4000000;
            M2C_FIELD(temp_t6_9, s32 *, 4) = (s32) (temp_a1_8 | (temp_v1_2 | 0x07000000));
            M2C_FIELD(temp_t6_9, s32 *, 8) = 0xE7000000;
            M2C_FIELD(temp_t6_10, s32 *, 4) = 0;
            M2C_FIELD(temp_t6_10, s32 *, 8) = temp_a2_5;
            M2C_FIELD(temp_t6_11, s32 *, 4) = 0;
            M2C_FIELD(temp_t6_11, s32 *, 8) = 0xF2000000;
            M2C_FIELD(temp_t6, s32 *, 4) = (s32) (temp_a1_8 | temp_v1_2);
            return temp_t6 + 8;
        }
        temp_a2_2 = (arg2 & 7) << 0x15;
        temp_a1_2 = (s16) arg4 - 1;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_a2_2 | ((temp_a1_2 & 0xFFF) | 0xFD100000));
        return func_8021E6C0(0xFD100000, temp_a1_2, temp_a2_2, arg0);
    }
    temp_a2 = (arg2 & 7) << 0x15;
    arg1 = (s16) arg4 - 1;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_a2 | ((arg1 & 0xFFF) | 0xFD080000));
    return func_8021E6C0(0xFD080000, arg1, temp_a2, arg0);
}
