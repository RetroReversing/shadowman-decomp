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

M2C_UNK func_8010F290(void *, s32);                 /* extern */
M2C_UNK func_8010F720();                            /* extern */
s32 func_8010F90C(void *, void *);                  /* extern */
M2C_UNK func_8010F9A4(void *, s16 *, s32);          /* extern */

void func_8010F6CC(void *arg0) {
    s16 sp10;
    s32 temp_v0;
    s32 temp_v0_2;

    for (;;) {
        temp_v0 = M2C_FIELD(arg0, s16 *, 0x28);
        if (temp_v0 == 5) {
            sp10 = temp_v0;
            func_8010F9A4(arg0 + 0x14, &sp10, M2C_FIELD(arg0, s32 *, 0x48));
            func_8010F720();
            return;
        }
        func_8010F290(arg0, arg0 + 0x28);
        temp_v0_2 = func_8010F90C(arg0 + 0x14, arg0 + 0x28);
        M2C_FIELD(arg0, s32 *, 0x4C) = temp_v0_2;
        if (temp_v0_2 != 0) {
            M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + temp_v0_2);
            return;
        }
        continue;
        break;
    }
}
