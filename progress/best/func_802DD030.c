/* Partial candidate from function #85899349576 in project #20; rechecked locally. */
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

s32 func_80114D60(s32, s32, M2C_UNK, M2C_UNK *);    /* extern */
M2C_UNK func_80115764();                            /* extern */
M2C_UNK func_801157D0();                            /* extern */
s32 func_802DCE50(s32, s32);                        /* extern */
s32 func_802DD200(void *);                          /* extern */
s32 func_802DE330(void *, M2C_UNK *, M2C_UNK *);    /* extern */
s32 func_802DE618(void *, M2C_UNK *);               /* extern */
M2C_UNK func_802DEC84(M2C_UNK *, u16 *, u16 *);     /* extern */
s32 func_802DED94(void *);                          /* extern */

s32 func_802DD030(s32 arg0, void *arg1, s32 arg2) {
    union {
        unsigned char bytes[76];
        struct { M2C_UNK value; } view_sp10;
        struct { unsigned char pad[28]; u16 value; } view_sp2C;
        struct { unsigned char pad[30]; u16 value; } view_sp2E;
        struct { unsigned char pad[32]; M2C_UNK value; } view_sp30;
        struct { unsigned char pad[56]; u16 value; } view_sp48;
        struct { unsigned char pad[64]; u16 value; } view_sp50;
        struct { unsigned char pad[66]; u16 value; } view_sp52;
    } m2c_initial_frame;

                 
                 
             
             
    M2C_UNK *temp_a1;
    M2C_UNK *var_s1;
    s32 temp_s0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_v0;
    u8 temp_v0;
    u8 temp_v1;
    void *var_v1;

    func_80115764();
    temp_s0 = func_802DCE50(arg0, arg2);
    func_801157D0();
    var_v0 = temp_s0;
    if (temp_s0 == 0) {
        M2C_FIELD(arg1, s32 *, 4) = arg0;
        M2C_FIELD(arg1, s32 *, 8) = arg2;
        M2C_FIELD(arg1, s32 *, 0) = 0;
        M2C_FIELD(arg1, s8 *, 0x65) = 0;
        var_v0 = func_802DED94(arg1);
        if (var_v0 == 0) {
            var_v0 = func_80114D60(M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8), 1, &m2c_initial_frame.view_sp10.value);
            if ((var_v0 == 0) && (((func_802DEC84(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp50.value, &m2c_initial_frame.view_sp52.value), var_s1 = &m2c_initial_frame.view_sp10.value, (m2c_initial_frame.view_sp2C.value == m2c_initial_frame.view_sp50.value)) && (m2c_initial_frame.view_sp2E.value == m2c_initial_frame.view_sp52.value)) || (var_v0 = func_802DE618(arg1, var_s1), (var_v0 == 0)))) {
                var_a0 = 0;
                if (!(M2C_FIELD(var_s1, u16 *, 0x18) & 1)) {
                    temp_a1 = var_s1;
                    var_s1 = &m2c_initial_frame.view_sp30.value;
                    var_v0 = func_802DE330(arg1, temp_a1, var_s1);
                    if (var_v0 == 0) {
                        var_a0 = 0;
                        if (!(m2c_initial_frame.view_sp48.value & 1)) {
                            return 0xB;
                        }
                        goto block_10;
                    }
                    /* Duplicate return node #14. Try simplifying control flow for better match */
                    return var_v0;
                }
block_10:
                var_v1 = arg1;
                do {
                    temp_v0 = *(var_s1 + var_a0);
                    var_a0 += 1;
                    M2C_FIELD(var_v1, u8 *, 0xC) = temp_v0;
                    var_v1 = arg1 + var_a0;
                } while (var_a0 < 0x20);
                M2C_FIELD(arg1, s32 *, 0x4C) = (s32) M2C_FIELD(var_s1, u8 *, 0x1B);
                temp_v1 = M2C_FIELD(var_s1, u8 *, 0x1A);
                M2C_FIELD(arg1, s32 *, 0x50) = 0x10;
                M2C_FIELD(arg1, s32 *, 0x54) = 8;
                M2C_FIELD(arg1, u8 *, 0x64) = temp_v1;
                M2C_FIELD(arg1, s32 *, 0x60) = (s32) (((temp_v1 & 0xFF) * 2) + 3);
                temp_v0_2 = (M2C_FIELD(arg1, u8 *, 0x64) + 1) * 8;
                M2C_FIELD(arg1, s32 *, 0x58) = temp_v0_2;
                M2C_FIELD(arg1, s32 *, 0x5C) = (s32) (temp_v0_2 + (M2C_FIELD(arg1, u8 *, 0x64) * 8));
                temp_v0_3 = func_80114D60(M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8), 7, arg1 + 0x2C);
                var_v0 = temp_v0_3;
                if (temp_v0_3 == 0) {
                    var_v0 = func_802DD200(arg1);
                    M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) | 1);
                }
                /* Duplicate return node #14. Try simplifying control flow for better match */
                return var_v0;
            }
        }
    }
    return var_v0;
}
