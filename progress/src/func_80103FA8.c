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

extern M2C_UNK D_8004AD78;
extern void *D_8004AD80;

void func_80103FA8(void *arg0) {
    void **temp_v1;
    void *temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, void ***, 4);
    if (temp_v1 != NULL) {
        *temp_v1 = M2C_FIELD(arg0, void **, 0);
    }
    temp_v1_2 = M2C_FIELD(arg0, void **, 0);
    if (temp_v1_2 != NULL) {
        M2C_FIELD(temp_v1_2, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    }
    if (arg0 == M2C_FIELD(&D_8004AD78, void **, 0)) {
        M2C_FIELD(&D_8004AD78, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0);
    }
    if (arg0 == M2C_FIELD(&D_8004AD78, void **, 4)) {
        M2C_FIELD(&D_8004AD78, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0);
    }
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    D_8004AD80 = arg0;
}
