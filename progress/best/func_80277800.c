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

M2C_UNK func_80109D88();                            /* extern */
M2C_UNK func_80237AA8(s32, void *);                 /* extern */
M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_802D0B28(s32, s8, M2C_UNK);            /* extern */
extern M2C_UNK D_209890;
extern s32 D_8002D2B4;
extern s32 D_800305F8;
extern s32 D_800312C0;
extern s32 D_8005276C;
extern void *D_8005E9EC;
extern void *D_8005E9F0;
extern s32 D_8005EA14;
extern s32 D_8006973C;
extern s32 D_800698A0;
extern s32 D_80074BB0;
extern M2C_UNK D_80074F70;
extern M2C_UNK D_800752D8;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_80277800(s8 arg0) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    s32 temp_a0;

    func_80109D88();
    D_8005276C = 1;
    func_802D0B28(D_8005EA14, arg0, 1);
    M2C_FIELD(&D_80075568, s8 *, 0x71) = arg0;
    D_8002D2B4 = (s32) arg0;
    temp_fv0 = M2C_FIELD(D_8005E9EC, f32 *, 0x24);
    M2C_FIELD(&D_80075568, f32 *, 0x24) = temp_fv0;
    M2C_FIELD(&D_800752D8, f32 *, 0) = temp_fv0;
    M2C_FIELD(&D_80074F70, f32 *, 0) = temp_fv0;
    temp_fv0_2 = M2C_FIELD(D_8005E9EC, f32 *, 0x28);
    M2C_FIELD(&D_80075568, f32 *, 0x28) = temp_fv0_2;
    M2C_FIELD(&D_800752D8, f32 *, 4) = temp_fv0_2;
    M2C_FIELD(&D_80074F70, f32 *, 4) = temp_fv0_2;
    temp_fv0_3 = M2C_FIELD(D_8005E9EC, f32 *, 0x2C);
    D_800305F8 = 0;
    M2C_FIELD(&D_80075568, s32 *, 0x18) = 0;
    M2C_FIELD(&D_80075568, s32 *, 0x20) = 0;
    M2C_FIELD(&D_80075568, s32 *, 0xC) = 0;
    M2C_FIELD(&D_80075568, s32 *, 0x10) = 0;
    M2C_FIELD(&D_80075568, s32 *, 0x14) = 0;
    M2C_FIELD(&D_80075568, s32 *, 0x68) = 0;
    M2C_FIELD(&D_80075568, f32 *, 0x2C) = temp_fv0_3;
    M2C_FIELD(&D_800752D8, f32 *, 8) = temp_fv0_3;
    M2C_FIELD(&D_80074F70, f32 *, 8) = temp_fv0_3;
    if (M2C_FIELD(((D_80074BB0 * 0x34) + &D_209890), s16 *, 8) == 1) {
        func_8023DF7C(&D_80075568, &D_80075518, 0, 0xA, 0, 2);
    }
    temp_a0 = M2C_FIELD(D_8005E9F0, s32 *, 0x10);
    D_800312C0 = 0x64;
    if (temp_a0 != 0) {
        D_800698A0 = temp_a0;
        D_8006973C = (s32) M2C_FIELD(D_8005E9F0, s16 *, 0x1C);
        func_80237AA8(temp_a0, D_8005E9F0);
    }
}
