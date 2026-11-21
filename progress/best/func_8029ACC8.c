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

void *func_80296BC0();
extern char D_80036C60[];

typedef struct { s32 w[3]; } __repair_words3;
void *func_8029ACC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4, void *arg5, f32 arg6, f32 arg7) {
    void *temp_v0;

    temp_v0 = func_80296BC0(arg2);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x6C) = arg0;
        M2C_FIELD(temp_v0, __repair_words3 *, 0x24) = *(__repair_words3 *) ((s8 *) arg4 + 0x0);
        M2C_FIELD(temp_v0, __repair_words3 *, 0x30) = *(__repair_words3 *) ((s8 *) arg5 + 0x0);
        M2C_FIELD(temp_v0, f32 *, 0x50) = arg7;
        M2C_FIELD(temp_v0, f32 *, 0x54) = arg7;
        M2C_FIELD(temp_v0, s8 *, 0x73) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x58) = 0;
        M2C_FIELD(temp_v0, f32 *, 0x4C) = arg6;
    }
    return temp_v0;
}
