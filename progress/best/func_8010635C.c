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

extern int D_8004B404;
s32 func_8010639C();
s32 func_80115590();
s32 func_80116D80();
s32 func_80116EB0();
s32 func_80116FE0();
s32 func_80118370();
s32 func_80118630();
s32 osCreateMesgQueue();
extern char D_8004B3FC[];

void func_8010635C(void) {
    void *sp10;
    s32 temp_a0;
    s32 temp_v0;

    osCreateMesgQueue(D_8004B3FC, D_8004B3FC + 0x18, 1);
    func_80116FE0(8, D_8004B3FC, 0xBEEF);
    func_80116D80(D_8004B3FC - 0x184, &sp10, 1);
    if (D_8004B404 != 0) {
        M2C_BREAK(1);
    }
    if (M2C_FIELD(sp10, s32 *, 0xC) & 1) {
        M2C_BREAK(1);
    }
    if (M2C_FIELD(sp10, s32 *, 8) & 7) {
        M2C_BREAK(1);
    }
    temp_v0 = M2C_FIELD(sp10, s32 *, 4);
    if ((temp_v0 == 0) || (temp_v0 & 1)) {
        M2C_BREAK(1);
    }
    temp_a0 = M2C_FIELD(sp10, s32 *, 8);
    if (temp_a0 >= 0) {
        M2C_BREAK(1);
    }
    func_80118630(temp_a0, M2C_FIELD(sp10, s32 *, 4));
    func_80115590(M2C_FIELD(sp10, u32 *, 0), M2C_FIELD(sp10, s32 *, 0xC), M2C_FIELD(sp10, s32 *, 8), M2C_FIELD(sp10, s32 *, 4));
    func_80116D80(D_8004B3FC, NULL, 1);
    func_80118370(M2C_FIELD(sp10, s32 *, 8), M2C_FIELD(sp10, s32 *, 4));
    func_80116EB0(M2C_FIELD(sp10, s32 *, 0x10), sp10, 1);
    func_8010639C();
}
