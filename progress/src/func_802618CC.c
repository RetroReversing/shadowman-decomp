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

s32 func_8010BBA8(f32 *, u16, s32, s16, f32);       /* extern */
M2C_UNK func_802D0B28(s32, s16, M2C_UNK);           /* extern */
extern s32 D_8005EA14;

s32 func_802618CC(void *arg0, s32 arg1) {
    f32 sp18[3];

    sp18[0] = M2C_FIELD(arg0, f32 *, 4);
    sp18[1] = M2C_FIELD(arg0, f32 *, 8);
    sp18[2] = M2C_FIELD(arg0, f32 *, 0xC);
    func_802D0B28(D_8005EA14, M2C_FIELD(arg0, s16 *, 0x24), 1);
    return (func_8010BBA8(sp18, M2C_FIELD(arg0, u16 *, 0x1A), arg1 & 0xFFFF, M2C_FIELD(arg0, s16 *, 0x24), (f32) M2C_FIELD(arg0, s32 *, 0x14)) & 0xFF) != 0;
}
