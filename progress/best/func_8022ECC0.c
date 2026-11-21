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

extern float D_8002D204;
s32 func_8022EEB8();
extern char D_8002C100[];
extern u16 D_8002C110;
extern u16 D_8002C112;
extern s32 D_8002C240;
extern char D_8002D200[];
extern void *D_8005387C;
extern void *D_80056998;
extern void *D_800569A4;
extern char D_80059820[];

void func_8022ECC0(s16 arg0, s16 arg1) {
    s32 *temp_v0;
    f32 temp_fv1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_fv1f;
    s32 temp_fv1f_2;
    s32 temp_v1;
    void *temp_a2;
    void *temp_a3;
    void *temp_t0;
    void *temp_t1;
    void *temp_t2;
    void *temp_t3;

    temp_a3 = D_8005387C;
    temp_t1 = D_8005387C + 8;
    temp_t0 = D_80056998;
    temp_t2 = D_80056998 + 8;
    temp_a2 = D_800569A4;
    temp_fv1 = *(f32 *)0x20214C;
    temp_t3 = D_800569A4 + 8;
    D_8005387C = temp_t1;
    D_80056998 = temp_t2;
    D_800569A4 = temp_t3;
    temp_fv1f = (s32) ((f32) arg0 * D_8002D204);
    temp_fv1f_2 = (s32) ((f32) arg1 * D_8002D204);
    temp_a1 = temp_fv1f << 0x10;
    temp_a0 = ((s32) ((f32) (s16) (temp_fv1f - temp_fv1f_2) * temp_fv1) & 0xFFF) | 0xED000000;
    M2C_FIELD(temp_a3, s32 *, 0) = temp_a0;
    temp_v1 = (((s32) ((f32) D_8002C110 * temp_fv1) & 0xFFF) << 0xC) | ((s32) ((f32) (s16) (D_8002C112 - (temp_fv1f + temp_fv1f_2)) * temp_fv1) & 0xFFF);
    M2C_FIELD(temp_a3, s32 *, 4) = temp_v1;
    M2C_FIELD(temp_t0, s32 *, 0) = temp_a0;
    M2C_FIELD(temp_t0, s32 *, 4) = temp_v1;
    M2C_FIELD(temp_a2, s32 *, 0) = temp_a0;
    M2C_FIELD(temp_a2, s32 *, 4) = temp_v1;
    if (temp_a1 == 0) {
        D_8005387C = temp_t1 + 8;
        D_80056998 = temp_t2 + 8;
        M2C_FIELD(D_8005387C, s32 *, 8) = 0xDC080008;
        M2C_FIELD(temp_t1, s32 **, 4) = D_8002C100;
        M2C_FIELD(D_80056998, s32 *, 8) = 0xDC080008;
        M2C_FIELD(temp_t2, s32 **, 4) = D_8002C100;
        D_800569A4 = temp_t3 + 8;
        M2C_FIELD(D_800569A4, s32 *, 8) = 0xDC080008;
        func_8022EEB8(0xDC080008, temp_a1, temp_a2, temp_a3);
        return;
    }
    D_8005387C = temp_t1 + 8;
    D_80056998 = temp_t2 + 8;
    D_800569A4 = temp_t3 + 8;
    temp_v0 = (D_8002C240 * 0x10) + D_80059820;
    M2C_FIELD(temp_v0, s16 *, 4) = 0x3FF;
    temp_v1_2 = D_8002C110 * 2;
    M2C_FIELD(temp_v0, s16 *, 0) = temp_v1_2;
    M2C_FIELD(temp_v0, s16 *, 8) = temp_v1_2;
    temp_v1_3 = D_8002C112 * 2;
    M2C_FIELD(temp_v0, s16 *, 2) = temp_v1_3;
    M2C_FIELD(temp_v0, s16 *, 0xE) = 0;
    M2C_FIELD(temp_v0, s16 *, 0xC) = 0;
    M2C_FIELD(temp_v0, s16 *, 6) = 0;
    M2C_FIELD(temp_v0, s16 *, 0xA) = (s16) (temp_v1_3 - (temp_fv1f_2 * 2));
    M2C_FIELD(D_8005387C, s32 *, 8) = 0xDC080008;
    M2C_FIELD(temp_t1, s32 **, 4) = temp_v0;
    M2C_FIELD(D_80056998, s32 *, 8) = 0xDC080008;
    M2C_FIELD(temp_t2, s32 **, 4) = temp_v0;
    M2C_FIELD(D_800569A4, s32 *, 8) = 0xDC080008;
    M2C_FIELD(temp_t3, s32 **, 4) = temp_v0;
}
