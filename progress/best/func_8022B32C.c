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

M2C_UNK func_80116EB0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_8002D1B4;
extern M2C_UNK D_8005901C;
extern M2C_UNK D_80059738;
extern u16 D_80075534;

void func_8022B32C(void *arg0) {
    if (!(D_80075534 & 4)) {
        M2C_FIELD(&D_80059738, s8 *, 0x2E) = 1;
        M2C_FIELD(&D_80059738, s16 *, 0x30) = (s16) (s32) M2C_FIELD(arg0, f32 *, 0xC);
        func_80116EB0(&D_8005901C, &D_8002D1B4, 1);
    }
}
