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

M2C_UNK func_8021E990(f32, f32, u8, s32, f32, f32, f32, f32, s32, s32, s32, s32, s32); /* extern */
s32 func_80296738(M2C_UNK);                         /* extern */
M2C_UNK func_80297748(void *, s32);                 /* extern */
M2C_UNK func_80297AF4(void *);                      /* extern */
extern s32 D_8002C1B0;
extern M2C_UNK D_80036B28;
extern M2C_UNK D_8007DB78;

void func_8029798C(void *arg0) {
f32 __repair_cmp_l; f32 __repair_cmp_r;

    f32 temp_fv0f;
    f32 temp_fv1;
    s32 temp_v0;

    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) + (M2C_FIELD(arg0, f32 *, 0x18) * M2C_FIELD(&D_8007DB78, f32 *, 0x14)));
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + (M2C_FIELD(arg0, f32 *, 0x1C) * M2C_FIELD(&D_8007DB78, f32 *, 0x14)));
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + (M2C_FIELD(arg0, f32 *, 0x20) * M2C_FIELD(&D_8007DB78, f32 *, 0x14)));
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (M2C_FIELD(arg0, f32 *, 0x4C) + (M2C_FIELD(&D_8007DB78, f32 *, 0x14) * *(f32 *)0x215924));
    temp_fv1 = *(f32 *)0x21592C;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + (M2C_FIELD(&D_8007DB78, f32 *, 0x14) * *(f32 *)0x215928));
    if (temp_fv1 < M2C_FIELD(arg0, f32 *, 0x4C)) {
        M2C_FIELD(arg0, f32 *, 0x4C) = temp_fv1;
    }
    func_80297748(arg0, M2C_FIELD(arg0, s32 *, 0x5C));
    __repair_cmp_r = M2C_FIELD(arg0, f32 *, 4);
__repair_cmp_l = M2C_FIELD(arg0, f32 *, 0x34);
if (__repair_cmp_l < __repair_cmp_r) {
        M2C_FIELD(arg0, f32 *, 0x50) = 0.0f;
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
        func_80297AF4(arg0);
    }
    temp_v0 = func_80296738(0x1B);
    D_8002C1B0 = temp_v0;
    if (temp_v0 != 0) {
        temp_fv0f = *(f32 *)0x215930;
        func_8021E990(M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(&D_80036B28, u8 *, 0), temp_v0, M2C_FIELD(arg0, f32 *, 8), temp_fv0f, temp_fv0f, M2C_FIELD(arg0, f32 *, 0x4C), (s32) M2C_FIELD(&D_80036B28, u8 *, 0), (s32) M2C_FIELD(&D_80036B28, u8 *, 1), (s32) M2C_FIELD(&D_80036B28, u8 *, 2), 0xFF, temp_v0);
    }
}
