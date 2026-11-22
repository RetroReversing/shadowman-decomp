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

extern M2C_UNK D_8004DA90;

void func_8010830C(void *arg0) {
    M2C_UNK *__base_D_8004DA90;
    s32 temp_v0;
    s16 var_v1;

    __base_D_8004DA90 = &D_8004DA90;
    M2C_FIELD(__base_D_8004DA90, u16 *, 0x18) = (u16) M2C_FIELD(arg0, u16 *, 8);
    M2C_FIELD(__base_D_8004DA90, s16 *, 0x1A) = (s16) (s32) ((f32) M2C_FIELD(arg0, s16 *, 0xA) * *(f32 *)0x10059C);
    M2C_FIELD(__base_D_8004DA90, u16 *, 0x1C) = (u16) M2C_FIELD(arg0, u16 *, 0xC);
    M2C_FIELD(__base_D_8004DA90, u16 *, 0x1E) = (u16) M2C_FIELD(arg0, u16 *, 0xC);
    temp_v0 = M2C_FIELD(arg0, s16 *, 0xE);
    var_v1 = temp_v0;
    if (temp_v0 == 0) {
        var_v1 = -1;
    }
    M2C_FIELD(__base_D_8004DA90, s16 *, 0x20) = var_v1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
