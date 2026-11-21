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

extern float D_8007DB8C;
s32 func_80239C38();
s32 func_8025DD7C();
s32 func_80296738();
s32 func_802968C0();
extern char D_8002C63C[];
extern char D_8007DB88[];

void func_802A1BBC(void *arg0) {
    s32 sp10;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    f32 sp40;
    s32 sp44;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s8 sp80;
    s32 sp90;
    f32 temp_fv0;
    s32 temp_v0;

    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x54) - D_8007DB8C;
    M2C_FIELD(arg0, f32 *, 0x54) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
    }
    temp_v0 = func_80296738(M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x6C) * 0x10) + D_8002C63C), s32 *, 8));
    sp90 = temp_v0;
    if (temp_v0 != 0) {
        sp34 = M2C_FIELD(arg0, s32 *, 0);
        sp38 = M2C_FIELD(arg0, s32 *, 4);
        sp3C = M2C_FIELD(arg0, s32 *, 8);
        sp30 = 0.0f;
        sp2C = 0.0f;
        sp28 = 0.0f;
        sp80 = 0xFF;
        sp40 = M2C_FIELD(arg0, f32 *, 0x4C);
        sp74 = func_802968C0(M2C_FIELD(arg0, s32 *, 0x6C), M2C_FIELD(arg0, s32 *, 0x58));
        sp7C = 0;
        sp78 = 0;
        func_80239C38(arg0 + 0x24, &sp44);
        func_8025DD7C(&sp10, 2, 6, 0);
    }
}
