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

M2C_UNK func_802C17C0();                            /* extern */
extern s32 D_8002DBDC;
extern s32 D_8002DBEC;
extern s32 D_80072BEC;
extern M2C_UNK D_80075518;

void func_802C1DA0(void) {
char *__repair_addr;

    if (!(M2C_FIELD(&D_80075518, u16 *, 0x1C) & 4)) {
        func_802C17C0();
        if ((M2C_FIELD(&D_80075518, s16 *, 0) != -1) && (M2C_FIELD(&D_80075518, s16 *, 0) != 0x102) && (M2C_FIELD((__repair_addr = (char *)(((M2C_FIELD(&D_80075518, s16 *, 0) * 0x38) + M2C_FIELD(&D_80075518, s32 *, 0x30)))), u16 *, 4) & 2)) {
            D_8002DBDC = 1;
            D_80072BEC = 0;
        }
        if ((M2C_FIELD(&D_80075518, s16 *, 2) != -1) && (M2C_FIELD(&D_80075518, s16 *, 2) != 0x103) && (M2C_FIELD(((M2C_FIELD(&D_80075518, s16 *, 2) * 0x38) + M2C_FIELD(&D_80075518, s32 *, 0x30)), u16 *, 4) & 2)) {
            D_8002DBEC = 1;
            D_80072BEC = 1;
        }
    }
}
