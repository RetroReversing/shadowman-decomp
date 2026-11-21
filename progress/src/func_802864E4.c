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
M2C_UNK func_8027006C();                            /* extern */
M2C_UNK func_8027206C(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_80286578(void *);                      /* extern */
extern s32 D_800458F0;
extern void *D_8007AFF8;
extern u8 D_8007DC04;

void func_802864E4(void) {
    void **__base_D_8007AFF8;
    func_8027003C();
    __base_D_8007AFF8 = &D_8007AFF8;
    M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) = (s32) (M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) | 0x22008);
    func_8027206C(0xD, 0x64);
    M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) = (s32) (M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) | 0x80);
    M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x48) = (s32) (M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x48) | 0x1000);
    if ((D_800458F0 != 0) && (D_8007DC04 != 5)) {
        func_80286578((*__base_D_8007AFF8));
    }
    func_8027006C();
}
