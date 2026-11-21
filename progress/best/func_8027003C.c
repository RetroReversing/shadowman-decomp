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

extern void *D_8006A4FC;
extern s32 D_8007AFB0;
extern s32 D_8007AFF8;
extern void *D_8007B0AC;

void func_8027003C(void *arg0) {
    void **__base_D_8006A4FC;
    s32 temp_v1_2;
    void *temp_v1;

    __base_D_8006A4FC = &D_8006A4FC;
    temp_v1 = (*__base_D_8006A4FC);
    (*__base_D_8006A4FC) = arg0;
    D_8007B0AC = temp_v1;
    temp_v1_2 = D_8007AFF8;
    D_8007AFF8 = M2C_FIELD(arg0, s32 *, 0x6C);
    D_8007AFB0 = temp_v1_2;
}
