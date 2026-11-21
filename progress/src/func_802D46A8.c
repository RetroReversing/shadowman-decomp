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

M2C_UNK func_802244AC(void *, M2C_UNK);             /* extern */
M2C_UNK func_802397D0(s32);                         /* extern */
M2C_UNK func_8023981C(s32);                         /* extern */
M2C_UNK func_802398C8(s32, s32, s32);               /* extern */
extern s32 D_8002C1B0;
extern s32 D_8005EA2C;
extern s32 D_80074BF4;

void func_802D46A8(void *arg0) {
    s32 temp_a0;
    void *temp_s1;

    if (D_80074BF4 & 2) {
        temp_s1 = M2C_FIELD(arg0, void **, 8);
        func_802397D0(D_8005EA2C + 0x3C);
        temp_a0 = D_8005EA2C + 0x3C;
        func_802398C8(temp_a0, temp_s1 + 0x34, temp_a0);
        D_8002C1B0 = M2C_FIELD(temp_s1, s32 *, 0x80);
        func_802244AC(temp_s1, 1);
        func_8023981C(D_8005EA2C + 0x3C);
    }
}
