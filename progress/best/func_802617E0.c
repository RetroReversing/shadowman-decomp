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

s32 func_8026189C();                                /* extern */
M2C_UNK func_80272830(f32 *, f32 *, s32, s32, s32, s32); /* extern */
s32 func_80273FF8();                                /* extern */
M2C_UNK func_802D0B28(void *, s32, s16);           /* extern */
extern s32 D_8005EA14;

s32 func_802617E0(void *arg0, s32 arg1) {
    f32 sp18[3];
    f32 sp28[3];
    f32 temp_fv0;
    f32 temp_fv0f;
    s32 var_v0;

    var_v0 = 0;
    if ((func_80273FF8() & 0xFF) == 1) {
        sp18[0] = M2C_FIELD(arg0, f32 *, 4);
        sp18[1] = M2C_FIELD(arg0, f32 *, 8);
        sp18[2] = M2C_FIELD(arg0, f32 *, 0xC);
        sp28[0] = (f32) M2C_FIELD(arg0, s32 *, 0x10);
        sp28[1] = (f32) M2C_FIELD(arg0, s32 *, 0x14);
        sp28[2] = 0;
        func_802D0B28(arg0, D_8005EA14, M2C_FIELD(arg0, s16 *, 0x24));
        temp_fv0f = *(f32 *)0x20DC58;
        temp_fv0 = (f32) M2C_FIELD(arg0, s32 *, 0x18);
        if (!(temp_fv0f <= temp_fv0)) {
            return func_8026189C();
        }
        func_80272830(sp18, sp28, arg1 & 0xFF, (s32) (temp_fv0 - temp_fv0f) | 0x80000000, M2C_FIELD(arg0, s32 *, 0), (s32) M2C_FIELD(arg0, u8 *, 0x1F));
        var_v0 = 1;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
