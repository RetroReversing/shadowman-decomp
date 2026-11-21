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

void *func_801088D4();                              /* extern */
M2C_UNK func_80116EB0(M2C_UNK *, void *, M2C_UNK);  /* extern */
extern M2C_UNK D_8001FDA4;
extern s16 D_8004DF18;
extern M2C_UNK D_8004DF20;
extern M2C_UNK D_8004E050;

void func_80107D8C(s32 arg0, s16 arg1, s16 arg2, s16 arg3) {
    s16 var_v0;
    void *temp_v0;
    M2C_UNK *__base_D_8004E050;

    __base_D_8004E050 = &D_8004E050;

    temp_v0 = func_801088D4();
    if (temp_v0 != NULL) {
        D_8004DF18 = arg1;
        if ((arg1 == -1) || (var_v0 = (*(arg1 + &D_8001FDA4)) + 0x75, ((*(arg1 + &D_8001FDA4)) == -1))) {
            var_v0 = -1;
        }
        M2C_FIELD(temp_v0, s16 *, 8) = var_v0;
        M2C_FIELD(temp_v0, s32 *, 0) = 4;
        M2C_FIELD(temp_v0, s32 *, 4) = 5;
        M2C_FIELD(temp_v0, s16 *, 0xA) = arg3;
        M2C_FIELD(temp_v0, s16 *, 0xE) = arg2;
        M2C_FIELD(temp_v0, s16 *, 0xC) = arg0;
        M2C_FIELD(__base_D_8004E050, s8 *, 2) = (s8) arg1;
        M2C_FIELD(__base_D_8004E050, s16 *, 4) = arg3;
        M2C_FIELD(__base_D_8004E050, s8 *, 3) = (s8) arg2;
        M2C_FIELD(__base_D_8004E050, s16 *, 6) = arg0;
        func_80116EB0(&D_8004DF20, temp_v0, 1);
    }
}
