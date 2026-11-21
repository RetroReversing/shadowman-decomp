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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern char D_80045EE0[];
extern char D_80045F30[];
extern char D_8007DA70[];

void func_802D62B0(void *arg0) {
    s32 *temp_v1_2;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_a1;

    temp_a2 = M2C_FIELD(arg0, s32 *, 4) * 4;
    temp_a1 = (M2C_FIELD(arg0, s32 *, 8) * 8) + *(temp_a2 + D_80045F30);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(temp_a1, s32 *, 4);
    temp_v0 = *(temp_a2 + D_80045EE0);
    temp_v1 = M2C_FIELD(temp_a1, s32 *, 0);
    if ((*(temp_a2 + D_80045EE0)) != temp_v1) {
        M2C_FIELD(arg0, s32 *, 0x10) = temp_v1;
        temp_v1_2 = temp_a2 + D_8007DA70;
        temp_a0 = *temp_v1_2;
        if ((temp_a0 == 0) || (temp_a0 == M2C_FIELD(temp_a1, s32 *, 0))) {
            *temp_v1_2 = M2C_FIELD(temp_a1, s32 *, 0);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x10) = (*(temp_a2 + D_80045EE0));
    }
}
