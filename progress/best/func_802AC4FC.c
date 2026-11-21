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

s32 func_80109918(void *, M2C_UNK, s16);            /* extern */
M2C_UNK func_802401D0(f32 *, f32 *, M2C_UNK, f32);  /* extern */
M2C_UNK func_802A7CD4();                            /* extern */
extern M2C_UNK D_8005EA30;
extern M2C_UNK D_8006A510;
extern s32 D_8006A5B4;

void func_802AC4FC(void *arg0) {
    void * __repair_hoisted;

    f32 sp10;                                       /* compiler-managed */
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_a3;
    f32 temp_fv0;
    f32 temp_t0;
    f32 temp_t1;
    void *temp_v1;

    func_802A7CD4();
    M2C_FIELD(arg0, s32 *, 0x40) = 7;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) *(f32 *)0x2165F4;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) *(f32 *)0x2165F8;
    sp10 = M2C_FIELD(arg0, f32 *, 0x6C);
    sp14 = M2C_FIELD(arg0, f32 *, 0x70);
    sp18 = M2C_FIELD(arg0, f32 *, 0x74);
    temp_fv0 = *(f32 *)0x2165FC;
    sp10 = M2C_BITWISE(f64, (sp14 * temp_fv0));
    sp18 *= temp_fv0;
    temp_a3 = M2C_FIELD(arg0, f32 *, 0x54);
    temp_t0 = M2C_FIELD(arg0, f32 *, 0x58);
    temp_t1 = M2C_FIELD(arg0, f32 *, 0x5C);
    sp30 = temp_a3;
    sp34 = temp_t0;
    sp38 = temp_t1;
    sp20 = temp_a3;
    sp24 = temp_t0;
    sp28 = temp_t1;
    D_8006A5B4 = 1;
    sp30 += M2C_BITWISE(f32, sp10);
    sp34 += sp14;
    sp38 += sp18;
    func_802401D0(&sp20, &sp30, 0x41800000, temp_a3);
    __repair_hoisted = M2C_FIELD(arg0, void **, 0xC);
    if (M2C_FIELD(&D_8006A510, s32 *, 0x78) != 1) {
        __repair_hoisted = NULL;
    } else {
        temp_v1 = M2C_FIELD(M2C_FIELD(&D_8006A510, void **, 0x8C), s32 *, 0x1C) + (M2C_FIELD(M2C_FIELD(&D_8006A510, void **, 0x90), u16 *, 8) * 0x10);
        M2C_FIELD(arg0, void **, 0xC) = temp_v1;
        M2C_FIELD(arg0, f32 *, 0x84) = (f32) -(((M2C_FIELD(temp_v1, f32 *, 0) * M2C_FIELD(&D_8005EA30, f32 *, 0)) - M2C_FIELD(temp_v1, f32 *, 0xC)) + (M2C_FIELD(temp_v1, f32 *, 4) * M2C_FIELD(&D_8005EA30, f32 *, 4)) + (M2C_FIELD(temp_v1, f32 *, 8) * M2C_FIELD(&D_8005EA30, f32 *, 8)));
        M2C_FIELD(arg0, f32 *, 0x60) = (f32) M2C_FIELD(&D_8006A510, f32 *, 0x80);
        M2C_FIELD(arg0, f32 *, 0x64) = (f32) M2C_FIELD(&D_8006A510, f32 *, 0x84);
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) M2C_FIELD(&D_8006A510, f32 *, 0x88);
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = func_80109918(arg0 + 0x54, 0x7F, *(s16 *)0x216C2C);
}
