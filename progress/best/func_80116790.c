/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

void func_80116790(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_v0;
    u32 temp_t3;
    void *temp_a0;

    M2C_FIELD(arg0, s32 *, 0x100) = (s32) (0x11821C >> 0x1F);
    M2C_FIELD(arg0, s32 *, 0x104) = 0x11821C;
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x11C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (arg3 >> 0x1F);
    M2C_FIELD(arg0, s32 *, 0x3C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x118) = 0x0400FF03;
    M2C_FIELD(arg0, s32 *, 0x128) = 0x3F;
    M2C_FIELD(arg0, s32 *, 0x12C) = 0x01000800;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s16 *, 0x10) = 1;
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    M2C_FIELD(arg0, s32 *, 4) = arg5;
    temp_t3 = arg4 - 0x10;
    M2C_FIELD(arg0, s32 *, 0xF0) = (s32) ((arg4 >> 0x1F) - 1 + (temp_t3 < 0xFFFFFFF0U));
    M2C_FIELD(arg0, u32 *, 0xF4) = temp_t3;
    temp_v0 = func_80118330(0x0400FF03, arg1);
    temp_a0 = *(void **)0x800285DC;
    *(void **)0x800285DC = arg0;
    M2C_FIELD(arg0, void **, 0xC) = temp_a0;
    func_80118350(temp_v0);
}
