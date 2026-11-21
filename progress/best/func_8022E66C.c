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

M2C_UNK func_802920F0();                            /* extern */
extern M2C_UNK D_8007DB78;

void func_8022E66C(void) {
    M2C_FIELD(&D_8007DB78, s8 *, 2) = 0;
    M2C_FIELD(&D_8007DB78, s8 *, 3) = 0;
    M2C_FIELD(&D_8007DB78, s8 *, 5) = 0;
    M2C_FIELD(&D_8007DB78, s8 *, 6) = 0;
    M2C_FIELD(&D_8007DB78, s8 *, 0x20) = 0;
    M2C_FIELD(&D_8007DB78, s8 *, 0x21) = 0;
    M2C_FIELD(&D_8007DB78, s8 *, 0x23) = 0;
    M2C_FIELD(&D_8007DB78, s8 *, 0xB) = 0;
    M2C_FIELD(&D_8007DB78, s32 *, 0x24) = 0;
    M2C_FIELD(&D_8007DB78, s32 *, 0x28) = 0;
    M2C_FIELD(&D_8007DB78, s32 *, 0x30) = -1;
    M2C_FIELD(&D_8007DB78, s32 *, 0x38) = 0;
    M2C_FIELD(&D_8007DB78, s32 *, 0x3C) = 0;
    M2C_FIELD(&D_8007DB78, f32 *, 0x18) = (f32) *(f32 *)0x202138;
    func_802920F0();
}
