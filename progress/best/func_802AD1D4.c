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

M2C_UNK func_802401D0(f32 *, f32 *, M2C_UNK);  /* extern */
M2C_UNK func_802A7CD4();                            /* extern */
extern M2C_UNK D_8006A510;
extern s32 D_8006A5B4;

void func_802AD1D4(void *arg0) {
    M2C_UNK *__base_D_8006A510;
    f32 sp10[3];
    f32 sp20[3];
    f32 sp30[3];
    f32 temp_a3;
    f32 temp_fv0f;
    f32 temp_t0;
    f32 temp_t1;

    func_802A7CD4(arg0);
    M2C_FIELD(arg0, s32 *, 0x40) = 7;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) *(f32 *)0x216658;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) *(f32 *)0x21665C;
    sp10[0] = M2C_FIELD(arg0, f32 *, 0x6C);
    sp10[1] = M2C_FIELD(arg0, s32 *, 0x70);
    sp10[2] = M2C_FIELD(arg0, f32 *, 0x74);
    temp_fv0f = *(f32 *)0x216660;
    sp10[0] = M2C_BITWISE(f64, (sp10[1] * temp_fv0f));
    sp10[2] *= temp_fv0f;
    temp_a3 = M2C_FIELD(arg0, f32 *, 0x54);
    temp_t0 = M2C_FIELD(arg0, f32 *, 0x58);
    temp_t1 = M2C_FIELD(arg0, f32 *, 0x5C);
    sp30[0] = temp_a3;
    sp30[1] = temp_t0;
    sp30[2] = temp_t1;
    sp20[0] = temp_a3;
    sp20[1] = temp_t0;
    sp20[2] = temp_t1;
    D_8006A5B4 = 1;
    sp30[0] += M2C_BITWISE(f32, sp10[0]);
    sp30[1] += sp10[1];
    sp30[2] += sp10[2];
    func_802401D0(sp20, sp30, 0x41800000);
    __base_D_8006A510 = &D_8006A510;
    if (M2C_FIELD(__base_D_8006A510, s32 *, 0x78) == 1) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(M2C_FIELD(__base_D_8006A510, void **, 0x8C), s32 *, 0x1C) + (M2C_FIELD(M2C_FIELD(__base_D_8006A510, void **, 0x90), u16 *, 8) * 0x10));
    } else {
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}
