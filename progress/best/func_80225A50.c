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

extern void *D_800569A4;
extern s32 D_800591E0;

void func_80225A50(s32 arg0) {
    void **__base_D_800569A4;
    s32 var_a2;
    void *temp_a0;

    if (arg0 & 0x24) {
        var_a2 = 0;
        if ((arg0 & 4) && (D_800591E0 & 4)) {
            var_a2 = 0x400;
            D_800591E0 &= ~4;
        }
        if ((arg0 & 0x20) && (D_800591E0 & 0x20)) {
            var_a2 |= 0x20000;
            D_800591E0 &= ~0x20;
        }
        if (var_a2 != 0) {
            __base_D_800569A4 = &D_800569A4;
            temp_a0 = (*__base_D_800569A4);
            (*__base_D_800569A4) += 8;
            M2C_FIELD(temp_a0, s32 *, 0) = (s32) ((~var_a2 & 0xFFFFFF) | 0xD9000000);
            M2C_FIELD(temp_a0, s32 *, 4) = 0;
        }
    }
}
