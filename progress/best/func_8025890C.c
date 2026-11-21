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

M2C_UNK func_80258954();                            /* extern */
M2C_UNK func_8025FEE8(M2C_UNK);                     /* extern */
M2C_UNK func_8026070C();                            /* extern */
M2C_UNK func_8026E26C(s32);                         /* extern */

void func_8025890C(void *arg0) {
    void *temp_s0;
    void *temp_v1;

    temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0x6C);
    if (M2C_FIELD(temp_s0, s32 *, 0) == 3) {
        if (M2C_FIELD(arg0, s16 *, 0x14) == 0x160) {
            func_8025FEE8(0x1E);
            func_80258954();
            return;
        }
        func_8026070C();
        func_8026E26C(M2C_FIELD(temp_s0, s32 *, 0xC) + 0x77);
        temp_v1 = M2C_FIELD(temp_s0, void **, 0x14);
        M2C_FIELD(temp_v1, u16 *, 0x7E) = (u16) (M2C_FIELD(temp_v1, u16 *, 0x7E) | 0x400);
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x14), s16 *, 0x78) = 1;
        M2C_FIELD(temp_s0, s32 *, 0) = 4;
    }
}
