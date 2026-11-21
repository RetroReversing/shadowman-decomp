/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern void *D_8005EA2C;

typedef struct { short field_0; short field_2; short field_4; short field_6; short field_8; short field_A; signed char field_C; signed char field_D; signed char field_E; signed char field_F; } __repair_record_arg0;
void func_80222BA8(void *arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, f32 arg5, f32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, void *arg11) {
    ((__repair_record_arg0*)arg0)->field_0 = (s16) (s32) (arg1 - (*(f32 *)((char *)(D_8005EA2C) + 0)));
    ((__repair_record_arg0*)arg0)->field_2 = (s16) (s32) (arg2 - (*(f32 *)((char *)(D_8005EA2C) + 4)));
    ((__repair_record_arg0*)arg0)->field_4 = (s16) (s32) (arg3 - (*(f32 *)((char *)(D_8005EA2C) + 8)));
    ((__repair_record_arg0*)arg0)->field_6 = 0;
    ((__repair_record_arg0*)arg0)->field_8 = (s16) ((s32) (arg5 * (f32) (*(u8 *)((char *)(arg11) + 4))) << 6);
    ((__repair_record_arg0*)arg0)->field_D = (s8) arg8;
    ((__repair_record_arg0*)arg0)->field_C = (s8) arg7;
    ((__repair_record_arg0*)arg0)->field_E = (s8) arg9;
    ((__repair_record_arg0*)arg0)->field_F = (s8) arg10;
    ((__repair_record_arg0*)arg0)->field_A = (s16) ((s32) (arg6 * (f32) (*(u8 *)((char *)(arg11) + 5))) << 6);
}
