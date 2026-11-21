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

M2C_UNK func_8026F6BC(M2C_UNK, u8 *, void **);      /* extern */
M2C_UNK func_8027D974(void *, u8 *, void **);       /* extern */
extern M2C_UNK D_80031EB0;
extern void *D_8007AFF8;

void func_8027D8F4(void) {
void ** __repair_argument_pointer;
    void **__base_D_8007AFF8;
    u8 *temp_a1;
    u8 temp_v0;

    __base_D_8007AFF8 = &D_8007AFF8;
__repair_argument_pointer = __base_D_8007AFF8;
    temp_v0 = M2C_FIELD((*__base_D_8007AFF8), u8 *, 0x54) - 1;
    M2C_FIELD((*__base_D_8007AFF8), u8 *, 0x54) = temp_v0;
    if (((temp_v0 << 0x18) <= 0) && (temp_a1 = M2C_FIELD((*__base_D_8007AFF8), u16 *, 0x94) + &D_80031EB0, M2C_FIELD((*__base_D_8007AFF8), u8 *, 0x54) = (u8) *temp_a1, ((s8) M2C_FIELD((*__base_D_8007AFF8), u8 *, 0x54) != -1))) {
        M2C_FIELD((*__base_D_8007AFF8), u16 *, 0x94) = (u16) (M2C_FIELD((*__base_D_8007AFF8), u16 *, 0x94) + 1);
        if (M2C_FIELD((*__base_D_8007AFF8), u16 *, 0x92) == 0) {
            M2C_FIELD((*__base_D_8007AFF8), u16 *, 0x92) = 1U;
            func_8027D974((*__base_D_8007AFF8), temp_a1,__repair_argument_pointer);
            return;
        }
        M2C_FIELD((*__base_D_8007AFF8), u16 *, 0x92) = 0U;
        func_8026F6BC(0x27, temp_a1,__repair_argument_pointer);
    }
}
