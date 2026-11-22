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

M2C_UNK func_8023A0DC(f32, f32, M2C_UNK, f32 *, void *); /* extern */
M2C_UNK func_8023B094(void *);                      /* extern */
M2C_UNK func_80276EC0(f32, f32, f32, M2C_UNK);      /* extern */
extern M2C_UNK D_80052770;
extern void *D_8006A4FC;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x28, 0x2c, 0x30, 0x34, 0x40, 0x44, 0x58, 0x5c, 0x60, 0x64], gap at: 0x38. */
void func_8027AAB0(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    union {
        unsigned char bytes[16];
        struct { f32 value; } view_sp18;
        struct { unsigned char pad[4]; f32 value; } view_sp1C;
        struct { unsigned char pad[8]; f32 value; } view_sp20;
    } m2c_initial_frame;

             
    f32 temp_ft0;
    f32 temp_fv0f;
    f32 var_fa0;
    f32 var_fa1;
    f32 var_fs1f;
    f32 var_fs2;
    f32 var_fs2f;
    f32 var_fv1;
    f32 var_fv1f;

    var_fs1f = M2C_FIELD(D_8006A4FC, f32 *, 0xC);
    var_fs2 = M2C_FIELD(D_8006A4FC, f32 *, 0x10);
    var_fs2f = M2C_FIELD(D_8006A4FC, f32 *, 0x14);
    func_8023B094(D_8006A4FC);
    func_8023A0DC(arg0, arg1, arg2, &m2c_initial_frame.view_sp18.value, D_8006A4FC + 0x34);
    var_fa1 = 0.0f;
    temp_ft0 = (f32) M2C_FIELD(&D_80052770, s32 *, 4);
    var_fa0 = 0.0f;
    var_fv1 = 0.0f;
    var_fv1f = 0.0f;
    if (temp_ft0 > 0.0f) {
        temp_fv0f = *(f32 *)0x2144BC;
        do {
            var_fs1f = (var_fs1f + (m2c_initial_frame.view_sp18.value * (*(f32 *)0x2144BC))) * arg3;
            var_fs2 = (var_fs2 + (m2c_initial_frame.view_sp1C.value * (*(f32 *)0x2144BC))) * arg3;
            var_fs2f = (var_fs2f + (m2c_initial_frame.view_sp20.value * (*(f32 *)0x2144BC))) * arg3;
            var_fv1f += *(f32 *)0x2144C0;
            var_fa0 += var_fs1f;
            var_fa1 += var_fs2;
            var_fv1 += var_fs2f;
        } while (var_fv1f < temp_ft0);
    }
    M2C_FIELD(D_8006A4FC, f32 *, 0xC) = var_fs1f;
    M2C_FIELD(D_8006A4FC, f32 *, 0x10) = var_fs2;
    M2C_FIELD(D_8006A4FC, f32 *, 0x14) = var_fs2f;
    func_80276EC0(var_fa0, var_fa1, var_fv1, 0x60);
}
