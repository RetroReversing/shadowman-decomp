/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

extern int D_8007E6BC;
s32 func_80115494();
s32 func_801154E0();
extern s8 D_8007E680;

void func_80115340(s32 arg0, s32 arg1, u8 *arg2) {
    s8 sp10;
    s8 sp11;
    s8 sp12;
    s8 sp13;
    s16 sp14;
    s32 sp30;
    s8 sp36;
    s32 var_a0;
    s32 var_a0_3;
    s8 *temp_v0;
    char *var_a0_2;
    char *var_s2;
    char *var_v1;
    char *var_s3;

    var_s3 = arg2;
    var_s2 = &D_8007E680;
    D_8007E6BC = 1;
    sp11 = 0x23;
    sp10 = 0xFF;
    sp12 = 1;
    sp13 = 3;
    var_a0 = 0;
    sp14 = (func_801154E0(arg1 & 0xFFFF) & 0xFF) | (arg1 << 5);
    sp36 = 0xFF;
    do {
        temp_v0 = &(&sp10)[var_a0];
        var_a0 += 1;
        M2C_FIELD(temp_v0, u8 *, 6) = (u8) *(u8 *)var_s3;
        var_s3 += 1;
    } while (var_a0 < 0x20);
    var_a0_2 = &D_8007E680;
    if (arg0 != 0) {
        var_a0_3 = 0;
        if (arg0 > 0) {
            do {
                *(s8 *)var_s2 = 0;
                var_a0_3 += 1;
                var_s2 += 1;
            } while (var_a0_3 < arg0);
        }
        var_a0_2 = var_s2;
    }
    var_v1 = &sp10;
    if ((s32) var_s2 & 3) {
        do {
            M2C_FIELD(var_a0_2, s8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s8 *, 0));
            M2C_FIELD(var_a0_2, s32 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s32 *, 4));
            M2C_FIELD(var_a0_2, s32 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s32 *, 8));
            M2C_FIELD(var_a0_2, s32 *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s32 *, 0xC));
            var_v1 += 0x10;
            var_a0_2 += 0x10;
        } while (var_v1 != &sp30);
        func_80115494(var_a0_2, &sp10);
        return;
    }
    do {
        M2C_FIELD(var_a0_2, s32 *, 0) = (s32) M2C_FIELD(var_v1, s32 *, 0);
        M2C_FIELD(var_a0_2, s32 *, 4) = (s32) M2C_FIELD(var_v1, s32 *, 4);
        M2C_FIELD(var_a0_2, s32 *, 8) = (s32) M2C_FIELD(var_v1, s32 *, 8);
        M2C_FIELD(var_a0_2, s32 *, 0xC) = (s32) M2C_FIELD(var_v1, s32 *, 0xC);
        var_v1 += 0x10;
        var_a0_2 += 0x10;
    } while (var_v1 != &sp30);
    M2C_FIELD(var_a0_2, s8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s8 *, 0));
    M2C_FIELD(var_a0_2, s32 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1, s32 *, 4));
    M2C_FIELD(var_s2, u8 *, 0x28) = 0xFE;
}
