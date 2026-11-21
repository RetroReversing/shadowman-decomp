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

M2C_UNK func_80108630();                            /* extern */
M2C_UNK func_80108CDC();                            /* extern */
s32 func_8010B164();                                /* extern */
M2C_UNK func_8010B354();                            /* extern */
s32 func_80110784(s32, s32 *, s32, s16);            /* extern */
M2C_UNK func_80113EA0(s32, s32);                    /* extern */
M2C_UNK func_80116D80(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80116EB0(M2C_UNK *, void *, M2C_UNK);  /* extern */
s32 func_801176C0(s32);                             /* extern */
M2C_UNK osWritebackDCacheAll(void *, s32);          /* extern */
extern s32 D_8001FE04;
extern M2C_UNK D_8004AECC;
extern u16 D_8004E062;
extern M2C_UNK D_8004E070;
extern M2C_UNK D_8004EB10;

s32 func_8010B054(void *arg0, void *arg1) {
    s32 sp10;
    s32 *temp_v0;
    s32 temp_a1;
    s32 temp_a2;
    void *temp_a0;

    func_80108630();
    if (arg1 != NULL) {
        func_80116D80(&D_8004EB10, 0, 1);
        func_80113EA0(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s16 *, 4) * 4);
    }
    func_80108CDC();
    func_8010B354();
    temp_a2 = func_801176C0(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, u16 *, 4) = (u16) D_8004E062;
    temp_a1 = func_80110784(*((D_8001FE04 * 4) + &D_8004E070), &sp10, temp_a2, (s16) D_8004E062);
    if (sp10 != 0) {
        temp_a0 = M2C_FIELD(arg0, void **, 8);
        temp_v0 = (D_8001FE04 * 4) + &D_8004E070;
        M2C_FIELD(temp_a0, s32 *, 0x30) = (s32) *temp_v0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x34) = (s32) (((s32) (temp_a1 - *temp_v0) >> 3) * 8);
        M2C_FIELD(arg0, s32 *, 0x18) = 1;
        osWritebackDCacheAll(temp_a0, temp_a1);
        func_80116EB0(&D_8004AECC, arg0 + 8, 1);
        return func_8010B164();
    }
    return 0;
}
