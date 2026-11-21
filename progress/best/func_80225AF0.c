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

extern void *D_8005387C;
extern void *D_80056998;
extern void *D_800569A4;
extern s32 D_800591E0;

void func_80225AF0(s32 arg0) {
    void **__base_D_800569A4;
    void **__base_D_80056998;
    void **__base_D_8005387C;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    if (arg0 & 9) {
        var_a2 = 0;
        if ((arg0 & 1) && (D_800591E0 & 1)) {
            var_a2 = 0x400;
            D_800591E0 &= ~1;
        }
        if ((arg0 & 8) && (D_800591E0 & 8)) {
            var_a2 |= 0x20000;
            D_800591E0 &= ~8;
        }
        if (var_a2 != 0) {
            __base_D_8005387C = &D_8005387C;
            temp_a0 = (*__base_D_8005387C);
            (*__base_D_8005387C) += 8;
            M2C_FIELD(temp_a0, s32 *, 0) = (s32) ((~var_a2 & 0xFFFFFF) | 0xD9000000);
            M2C_FIELD(temp_a0, s32 *, 4) = 0;
        }
    }
    if (arg0 & 0x12) {
        var_a2_2 = 0;
        if ((arg0 & 2) && (D_800591E0 & 2)) {
            var_a2_2 = 0x400;
            D_800591E0 &= ~2;
        }
        if ((arg0 & 0x10) && (D_800591E0 & 0x10)) {
            var_a2_2 |= 0x20000;
            D_800591E0 &= ~0x10;
        }
        if (var_a2_2 != 0) {
            __base_D_80056998 = &D_80056998;
            temp_a0_2 = (*__base_D_80056998);
            (*__base_D_80056998) += 8;
            M2C_FIELD(temp_a0_2, s32 *, 0) = (s32) ((~var_a2_2 & 0xFFFFFF) | 0xD9000000);
            M2C_FIELD(temp_a0_2, s32 *, 4) = 0;
        }
    }
    if (arg0 & 0x24) {
        var_a2_3 = 0;
        if ((arg0 & 4) && (D_800591E0 & 4)) {
            var_a2_3 = 0x400;
            D_800591E0 &= ~4;
        }
        if ((arg0 & 0x20) && (D_800591E0 & 0x20)) {
            var_a2_3 |= 0x20000;
            D_800591E0 &= ~0x20;
        }
        if (var_a2_3 != 0) {
            __base_D_800569A4 = &D_800569A4;
            temp_a0_3 = (*__base_D_800569A4);
            (*__base_D_800569A4) += 8;
            M2C_FIELD(temp_a0_3, s32 *, 0) = (s32) ((~var_a2_3 & 0xFFFFFF) | 0xD9000000);
            M2C_FIELD(temp_a0_3, s32 *, 4) = 0;
        }
    }
}
