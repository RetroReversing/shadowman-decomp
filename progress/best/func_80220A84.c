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

extern s16 D_8002C110;
extern u16 D_8002C112;
extern s32 D_800569C0;
extern s32 D_800569C4;
extern s32 D_800569C8;
extern s32 D_800569CC;
extern s32 D_800569D0;
extern M2C_UNK D_800569E0;
extern s16 D_800569F0;
extern s16 D_800569F2;

void func_80220A84(void) {
    D_800569C8 = 0;
    D_800569C4 = 0;
    D_800569C0 = 0;
    D_800569D0 = 0;
    D_800569CC = 4;
    D_800569F0 = D_8002C112 * 4;
    D_800569F2 = D_8002C110 * 4;
    M2C_FIELD(&D_800569E0, f32 *, 0) = (f32) *(f32 *)0x200118;
    M2C_FIELD(&D_800569E0, f32 *, 8) = (f32) *(f32 *)0x20011C;
    M2C_FIELD(&D_800569E0, f32 *, 0xC) = (f32) *(f32 *)0x200120;
    M2C_FIELD(&D_800569E0, f32 *, 4) = (f32) *(f32 *)0x200124;
}
