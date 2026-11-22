/* Partial candidate from function #85899349583 in project #20; rechecked locally. */
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
s32 func_802DE330(void *, M2C_UNK *, M2C_UNK *);    /* extern */
s32 func_802DE618(void *, M2C_UNK *);               /* extern */
M2C_UNK func_802DEC84(M2C_UNK *, u16 *, u16 *);     /* extern */
s32 func_802DED94(M2C_UNK);                         /* extern */

s32 func_802DE000(void *arg0) {
    union {
        unsigned char bytes[72];
        struct { M2C_UNK value; } view_sp10;
        struct { unsigned char pad[28]; u16 value; } view_sp2C;
        struct { unsigned char pad[30]; u16 value; } view_sp2E;
        struct { unsigned char pad[32]; M2C_UNK value; } view_sp30;
        struct { unsigned char pad[56]; u16 value; } view_sp48;
        struct { unsigned char pad[64]; u16 value; } view_sp50;
        struct { unsigned char pad[66]; u16 value; } view_sp52;
    } m2c_initial_frame;

                 
                 
             
             
    M2C_UNK *temp_a1;
    M2C_UNK *temp_a1_2;
    M2C_UNK *var_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 var_a0;
    s32 var_v0;
    u8 temp_v0_3;
    u8 temp_v1;
    void *var_v1;

    if ((M2C_FIELD(arg0, u8 *, 0x65) == 0) || (M2C_FIELD(arg0, u8 *, 0x65) = 0U, var_v0 = func_802DED94(1), (var_v0 == 0))) {
        var_v0 = func_80114D60(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 1, &m2c_initial_frame.view_sp10.value);
        if (var_v0 == 0) {
            func_802DEC84(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp50.value, &m2c_initial_frame.view_sp52.value);
            var_s0 = &m2c_initial_frame.view_sp10.value;
            if ((m2c_initial_frame.view_sp2C.value != m2c_initial_frame.view_sp50.value) || (m2c_initial_frame.view_sp2E.value != m2c_initial_frame.view_sp52.value)) {
                temp_v0_2 = func_802DE618(arg0, var_s0);
                if (temp_v0_2 == 0xA) {
                    temp_a1 = var_s0;
                    var_s0 = &m2c_initial_frame.view_sp30.value;
                    temp_v0 = func_802DE330(arg0, temp_a1, var_s0);
                    if (temp_v0 != 0) {
                        return temp_v0;
                    }
                    goto block_9;
                }
                var_v0 = temp_v0_2;
                if (temp_v0_2 == 0) {
                    goto block_9;
                }
                /* Duplicate return node #17. Try simplifying control flow for better match */
                return var_v0;
            }
block_9:
            var_a0 = 0;
            if (!(M2C_FIELD(var_s0, u16 *, 0x18) & 1)) {
                temp_a1_2 = var_s0;
                var_s0 = &m2c_initial_frame.view_sp30.value;
                var_v0 = func_802DE330(arg0, temp_a1_2, var_s0);
                if (var_v0 == 0) {
                    var_a0 = 0;
                    if (!(m2c_initial_frame.view_sp48.value & 1)) {
                        return 0xB;
                    }
                    goto block_13;
                }
                /* Duplicate return node #17. Try simplifying control flow for better match */
                return var_v0;
            }
block_13:
            var_v1 = arg0;
            do {
                temp_v0_3 = *(var_s0 + var_a0);
                var_a0 += 1;
                M2C_FIELD(var_v1, u8 *, 0xC) = temp_v0_3;
                var_v1 = arg0 + var_a0;
            } while (var_a0 < 0x20);
            M2C_FIELD(arg0, s32 *, 0x4C) = (s32) M2C_FIELD(var_s0, u8 *, 0x1B);
            temp_v1 = M2C_FIELD(var_s0, u8 *, 0x1A);
            M2C_FIELD(arg0, s32 *, 0x50) = 0x10;
            M2C_FIELD(arg0, s32 *, 0x54) = 8;
            M2C_FIELD(arg0, u8 *, 0x64) = temp_v1;
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (((temp_v1 & 0xFF) * 2) + 3);
            temp_v0_4 = (M2C_FIELD(arg0, u8 *, 0x64) + 1) * 8;
            M2C_FIELD(arg0, s32 *, 0x58) = temp_v0_4;
            M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (temp_v0_4 + (M2C_FIELD(arg0, u8 *, 0x64) * 8));
            var_v0 = func_80114D60(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 7, arg0 + 0x2C);
            if (var_v0 == 0) {
                var_v0 = 0;
            }
            /* Duplicate return node #17. Try simplifying control flow for better match */
            return var_v0;
        }
    }
    return var_v0;
}
