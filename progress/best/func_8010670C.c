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

void *func_80103878(s32, M2C_UNK, M2C_UNK);         /* extern */
M2C_UNK func_80116D80(M2C_UNK *, s32 *, M2C_UNK);   /* extern */
M2C_UNK func_80116EB0(M2C_UNK *, s16 *, M2C_UNK);   /* extern */
M2C_UNK osCreateMesgQueue(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_8004B44C;

s32 func_8010670C(s32 arg0, s32 arg1) {
    M2C_UNK sp10;
    s32 sp28;
    s32 sp2C;
    void *sp30;
    M2C_UNK *sp34;
    M2C_UNK sp38;
    s32 sp3C;
    s32 temp_s1;
    u32 var_s0;
    void *temp_v0;

    var_s0 = (u32) (arg0 + 0xFFF) >> 0xC;
    temp_s1 = (var_s0 + 1) & ~1;
    if (!(arg1 & 1)) {
        var_s0 = 0;
    }
    osCreateMesgQueue(&sp10, &sp38, 1);
    sp28 = 3;
    sp2C = arg0;
    sp34 = &sp10;
    temp_v0 = func_80103878((var_s0 * 4) + (temp_s1 + 0x18), 3, 0);
    sp30 = temp_v0;
    M2C_FIELD(temp_v0, s32 *, 8) = arg1;
    func_80116EB0(&D_8004B44C, &sp28, 1);
    func_80116D80(&sp10, &sp3C, 1);
    return sp3C;
}
