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

M2C_UNK func_80273868();                            /* extern */
M2C_UNK func_80273BCC(void); /* extern */
extern void *D_8006A4FC;
extern void *D_8007AFF8;
extern M2C_UNK D_8007B220;

void func_8028C208(void) {
    void **__base_D_8007AFF8;
    __base_D_8007AFF8 = &D_8007AFF8;
    M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x22) = -1;
    M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x16) = -1;
    M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x1A) = -1;
    M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x18) = -1;
    M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x4F) = 0;
    M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x90) = 0;
    M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x92) = 0;
    M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x94) = 0;
    M2C_FIELD((*__base_D_8007AFF8), s32 *, 0xBC) = 0;
    M2C_FIELD((*__base_D_8007AFF8), s32 *, 0xB8) = 0;
    M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x3C) = 2;
    M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) = (s32) (((((M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) | 0x22088) & 0xFFFEFFFF & ~0x10) | 0x02000002 | 0x08000000) & 0xFEFFFFFF) | 4);
    M2C_FIELD(&D_8007B220, s32 *, 0) = (s32) M2C_FIELD(D_8006A4FC, const s32 *, 0x24);
    M2C_FIELD(&D_8007B220, s32 *, 4) = (s32) M2C_FIELD(D_8006A4FC, const s32 *, 0x28);
    M2C_FIELD(&D_8007B220, s32 *, 8) = (s32) M2C_FIELD(D_8006A4FC, const s32 *, 0x2C);
    func_80273BCC();
    func_80273868();
}
