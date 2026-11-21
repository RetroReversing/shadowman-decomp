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

M2C_UNK func_802D9E20(M2C_UNK *, s32);              /* extern */
extern void *D_8007DB68;
extern M2C_UNK D_8007DC30;
extern M2C_UNK D_8007E038;

void func_802DACC8(void) {
    s32 temp_a1;

    M2C_FIELD(&D_8007E038, s32 *, 0) = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x3E8);
    M2C_FIELD(&D_8007E038, s32 *, 4) = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x3E8);
    M2C_FIELD(&D_8007E038, s32 *, 8) = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x4D8);
    M2C_FIELD(&D_8007E038, s32 *, 0xC) = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x460);
    M2C_FIELD(&D_8007E038, s32 *, 0x10) = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x488);
    M2C_FIELD(&D_8007E038, s32 *, 0x14) = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x4B0);
    M2C_FIELD(&D_8007E038, s32 *, 0x18) = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x280);
    M2C_FIELD(&D_8007E038, s32 *, 0x1C) = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x2A8);
    M2C_FIELD(&D_8007E038, s32 *, 0x20) = (s32) (M2C_FIELD(D_8007DB68, s32 *, 8) + 0x2D0);
    M2C_FIELD(&D_8007E038, s32 *, 0x40) = 0;
    M2C_FIELD(&D_8007DC30, s8 *, 0x3F4) = 2;
    M2C_FIELD(&D_8007DC30, s8 *, 0x3F1) = 1;
    M2C_FIELD(&D_8007DC30, s8 *, 0x3ED) = 9;
    M2C_FIELD(&D_8007DC30, s8 *, 0x3EE) = 7;
    M2C_FIELD(&D_8007DC30, s8 *, 0x3F2) = 0;
    M2C_FIELD(&D_8007DC30, s8 *, 0x3F3) = 0;
    M2C_FIELD(&D_8007DC30, s8 *, 0x3EF) = 5;
    temp_a1 = M2C_FIELD(D_8007DB68, s32 *, 8) + 0x500;
    M2C_FIELD(&D_8007E038, s32 *, 0x3C) = temp_a1;
    func_802D9E20(&D_8007E038, temp_a1);
}
