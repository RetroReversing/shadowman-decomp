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

M2C_UNK func_8022F7D0(void *, M2C_UNK);             /* extern */
M2C_UNK func_8022FE7C(s32);                         /* extern */

void func_8022F8B4(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 6);
    if (!(temp_v1 & 1)) {
        if ((temp_v1 & 2)) {
            func_8022FE7C(M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 8));
            func_8022F7D0(arg0, 0);
            M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) & 0xFFFD);
        }
    }
}
