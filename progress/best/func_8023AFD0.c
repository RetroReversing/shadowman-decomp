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

M2C_UNK func_8023B228();                            /* extern */
M2C_UNK func_8024763C(s32);                         /* extern */
extern s32 D_8007BDF4;
extern s32 D_8007BE80;

void func_8023AFD0(void *arg0) {
    s32 *temp_s0;
    s32 temp_a0;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, void **, 0x68);
    if (temp_v0 != NULL) {
        temp_s0 = M2C_FIELD(temp_v0, s32 **, 0x10);
        func_8023B228();
        if ((*temp_s0 & 4) && ((temp_v0_2 = M2C_FIELD(arg0, void **, 0x6C), M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) + M2C_FIELD(temp_v0_2, f32 *, 0x28)), temp_a0 = M2C_FIELD(arg0, s32 *, 0x88), M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + M2C_FIELD(temp_v0_2, f32 *, 0x2C)), M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) + M2C_FIELD(temp_v0_2, f32 *, 0x30)), M2C_FIELD(arg0, f32 *, 0x5C) = (f32) M2C_FIELD(arg0, f32 *, 0x28), M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(arg0, f32 *, 0x24), M2C_FIELD(arg0, f32 *, 0x60) = (f32) M2C_FIELD(arg0, f32 *, 0x2C), (D_8007BDF4 == temp_a0)) || (D_8007BE80 == temp_a0))) {
            func_8024763C(temp_a0);
        }
    }
}
