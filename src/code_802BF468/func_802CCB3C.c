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

M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_802CC388(M2C_UNK);                     /* extern */
M2C_UNK func_802CC640();                            /* extern */
M2C_UNK func_802CC720(f32);                         /* extern */
extern s32 D_8002D420;
extern f32 D_800754F0;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern s32 D_800755F8;

void func_802CCB3C(void) {
    if (!(D_8002D420 & 0x80)) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x2A, 0xA, 0x118, 2);
    }
    if ((D_800755F8 == 0) || (D_800754F0 < *(f32 *)0x218750)) {
        func_802CC640();
    }
    func_802CC720(*(f32 *)0x218754);
    func_802CC388(0xA);
}
