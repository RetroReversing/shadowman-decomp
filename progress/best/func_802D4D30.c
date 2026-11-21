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

void *func_80239730(s32, M2C_UNK, M2C_UNK);         /* extern */
M2C_UNK func_8026E26C(s32);                         /* extern */
M2C_UNK func_8026E9C4(void);             /* extern */
extern void *D_80030C58;

void *func_802D4D30(const void *arg0) {
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;
    

    func_8026E26C(M2C_FIELD(arg0, const s32 *, 4));
    temp_a0 = arg0 + 8;
    if (M2C_FIELD(arg0, const s32 *, 4) == 0x8A) {
        temp_v0 = func_80239730(M2C_FIELD(D_80030C58, const s32 *, 0x20), 2, 0xF7);
        if (temp_v0 != NULL) {
            temp_a0 = M2C_FIELD(temp_v0, void **, 8);
            temp_v1 = M2C_FIELD(temp_a0, void **, 0x6C);
            M2C_FIELD(temp_v1, s8 *, 0x14) = 1;
            M2C_FIELD(temp_v1, s32 *, 0) = 6;
            func_8026E9C4();
        }
        temp_a0 = arg0 + 8;
    }
    return temp_a0;
}
