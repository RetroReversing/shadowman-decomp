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

extern int D_80045A78;
extern int D_80045A7C;
u16 func_801043F8();
void *func_8010B5CC();
s32 func_80234B70();
s32 func_8026F6BC();
s32 func_8027003C();
s32 func_8027006C();
s32 func_80270090();
s32 func_8027206C();
extern char D_28334C[];
extern char D_80033140[];
extern char D_80033758[];
extern char D_80033790[];
extern char D_800337F4[];
extern char D_80033840[];
extern char D_80045930[];
extern s16 D_8004EC26;
extern char D_8004EC30[];
extern s8 D_8004EC83;
extern char D_8004ED10[];
extern void *D_8007AFF8;
extern s8 D_8007B008;
extern char D_8007B018[];
extern void *D_8007B1A0;

void func_80283660(s32 arg0) {
    s32 temp_a2;
    u16 temp_v0;
    u32 temp_v0_2;
    void *temp_s0;

    func_8027003C();
    D_80045A78 = arg0;
    temp_a2 = M2C_FIELD(D_8007AFF8, s32 *, 0x10C);
    D_8007B008 = 0;
    D_80045A7C = temp_a2;
    func_8027206C(0, 0, temp_a2);
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) ((M2C_FIELD(D_8007AFF8, s32 *, 0x44) | 0x0200208A) & ~0x10);
    temp_v0 = func_801043F8(0x150, 2, 0);
    M2C_FIELD(D_8007AFF8, u16 *, 0x94) = temp_v0;
    temp_v0_2 = temp_v0 >> 0x10;
    M2C_FIELD(D_8007AFF8, s16 *, 0x92) = (s16) temp_v0_2;
    D_8007B1A0 = func_8010B5CC(temp_v0 & 0xFFFF, temp_v0_2 & 0xFFFF);
    D_8004EC26 = -1;
    D_8004EC83 = 0;
    func_8026F6BC(0x2B);
    func_8026F6BC(0x22);
    func_80270090(2);
    temp_s0 = D_8007B1A0;
    M2C_FIELD(temp_s0, s8 *, 0) = 3;
    M2C_FIELD(temp_s0, s16 *, 0x28) = -3;
    M2C_FIELD(temp_s0, void **, 0x104) = (void *) (temp_s0 + 0x74);
    M2C_FIELD(temp_s0, s8 *, 0x57) = 0x2A;
    M2C_FIELD(temp_s0, s8 *, 0x5A) = 0x2A;
    M2C_FIELD(temp_s0, s8 *, 0x59) = 0x22;
    M2C_FIELD(temp_s0, s8 *, 0x5B) = 0x2B;
    M2C_FIELD(temp_s0, s8 *, 0x56) = 0;
    M2C_FIELD(temp_s0, s8 *, 0x58) = 0;
    M2C_FIELD(temp_s0, s8 *, 0x65) = 0xD;
    M2C_FIELD(temp_s0, s32 *, 0x78) = (s32) M2C_FIELD(temp_s0, s32 *, 0x7C);
    M2C_FIELD(D_8007AFF8, u16 *, 0x9E) = (u16) M2C_FIELD(D_8007AFF8, u16 *, 0x5A);
    M2C_FIELD(temp_s0, s32 **, 0x68) = D_80033140;
    M2C_FIELD(temp_s0, s32 **, 0x70) = D_800337F4;
    M2C_FIELD(temp_s0, s32 *, 0x130) = -1;
    M2C_FIELD(temp_s0, s32 **, 0x3C) = D_8004EC30;
    M2C_FIELD(temp_s0, s32 **, 0x44) = D_8004ED10;
    M2C_FIELD(temp_s0, s32 **, 0x120) = D_80033840;
    M2C_FIELD(temp_s0, s8 *, 0x4A) = 8;
    M2C_FIELD(temp_s0, s8 *, 0x4B) = 0x1E;
    M2C_FIELD(temp_s0, s32 *, 0x134) = 0;
    M2C_FIELD(temp_s0, s8 *, 0x4C) = 0xC;
    M2C_FIELD(temp_s0, s32 *, 0x6C) = (s32) *((*(s16 *)0x2120E0 * 4) + D_8007B018);
    func_80234B70(D_80033758, D_8007B018);
    func_80234B70(D_80033790);
    M2C_FIELD(temp_s0, s32 **, 0x124) = D_28334C;
    func_8027006C();
}
