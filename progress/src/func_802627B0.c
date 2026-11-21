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

M2C_UNK func_80263B5C(f32 *, f32 *, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_802D0B28(s32, s16, M2C_UNK);           /* extern */
extern s32 D_8005EA14;

s32 func_802627B0(void *arg0, M2C_UNK arg1) {
    f32 sp18[3];
    f32 sp28[3];

    sp18[0] = M2C_FIELD(arg0, f32 *, 4);
    sp18[1] = M2C_FIELD(arg0, f32 *, 8);
    sp18[2] = M2C_FIELD(arg0, f32 *, 0xC);
    sp28[0] = (f32) M2C_FIELD(arg0, s32 *, 0x10);
    sp28[1] = (f32) M2C_FIELD(arg0, s32 *, 0x14);
    sp28[2] = 0;
    func_802D0B28(D_8005EA14, M2C_FIELD(arg0, s16 *, 0x24), 1);
    func_80263B5C(sp18, sp28, arg1, M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x1C));
    return 1;
}
