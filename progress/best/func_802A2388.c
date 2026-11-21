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

M2C_UNK func_8022DDD0(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_8026E9E0();                                /* extern */
M2C_UNK func_802A23F0(M2C_UNK);                     /* extern */
extern s32 D_80030E34;
extern M2C_UNK D_8007BAB8;

void func_802A2388(s32 arg0, const void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(&D_8007BAB8, s32 *, 0) = arg3;
    M2C_FIELD(&D_8007BAB8, s32 *, 4) = arg0;
    M2C_FIELD(&D_8007BAB8, s32 *, 8) = (s32) M2C_FIELD(arg1, const s32 *, 0);
    M2C_FIELD(&D_8007BAB8, s32 *, 0xC) = (s32) M2C_FIELD(arg1, const s32 *, 4);
    M2C_FIELD(&D_8007BAB8, s32 *, 0x10) = (s32) M2C_FIELD(arg1, const s32 *, 8);
    M2C_FIELD(&D_8007BAB8, s32 *, 0x14) = arg2;
    M2C_FIELD(&D_8007BAB8, s32 *, 0x18) = 0;
    M2C_FIELD(&D_8007BAB8, s32 *, 0x1C) = (s32) D_80030E34;
    if (func_8026E9E0() == 0) {
        func_8022DDD0(0, arg4, 0, 0, 0);
        D_80030E34 = 7;
    } else {
        func_802A23F0(4);
    }
}
