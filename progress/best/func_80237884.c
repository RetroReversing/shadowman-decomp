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

s32 func_80237428();                                /* extern */
extern s32 D_80069738;
extern s32 D_800698A0;
extern void *D_8007BAF4;
extern void *D_8007BD64;

void func_80237884(void) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_s1;
    void *temp_s1_2;
    void *var_s0;
    void *var_s0_2;
    void *var_v1;
    void *var_v1_2;

    var_s0 = D_8007BD64;
    D_80069738 += 1;
    if (var_s0 != NULL) {
        temp_fs0 = *(f32 *)0x202444;
loop_2:
        temp_s1 = M2C_FIELD(var_s0, void **, 0);
        if (M2C_FIELD(var_s0, u8 *, 0x50) & 1) {
            var_v1 = M2C_FIELD(var_s0, void **, 0x18);
            if (var_v1 == NULL) {
                temp_v0 = func_80237428();
                if (temp_v0 != -1) {
                    var_v1 = D_800698A0 + (temp_v0 * 0x5C);
                    M2C_FIELD(var_s0, void **, 0x18) = var_v1;
                    M2C_FIELD(var_v1, f32 *, 0x20) = temp_fs0;
                    M2C_FIELD(var_v1, f32 *, 0x24) = temp_fs0;
                    M2C_FIELD(var_v1, f32 *, 0x28) = temp_fs0;
                    goto block_6;
                }
            } else {
block_6:
                M2C_FIELD(var_v1, s16 *, 0) = 6;
                M2C_FIELD(var_v1, s32 *, 0x30) = (s32) D_80069738;
                M2C_FIELD(var_v1, f32 *, 0x18) = (f32) *(f32 *)0x202448;
                M2C_FIELD(var_v1, f32 *, 4) = (f32) M2C_FIELD(var_s0, f32 *, 0x54);
                M2C_FIELD(var_v1, f32 *, 8) = (f32) M2C_FIELD(var_s0, f32 *, 0x58);
                M2C_FIELD(var_v1, f32 *, 0xC) = (f32) M2C_FIELD(var_s0, f32 *, 0x5C);
                temp_fv0 = M2C_FIELD(var_s0, f32 *, 0x38);
                M2C_FIELD(var_v1, f32 *, 0x10) = temp_fv0;
                M2C_FIELD(var_v1, f32 *, 0x14) = (f32) (temp_fv0 * temp_fv0);
                M2C_FIELD(var_v1, u8 *, 0x1C) = (u8) M2C_FIELD(var_s0, u8 *, 0x48);
                M2C_FIELD(var_v1, u8 *, 0x1D) = (u8) M2C_FIELD(var_s0, u8 *, 0x49);
                M2C_FIELD(var_v1, u8 *, 0x1E) = (u8) M2C_FIELD(var_s0, u8 *, 0x4A);
                goto block_7;
            }
        } else {
block_7:
            var_s0 = temp_s1;
            if (var_s0 == NULL) {
                goto block_8;
            }
            goto loop_2;
        }
    } else {
block_8:
        var_s0_2 = D_8007BAF4;
        if (var_s0_2 != NULL) {
            temp_fs0_2 = *(f32 *)0x20244C;
loop_10:
            temp_s1_2 = M2C_FIELD(var_s0_2, void **, 0x3C);
            if (M2C_FIELD(var_s0_2, u8 *, 0x72) & 4) {
                var_v1_2 = M2C_FIELD(var_s0_2, void **, 0x64);
                if (var_v1_2 == NULL) {
                    temp_v0_2 = func_80237428();
                    if (temp_v0_2 != -1) {
                        var_v1_2 = D_800698A0 + (temp_v0_2 * 0x5C);
                        M2C_FIELD(var_s0_2, void **, 0x64) = var_v1_2;
                        M2C_FIELD(var_v1_2, f32 *, 0x20) = temp_fs0_2;
                        M2C_FIELD(var_v1_2, f32 *, 0x24) = temp_fs0_2;
                        M2C_FIELD(var_v1_2, f32 *, 0x28) = temp_fs0_2;
                        goto block_14;
                    }
                } else {
block_14:
                    M2C_FIELD(var_v1_2, s16 *, 0) = 6;
                    M2C_FIELD(var_v1_2, s32 *, 0x30) = (s32) D_80069738;
                    M2C_FIELD(var_v1_2, f32 *, 0x18) = (f32) *(f32 *)0x202450;
                    M2C_FIELD(var_v1_2, f32 *, 4) = (f32) M2C_FIELD(var_s0_2, f32 *, 0);
                    M2C_FIELD(var_v1_2, f32 *, 8) = (f32) M2C_FIELD(var_s0_2, f32 *, 4);
                    M2C_FIELD(var_v1_2, f32 *, 0xC) = (f32) M2C_FIELD(var_s0_2, f32 *, 8);
                    temp_fv0_2 = M2C_FIELD(var_s0_2, f32 *, 0x60);
                    M2C_FIELD(var_v1_2, f32 *, 0x10) = temp_fv0_2;
                    M2C_FIELD(var_v1_2, f32 *, 0x14) = (f32) (temp_fv0_2 * temp_fv0_2);
                    M2C_FIELD(var_v1_2, u8 *, 0x1C) = (u8) M2C_FIELD(var_s0_2, u8 *, 0x68);
                    M2C_FIELD(var_v1_2, u8 *, 0x1D) = (u8) M2C_FIELD(var_s0_2, u8 *, 0x69);
                    M2C_FIELD(var_v1_2, u8 *, 0x1E) = (u8) M2C_FIELD(var_s0_2, u8 *, 0x6A);
                    goto block_15;
                }
            } else {
block_15:
                var_s0_2 = temp_s1_2;
                if (var_s0_2 != NULL) {
                    goto loop_10;
                }
            }
        }
    }
}
