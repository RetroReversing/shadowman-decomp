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

M2C_UNK func_80105B44(M2C_UNK *);                   /* extern */
s32 func_801069C0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80116FE0(M2C_UNK, void *, M2C_UNK);    /* extern */
M2C_UNK osCreateMesgQueue(void *, void *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK osViSetEvent(void *, M2C_UNK, M2C_UNK);     /* extern */
extern M2C_UNK D_1060D0;
extern s32 D_800285C4;
extern s32 D_8004AEB0;
extern M2C_UNK D_8004AEB8;
extern s32 D_8004AF34;

void func_80105AB0(void) {
    M2C_UNK *__base_D_8004AEB8;
    void *temp_s0;

    __base_D_8004AEB8 = &D_8004AEB8;
    temp_s0 = (s8 *) __base_D_8004AEB8 + 0x14;
    D_8004AEB0 = 0;
    M2C_FIELD(__base_D_8004AEB8, s32 *, 0xC) = 0;
    M2C_FIELD(__base_D_8004AEB8, s32 *, 8) = 0;
    M2C_FIELD(__base_D_8004AEB8, s32 *, 0) = 0;
    M2C_FIELD(__base_D_8004AEB8, s32 *, 4) = 0;
    M2C_FIELD(__base_D_8004AEB8, s32 *, 0x10) = 0;
    osCreateMesgQueue(temp_s0, (s8 *) __base_D_8004AEB8 + 0x2C, 0x14, __base_D_8004AEB8);
    func_80116FE0(4, temp_s0, 1);
    func_80116FE0(9, temp_s0, 0);
    func_80116FE0(0xE, temp_s0, 3);
    osViSetEvent(temp_s0, 2, 1);
    if (D_800285C4 != 0) {
        func_80105B44(&D_1060D0);
        return;
    }
    D_8004AF34 = func_801069C0(&D_1060D0, 0x200, 0x7E, 4);
}
