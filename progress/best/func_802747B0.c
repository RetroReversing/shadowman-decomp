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

s32 func_80113AD0();
s32 func_8026F480();
s32 func_80270090();
s32 func_8027206C();
s32 func_802748B4();
extern char D_212078[];
extern void *D_8007AFF8;

void func_802747B0(s32 arg0, s32 arg1) {
    void **__base_D_8007AFF8;
    s32 var_v1;
    void *temp_v0;

    __base_D_8007AFF8 = &D_8007AFF8;
    if (M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x20) != -1) {
        func_802748B4((*__base_D_8007AFF8));
        return;
    }
    M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x54) = 0xA;
    if (((func_8026F480(2, M2C_FIELD(((M2C_FIELD((*__base_D_8007AFF8), u8 *, 0x40) * 0x6C) + D_212078), s32 *, 0x10)) & 0xFF) != 1) && !(M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) & 0x400)) {
        var_v1 = 0;
        if ((u32) (arg1 & 0xFF) >= 2U) {
            var_v1 = ((func_80113AD0() % (s32) (((arg1 & 0xFF) * 0x64) - 1)) & 0xFFFF) / 100;
        }
        temp_v0 = ((var_v1 & 0xFFFF) * 4) + arg0;
        func_8027206C(M2C_FIELD(temp_v0, s16 *, 0), M2C_FIELD(temp_v0, s16 *, 2));
        func_80270090(9);
    }
}
