/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

extern float D_8002D200;
extern float D_8002D204;
s32 func_8021FB8C();
s32 func_8022A848();
s32 func_8022A92C();

void func_8022A7EC(s32 arg0, void *arg1, s16 arg2) {
    s32 temp_ft0;
    s32 temp_ft0_2;
    s32 temp_ft0_3;
    s32 temp_ft0_4;
    u8 var_t1;
    void *temp_t0;
    void *var_s0;

    var_s0 = arg1;
    if (var_s0 != NULL) {
loop_2:
        temp_t0 = M2C_FIELD(var_s0, void **, 0xC);
        if (M2C_FIELD(temp_t0, s32 *, 0x10) != 0) {
            if (M2C_FIELD(var_s0, u16 *, 4) & 1) {
                func_8022A848();
                return;
            }
            var_t1 = M2C_FIELD(var_s0, u8 *, 9);
            if (arg2 != 0) {
                var_t1 -= arg2;
                if (arg2 >= (s32) var_t1) {
                    var_t1 = 0;
                }
            }
            temp_ft0 = (s32) ((f32) (s16) M2C_FIELD(var_s0, u16 *, 0) * D_8002D200);
            temp_ft0_2 = (s32) ((f32) (s16) M2C_FIELD(var_s0, u16 *, 2) * D_8002D204);
            temp_ft0_3 = (s32) ((f32) M2C_FIELD(temp_t0, s16 *, 6) * D_8002D200);
            temp_ft0_4 = (s32) ((f32) M2C_FIELD(temp_t0, s16 *, 8) * D_8002D204);
            if (M2C_FIELD(temp_t0, u16 *, 0xE) & 1) {
                func_8022A92C((s16) temp_ft0, (s16) temp_ft0_2, (s16) temp_ft0_3, (s16) temp_ft0_4);
                return;
            }
            func_8021FB8C((s16) temp_ft0, (s16) temp_ft0_2, (s16) temp_ft0_3, (s16) temp_ft0_4, 0, (s32) M2C_FIELD(temp_t0, u16 *, 0xA), (s32) M2C_FIELD(temp_t0, u16 *, 0xC), (s32) M2C_FIELD(var_s0, u8 *, 6), (s32) M2C_FIELD(var_s0, u8 *, 7), (s32) M2C_FIELD(var_s0, u8 *, 8), var_t1 & 0xFF);
            goto block_13;
        }
block_13:
        var_s0 = M2C_FIELD(var_s0, void **, 0x10);
        if (var_s0 == NULL) {

        } else {
            goto loop_2;
        }
    }
}
