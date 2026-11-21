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

s32 func_801043F8(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_802332B0(M2C_UNK, void *, void **, M2C_UNK); /* extern */
extern void *D_8005E9F0;

void func_8023325C(void) {
    void **__base_D_8005E9F0;
    s16 temp_v0;
    s16 temp_v1;
    s32 var_a0;
    s32 var_v0;

    __base_D_8005E9F0 = &D_8005E9F0;
    if (M2C_FIELD((*__base_D_8005E9F0), s32 *, 0x18) == 0) {
        temp_v0 = M2C_FIELD((*__base_D_8005E9F0), s16 *, 0x20);
        var_a0 = temp_v0 + 7;
        if (var_a0 < 0) {
            var_a0 = temp_v0 + 0xE;
        }
        M2C_FIELD((*__base_D_8005E9F0), s32 *, 0x18) = func_801043F8(var_a0 >> 3, 2, 0);
        temp_v1 = M2C_FIELD((*__base_D_8005E9F0), s16 *, 0x20);do{
        var_v0 = temp_v1 + 7;}while(0);
        if (var_v0 < 0) {
            var_v0 = temp_v1 + 0xE;
        }
        if ((var_v0 >> 3) > 0) {
            func_802332B0(1, (*__base_D_8005E9F0), __base_D_8005E9F0, 0xFF);
        }
    }
}
