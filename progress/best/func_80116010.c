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

extern int D_80050438;
extern unsigned int D_8005043C;
s32 func_80116090();
void *func_80116190();
s32 func_80116410();
s32 func_80116D80();
s32 func_80116EB0();
s32 func_801173B0();
s32 func_80118310();
extern u16 D_8004F0E0;
extern s32 D_80050430;
extern s32 D_80050434;

void func_80116010(void *arg0) {
    u16 *sp10;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_v0_4;
    s32 temp_v1_2;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v1;
    u32 temp_s0_2;
    u32 temp_v1_3;
    void *temp_v0_3;

    sp10 = NULL;
    temp_v0 = M2C_FIELD(func_80116190(), u16 *, 2);
    D_8004F0E0 = temp_v0;
    if (!(temp_v0 & 0xFFFF)) {
        D_8004F0E0 = 1;
    }
    func_80116D80(M2C_FIELD(arg0, s32 *, 0xC), &sp10);
    temp_v1 = *sp10;
    if (temp_v1 != 0xD) {
        if (temp_v1 != 0xE) {
            func_80116090();
            return;
        }
        func_801173B0();
        func_80116090();
        return;
    }
    func_80116410();
    temp_v0_2 = D_8004F0E0 - 1;
    D_8004F0E0 = temp_v0_2;
    if (!(temp_v0_2 & 0xFFFF)) {
        temp_v0_3 = func_80116190();
        temp_a0 = M2C_FIELD(temp_v0_3, s32 *, 0x10);
        if (temp_a0 != 0) {
            func_80116EB0(temp_a0, M2C_FIELD(temp_v0_3, s32 *, 0x14), 0);
        }
        D_8004F0E0 = M2C_FIELD(temp_v0_3, u16 *, 2);
    }
    D_80050434 += 1;
    if (0 != 0) {
        temp_v1_2 = func_80118310();
        (*(s32 *)&D_80050438) = 0;
        D_8005043C = temp_v1_2;
    }
    temp_s0 = D_80050430;
    temp_v0_4 = func_80118310();
    D_80050430 = temp_v0_4;
    temp_s0_2 = temp_v0_4 - temp_s0;
    temp_v1_3 = D_8005043C + temp_s0_2;
    temp_a0 = temp_v1_3 < temp_s0_2;
    (*(s32 *)&D_80050438) = (s32) ((*(s32 *)&D_80050438) + temp_a0);
    D_8005043C = temp_v1_3;
    func_80116090(0, temp_s0_2, temp_a0);
}
