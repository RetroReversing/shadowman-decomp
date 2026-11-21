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
extern float D_8007558C;
extern float D_80075594;
extern float D_80075590;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80240418();
extern char D_212078[];
extern void *D_8006A4FC;
extern u8 D_8006A58B;
extern char D_80075568[];
extern void *D_8007AFF8;

u8 func_8028AB24(void) {
    f32 sp10[3];
    f32 sp20[3];

    sp10[0] = D_8007558C;
    sp10[2] = D_80075594;
    sp10[1] = D_80075590 + *(f32 *)0x21526C;
    sp20[0] = M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    sp20[1] = M2C_FIELD(D_8006A4FC, f32 *, 0x28) + M2C_FIELD(((M2C_FIELD(D_8007AFF8, u8 *, 0x40) * 0x6C) + D_212078), f32 *, 0x30) + *(f32 *)0x215270;
    sp20[2] = M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    func_80240418(sp20, sp10, 0x3F800000);
    return D_8006A58B;
}
