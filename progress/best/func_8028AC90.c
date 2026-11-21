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

extern int D_80045A50;
extern int D_80045A54;
s32 func_8026F6BC();
s32 func_8027003C();
s32 func_8027006C();
s32 func_8027206C();
extern char D_80045930[];
extern s16 D_8004EC20;
extern s8 D_8004EC80;
extern void *D_8006A4FC;
extern s8 D_8007AFE2;
extern void *D_8007AFF8;

void func_8028AC90(s32 arg0) {
    s32 temp_a2;

    func_8027003C();
    D_80045A50 = arg0;
    temp_a2 = M2C_FIELD(D_8007AFF8, s32 *, 0x10C);
    D_8007AFE2 = 0;
    D_80045A54 = temp_a2;
    M2C_FIELD(D_8006A4FC, s32 *, 0x24) = 0;
    M2C_FIELD(D_8006A4FC, s32 *, 0x28) = 0;
    M2C_FIELD(D_8006A4FC, s32 *, 0x2C) = 0;
    func_8027206C(0x16, 0, temp_a2);
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) ((((((M2C_FIELD(D_8007AFF8, s32 *, 0x44) | 0x22008) & ~0x80) | 0x10010) & ~2) | 0x02000000) & 0xF7FFFFFF);
    D_8004EC20 = -1;
    D_8004EC80 = 0;
    func_8026F6BC(0x2D, D_8007AFF8, 0x10010, 0xF7FFFFFF);
    func_8026F6BC(0x2C);
    func_8027006C();
}
