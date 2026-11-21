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

void *func_801043F8(void *, M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80239398(s32, void *, M2C_UNK, M2C_UNK, s32); /* extern */
extern s32 D_8002D494;

typedef struct { s32 w[3]; } __repair_words3;
s32 func_8010BBA8(void *arg0, s16 arg1, s16 arg2, s16 arg3, f32 arg4) {
    void *temp_v0;

    temp_v0 = func_801043F8(arg0, 0x1C, 2, 0);
    M2C_FIELD(temp_v0, __repair_words3 *, 0x0) = *(__repair_words3 *) ((s8 *) arg0 + 0x0);
    M2C_FIELD(temp_v0, s16 *, 0x12) = arg3;
    M2C_FIELD(temp_v0, s16 *, 0x10) = arg1;
    M2C_FIELD(temp_v0, s16 *, 0x14) = arg2;
    M2C_FIELD(temp_v0, f32 *, 0xC) = arg4;
    func_80239398(D_8002D494, temp_v0, 0, 0, 0x8000);
    return 1;
}
