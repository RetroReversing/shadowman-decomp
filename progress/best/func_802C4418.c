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

M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_802C2CC0();                            /* extern */
M2C_UNK func_802C2F30();                            /* extern */
M2C_UNK func_802C3274();                            /* extern */
M2C_UNK func_802C3BC0();                            /* extern */
M2C_UNK func_802C413C();                            /* extern */
M2C_UNK func_802C45AC();                            /* extern */
M2C_UNK func_802CC190();                            /* extern */
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_802C4418(void) {
char *__repair_addr;

    if (((M2C_FIELD(&D_80075518, s16 *, 0) == -1) || !(M2C_FIELD((__repair_addr = (char *)(((M2C_FIELD(&D_80075518, s16 *, 0) * 0x38) + M2C_FIELD(&D_80075518, s32 *, 0x30)))), u16 *, 4) & 2)) && ((M2C_FIELD(&D_80075518, s16 *, 2) == -1) || !(M2C_FIELD(((M2C_FIELD(&D_80075518, s16 *, 2) * 0x38) + M2C_FIELD(&D_80075518, s32 *, 0x30)), u16 *, 4) & 2))) {
        func_8023DF7C(&D_80075568, &D_80075518, 0, 0xA, 0x28, 2);
        func_802C45AC();
        return;
    }
    if ((M2C_FIELD(&D_80075518, s16 *, 0) == -1) || !(M2C_FIELD(((M2C_FIELD(&D_80075518, s16 *, 0) * 0x38) + M2C_FIELD(&D_80075518, s32 *, 0x30)), u16 *, 4) & 2)) {
        if (M2C_FIELD(&D_80075518, s16 *, 4) != 0x60) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x60, 0xA, 0x28, 2);
        }
    }
    if (((M2C_FIELD(&D_80075518, s16 *, 2) == -1) || !(M2C_FIELD(((M2C_FIELD(&D_80075518, s16 *, 2) * 0x38) + M2C_FIELD(&D_80075518, s32 *, 0x30)), u16 *, 4) & 2)) && (M2C_FIELD(&D_80075518, s16 *, 4) != 0x5F)) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x5F, 0xA, 0x28, 2);
    }
    func_802C2CC0();
    func_802C3BC0();
    func_802C2F30();
    func_802C413C();
    func_802C3274();
    func_802CC190();
}
