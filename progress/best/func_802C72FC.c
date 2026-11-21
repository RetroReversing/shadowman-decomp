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
extern short D_80075546;
extern float D_80075578;
extern int D_800452D0;
extern short D_800452E6;
extern int D_80052774;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023DF7C();
s32 func_802C71E4();
s32 func_802C744C();
extern s32 D_8002D420;
extern s32 D_80030E40;
extern f32 D_80030E48;
extern char D_80044EB0[];
extern f32 D_800458A8;
extern char D_80052770[];
extern char D_80075518[];
extern char D_80075568[];

void func_802C72FC(void) {
    float *__base_D_80075578;
    if (D_80075546 == 0) {
        D_80030E40 = 0;
    }
    __base_D_80075578 = &D_80075578;
    if ((*__base_D_80075578) <= *(f32 *)0x218540) {
        if (D_80075546 >= 7) {
            func_8023DF7C(D_80075568, D_80075518, 0x12, 0xA, 0x28, 2);
        }
    }
    if (D_80030E40 >= 0x19) {
        func_8023DF7C(D_80075568, D_80075518, 0x12, 0xA, 0x4B, 2);
    }
    if (D_800452D0 != 0) {
        if (D_800452E6 != 0) {
            if ((*__base_D_80075578) > 0.0f) {
                (*__base_D_80075578) = 0.0f;
            }
            func_8023DF7C(D_80075568, D_80075518, 0x12, 0xA, 0x4B, 2);
        }
    }
    if (D_8002D420 & 0x80) {
        if (D_80052774 >= 3) {
            func_802C744C();
            return;
        }
        D_80030E48 = D_800458A8;
        /* Duplicate return node #19. Try simplifying control flow for better match */
        func_802C71E4();
        return;
    }
    func_802C71E4();
}
