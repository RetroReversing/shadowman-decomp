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

s32 func_80116EB0();
extern s32 D_8002D1CC;
extern char D_800596F0[];
extern char D_80059738[];
extern u16 D_80075534;

void func_8022B114(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    s32 *__base_D_8002D1CC;
    char *__base_D_800596F0;
    void *temp_a1;

    if (!(D_80075534 & 4)) {
        __base_D_8002D1CC = &D_8002D1CC;
        temp_a1 = ((*__base_D_8002D1CC) * 0x18) + (__base_D_800596F0 = D_800596F0);
        M2C_FIELD(temp_a1, s32 *, 8) = arg0;
        M2C_FIELD(temp_a1, s32 *, 0) = 2;
        M2C_FIELD(temp_a1, s32 *, 4) = 0;
        M2C_FIELD(temp_a1, f32 *, 0xC) = arg1;
        M2C_FIELD(temp_a1, f32 *, 0x10) = arg2;
        M2C_FIELD(temp_a1, f32 *, 0x14) = arg3;
        func_80116EB0(D_80059738, temp_a1, 1);
        (*__base_D_8002D1CC) = ((*__base_D_8002D1CC) + 1) % 3;
    }
}
