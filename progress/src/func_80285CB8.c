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

M2C_UNK func_8027003C();                            /* extern */
M2C_UNK func_8027006C(void *);                      /* extern */
extern M2C_UNK D_80045930;
extern void *D_8007AFF8;
extern s32 D_8007B1D0;

void func_80285CB8(s32 arg0) {
    M2C_UNK *__base_D_80045930;
    do { func_8027003C(); } while (0);
    __base_D_80045930 = &D_80045930;
    M2C_FIELD(__base_D_80045930, s32 *, 0x44) = arg0;
    M2C_FIELD(__base_D_80045930, s32 *, 0x48) = (s32) M2C_FIELD(D_8007AFF8, s32 *, 0x10C);
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x44) | 0x80);
    func_8027006C(D_8007AFF8);
    D_8007B1D0 = 0;
}
