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

f32 func_80113BE0(f32);                             /* extern */
M2C_UNK func_80116EB0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_8002D1B4;
extern M2C_UNK D_8005901C;
extern M2C_UNK D_80059738;
extern u16 D_80075534;

void func_8022B274(void *arg0) {
    f32 temp_fa0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 var_fv0;

    if (!(D_80075534 & 4)) {
        temp_fv1 = M2C_FIELD(arg0, f32 *, 0xC);
        M2C_FIELD(&D_80059738, f32 *, 0x38) = temp_fv1;
        temp_fv0f = M2C_FIELD(arg0, f32 *, 0x10);
        M2C_FIELD(&D_80059738, f32 *, 0x3C) = temp_fv0f;
        var_fv0 = M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(&D_80059738, f32 *, 0x40) = var_fv0;
        if (!(temp_fv0f <= var_fv0)) {
            var_fv0 = temp_fv0f;
        }
        temp_fv0f_2 = *(f32 *)0x201E54 / (temp_fv1 / var_fv0);
        temp_fa0 = temp_fv0f_2 + *(f32 *)0x201E58;
        M2C_FIELD(&D_80059738, s8 *, 0x2E) = 1;
        M2C_FIELD(&D_80059738, f32 *, 0x44) = temp_fv0f_2;
        M2C_FIELD(&D_80059738, f32 *, 0x48) = temp_fa0;
        M2C_FIELD(&D_80059738, s16 *, 0x30) = (s16) (s32) (func_80113BE0(temp_fa0) * M2C_FIELD(&D_80059738, f32 *, 0x3C));
        func_80116EB0(&D_8005901C, &D_8002D1B4, 1);
    }
}
