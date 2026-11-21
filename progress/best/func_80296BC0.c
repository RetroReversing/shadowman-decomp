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

extern u16 D_8005EA0E;
extern void *D_8007BAF4;
extern void *D_8007BB28;

typedef struct { s32 w[3]; } __repair_words3;
void *func_80296BC0(void *arg0, void *arg1, s32 arg2) {
    f32 __repair_fzero = 0.0f;

    s32 __repair_store_0;
    s32 __repair_store_1;
    s32 __repair_store_2;
    void *temp_a3;

    temp_a3 = D_8007BB28;
    if (temp_a3 != NULL) {
        if (arg0 != NULL) {
            __repair_store_0 = (s32) M2C_FIELD(arg0, s32 *, 0);
            __repair_store_1 = (s32) M2C_FIELD(arg0, s32 *, 4);
            __repair_store_2 = (s32) M2C_FIELD(arg0, s32 *, 8);
            M2C_FIELD(temp_a3, s32 *, 0) = __repair_store_0;
            M2C_FIELD(temp_a3, s32 *, 4) = __repair_store_1;
            M2C_FIELD(temp_a3, s32 *, 8) = __repair_store_2;
        }
        if (arg1 != NULL) {
            M2C_FIELD(temp_a3, __repair_words3 *, 0x18) = *(__repair_words3 *) ((s8 *) arg1 + 0x0);
        }
        M2C_FIELD(temp_a3, s8 *, 0x72) = 0;
        M2C_FIELD(temp_a3, s8 *, 0x73) = 0;
        M2C_FIELD(temp_a3, s8 *, 0x6A) = 0;
        M2C_FIELD(temp_a3, s8 *, 0x69) = 0;
        M2C_FIELD(temp_a3, s8 *, 0x68) = 0;
        M2C_FIELD(temp_a3, s32 *, 0x48) = arg2;
        M2C_FIELD(temp_a3, s32 *, 0x44) = 0;
        M2C_FIELD(temp_a3, s32 *, 0x64) = 0;
        M2C_FIELD(temp_a3, f32 *, 0x4C) = __repair_fzero;
        M2C_FIELD(temp_a3, f32 *, 0x54) = __repair_fzero;
        M2C_FIELD(temp_a3, f32 *, 0x50) = __repair_fzero;
        M2C_FIELD(temp_a3, f32 *, 0x58) = (f32) *(f32 *)0x2158EC;
        M2C_FIELD(temp_a3, u16 *, 0x70) = (u16) D_8005EA0E;
        D_8007BB28 = M2C_FIELD(temp_a3, void **, 0x3C);
        M2C_FIELD(temp_a3, void **, 0x3C) = (void *) D_8007BAF4;
        if (D_8007BAF4 != NULL) {
            M2C_FIELD(D_8007BAF4, void **, 0x40) = temp_a3;
        }
        M2C_FIELD(temp_a3, s32 *, 0x40) = 0;
        D_8007BAF4 = temp_a3;
    }
    return temp_a3;
}
