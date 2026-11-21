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

void *func_80106EF0();
s32 func_801073A0();
s32 func_801077E0();
extern char D_8004B420[];

void *func_80107454(void) {
    u16 temp_v0;
    void *temp_s0;
    void *temp_v0_2;

    temp_s0 = M2C_FIELD(D_8004B420, void **, 0x1378);
    do { func_801073A0(D_8004B420 + 0x1378, temp_s0); } while (0);
    func_801077E0(temp_s0);
    temp_v0 = M2C_FIELD(temp_s0, const u16 *, 8);
    if (temp_v0 != 0xFFFF) {
        temp_v0_2 = func_80106EF0(temp_v0);
        *(s8 *)(M2C_FIELD(temp_v0_2, const s32 *, 0x10) + (M2C_FIELD(temp_s0, const u16 *, 8) - M2C_FIELD(temp_v0_2, const u16 *, 4))) = 0xFF;
        M2C_FIELD(temp_s0, u16 *, 8) = 0xFFFFU;
    }
    M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
    return temp_s0;
}
