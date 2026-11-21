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

s32 func_80113AD0();                                /* extern */
f32 func_8022EBE8(f32);                             /* extern */
M2C_UNK func_8029B14C(void *, f32 *, f32, f32, s32); /* extern */
M2C_UNK func_802A6588(void *, void *);              /* extern */
M2C_UNK func_802AD5C4();                            /* extern */
M2C_UNK func_802BA1E4(s32, void *, void *);         /* extern */

void func_802AD584(void *arg0, s32 arg1, void *arg2) {
    f32 sp18[3];
    f32 temp_fs0;
    void *temp_a1;

    switch (arg1) {
case 0: break;
                                 /* irregular */
    case 1:
        temp_a1 = M2C_FIELD(arg2, void **, 8);
        temp_fs0 = *(f32 *)0x216670;
        func_802BA1E4(M2C_FIELD(temp_a1, s32 *, 0x6C), temp_a1, arg0);
        sp18[0] = func_8022EBE8(temp_fs0);
        sp18[1] = func_8022EBE8(temp_fs0);
        sp18[2] = func_8022EBE8(temp_fs0);
        func_8029B14C(arg0 + 0x54, sp18, 0.95f, 15.0f, (func_80113AD0() % 2) + 3);
        if (1U < 0x20U) {
            func_802AD5C4();
            return;
        }
        return;
    case 2:
        func_802A6588(arg0, arg2);
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        break;
    }
}
