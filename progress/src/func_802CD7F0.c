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

s32 func_80268AF8(M2C_UNK);                         /* extern */
M2C_UNK func_80268E6C(M2C_UNK, s32);                /* extern */
M2C_UNK func_8026B618(s32, M2C_UNK);                /* extern */
M2C_UNK func_8026B718(s32, M2C_UNK);                /* extern */
s32 func_8026B72C(s32);                             /* extern */
extern f32 D_80074BC0;

void func_802CD7F0(s32 arg0) {
    f32 temp_fs0;

    temp_fs0 = D_80074BC0 * ((f32) func_80268AF8(3) * *(f32 *)0x2187FC) * *(f32 *)0x218800;
    if ((*(f32 *)0x218804 <= (f32) func_80268AF8(4)) && (func_8026B72C(arg0) <= 0)) {
        func_8026B618(arg0, 1);
        func_8026B718(arg0, -1);
    }
    func_80268E6C(4, (s32) temp_fs0);
}
