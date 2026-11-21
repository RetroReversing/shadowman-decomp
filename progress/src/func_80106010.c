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

M2C_UNK func_80105F34(s32 *, s32 ***, s32 *);       /* extern */
M2C_UNK func_801159C8(s32 *);                       /* extern */
M2C_UNK osSpTaskStartGo(s32 *);                     /* extern */
M2C_UNK osWritebackDCacheAll();                     /* extern */
extern M2C_UNK D_8004AEB8;

void func_80106010(void) {
    s32 sp10;
    s32 **sp14;
    s32 sp18;
    s32 temp_v0;

    sp14 = NULL;
    sp18 = 0;
    temp_v0 = M2C_FIELD(&D_8004AEB8, s32 ***, 0) == NULL;
    sp10 = temp_v0;
    if (M2C_FIELD(&D_8004AEB8, s32 ***, 4) == NULL) {
        sp10 = temp_v0 | 2;
    }
    func_80105F34(&sp10, &sp14, &sp18);
    if (sp14 != NULL) {
        if (**sp14 == 2) {
            osWritebackDCacheAll();
        }
        func_801159C8(*sp14);
        osSpTaskStartGo(*sp14);
        M2C_FIELD(&D_8004AEB8, s32 ***, 0) = sp14;
        if (sp14 == sp18) {
            M2C_FIELD(&D_8004AEB8, s32 ***, 4) = sp14;
        }
    }
}
