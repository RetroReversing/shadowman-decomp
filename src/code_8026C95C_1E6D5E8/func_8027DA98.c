#include "common.h"

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

M2C_UNK func_8026F6BC(u8);                          /* extern */
M2C_UNK func_8027003C();                            /* extern */
M2C_UNK func_8027006C();                            /* extern */
M2C_UNK func_8027206C(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_8027DA08();                            /* extern */
extern s32 D_80074BB0;
extern void *D_8007AFF8;
extern s8 D_8007B100;

void func_8027DA98(void) {
    s8 *__base_D_8007B100;
    void **__base_D_8007AFF8;
    func_8027003C();
    __base_D_8007B100 = &D_8007B100;
    (*__base_D_8007B100) = 0;
    if (D_80074BB0 != 0) {
        (*__base_D_8007B100) = 1;
    }
    __base_D_8007AFF8 = &D_8007AFF8;
    M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) = (s32) (M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) | 0x20080);
    M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x48) = (s32) (M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x48) & ~0x40);
    func_8027206C(0x12, 0);
    func_8027DA08();
    if (M2C_FIELD((*__base_D_8007AFF8), u8 *, 0x38) == 0xB) {
        M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x48) = (s32) (M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x48) | 0x1000);
        M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) = (s32) (M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) | 0x02000000);
    }
    func_8026F6BC(0x27U);
    func_8026F6BC(M2C_FIELD((*__base_D_8007AFF8), u8 *, 0x40));
    func_8027006C();
}
