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

s32 func_80113AD0(void *);                          /* extern */
M2C_UNK func_80270090(s32);                 /* extern */
M2C_UNK func_8027206C(s16, s16);                    /* extern */
M2C_UNK func_80272100(s32);                         /* extern */
M2C_UNK func_80274B84();                            /* extern */
extern void *D_8007AFF8;

void func_80274A90(s32 arg0, s32 arg1, s32 arg2) {
    void **__base_D_8007AFF8;
    s32 var_v1;
    void *temp_v0;

    __base_D_8007AFF8 = &D_8007AFF8;
    if (!(M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) & 0x80000)) {
        M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x54) = 0xA;
        M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x3C) = 2;
        func_80270090(arg0 & 0xFF);
        func_80274B84();
        return;
    }
    if (M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x54) != 0xA) {
        var_v1 = 0;
        if ((u32) (arg2 & 0xFF) >= 2U) {
            var_v1 = ((func_80113AD0((*__base_D_8007AFF8)) % (s32) (((arg2 & 0xFF) * 0x64) - 1)) & 0xFFFF) / 100;
        }
        temp_v0 = ((var_v1 & 0xFFFF) * 4) + arg1;
        func_8027206C(M2C_FIELD(temp_v0, s16 *, 0), M2C_FIELD(temp_v0, s16 *, 2));
        M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x54) = 0xA;
        M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x3C) = 2;
    }
    func_80272100(arg0 & 0xFF);
}
