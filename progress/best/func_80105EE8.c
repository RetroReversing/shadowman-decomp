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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern char D_8004AEB8[];
extern void *D_8004AEC0;

typedef struct { unsigned char pad[12]; int value; } __repair_field_C;
void func_80105EE8(void *arg0) {
    s32 temp_v1;

    ((__repair_field_C *)arg0)->value = 0;
    temp_v1 = *M2C_FIELD(arg0, s32 **, 0);
    switch (temp_v1) {                              /* irregular */
    case 2:
        D_8004AEC0 = arg0;
        return;
    case 1:
        if (((__repair_field_C *)D_8004AEB8)->value == NULL) {
            ((__repair_field_C *)D_8004AEB8)->value = arg0;
            return;
        }
        M2C_FIELD(((__repair_field_C *)D_8004AEB8)->value, void **, 0xC) = arg0;
        return;
    }
}
