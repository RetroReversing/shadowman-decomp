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

M2C_UNK func_80109318(M2C_UNK, void *, M2C_UNK);    /* extern */
s32 func_80113AD0();                                /* extern */
f32 func_802369D8(M2C_UNK *, void *);               /* extern */
M2C_UNK func_8024C010();                            /* extern */
M2C_UNK func_80267F78(f32, void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_8007558C;

typedef struct { int value; } __repair_field_0;
void func_8024BF14(void *arg0) {
    void *temp_s0;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;

    temp_s1 = M2C_FIELD(arg0, void **, 8);
    temp_s3 = M2C_FIELD(temp_s1, void **, 0x6C);
    temp_s0 = M2C_FIELD(temp_s1, void **, 0x68);
    temp_s2 = M2C_FIELD(temp_s0, void **, 0x10);
    if (M2C_FIELD(temp_s3, s32 *, 4) != 0) {
        M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
        ((__repair_field_0 *)temp_s0)->value = 0;
        func_8024C010();
        return;
    }
    M2C_FIELD(temp_s0, s32 *, 0xC) = 1;
    if (M2C_FIELD(arg0, s16 *, 0x16) == 0) {
        M2C_FIELD(arg0, s16 *, 0x16) = 1;
        ((__repair_field_0 *)temp_s0)->value = (s32) (func_80113AD0() % (s32) M2C_FIELD(temp_s2, s32 *, 8));
    }
    if ((func_802369D8(&D_8007558C, temp_s1) < *(f32 *)0x202EBC) && ((u32) (((__repair_field_0 *)temp_s0)->value - 4) < 8U)) {
        ((__repair_field_0 *)temp_s0)->value = 0xC;
        func_80267F78(*(f32 *)0x202EC0, temp_s1, 1, 0x16);
    }
    if (((__repair_field_0 *)temp_s0)->value == 2) {
        func_80109318(0x17E, temp_s1 + 0x24, 0);
    }
    if (((__repair_field_0 *)temp_s0)->value == 0x15) {
        M2C_FIELD(temp_s3, s32 *, 4) = (s32) M2C_FIELD(temp_s1, s16 *, 0x7C);
    }
}
