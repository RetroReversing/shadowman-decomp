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

M2C_UNK func_80248210(void *);                      /* extern */
M2C_UNK func_8025BA08(s32, void *, M2C_UNK, M2C_UNK, s32, M2C_UNK *); /* extern */
s32 func_8026E2F4(M2C_UNK);                         /* extern */
M2C_UNK func_80297254(void *);                      /* extern */
extern M2C_UNK D_208608;

void func_802496B8(void *arg0) {
    void *temp_a1;
    void *temp_s0;
    void *temp_v0;

    if (func_8026E2F4(0xA7) != 0) {
        temp_a1 = M2C_FIELD(arg0, void **, 8);
        temp_s0 = M2C_FIELD(temp_a1, void **, 0x6C);
        func_8025BA08(temp_a1 + 0x24, temp_a1 + 0x18, 0x1BA, 0, 0, &D_208608);
        temp_v0 = M2C_FIELD(temp_s0, void **, 4);
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s32 *, 0x54) = 0;
            M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s32 *, 0x50) = 0;
            func_80297254(M2C_FIELD(temp_s0, void **, 4));
        }
        func_80248210(arg0);
    }
}
