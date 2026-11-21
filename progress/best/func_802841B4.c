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

M2C_UNK func_8023E724(s32, s32, M2C_UNK *, M2C_UNK *, f32, f32, s32); /* extern */
M2C_UNK func_80267F78(f32, s32, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80298994(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK D_212078;
extern s32 D_80033A00;
extern M2C_UNK D_80033A1C;
extern s32 D_8006A4FC;
extern M2C_UNK D_8007558C;
extern s32 D_8007AF84;
extern void *D_8007AFF8;

void func_802841B4(void) {
    M2C_UNK sp20;
    f32 temp_fa0;
    f32 temp_fv0f;
    void *temp_v1;

    func_8023E724(D_8007AF84, D_80033A00, &D_80033A1C, &sp20, *(f32 *)0x214D88, *(f32 *)0x214D8C, 0);
    func_80298994(&D_8007558C, &sp20);
    temp_v1 = (M2C_FIELD(D_8007AFF8, u8 *, 0x40) * 0x6C) + &D_212078;
    temp_fa0 = (f32) (M2C_FIELD(temp_v1, u8 *, 0x24) * 0x64);
    temp_fv0f = temp_fa0 * M2C_FIELD(temp_v1, f32 *, 0x34) * *(f32 *)0x214D90;
    M2C_FIELD(D_8007AFF8, u8 *, 0x41) = (u8) (M2C_FIELD(D_8007AFF8, u8 *, 0x41) + ((s32) temp_fv0f / 100));
    func_80267F78(temp_fa0, (s32) temp_fv0f >> 0x1F, D_8006A4FC + 0x24, 4, -1);
}
