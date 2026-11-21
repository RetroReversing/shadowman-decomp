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

void *func_8029EB04(f32 *, M2C_UNK);                /* extern */

void func_8024B434(void *arg0) {
    f32 sp10[3];
    void *temp_s0;
    void *temp_v0;

    temp_s0 = M2C_FIELD(arg0, void **, 8);
    if (M2C_FIELD(temp_s0, s16 *, 0x7A) == 0) {
        sp10[0] = M2C_FIELD(temp_s0, f32 *, 0x24);
        sp10[1] = M2C_FIELD(temp_s0, f32 *, 0x28) - *(f32 *)0x202E5C;
        sp10[2] = M2C_FIELD(temp_s0, f32 *, 0x2C);
        temp_v0 = func_8029EB04(sp10, 0x3F800000);
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s16 *, 0x70) = (s16) (s8) M2C_FIELD(temp_s0, u8 *, 0x71);
            M2C_FIELD(temp_s0, s16 *, 0x7A) = 1;
        }
    }
}
