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

extern u16 D_8002C110;
extern u16 D_8002C112;
extern void *D_8005387C;
extern s32 D_800591E0;

typedef struct { int field_0; int field_4; } __repair_record_temp_a0;
void func_80222A14(void) {
    s32 temp_a0_2;
    s32 temp_a3_2;
    void *temp_a0;
    void *temp_a0_3;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a2;
    void *temp_a3;
    void *temp_t0;
    void *temp_t1;
    void *temp_v1;
    void *temp_v1_2;

    temp_a0 = D_8005387C;
    ((__repair_record_temp_a0*)temp_a0)->field_0 = 0xE3000A01;
    temp_t1 = D_8005387C + 8;
    D_8005387C = temp_t1;
    ((__repair_record_temp_a0*)temp_a0)->field_4 = 0x300000;
    if (D_800591E0 & 0x40) {
        temp_v1 = temp_t1 + 8;
        temp_a1 = temp_t1 + 0x10;
        M2C_FIELD(D_8005387C, s32 *, 8) = 0xFE000000;
        temp_a3 = temp_t1 + 0x18;
        temp_t0 = temp_t1 + 0x20;
        M2C_FIELD(temp_t1, s32 *, 8) = 0xF7000000;
        M2C_FIELD(temp_t1, s32 *, 4) = 0x02000000;
        M2C_FIELD(temp_v1, s32 *, 4) = 0xFFFCFFFC;
        D_8005387C = temp_v1;
        D_8005387C = temp_a1;
        D_8005387C = temp_a3;
        D_8005387C = temp_t0;
        D_8005387C = temp_t1 + 0x28;
        temp_a0_2 = D_8002C110 - 1;
        M2C_FIELD(temp_t1, s32 *, 0x10) = (s32) ((temp_a0_2 & 0xFFF) | 0xFF100000);
        M2C_FIELD(temp_a1, s32 *, 4) = 0x02000000;
        M2C_FIELD(temp_t1, s32 *, 0x18) = (s32) (((temp_a0_2 & 0x3FF) << 0xE) | ((((D_8002C112 - 1) & 0x3FF) * 4) | 0xF6000000));
        M2C_FIELD(temp_a3, s32 *, 4) = 0;
        M2C_FIELD(temp_t1, s32 *, 0x20) = 0xE7000000;
        M2C_FIELD(temp_t0, s32 *, 4) = 0;
    }
    temp_a0_3 = D_8005387C;
    temp_a2 = D_8005387C + 8;
    temp_a3_2 = D_8002C110 - 1;
    M2C_FIELD(temp_a0_3, s32 *, 0) = (s32) ((temp_a3_2 & 0xFFF) | 0xFF100000);
    D_8005387C = temp_a2;
    M2C_FIELD(temp_a0_3, s32 *, 4) = 0x01000000;
    if (!(D_800591E0 & 0x80)) {
        temp_a1_2 = temp_a2 + 8;
        M2C_FIELD(D_8005387C, s32 *, 8) = 0xF7000000;
        D_8005387C = temp_a1_2;
        D_8005387C = temp_a2 + 0x10;
        M2C_FIELD(temp_a2, s32 *, 4) = 0x10001;
        M2C_FIELD(temp_a2, s32 *, 8) = (s32) (((temp_a3_2 & 0x3FF) << 0xE) | ((((D_8002C112 - 1) & 0x3FF) * 4) | 0xF6000000));
        M2C_FIELD(temp_a1_2, s32 *, 4) = 0;
    }
    temp_v1_2 = D_8005387C;
    D_8005387C += 8;
    M2C_FIELD(temp_v1_2, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v1_2, s32 *, 4) = 0;
}
