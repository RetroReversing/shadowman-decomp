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

f32 func_8022EC3C(f32);                             /* extern */
M2C_UNK func_8023E724(M2C_UNK *, s32, f32 *, M2C_UNK *); /* extern */
s32 func_80265490();                                /* extern */
M2C_UNK func_80297F20(M2C_UNK *, f32, f32, f32); /* extern */
extern s32 D_80072BD0;
extern M2C_UNK D_80075518;

void func_802684B4(void) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    M2C_UNK sp20;
    f32 sp24;
    f32 temp_fs0;

    if (func_80265490() == 1) {
        sp18 = 0.0f;
        sp14 = 0.0f;
        sp10 = 0.0f;
        func_8023E724(&D_80075518, D_80072BD0, &sp10, &sp20);
        temp_fs0 = *(f32 *)0x20E19C;
        sp24 += *(f32 *)0x20E198;
        func_80297F20(&sp20, 4.5f, 8.0f, func_8022EC3C(temp_fs0) + temp_fs0);
    }
}
