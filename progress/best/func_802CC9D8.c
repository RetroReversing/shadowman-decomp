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
extern float D_80075580;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023DF7C();
s32 func_802CC388();
s32 func_802CC640();
s32 func_802CC720();
s32 func_802CCA40();
s32 func_802CCA60();
extern s32 D_8002D420;
extern s32 D_8003AE38;
extern char D_80075518[];
extern char D_80075568[];
extern s32 D_800755F8;

void func_802CC9D8(void) {
    float *__base_D_80075580;
    s32 temp_fv1;

    if (!(D_8002D420 & 3)) {
        __base_D_80075580 = &D_80075580;
        temp_fv1 = (s32) ((*__base_D_80075580) - *(f32 *)0x21873C);
        if (temp_fv1 >= 4) {
            func_802CCA40(D_80075568);
            return;
        }
        if (temp_fv1 < -3) {
            (*__base_D_80075580) = (f32) ((*__base_D_80075580) + *(f32 *)0x218744);
        }
        func_802CCA60(D_80075568);
        return;
    }
    D_8003AE38 = 0;
    do { func_802CC720(*(f32 *)0x21874C); } while (0);
    if (D_800755F8 == 0) {
        func_802CC640();
    }
    if (D_8002D420 & 0x80) {
        func_8023DF7C(D_80075568, D_80075518, 0x2B, 0xA, 0x28, 2);
    }
    func_802CC388(0x10);
}
