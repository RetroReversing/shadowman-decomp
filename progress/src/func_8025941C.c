/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

extern f32 D_80074BC0;
extern s32 D_8007BE5C;
extern f32 D_8007BEB8;

void func_8025941C(void *arg0) {
    s32 temp_v1;

    if (D_8007BE5C == 0) {
        temp_v1 = *M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 **, 0x6C);
        switch (temp_v1) {                          /* irregular */
        case 1:
            D_8007BEB8 += D_80074BC0 * *(f32 *)0x20389C;
            return;
        case 2:
            D_8007BEB8 -= D_80074BC0 * *(f32 *)0x2038A0;
            break;
        }
    }
}
