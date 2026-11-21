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

s32 func_8026F6BC();
s32 func_8027D974();
extern char D_80031EB0[];
extern void *D_8007AFF8;

void func_8027D8F4(void) {
    u8 *temp_a1;
    u8 temp_v0;

    temp_v0 = M2C_FIELD(D_8007AFF8, u8 *, 0x54) - 1;
    M2C_FIELD(D_8007AFF8, u8 *, 0x54) = temp_v0;
    if (((temp_v0 << 0x18) <= 0) && (temp_a1 = M2C_FIELD(D_8007AFF8, u16 *, 0x94) + D_80031EB0, M2C_FIELD(D_8007AFF8, u8 *, 0x54) = (u8) *temp_a1, ((s8) M2C_FIELD(D_8007AFF8, u8 *, 0x54) != -1))) {
        M2C_FIELD(D_8007AFF8, u16 *, 0x94) += 1;
        if (M2C_FIELD(D_8007AFF8, u16 *, 0x92) == 0) {
            M2C_FIELD(D_8007AFF8, u16 *, 0x92) = 1U;
            func_8027D974(D_8007AFF8, temp_a1, &D_8007AFF8);
            return;
        }
        M2C_FIELD(D_8007AFF8, u16 *, 0x92) = 0U;
        func_8026F6BC(0x27, temp_a1, &D_8007AFF8);
    }
}
