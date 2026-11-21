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

extern unsigned char D_8005EA0F;
extern int D_8005EA0C;
s32 func_80239398();
s32 func_8023B630();
void *func_8023C3E0();
s32 func_80261408();

void func_80263B5C(void *arg0, void *arg1, s32 arg2, s16 arg3) {
    void *temp_v0;

    temp_v0 = func_8023C3E0();
    M2C_FIELD(temp_v0, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(temp_v0, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(temp_v0, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(temp_v0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_v0, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x64) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x80) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x84) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x68) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x6C) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x30) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x7E) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x7A) = arg3;
    M2C_FIELD(temp_v0, u8 *, 0x71) = (u8) D_8005EA0F;
    M2C_FIELD(temp_v0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 8);
    func_8023B630(temp_v0 + 0x18, temp_v0 + 0x34, temp_v0 + 0x24);
    func_80239398(*(s32 *)((D_8005EA0C * 4) + func_80261408()), temp_v0, arg2, 0, 0x2000);
}
