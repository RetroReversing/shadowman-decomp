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

M2C_UNK func_8011BA20(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_8022FBA0(M2C_UNK);                     /* extern */
s32 func_8022FCBC(s32, s32);                        /* extern */
M2C_UNK func_802300F8();                            /* extern */
s32 func_80230584();                                /* extern */
extern u16 D_8002D260;

s32 func_802304E0(s32 arg0) {
    M2C_UNK var_a0;
    s32 temp_s2;
    s32 temp_v0_2;
    u16 temp_v0;
    u32 var_s1;

    temp_v0 = D_8002D260 + 1;
    D_8002D260 = temp_v0;
    if ((u32) (temp_v0 & 0xFFFF) >= 0x7FFFU) {
        D_8002D260 = 0;
    }
    var_s1 = 1;
    temp_s2 = D_8002D260 | 0x8000;
    for (;;) {
        temp_v0_2 = func_8022FCBC(arg0, temp_s2);
        if (temp_v0_2 != 0) {/*__repair_call_balance*/if(var_s1){
            func_8011BA20(temp_v0_2, 0, arg0);}else{
            func_8011BA20(temp_v0_2, 0, arg0);}
            return func_80230584();
        }
        var_a0 = 1;
        if (var_s1 < 0x32U) {
            var_a0 = 0;
        }
        var_s1 += 1;
        func_8022FBA0(var_a0);
        func_802300F8();
        if (var_s1 >= 0x64U) {
            return 0;
        }
        continue;
        break;
    }
}
