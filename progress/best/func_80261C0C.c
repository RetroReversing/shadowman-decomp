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

s32 func_80239398();
void *func_8023C3E0();
s32 func_8023C43C();
s32 func_80261408();
s32 func_80261CE4();
s32 func_8026E67C();
s32 func_802D0B28();
extern char D_229320[];
extern s32 D_8005EA0C;
extern s32 D_8005EA14;

s32 func_80261C0C(void *arg0, s32 arg1) {
    void *temp_s0;

    temp_s0 = func_8023C3E0();
    func_802D0B28(D_8005EA14, M2C_FIELD(arg0, s16 *, 0x24), 1);
    M2C_FIELD(temp_s0, u8 *, 0x71) = (u8) M2C_FIELD(arg0, u8 *, 0x25);
    M2C_FIELD(temp_s0, u16 *, 0x7C) = (u16) M2C_FIELD(arg0, u16 *, 0x1E);
    M2C_FIELD(temp_s0, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(temp_s0, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(temp_s0, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    if (func_8026E67C(temp_s0) == -1) {
        M2C_FIELD(temp_s0, f32 *, 0xC) = (f32) M2C_FIELD(arg0, s32 *, 0x18);
        M2C_FIELD(temp_s0, f32 *, 0x10) = (f32) M2C_FIELD(arg0, s32 *, 0x18);
        M2C_FIELD(temp_s0, s32 *, 0x88) = func_80239398(*(s32 *)((D_8005EA0C * 4) + func_80261408()), temp_s0, arg1, D_229320, 0x20000);
        return func_80261CE4();
    }
    func_8023C43C(temp_s0);
    return 0;
}
