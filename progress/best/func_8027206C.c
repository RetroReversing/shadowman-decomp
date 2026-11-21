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

M2C_UNK func_80109A1C(s32);                         /* extern */
M2C_UNK func_8023DF7C(s32, void *, s32, M2C_UNK, s32, s32); /* extern */
extern s32 D_8006A4FC;
extern void *D_8007AFF8;

s32 func_8027206C(s32 arg0, s32 arg1) {
    void **__base_D_8007AFF8;
    s32 temp_a0;
    u8 temp_v1_2;
    void *temp_v1;

    __base_D_8007AFF8 = &D_8007AFF8;
    func_8023DF7C(D_8006A4FC, M2C_FIELD((*__base_D_8007AFF8), void **, 0x10C), arg0, 0xA, arg1, 2);
    temp_v1 = M2C_FIELD((*__base_D_8007AFF8), void **, 0x10C);
    M2C_FIELD(temp_v1, u16 *, 0x1C) = (u16) (M2C_FIELD(temp_v1, u16 *, 0x1C) & 0xFFFD);
    temp_v1_2 = M2C_FIELD((*__base_D_8007AFF8), u8 *, 0x40);
    if (temp_v1_2 != 0x20) {
        if (temp_v1_2 != 0x23) {
            temp_a0 = M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x108);
            if (temp_a0 != 0) {
                func_80109A1C(temp_a0);
                M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x108) = 0;
            }
        }
    }
    return 1;
}
