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

M2C_UNK func_8021DF4C(M2C_UNK, void *, void *, void *); /* extern */
M2C_UNK func_8021DFD8(M2C_UNK, void *, M2C_UNK, void *); /* extern */
extern M2C_UNK D_8002C114;
extern s32 D_8002C11C;
extern s32 D_8002C240;
extern void *D_80053878;
extern void *D_8005387C;
extern void *D_80053880;
extern void *D_80053884;
extern M2C_UNK D_80053910;
extern void *D_80056998;
extern void *D_8005699C;
extern void *D_800569A0;
extern void *D_800569A4;
extern void *D_800569A8;
extern s32 D_800591E0;

void func_8021DDE8(void) {
    s32 temp_v0;
    void *temp_a0;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a2;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_t0;
    void *temp_t1;
    void *temp_t5;
    void *temp_v0_2;
    void *temp_v1;

    temp_v0 = D_8002C240 * 0x1888;
    temp_a2 = temp_v0 + &D_80053910;
    D_80053880 = temp_a2;
    D_80053878 = temp_a2 + 0x1000;
    temp_t5 = temp_v0 + (&D_80053910 + 0x1000);
    D_8005699C = temp_t5;
    D_80053884 = temp_t5 + 0x400;
    temp_v0_2 = temp_v0 + (&D_80053910 + 0x1400);
    D_800569A4 = temp_v0_2;
    D_800569A8 = temp_v0_2;
    temp_t1 = temp_a2 + 8;
    D_800569A0 = temp_v0_2 + 0x400;
    temp_a0 = temp_a2 + 0x10;
    temp_a1 = temp_a2 + 0x18;
    M2C_FIELD(temp_a2, s32 *, 0) = 0xDB060000;
    D_8005387C = temp_a2;
    D_8005387C = temp_t1;
    D_8005387C = temp_a0;
    D_8005387C = temp_a1;
    D_8005387C = temp_a2 + 0x20;
    temp_t0 = temp_t5 + 8;
    M2C_FIELD(temp_a2, s32 *, 4) = 0;
    M2C_FIELD(temp_a2, s32 *, 8) = 0xDB060004;
    temp_a3 = temp_t5 + 0x10;
    D_80056998 = temp_t5;
    D_80056998 = temp_t0;
    D_80056998 = temp_a3;
    M2C_FIELD(temp_t1, s32 *, 4) = (s32) *((D_8002C240 * 4) + &D_8002C114);
    M2C_FIELD(temp_a2, s32 *, 0x10) = 0xDB060008;
    M2C_FIELD(temp_a0, s32 *, 4) = (s32) D_8002C11C;
    M2C_FIELD(temp_a2, s32 *, 0x18) = 0xE7000000;
    M2C_FIELD(temp_a1, s32 *, 4) = 0;
    M2C_FIELD(temp_t5, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_t5, s32 *, 4) = 0;
    M2C_FIELD(temp_t5, s32 *, 8) = 0xE3001001;
    M2C_FIELD(temp_t0, s32 *, 4) = 0;
    if (D_800591E0 & 0x40) {
        func_8021DF4C(0xE200001C, temp_a1, temp_a2, temp_a3);
        return;
    }
    D_80056998 = temp_t5 + 0x18;
    M2C_FIELD(temp_t5, s32 *, 0x10) = 0xE200001C;
    M2C_FIELD(temp_a3, s32 *, 4) = 0x504240;
    temp_v1 = D_80056998;
    temp_a1_2 = D_800569A4;
    temp_a3_2 = D_800569A4 + 8;
    D_80056998 += 8;
    M2C_FIELD(temp_v1, s32 *, 4) = 0x80;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xE3001801;
    D_800569A4 = temp_a3_2;
    M2C_FIELD(temp_a1_2, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_a1_2, s32 *, 4) = 0;
    if (D_800591E0 & 0x40) {
        func_8021DFD8(0xE200001C, temp_a1_2, 0xE3001801, temp_a3_2);
        return;
    }
    D_800569A4 = temp_a3_2 + 8;
    M2C_FIELD(D_800569A4, s32 *, 8) = 0xE200001C;
    M2C_FIELD(temp_a3_2, s32 *, 4) = 0x553048;
}
