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

M2C_UNK func_8021DD60();                            /* extern */
M2C_UNK func_8021E280();                            /* extern */
M2C_UNK func_80222404();                            /* extern */
M2C_UNK func_802224D0();                            /* extern */
M2C_UNK func_8022B80C();                            /* extern */
M2C_UNK func_80230DC0();                            /* extern */
M2C_UNK func_802D5B7C(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK D_2D810C;
extern M2C_UNK D_8004AE10;
extern M2C_UNK *D_80052778;

void func_8021D53C(void) {
    D_80052778 = &D_2D810C;
    func_802D5B7C(&D_8004AE10, 0xB4);
    func_80222404();
    func_8022B80C();
    func_802224D0();
    func_8021DD60();
    func_8021E280();
    func_80230DC0();
}
