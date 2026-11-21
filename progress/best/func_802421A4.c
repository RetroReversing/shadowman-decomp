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

extern short D_8006A710;
extern int D_80052774;
extern float D_8006A714;
extern float D_8006A718;
f32 func_80113BE0();
s32 func_8024227C();
s32 func_80242288();
extern s16 D_8002C290;
extern s16 D_8002C292;
extern char D_80052770[];
extern f32 D_80074BC0;

void func_802421A4(s32 arg0, void *arg1) {
    float *__base_D_8006A714;
    short *__base_D_8006A710;
    s16 temp_v1_2;
    u8 temp_v1;
    void *temp_a0;

    __base_D_8006A710 = &D_8006A710;
    temp_a0 = (arg0 & 0xFF) + __base_D_8006A710;
    temp_v1 = M2C_FIELD(temp_a0, u8 *, 0xC);
    switch (temp_v1) {
        __base_D_8006A714 = &D_8006A714;
        case 0:
            D_8002C290 = (s16) (s32) (func_80113BE0((*__base_D_8006A714), temp_a0, __base_D_8006A710) * (f32) (M2C_FIELD(arg1, u8 *, 4) << 6));
            func_80113BE0(D_8006A718);
            func_8024227C();
            break;
        case 1:
            D_8002C290 = 0;
            D_8002C292 = (s16) (s32) ((f32) (*(&D_8006A710)) * *(f32 *)0x2027B8 * (f32) M2C_FIELD(arg1, u8 *, 5));
            temp_v1_2 = (u16) (*__base_D_8006A710) - (D_80052774 * 8);
            (*__base_D_8006A710) = temp_v1_2;
            if (temp_v1_2 & 0x8000) {
                (*__base_D_8006A710) = (s16) (temp_v1_2 + 0x1000);
            }
            (*__base_D_8006A714) = M2C_BITWISE(f64, (D_8006A718 + (D_80074BC0 * *(f32 *)0x2027C0)));
            return;
    }
    func_80242288(0x80070000, __base_D_8006A710);
    return;
}
