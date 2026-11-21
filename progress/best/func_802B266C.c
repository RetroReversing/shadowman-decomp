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

f32 func_8022EBE8(f32);                             /* extern */
f32 func_8022EC3C(f32);                             /* extern */
M2C_UNK func_80299D50(M2C_UNK, f32 *, M2C_UNK *, f32, f32, s32); /* extern */
M2C_UNK func_802A64B0(void *, M2C_UNK);             /* extern */
extern M2C_UNK D_80036B1C;
extern M2C_UNK D_8006A510;
extern u8 D_8007BD5C;

void func_802B266C(void *arg0, s32 arg1) {
    f32 sp18[3];
    f32 temp_fs0;
    f32 temp_fs0_2;

    if (arg1 == 0) {
        temp_fs0 = *(f32 *)0x2169D4;
        sp18[0] = M2C_FIELD(&D_8006A510, f32 *, 0x80) + func_8022EBE8(temp_fs0);
        sp18[1] = M2C_FIELD(&D_8006A510, f32 *, 0x84) + func_8022EBE8(temp_fs0);
        sp18[2] = M2C_FIELD(&D_8006A510, f32 *, 0x88) + func_8022EBE8(temp_fs0);
        temp_fs0_2 = func_8022EC3C(*(f32 *)0x2169D8) + *(f32 *)0x2169DC;
        func_80299D50(0x3D, sp18, &D_80036B1C, temp_fs0_2, func_8022EC3C(*(f32 *)0x2169E0) + *(f32 *)0x2169E4, 1);
        func_802A64B0(arg0, 2);
    }
    if (D_8007BD5C == 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
}
