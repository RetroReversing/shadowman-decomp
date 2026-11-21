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

s32 func_8025FE04();
extern char D_209890[];
extern s32 D_80074BB0;
extern u8 D_80074C32;

void func_8025FDC4(void) {
    char *__base_D_209890;
    __base_D_209890 = D_209890;
    if (M2C_FIELD(((D_80074BB0 * 0x34) + __base_D_209890), s16 *, 8) == 0) {
        func_8025FE04(__base_D_209890);
    } else {
        D_80074C32 = 2;
        if ((u32) (D_80074BB0 - 4) >= 0xCU) {
            D_80074C32 |= 4;
        }
    }
}
