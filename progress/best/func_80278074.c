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

extern int D_80045A40;
s32 func_8026E2F4();
s32 func_8027003C();
s32 func_8027006C();
s32 func_8027363C();
extern char D_80045930[];
extern void *D_8007AFF8;
extern void *D_8007B0B0;
extern void *D_8007B0B4;
extern s32 D_8007B0B8;

void func_80278074(void *arg0) {
    s32 temp_a1;

    func_8027003C();
    M2C_FIELD(D_80045930, void **, 0x10C) = arg0;
    D_8007B0B4 = arg0;
    temp_a1 = M2C_FIELD(D_8007AFF8, s32 *, 0x10C);
    D_8007B0B0 = D_8007AFF8;
    D_80045A40 = temp_a1;
    M2C_FIELD(D_8007AFF8, s16 *, 0x9A) = 0;
    if ((func_8026E2F4(0x6E, temp_a1) != 0) && (func_8026E2F4(0x8A) != 0)) {
        M2C_FIELD(M2C_FIELD(D_8007B0B4, void **, 0x64), s16 *, 0xC) = 0;
        M2C_FIELD(M2C_FIELD(D_8007B0B4, void **, 0x64), s16 *, 0xE) = 0;
        M2C_FIELD(M2C_FIELD(D_8007B0B4, void **, 0x64), s16 *, 0x10) = 0;
        func_8027363C(M2C_FIELD(D_8007B0B4, s32 *, 0x88), 8);
        M2C_FIELD(D_8007B0B0, s16 *, 0x9A) = 2;
    }
    D_8007B0B8 = 0;
    func_8027006C();
}
