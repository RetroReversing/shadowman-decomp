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

extern s32 D_8002C0F0;
extern u8 D_8002C1BD;
extern void *D_8005387C;
extern void *D_80056998;
extern s32 D_8006A9AC;
extern u8 D_8007DB98;

typedef struct { int field_0; int field_4; int field_8; } __repair_record_D_80056998;
void func_802427E8(void) {
    void *temp_a0;
    void *temp_a2;
    void *temp_a3;
    void *temp_v0;
    void *temp_v1;

    if ((D_8002C1BD == 0) && !(D_8006A9AC & 1) && (D_8002C0F0 & 0x40) && (D_8007DB98 == 0)) {
        D_8002C1BD = 1;
        temp_v1 = D_80056998 + 8;
        temp_a3 = D_8005387C;
        ((__repair_record_D_80056998*)D_80056998)->field_0 = 0xE7000000;
        ((__repair_record_D_80056998*)D_80056998)->field_4 = 0;
        temp_v0 = temp_v1 + 8;
        ((__repair_record_D_80056998*)D_80056998)->field_8 = 0xE3000A01;
        temp_a2 = temp_v1 + 0x10;
        D_80056998 = temp_v1;
        D_80056998 = temp_v0;
        M2C_FIELD(temp_v1, s32 *, 4) = 0;
        M2C_FIELD(temp_v1, s32 *, 8) = 0xE200001C;
        M2C_FIELD(temp_v0, s32 *, 4) = 0x504A50;
        D_8005387C += 8;
        temp_a0 = temp_v1 + 0x18;
        M2C_FIELD(temp_a3, s32 *, 4) = -0xDC8;
        D_80056998 = temp_a2;
        M2C_FIELD(temp_a3, s32 *, 0) = 0xFC127FFF;
        D_80056998 = temp_a0;
        M2C_FIELD(temp_v1, s32 *, 0x10) = 0xD9FEFFFF;
        M2C_FIELD(temp_a2, s32 *, 4) = 0;
        D_80056998 = temp_v1 + 0x20;
        M2C_FIELD(temp_v1, s32 *, 0x18) = 0xE7000000;
        M2C_FIELD(temp_a0, s32 *, 4) = 0;
    }
}
