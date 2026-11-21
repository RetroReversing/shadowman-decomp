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

s32 func_802629E0(u16, s16, s16 *);                 /* extern */
extern s16 D_800273F0;
extern s16 D_800273F2;
extern u8 D_8004EC30[];

s32 func_80262994(u16 **arg0, s32 arg1) {
    s16 temp_a1;

    switch (arg1) {                                 /* irregular */
    case 3:
        temp_a1 = D_800273F0;
        if (temp_a1 < 0x28) {
            D_800273F0 = (u16) D_800273F0 + 1;
            *((temp_a1 * 2) + D_8004EC30) = **arg0;
        }
        return 1;
    case 4:
        if (D_800273F2 < 0x28) {
            return func_802629E0(**arg0, D_800273F2, &D_800273F2);
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 1;
    default:
        return 0;
    }
}
