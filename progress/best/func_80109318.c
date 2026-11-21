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

M2C_UNK func_80108908(s16, M2C_UNK, M2C_UNK, s32, f32, s32); /* extern */
M2C_UNK func_80108D1C(M2C_UNK *, s32);              /* extern */
M2C_UNK func_80108DA8(M2C_UNK *, s32);              /* extern */
M2C_UNK func_80109404();                            /* extern */
M2C_UNK func_80109430();                            /* extern */
extern M2C_UNK D_8001E5B0;

void func_80109318(s16 arg0, s32 arg1, s32 arg2) {
    char sp18[0x10];
    s16 (*temp_v0)(s16);
    s16 (*temp_v0_2)(s16);
    u16 var_s0;
    void *temp_s1;

    var_s0 = arg0;
    if ((u32) (var_s0 & 0xFFFF) < 0x1FFU) {
        temp_s1 = (void *)((arg0 * 0xC)); temp_s1 = (void *)((char *)temp_s1 + (s32)(&D_8001E5B0));
        temp_v0 = M2C_FIELD(temp_s1, s16 (**)(s16), 4);
        if (temp_v0 != NULL) {
            var_s0 = temp_v0(arg0);
        }
        temp_v0_2 = M2C_FIELD(temp_s1, s16 (**)(s16), 8);
        if (temp_v0_2 != NULL) {
            var_s0 = temp_v0_2(var_s0);
        }
        if ((u32) (var_s0 & 0xFFFF) >= 0x1FFU) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            func_80109430();
            return;
        }
        if (arg1 != 0) {
            func_80108DA8(sp18, arg1);
            func_80108D1C(sp18, (&D_8001E5B0)[var_s0 * 3]);
            func_80109404();
            return;
        }
        func_80108908(var_s0, 0, 0x3F, 0x7530, *(f32 *)0x10068C, arg2 & 0xFF);
        return;
    }
    func_80109430();
}
