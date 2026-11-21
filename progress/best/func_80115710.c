/* adapted from similar verified C in func_8003F410 in PENNY RACERS (matched), with its names changed by decompdecomp */
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

M2C_UNK osCreateMesgQueue(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_80116EB0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_80027710;
extern M2C_UNK D_8004F080;
extern M2C_UNK D_8004F088;

void func_80115710(void) {
    D_80027710 = 1;
    osCreateMesgQueue(&D_8004F088, &D_8004F080, 1);
    func_80116EB0(&D_8004F088, 0, 0);
}
