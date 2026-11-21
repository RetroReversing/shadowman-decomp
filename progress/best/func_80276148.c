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

extern char D_212078[];
extern void *D_8007AFF8;

s32 func_80276148(void) {
    union { char * pointer; unsigned int value; } __repair_phase_storage;
    

    __repair_phase_storage.pointer = D_212078;
    __repair_phase_storage.value = (u8)( (s8) M2C_FIELD(((M2C_FIELD(D_8007AFF8, u8 *, 0x40) * 0x6C) + __repair_phase_storage.pointer), u8 *, 0xB));
    if ((u32) (((u8)__repair_phase_storage.value) & 0xFFFF) >= 0x64U) {
        __repair_phase_storage.value = (u8)( 0x63);
    }
    return ((((u8)__repair_phase_storage.value) & 0xFFFF) / 10) & 0xFFFF;
}
