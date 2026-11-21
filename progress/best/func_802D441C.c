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

extern s32 D_8007C300;
extern s32 D_8007C304;
extern s32 D_8007C308;
extern f32 D_8007C30C;
extern f32 D_8007C310;
extern f32 D_8007C314;

typedef struct { unsigned char pad[12]; int value; } __repair_field_C;
void *func_802D441C(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a1 == 0) {
        D_8007C30C = M2C_FIELD(arg0, f32 *, 8);
        D_8007C300 = ((__repair_field_C *)arg0)->value;
    }
    if (temp_a1 == 1) {
        D_8007C310 = M2C_FIELD(arg0, f32 *, 8);
        D_8007C304 = ((__repair_field_C *)arg0)->value;
    }
    if (temp_a1 == 2) {
        D_8007C314 = M2C_FIELD(arg0, f32 *, 8);
        D_8007C308 = ((__repair_field_C *)arg0)->value;
    }
    return arg0 + 0x10;
}
