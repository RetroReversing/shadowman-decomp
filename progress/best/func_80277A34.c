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

s32 func_8023B094();
s32 func_8023DF7C();
s32 func_8026E2F4();
s32 func_8027363C();
extern char D_2142E8[];
extern char D_2142F4[];
extern char D_800312D0[];
extern void *D_8006A4FC;
extern void *D_8007AFF8;
extern void *D_8007B0B0;
extern void *D_8007B0B4;

typedef struct { s32 w[2]; } __repair_words2;
void func_80277A34(void) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    u16 temp_s1;
    void *temp_a1;
    void *temp_a1_2;

    if (func_8026E2F4(0x8A) == 0) {
        temp_s1 = M2C_FIELD(D_8007B0B0, u16 *, 0x9A);
        if (temp_s1 == 2) {
            M2C_FIELD(M2C_FIELD(D_8007B0B0, void **, 0x10C), s32 **, 0x34) = D_800312D0;
            M2C_FIELD(M2C_FIELD(D_8007B0B0, void **, 0x10C), s16 *, 4) = -1;
            M2C_FIELD(M2C_FIELD(D_8007B0B0, void **, 0x10C), s16 *, 2) = -1;
            M2C_FIELD(M2C_FIELD(D_8007B0B0, void **, 0x10C), s16 *, 0) = -1;
            func_8023DF7C(D_8007B0B4, M2C_FIELD(D_8007B0B0, void **, 0x10C), 1, 0xA, 0xA, (s32) temp_s1);
            temp_a1 = M2C_FIELD(D_8007B0B0, void **, 0x10C);
            M2C_FIELD(D_8007B0B0, s16 *, 0x90) = 1;
            M2C_FIELD(temp_a1, u16 *, 0x1C) &= 0xFFFD;
            sp18 = M2C_FIELD(D_2142E8, s32 *, 0);
            sp1C = M2C_FIELD(D_2142E8, s32 *, 4);
            sp20 = M2C_FIELD(D_2142E8, s32 *, 8);
            sp28 = M2C_FIELD(D_2142F4, s32 *, 0);
            sp2C = M2C_FIELD(D_2142F4, s32 *, 4);
            sp30 = M2C_FIELD(D_2142F4, s32 *, 8);
            M2C_FIELD(D_8007B0B4, s32 *, 0x24) = (s32) M2C_FIELD(D_2142E8, s32 *, 0);
            M2C_FIELD(D_8007B0B4, __repair_words2 *, 0x28) = *(__repair_words2 *) ((s8 *) D_2142E8 + 0x4);
            M2C_FIELD(D_8007B0B4, s32 *, 0) = (s32) M2C_FIELD(D_2142E8, s32 *, 0);
            M2C_FIELD(D_8007B0B4, s32 *, 4) = (s32) M2C_FIELD(D_2142E8, s32 *, 4);
            M2C_FIELD(D_8007B0B4, s32 *, 8) = (s32) M2C_FIELD(D_2142E8, s32 *, 8);
            M2C_FIELD(D_8007B0B4, s32 *, 0x18) = (s32) M2C_FIELD(D_2142F4, s32 *, 0);
            M2C_FIELD(D_8007B0B4, s32 *, 0x1C) = (s32) M2C_FIELD(D_2142F4, s32 *, 4);
            M2C_FIELD(D_8007B0B4, s32 *, 0x20) = (s32) M2C_FIELD(D_2142F4, s32 *, 8);
            func_8023B094(D_8007B0B4, D_8007B0B4, D_8007B0B4);
            M2C_FIELD(M2C_FIELD(D_8007B0B4, void **, 0x64), s16 *, 0xC) = 0;
            D_8006A4FC = D_8007B0B4;
            M2C_FIELD(M2C_FIELD(D_8007B0B4, void **, 0x64), s16 *, 0xE) = 0;
            temp_a1_2 = M2C_FIELD(D_8007B0B4, void **, 0x64);
            D_8007AFF8 = D_8007B0B0;
            M2C_FIELD(temp_a1_2, s16 *, 0x10) = 0;
            func_8023B094(D_8007B0B4, temp_a1_2);
            M2C_FIELD(D_8007B0B0, s16 *, 0xA6) = 0x8C;
            M2C_FIELD(D_8007B0B0, u16 *, 0x9A) = temp_s1;
            if (M2C_FIELD(D_8007B0B4, s8 *, 0x71) != 8) {
                func_8027363C(M2C_FIELD(D_8007B0B4, s32 *, 0x88), 8);
            }
        }
    }
}
