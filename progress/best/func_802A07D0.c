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

f32 func_8022EC3C();
void *func_80296BC0();
extern char D_80036CE8[];

typedef struct { s32 w[3]; } __repair_words3;
void *func_802A07D0(s32 arg0, void *arg1, f32 arg2, f32 arg3) {
    f32 temp_fv0f;
    f32 temp_fv1;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg0, 0, D_80036CE8);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, __repair_words3 *, 0x18) = *(__repair_words3 *) ((s8 *) arg1 + 0x0);
        M2C_FIELD(temp_v0, f32 *, 0x5C) = arg2;
        M2C_FIELD(temp_v0, f32 *, 0x50) = (f32) *(f32 *)0x215EC0;
        temp_fv0f = ((temp_fv1 = *(f32 *)0x215EC8) - M2C_FIELD(temp_v0, f32 *, 0x5C)) * (func_8022EC3C() + temp_fv1);
        M2C_FIELD(temp_v0, s8 *, 0x73) = 0;
        M2C_FIELD(temp_v0, f32 *, 0xC) = arg3;
        M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
        M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv0f;
    }
    return temp_v0;
}
