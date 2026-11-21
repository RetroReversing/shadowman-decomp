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

s32 func_801077E0();
s32 func_80116EB0();
extern char D_8004BD48[];
extern s32 *D_8004CA1C;

void func_80107018(void *arg0) {
    s32 *var_s0;
    s32 *var_v1;
    s32 var_s2;
    char *var_s1;
    u8 temp_v0;

    var_s0 = &D_8004CA1C;
    var_v1 = NULL;
    if (&D_8004CA1C != NULL) {
        for (;;) {
            if (M2C_FIELD(var_s0, u16 *, 4) != ((u32) M2C_FIELD(arg0, u32 *, 4) >> 0xC)) {
                var_v1 = var_s0;
                var_s0 = M2C_FIELD(var_s0, s32 **, 0);
                if (var_s0 != NULL) {
                    continue;
                }
            }
            break;
        }
    }
    *var_v1 = M2C_FIELD(var_s0, s32 **, 0);
    var_s1 = M2C_FIELD(var_s0, u8 **, 0x10);
    var_s2 = 0;
    if (M2C_FIELD(var_s0, u16 *, 6) != 0) {
        do {
            temp_v0 = *(u8 *)var_s1;
            if (temp_v0 != 0xFF) {
                func_801077E0((temp_v0 * 0x10) + D_8004BD48);
                M2C_FIELD(((*(u8 *)var_s1 * 0x10) + (D_8004BD48 - 0x928)), s16 *, 0x930) = 0xFFFF;
            }
            var_s2 += 1;
            var_s1 += 1;
        } while (var_s2 < (s32) M2C_FIELD(var_s0, u16 *, 6));
    }
    func_80116EB0(M2C_FIELD(arg0, s32 *, 8), var_s0);
}
