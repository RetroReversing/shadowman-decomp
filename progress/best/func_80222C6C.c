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

typedef struct { short field_0; short field_2; short field_4; short field_6; short field_8; short field_A; signed char field_C; signed char field_D; signed char field_E; signed char field_F; } __repair_record_arg0;
void func_80222C6C(void *arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, f32 arg5, f32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, void *arg11) {
    ((__repair_record_arg0*)arg0)->field_0 = (s16) (s32) arg1;
    ((__repair_record_arg0*)arg0)->field_2 = (s16) (s32) arg2;
    ((__repair_record_arg0*)arg0)->field_6 = 0;
    ((__repair_record_arg0*)arg0)->field_4 = (s16) (s32) arg3;
    ((__repair_record_arg0*)arg0)->field_8 = (s16) ((s32) (arg5 * (f32) M2C_FIELD(arg11, u8 *, 4)) << 6);
    ((__repair_record_arg0*)arg0)->field_D = (s8) arg8;
    ((__repair_record_arg0*)arg0)->field_E = (s8) arg9;
    ((__repair_record_arg0*)arg0)->field_F = (s8) arg10;
    ((__repair_record_arg0*)arg0)->field_C = (s8) arg7;
    ((__repair_record_arg0*)arg0)->field_A = (s16) ((s32) (arg6 * (f32) M2C_FIELD(arg11, u8 *, 5)) << 6);
}
