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

M2C_UNK func_80237AA8(s32, void *);                 /* extern */
M2C_UNK func_802D0B28(s32, s32, M2C_UNK);           /* extern */
extern s32 D_8002D2B4;
extern void *D_8005E9F0;
extern s32 D_8005EA0C;
extern s32 D_8005EA14;
extern s32 D_8006973C;
extern s32 D_800698A0;

void func_8025D79C(s32 arg0) {
    s32 temp_a0;

    func_802D0B28(D_8005EA14, arg0, 1);
    temp_a0 = M2C_FIELD(D_8005E9F0, s32 *, 0x10);
    D_8002D2B4 = D_8005EA0C;
    if (temp_a0 != 0) {
        D_800698A0 = temp_a0;
        D_8006973C = (s32) M2C_FIELD(D_8005E9F0, s16 *, 0x1C);
        func_80237AA8(temp_a0, D_8005E9F0);
    }
}
