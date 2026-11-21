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

void func_80225778(s32 arg0) {
    s32 *__base_D_800591E0;
    void **__base_D_800569A4;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (arg0 & 9) {
        var_a2 = 0;
        if (arg0 & 1) {
            var_v0 = arg0 & 8;
            __base_D_800591E0 = &D_800591E0;
            if (!((*__base_D_800591E0) & 1)) {
                var_a2 = 0x400;
                (*__base_D_800591E0) |= 1;
                goto block_4;
            }
        } else {
block_4:
            var_v0 = arg0 & 8;
        }
        if ((var_v0 != 0) && !((*__base_D_800591E0) & 8)) {
            var_a2 |= 0x20000;
            (*__base_D_800591E0) |= 8;
        }
        if (var_a2 != 0) {
            temp_v1 = D_8005387C;
            D_8005387C += 8;
            M2C_FIELD(temp_v1, s32 *, 0) = 0xD9FFFFFF;
            M2C_FIELD(temp_v1, s32 *, 4) = var_a2;
        }
    }
    if (arg0 & 0x12) {
        var_a2_2 = 0;
        if (arg0 & 2) {
            var_v0_2 = arg0 & 0x10;
            if (!((*__base_D_800591E0) & 2)) {
                var_a2_2 = 0x400;
                (*__base_D_800591E0) |= 2;
                goto block_14;
            }
        } else {
block_14:
            var_v0_2 = arg0 & 0x10;
        }
        if ((var_v0_2 != 0) && !((*__base_D_800591E0) & 0x10)) {
            var_a2_2 |= 0x20000;
            (*__base_D_800591E0) |= 0x10;
        }
        if (var_a2_2 != 0) {
            temp_v1_2 = D_80056998;
            D_80056998 += 8;
            M2C_FIELD(temp_v1_2, s32 *, 0) = 0xD9FFFFFF;
            M2C_FIELD(temp_v1_2, s32 *, 4) = var_a2_2;
        }
    }
    if (arg0 & 0x24) {
        var_a2_3 = 0;
        if (arg0 & 4) {
            var_v0_3 = arg0 & 0x20;
            if (!((*__base_D_800591E0) & 4)) {
                var_a2_3 = 0x400;
                (*__base_D_800591E0) |= 4;
                goto block_24;
            }
        } else {
block_24:
            var_v0_3 = arg0 & 0x20;
        }
        if ((var_v0_3 != 0) && !((*__base_D_800591E0) & 0x20)) {
            var_a2_3 |= 0x20000;
            (*__base_D_800591E0) |= 0x20;
        }
        if (var_a2_3 != 0) {
            __base_D_800569A4 = &D_800569A4;
            temp_v1_3 = (*__base_D_800569A4);
            (*__base_D_800569A4) += 8;
            M2C_FIELD(temp_v1_3, s32 *, 0) = 0xD9FFFFFF;
            M2C_FIELD(temp_v1_3, s32 *, 4) = var_a2_3;
        }
    }
}
