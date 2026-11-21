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

M2C_UNK func_8011BA20(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8023E724(M2C_UNK *, s32, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_802A5EC4(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_802A6548(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK D_21792C;
extern s32 D_80072BCC;
extern M2C_UNK D_80075518;

void func_802CEEB8(void) {
    char sp18[0x10];
    char sp28[0x10];

    func_8011BA20(sp18, 0, 0xC);
    func_8023E724(&D_80075518, D_80072BCC, sp18, sp28);
    if (func_802A5EC4(sp28, sp18, &D_21792C, 0, 0, 0) == 0) {
        func_802A6548(sp28, 0x48);
    }
}
