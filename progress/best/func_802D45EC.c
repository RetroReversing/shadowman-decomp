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

s32 func_802D60E4();
extern s32 D_80045B60;
extern s8 D_8007C2DC;
extern char D_8007D100[];

typedef struct { unsigned char pad[4]; int value; } __repair_field_4;
void *func_802D45EC(void *arg0) {
    char *__base_D_8007D100;

    __base_D_8007D100 = D_8007D100;
    D_8007C2DC = ((__repair_field_4 *)arg0)->value;
    do { func_802D60E4(D_80045B60, (((__repair_field_4 *)arg0)->value * 0x18) + __base_D_8007D100); } while (0);
    return arg0 + 8;
}
