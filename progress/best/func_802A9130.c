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

s32 func_80109918(s32, M2C_UNK, s16);               /* extern */
M2C_UNK func_802A7CD4();                            /* extern */

typedef struct { unsigned char pad_0[28]; int field_1C; unsigned char pad_20[64]; int field_60; } __repair_record_arg0;
void func_802A9130(void *arg0) {
    func_802A7CD4();
    ((__repair_record_arg0*)arg0)->field_60 = 0;
    ((__repair_record_arg0*)arg0)->field_1C = func_80109918(arg0 + 0x54, 0x7F, *(s16 *)0x216C26);
}
