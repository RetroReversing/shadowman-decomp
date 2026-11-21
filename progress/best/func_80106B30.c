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

s32 func_80106A90();
s32 func_80106B9C();
s32 func_80106C24();
u64 func_801168A0();
s32 func_801171A0();
u64 func_8011D5C0();
extern char D_107B60[];
extern s32 D_8001E460;
extern u32 D_8001E464;

void func_80106B30(void *arg0) {
    s32 temp_a0_2;
    s32 temp_a1;
    u32 temp_a0;
    u32 temp_v1;
    u32 temp_v1_2;
    u64 temp_ret;
    u64 temp_ret_2;

    temp_ret = func_801168A0();
    temp_v1 = (u32) temp_ret;
    temp_a0 = (u32) func_8011D5C0((temp_ret << 6) | (((u32) temp_ret) >> 0x1A), temp_v1 << 6, 0, 0xBB8) - D_8001E464;
    temp_a1 = temp_a0 > 0x2DC6C0U;
    if (temp_a1 != 0) {
        func_80106B9C(temp_a0, (temp_a0 > 0x2DC6C0U));
        return;
    }
    D_8001E460 += 1;
    if (M2C_FIELD(arg0, s32 *, 0x14) == 1) {
        M2C_FIELD(arg0, s32 **, 0x11C) = D_107B60;
        M2C_FIELD(arg0, s32 *, 0x120) = 0;
        M2C_FIELD(arg0, s32 *, 0x12C) = 0;
        M2C_FIELD(arg0, s16 *, 0x12) = 2;
        temp_a0_2 = (s32) D_8001E460 >> 0x1F;
        M2C_FIELD(arg0, s32 *, 0x38) = temp_a0_2;
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) D_8001E460;
        temp_ret_2 = func_801168A0(temp_a0_2, D_8001E460);
        temp_v1_2 = (u32) temp_ret_2;
        D_8001E464 = (u32) func_8011D5C0((temp_ret_2 << 6) | (temp_v1_2 >> 0x1A), temp_v1_2 << 6, 0, 0xBB8);
        func_801171A0(arg0, &D_8001E464);
        func_80106C24();
        return;
    }
    func_80106A90();
}
