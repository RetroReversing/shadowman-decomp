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

s32 func_80118330();                                /* extern */
M2C_UNK func_80118350(s32);                 /* extern */
extern void *D_80027784;

typedef struct { short field_0; unsigned char pad_2[6]; void * field_8; int field_C; } __repair_record_D_80027784;
void func_80116200(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_80118330();
    ((__repair_record_D_80027784*)D_80027784)->field_8 = arg0;
    ((__repair_record_D_80027784*)D_80027784)->field_0 = 1;
    ((__repair_record_D_80027784*)D_80027784)->field_C = (s32) M2C_FIELD(arg0, s32 *, 4);
    func_80118350(temp_v0);
}
