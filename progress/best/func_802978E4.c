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

s32 func_80113AD0();
void *func_80296BC0();
extern char D_80036C28[];

void *func_802978E4(s32 arg0, s32 arg1, f32 arg2) {
    s32 temp_a0;
    s32 temp_hi;
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg0, arg1, D_80036C28);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, f32 *, 0x50) = (f32) *(f32 *)0x21591C;
        M2C_FIELD(temp_v0, f32 *, 0x4C) = (f32) *(f32 *)0x215920;
        temp_v0_2 = func_80113AD0();
        temp_hi = MULT_HI(temp_v0_2, 0xB60B60B7);
        temp_a0 = temp_v0_2 >> 0x1F;
        M2C_FIELD(temp_v0, f32 *, 0x34) = arg2;
        M2C_FIELD(temp_v0, f32 *, 0x5C) = (f32) (temp_v0_2 - ((((s32) (temp_hi + temp_v0_2) >> 8) - temp_a0) * 0x168));
    }
    return temp_v0;
}
