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

extern float D_8005EA70;
extern float D_8005EA74;
extern int D_8005EA7C;
extern float D_8005EA78;
extern float D_8005EA30;
extern float D_8005EA34;
extern float D_8005EA38;
s32 func_80234DC8();
extern void *D_8005E9EC;
extern void *D_8005E9F0;
extern char D_8005EA80[];
extern s32 D_8006196C;
extern s32 D_80061978;
extern s32 D_80061988;
extern void *D_80061A10;

typedef struct { unsigned char pad_0[4]; int field_4; int field_8; } __repair_record_D_8005E9F0;
s32 func_80234CE8(void *arg0, s32 arg1) {
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1f;
    void *temp_a3;

    temp_fv0f = M2C_FIELD(arg0, f32 *, 0);
    temp_a3 = M2C_FIELD(D_8005E9EC, void **, 0x64);
    D_8005EA70 = temp_fv0f;
    temp_fv0 = M2C_FIELD(arg0, f32 *, 4);
    D_80061A10 = temp_a3;
    D_80061988 = ((__repair_record_D_8005E9F0*)D_8005E9F0)->field_4;
    D_8005EA74 = temp_fv0;
    temp_fv1f = M2C_FIELD(arg0, f32 *, 8);
    D_80061978 = ((__repair_record_D_8005E9F0*)D_8005E9F0)->field_8;
    D_8005EA7C = arg1;
    D_8005EA78 = temp_fv1f;
    if (M2C_FIELD(temp_a3, u8 *, 0x3E) == 2) {
        D_8005EA70 = (f32) (temp_fv0f - D_8005EA30);
        D_8005EA74 = (f32) (temp_fv0 - D_8005EA34);
        D_8005EA78 = (f32) (temp_fv1f - D_8005EA38);
        func_80234DC8(0);
        *((D_8006196C * 0xC) + D_8005EA80) = -1;
    }
    return D_8006196C;
}
