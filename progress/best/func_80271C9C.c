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

M2C_UNK func_8023A0DC(M2C_UNK, void *, M2C_UNK *, void *); /* extern */
M2C_UNK func_8026FCC4(f32, f32, f32, f32, f32, f32, f32); /* extern */
M2C_UNK func_80270090(s32, void *);                 /* extern */
f32 func_80271DBC();                                /* extern */
extern void *D_8006A4FC;
extern M2C_UNK D_8007AFC0;
extern M2C_UNK D_8007AFD0;
extern void *D_8007AFF8;

f32 func_80271C9C(f32 arg1, M2C_UNK arg2, s32 arg3) {
    f32 ret;
    f32 temp_fs0;
    f32 temp_fv0;
    M2C_UNK *__base_D_8007AFC0;

    __base_D_8007AFC0 = &D_8007AFC0;

    temp_fv0 = *(f32 *)0x213FCC;
    temp_fs0 = M2C_FIELD(D_8007AFF8, f32 *, 0x6C);
    if (temp_fs0 == temp_fv0) {
        M2C_FIELD(__base_D_8007AFC0, f32 *, 0) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x24);
        M2C_FIELD(__base_D_8007AFC0, f32 *, 4) = (f32) (M2C_FIELD(D_8006A4FC, f32 *, 0x28) + arg1);
        M2C_FIELD(__base_D_8007AFC0, f32 *, 8) = (f32) M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
        func_8023A0DC(0, D_8007AFF8, &D_8007AFD0, D_8006A4FC + 0x34);
        M2C_FIELD(&D_8007AFD0, f32 *, 0) = (f32) (M2C_FIELD(__base_D_8007AFC0, f32 *, 0) + M2C_FIELD(&D_8007AFD0, f32 *, 0));
        M2C_FIELD(&D_8007AFD0, f32 *, 4) = (f32) (M2C_FIELD(__base_D_8007AFC0, f32 *, 4) + M2C_FIELD(&D_8007AFD0, f32 *, 4));
        M2C_FIELD(&D_8007AFD0, f32 *, 8) = (f32) (M2C_FIELD(__base_D_8007AFC0, f32 *, 8) + M2C_FIELD(&D_8007AFD0, f32 *, 8));
        func_8026FCC4(M2C_FIELD(__base_D_8007AFC0, f32 *, 0), M2C_FIELD(__base_D_8007AFC0, f32 *, 4), M2C_FIELD(__base_D_8007AFC0, f32 *, 8), M2C_FIELD(&D_8007AFD0, f32 *, 0), M2C_FIELD(&D_8007AFD0, f32 *, 4), M2C_FIELD(&D_8007AFD0, f32 *, 8), *(f32 *)0x213FD0);
        ret = func_80271DBC();
    } else {
        M2C_FIELD(D_8007AFF8, f32 *, 0x6C) = temp_fv0;
        M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x44) & ~0x400);
        func_80270090(arg3 & 0xFF, D_8007AFF8);
        ret = temp_fs0;
    }
    return ret;
}
