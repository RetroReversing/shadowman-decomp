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

M2C_UNK func_8010455C();                            /* extern */
M2C_UNK func_80104758(s32, s32, s32, s32);          /* extern */
s32 func_80104A14(s32);                             /* extern */
M2C_UNK func_80116D80(M2C_UNK *, void **, M2C_UNK); /* extern */
M2C_UNK func_80116EB0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK osCreateMesgQueue(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_8004AD90;
extern M2C_UNK D_8004ADB0;
extern M2C_UNK D_8004AE18;
extern M2C_UNK D_8004AE50;

void func_80104500(void) {
    void *sp10;
    s32 *temp_s1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_v1;

    osCreateMesgQueue(&D_8004AD90, &D_8004ADB0, 0xA);
    osCreateMesgQueue(&D_8004AE18, &D_8004AE50, 0xA);
    func_80116D80(&D_8004AD90, &sp10, 1);
    temp_s1 = M2C_FIELD(sp10, s32 **, 0);
    temp_s0 = M2C_FIELD(sp10, s16 *, 0xE) * 0xC;
    temp_s2 = func_80104A14(*temp_s1 + temp_s0) + (temp_v1 = *temp_s1);
    temp_s0_2 = func_80104A14((*temp_s1) + temp_s0 + 8);
    func_80104758(temp_s2, M2C_FIELD(sp10, s32 *, 4), temp_s0_2, func_80104A14(*temp_s1 + temp_s0 + 4));
    func_80116EB0(M2C_FIELD(sp10, s32 *, 0x14), 0x0C0DFACE, 1);
    func_8010455C();
}
