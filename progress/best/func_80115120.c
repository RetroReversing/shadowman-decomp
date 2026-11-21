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

u32 func_80115298(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_80115340(s32, s32, M2C_UNK);           /* extern */
s32 func_80115528(M2C_UNK, s32);                    /* extern */
M2C_UNK func_80115764();                            /* extern */
M2C_UNK func_801157D0();                            /* extern */
M2C_UNK func_80115800(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_80116D80(s32, M2C_UNK, M2C_UNK);       /* extern */
u32 func_802DCE50(s32, s32);                        /* extern */
extern s8 D_8004EE30;
extern M2C_UNK D_8007E680;

u32 func_80115120(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    union {
        unsigned char bytes[40];
        struct { M2C_UNK value; } view_sp10;
        struct { unsigned char pad[2]; u8 value; } view_sp12;
        struct { unsigned char pad[38]; u8 value; } view_sp36;
    } m2c_initial_frame;

                 
    M2C_UNK *var_a0;
    M2C_UNK *var_a1;
    M2C_UNK *var_v1_2;
    s32 var_s2;
    s32 var_v1;
    u32 temp_v1;
    u32 var_s0;
    u32 var_v0;
    void *temp_v0;
    void *temp_v0_2;

    var_s2 = 2;
    if ((arg4 == 1) || (temp_v1 = arg2 & 0xFFFF, ((temp_v1 < 7U) == 0)) || (var_v0 = 0, (temp_v1 == 0))) {
        func_80115764();
        D_8004EE30 = 3;
        func_80115340(arg1, arg2 & 0xFFFF, arg3);
        func_80115800(1, &D_8007E680);
        func_80116D80(arg0, 0, 1);
loop_4:
        func_80115800(0, &D_8007E680);
        func_80116D80(arg0, 0, 1);
        var_a1 = &D_8007E680;
        if (arg1 != 0) {
            var_v1 = 0;
            if (arg1 > 0) {
                do {
                    var_v1 += 1;
                    var_a1 += 1;
                } while (var_v1 < arg1);
            }
        }
        var_v1_2 = var_a1;
        var_a0 = &m2c_initial_frame.view_sp10.value;
        if ((s32) var_v1_2 & 3) {
            temp_v0 = var_v1_2 + 0x20;
            do {
                M2C_FIELD(var_a0, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 0));
                M2C_FIELD(var_a0, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 4));
                M2C_FIELD(var_a0, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 8));
                M2C_FIELD(var_a0, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 0xC));
                var_v1_2 += 0x10;
                var_a0 += 0x10;
            } while (var_v1_2 != temp_v0);
            return func_80115298(var_a0, (s32) var_a1);
        }
        temp_v0_2 = var_v1_2 + 0x20;
        do {
            M2C_FIELD(var_a0, s32 *, 0) = (s32) M2C_FIELD(var_v1_2, s32 *, 0);
            M2C_FIELD(var_a0, s32 *, 4) = (s32) M2C_FIELD(var_v1_2, s32 *, 4);
            M2C_FIELD(var_a0, s32 *, 8) = (s32) M2C_FIELD(var_v1_2, s32 *, 8);
            M2C_FIELD(var_a0, s32 *, 0xC) = (s32) M2C_FIELD(var_v1_2, s32 *, 0xC);
            var_v1_2 += 0x10;
            var_a0 += 0x10;
        } while (var_v1_2 != temp_v0_2);
        M2C_FIELD(var_a0, M2C_UNK *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 0));
        M2C_FIELD(var_a0, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 4));
        var_s0 = (u32) (m2c_initial_frame.view_sp12.value & 0xC0) >> 4;
        if (var_s0 != 0) {
            var_s0 = 1;
            goto block_20;
        }
        if ((func_80115528(arg3, (s32) var_a1) & 0xFF) != m2c_initial_frame.view_sp36.value) {
            var_s0 = func_802DCE50(arg0, arg1);
            if (var_s0 == 0) {
                var_s0 = 4;
                goto block_20;
            }
            goto block_22;
        }
block_20:
        if ((var_s0 != 4) || (var_s2 -= 1, (var_s2 < 0))) {
block_22:
            func_801157D0();
            var_v0 = var_s0;
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return var_v0;
        }
        goto loop_4;
    }
    return var_v0;
}
