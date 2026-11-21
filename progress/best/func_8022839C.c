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

M2C_UNK func_80272830(s32 *, f32 *, u8, M2C_UNK, s32, s32); /* extern */
extern u8 D_8002C971;
extern M2C_UNK D_80075568;

void func_8022839C(void) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    f32 sp28;
    f32 sp2C;
    f32 sp30;

    sp18 = M2C_FIELD(&D_80075568, s32 *, 0x24);
    sp1C = M2C_FIELD(&D_80075568, s32 *, 0x28);
    sp20 = M2C_FIELD(&D_80075568, s32 *, 0x2C);
    sp30 = 0.0f;
    sp2C = 0.0f;
    sp28 = 0.0f;
    do { func_80272830(&sp18, &sp28, D_8002C971, 0, 0, 0); } while (0);
}
