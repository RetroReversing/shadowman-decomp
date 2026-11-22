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

M2C_UNK func_80109A1C(s32);                         /* extern */
M2C_UNK func_80297254(void *);                      /* extern */
extern M2C_UNK D_80036B10;
extern u8 D_8007DB78[];

void func_8029C3E0(void *arg0) {
    u8 *__base_D_8007DB78;
char *__repair_addr;

    s32 temp_a0;

    if (M2C_FIELD(arg0, f32 *, 0x54) <= 0.0f) {
        temp_a0 = *((M2C_FIELD(arg0, u8 *, 0x72) * 4) + &D_80036B10);
        if (temp_a0 != 0) {
            func_80109A1C(temp_a0);
            *((M2C_FIELD(arg0, u8 *, 0x72) * 4) + &D_80036B10) = 0;
        }
__base_D_8007DB78 = D_8007DB78;
    __repair_addr = (char *)((M2C_FIELD(arg0, u8 *, 0x72) + __base_D_8007DB78));

        M2C_FIELD(__repair_addr, s8 *, 0x48) = 0;
        M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x72) * 4) + __base_D_8007DB78), s32 *, 0x38) = 0;
        M2C_FIELD(arg0, f32 *, 0x50) = 0.0f;
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
        func_80297254(arg0);
    }
}
