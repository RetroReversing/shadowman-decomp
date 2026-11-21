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

s32 func_80268F14();
extern f32 D_80030F10;
extern s16 D_80030F14;
extern s16 D_80030F16;
extern s16 D_80030F18;
extern f32 D_80075AA0;
extern char D_80075AA8[];
extern s32 D_80075AF4;

typedef struct { unsigned char pad[108]; int value; } __repair_field_6C;
void func_80268ED8(s32 arg0, s32 arg1) {
    char *__base_D_80075AA8;
    void *temp_a0;

    __base_D_80075AA8 = D_80075AA8;
    temp_a0 = (arg0 * 4) + __base_D_80075AA8;
    if (((__repair_field_6C *)temp_a0)->value == arg1) {
        func_80268F14(temp_a0);
    } else {
        ((__repair_field_6C *)temp_a0)->value = arg1;
        D_80075AA0 = *(f32 *)0x20E1E8;
        D_80075AF4 = 1;
        D_80030F14 = 0xFF;
        D_80030F16 = 0;
        D_80030F18 = 0xFF;
        D_80030F10 = *(f32 *)0x20E1EC;
    }
}
