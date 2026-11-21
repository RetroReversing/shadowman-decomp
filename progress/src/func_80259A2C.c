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

M2C_UNK func_80259AB8(void *);                      /* extern */
extern void *D_8002E0A0;

void func_80259A2C(void) {
    void *var_s0;

    var_s0 = D_8002E0A0;
    if (var_s0 != NULL) {
        do {
            if (M2C_FIELD(var_s0, s32 *, 0x18) == 2) {
                if (M2C_FIELD(var_s0, s16 *, 0x14) == 0x176) {
                    func_80259AB8(var_s0);
                }
                if (M2C_FIELD(var_s0, s16 *, 0x14) == 0x177) {
                    func_80259AB8(var_s0);
                }
            }
            var_s0 = M2C_FIELD(var_s0, void **, 0);
        } while (var_s0 != NULL);
    }
}
