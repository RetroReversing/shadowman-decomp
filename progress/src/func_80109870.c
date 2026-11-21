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

void *func_80239398();
s32 func_80261408();
extern char D_10954C[];
extern s32 D_8005EA0C;

void func_80109870(s32 arg0, s16 arg1, s16 arg2, s8 arg3) {
    void *temp_v0;
    void *temp_v0_2;

    if (((u32) (arg1 & 0xFFFF) < 0x1FFU)) {
        if ((arg0 != 0)) {
            temp_v0 = func_80239398(*(s32 *)((D_8005EA0C * 4) + func_80261408()), 0, 0, D_10954C, 0x10);
            M2C_FIELD(temp_v0, s32 *, 8) = arg0;
            temp_v0_2 = temp_v0 + 8;
            M2C_FIELD(temp_v0_2, s16 *, 4) = 0;
            M2C_FIELD(temp_v0_2, s16 *, 6) = arg2;
            M2C_FIELD(temp_v0_2, s16 *, 0xC) = arg1;
            M2C_FIELD(temp_v0_2, s8 *, 0xE) = arg3;
        }
    }
}
