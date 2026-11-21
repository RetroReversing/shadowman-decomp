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

s32 func_8011BA20();
s32 func_802322A4();
s16 func_8023648C();
s32 func_802364D0();
f32 func_80236544();

void func_80246168(void *arg0, s32 arg1) {
    func_8011BA20(arg0, 0, 0x50);
    M2C_FIELD(arg0, s32 *, 0) = func_802364D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x4C) = func_802364D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) func_8023648C(arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) func_8023648C(arg1);
    M2C_FIELD(arg0, f32 *, 0x20) = func_80236544(arg1);
    M2C_FIELD(arg0, f32 *, 0x24) = func_80236544(arg1);
    M2C_FIELD(arg0, f32 *, 0x28) = func_80236544(arg1);
    M2C_FIELD(arg0, f32 *, 4) = func_80236544(arg1);
    M2C_FIELD(arg0, f32 *, 0xC) = func_80236544(arg1);
    M2C_FIELD(arg0, f32 *, 0x14) = func_80236544(arg1);
    M2C_FIELD(arg0, f32 *, 8) = func_80236544(arg1);
    M2C_FIELD(arg0, f32 *, 0x10) = func_80236544(arg1);
    M2C_FIELD(arg0, f32 *, 0x18) = func_80236544(arg1);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) func_8023648C(arg1);
    M2C_FIELD(arg0, s32 *, 0x34) = func_802364D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x38) = func_802364D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x3C) = func_802364D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x40) = func_802364D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x44) = func_802364D0(arg1);
    M2C_FIELD(arg0, s32 *, 0x48) = func_802364D0(arg1);
    func_802322A4(arg0 + 4);
}
