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

M2C_UNK func_80103480(s32, s32, s32);               /* extern */
extern s32 D_8005979C;

void func_8022BDE0(void *arg0) {
    s32 *__base_D_8005979C;
    s32 temp_s3;
    s32 var_v0;
    u32 temp_lo;
    u32 var_s0;
    u8 temp_v0;

    var_s0 = 0;
    temp_v0 = M2C_FIELD(arg0, u8 *, 4);
    temp_lo = M2C_FIELD(arg0, u8 *, 5) * temp_v0;
    temp_s3 = M2C_FIELD(arg0, s32 *, 0xC);
    __base_D_8005979C = &D_8005979C;
    /*__repair_pointer_balance*/if ((unsigned long)__base_D_8005979C & 0x100) {
func_80103480((*(&D_8005979C)), temp_s3, temp_lo * 4);
} else {
func_80103480((*(&D_8005979C)), temp_s3, temp_lo * 4);
}
    if (temp_lo != 0) {
        var_v0 = 0 * 4;
        do {/*__repair_call_balance*/if(var_s0){
            func_80103480(temp_s3 + var_v0, ((*__base_D_8005979C) + ((temp_lo - temp_v0) * 4)) - var_v0, temp_v0 * 4);}else{
            func_80103480(temp_s3 + var_v0, ((*__base_D_8005979C) + ((temp_lo - temp_v0) * 4)) - var_v0, temp_v0 * 4);}
            var_s0 += M2C_FIELD(arg0, u8 *, 4);
            var_v0 = var_s0 * 4;
        } while (var_s0 < temp_lo);
    }
}
