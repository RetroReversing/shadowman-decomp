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
extern signed char D_80059085;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_801069C0();
s32 func_80116EB0();
s32 func_8011BA20();
s32 osCreateMesgQueue();
extern char D_222258[];
extern u8 D_80058EF0[];
extern char D_80058F08[];

void func_80222404(void) {
    void *temp_s0;

    func_8011BA20(D_80058EF0, 0, 0x18);
    M2C_FIELD(D_80058EF0, s32 *, 0) = 1;
    M2C_FIELD(D_80058EF0, s32 *, 0xC) = 2;
    func_8011BA20(D_80058F08, 0, 0x1C8);
    temp_s0 = (void *)(D_80058F08); temp_s0 = (void *)((char *)temp_s0 + (s32)(0x114));
    osCreateMesgQueue(temp_s0, D_80058F08 + 0x12C, 0x14);
    func_801069C0(D_222258, 0x100, 0x78, 8);
    func_80116EB0(temp_s0, D_80058EF0, 1);
    func_80116EB0(temp_s0, D_80058EF0 + 0xC, 1);
    D_80059085 = 1;
}
