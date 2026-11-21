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

extern int D_800459B0;
extern int D_800459B4;
s32 func_8026F6BC();
s32 func_8027003C();
s32 func_8027006C();
extern char D_80045930[];
extern s16 D_8004EC24;
extern s8 D_8004EC82;
extern s8 D_8007AFA4;
extern void *D_8007AFF8;

void func_8028C2E4(s32 arg0) {
    do { func_8027003C(); } while (0);
    D_800459B4 = (s32) M2C_FIELD(D_8007AFF8, s32 *, 0x10C);
    D_800459B0 = arg0;
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) ((((((M2C_FIELD(D_8007AFF8, s32 *, 0x44) | 0x22008) & ~0x80) | 0x10010) & ~2) | 0x02000000) & 0xF7FFFFFF & ~4);
    D_8004EC24 = -1;
    D_8004EC82 = 0;
    D_8007AFA4 = 0;
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) |= 0x10;
    func_8026F6BC(0x2F, D_8007AFF8);
    func_8026F6BC(0x1F);
    func_8027006C();
}
