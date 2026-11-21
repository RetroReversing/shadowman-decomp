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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern int D_80075558;
extern short D_80075556;
s32 func_8010E9FC();
s32 func_80241504();
s32 func_80267F78(f32, s32, s32, s32);
extern char D_212078[];
extern s32 D_8006A4FC;
extern char D_80075518[];
extern char D_8007558C[];
extern void *D_8007AFF8;

s32 func_8010E8F0(s32 *arg0, f32 arg1, s32 arg2) {
    f32 temp_fs0f;
    s32 var_s0;
    s32 var_s1;

    temp_fs0f = *(f32 *)0x1020DC;
    if (func_80241504(arg0, arg1, arg0, arg1, D_8007558C) != 0) {
        var_s1 = D_80075558;
        var_s0 = D_80075556 - 1;
        if (D_80075556 != 0) {
            for (;;) {
                if (func_80241504(arg0, arg1, arg2, var_s1 + 0x24, temp_fs0f) != 0) {
                    func_80267F78((f32) (M2C_FIELD(((M2C_FIELD(D_8007AFF8, u8 *, 0x40) * 0x6C) + D_212078), u8 *, 0x24) * 0x64), D_8006A4FC + 0x24, 7, var_s0 + 0x16);
                    return func_8010E9FC();
                }
                var_s1 += 0x40;
                var_s0 -= 1;
                if (var_s0 == 0) {
                    /* Duplicate return node #7. Try simplifying control flow for better match */
                    return 0;
                }
                continue;
                break;
            }
        }
    }
    return 0;
}
