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

void *func_80233CD8(s32, s32);                      /* extern */
s32 func_80233D40(s32);                             /* extern */
s16 func_8023648C(s32);                             /* extern */
extern M2C_UNK D_8002C0F0;
extern f32 D_8002D2C0;
extern f32 D_8002D2C4;
extern f32 D_8002D2C8;
extern f32 D_8002D2CC;
extern f32 D_8002D2D0;
extern f32 D_8002D460;
extern f32 D_8002D464;
extern f32 D_8002D468;
extern f32 D_8002D46C;
extern s32 D_8002D470;
extern s32 D_8002D474;
extern s32 D_8005E9E4;
extern s32 D_8005E9FC;
extern s32 D_8005EA10;
extern s32 D_8005EA14;
extern s32 D_80069730;
extern s32 D_8006A9A0;

void func_8023375C(s32 arg0) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    void *temp_s1;

    temp_s1 = M2C_FIELD(func_80233CD8(D_8005EA14, arg0), void **, 0x6C);
    temp_fs0 = *(f32 *)0x2022E4;
    D_8002D2C0 = (f32) func_8023648C(D_8005E9FC) * temp_fs0;
    D_8002D2C4 = (f32) func_8023648C(D_8005E9FC) * temp_fs0;
    temp_fs0_2 = *(f32 *)0x2022E8;
    D_8002D2C8 = -((f32) func_8023648C(D_8005E9FC) * temp_fs0_2);
    D_8002D2CC = -((f32) func_8023648C(D_8005E9FC) * temp_fs0_2);
    D_8002D2D0 = -((f32) func_8023648C(D_8005E9FC) * temp_fs0_2);
    D_8005E9E4 = func_80233D40(D_8005E9FC);
    D_80069730 = func_80233D40(D_8005E9FC);
    D_8005EA10 = func_80233D40(D_8005E9FC);
    M2C_FIELD(&D_8002C0F0, f32 *, 4) = (f32) func_8023648C(D_8005E9FC);
    D_8006A9A0 = (s32) func_8023648C(D_8005E9FC);
    D_8002D470 = func_80233D40(D_8005E9FC);
    D_8002D460 = (f32) func_8023648C(D_8005E9FC);
    D_8002D464 = (f32) func_8023648C(D_8005E9FC);
    D_8002D474 = func_80233D40(D_8005E9FC);
    D_8002D468 = (f32) func_8023648C(D_8005E9FC);
    D_8002D46C = (f32) func_8023648C(D_8005E9FC);
    M2C_FIELD(temp_s1, f32 *, 0x24) = (f32) func_8023648C(D_8005E9FC);
    M2C_FIELD(temp_s1, f32 *, 0x28) = (f32) func_8023648C(D_8005E9FC);
    M2C_FIELD(temp_s1, f32 *, 0x2C) = (f32) func_8023648C(D_8005E9FC);
    M2C_FIELD(temp_s1, f32 *, 0x30) = (f32) func_8023648C(D_8005E9FC);
}
