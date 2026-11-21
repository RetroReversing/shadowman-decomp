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

s32 func_8023204C(f32, f32, s32);                   /* extern */
M2C_UNK func_802A6508(void *, M2C_UNK);             /* extern */
M2C_UNK func_802A7CD4();                            /* extern */
M2C_UNK func_802A8518(void *);                      /* extern */

void func_802A84D8(void *arg0) {
    func_802A7CD4();
    if (func_8023204C(M2C_FIELD(arg0, f32 *, 0x54), M2C_FIELD(arg0, f32 *, 0x58), M2C_FIELD(arg0, s32 *, 0x5C)) == 1) {
        func_802A8518(arg0);
        return;
    }
    func_802A6508(arg0, 0x18);
}
