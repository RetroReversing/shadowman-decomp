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

M2C_UNK func_8022AD04(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8022AD94(s32);                         /* extern */
M2C_UNK func_8023040C(M2C_UNK);                     /* extern */
M2C_UNK func_802BFC3C();                            /* extern */
extern M2C_UNK D_25EB34;
extern s8 D_8002C1BC;
extern M2C_UNK D_8002D5B0;
extern M2C_UNK D_8002DBB0;
extern M2C_UNK *D_80052778;
extern s32 D_80072BB0;
extern s32 D_80072BB4;

void func_80246D38(void) {
    if (D_80072BB4 == &D_8002DBB0) {
        func_802BFC3C();
    }
    D_8002C1BC = 1;
    D_80052778 = &D_25EB34;
    func_8022AD94(D_80072BB0);
    func_8022AD04(&D_8002D5B0, 0x3E);
    func_8023040C(1);
}
