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

M2C_UNK func_802A6508(void *, M2C_UNK);             /* extern */
M2C_UNK func_802BA1E4(s32, void *, void *);         /* extern */

void func_802AE89C(void *arg0, s32 arg1, void *arg2) {
    void *temp_a1;

    if ((arg1 == 1) && !(M2C_FIELD(arg0, u8 *, 0x50) & 4)) {
        temp_a1 = M2C_FIELD(arg2, void **, 8);
        func_802BA1E4(M2C_FIELD(temp_a1, s32 *, 0x6C), temp_a1, arg0);
        func_802A6508(arg0, 0x1F);
        M2C_FIELD(arg0, u8 *, 0x50) = (u8) (M2C_FIELD(arg0, u8 *, 0x50) | 4);
    }
}
