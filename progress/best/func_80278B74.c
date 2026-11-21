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

u16 func_801043F8(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
void *func_8010B5CC(s32, s32);                      /* extern */
M2C_UNK func_8026F6BC(M2C_UNK);                     /* extern */
M2C_UNK func_8027003C();                            /* extern */
M2C_UNK func_8027006C(void **, s32);                /* extern */
M2C_UNK func_80270090(M2C_UNK);                     /* extern */
M2C_UNK func_8027206C(M2C_UNK, M2C_UNK, s32);       /* extern */
extern M2C_UNK D_278900;
extern M2C_UNK D_800313F8;
extern M2C_UNK D_8003188C;
extern M2C_UNK D_800318E4;
extern M2C_UNK D_80045930;
extern s16 D_8004EC28;
extern s8 D_8004EC84;
extern M2C_UNK D_8004ECB8;
extern M2C_UNK D_8004ED60;
extern void *D_8006A4FC;
extern M2C_UNK D_8007AFE0;
extern void *D_8007AFF8;
extern M2C_UNK D_8007B018;
extern void *D_8007B0C0;
extern M2C_UNK D_8007B0C8;
extern M2C_UNK D_8007B0D8;

void func_80278B74(s32 arg0) {
    s32 temp_a1;
    s32 temp_a2;
    u16 temp_v0;
    u32 temp_v0_2;
    void *temp_v0_3;

    func_8027003C();
    M2C_FIELD(&D_80045930, s32 *, 0x134) = arg0;
    temp_a2 = M2C_FIELD(D_8007AFF8, s32 *, 0x10C);
    M2C_FIELD(&D_8007AFE0, s8 *, 1) = 0;
    M2C_FIELD(&D_80045930, s32 *, 0x138) = temp_a2;
    func_8027206C(0xF, 0, temp_a2);
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x44) | 0x0200208A);
    temp_v0 = func_801043F8(0x168, 2, 0);
    M2C_FIELD(D_8007AFF8, u16 *, 0x94) = temp_v0;
    temp_v0_2 = temp_v0 >> 0x10;
    M2C_FIELD(D_8007AFF8, s16 *, 0x92) = (s16) temp_v0_2;
    temp_v0_3 = func_8010B5CC(temp_v0 & 0xFFFF, temp_v0_2 & 0xFFFF);
    D_8007B0C0 = temp_v0_3;
    M2C_FIELD(temp_v0_3, s8 *, 0) = 4;
    D_8004EC28 = -1;
    D_8004EC84 = 0;
    func_80270090(2);
    func_8026F6BC(0x2E);
    func_8026F6BC(7);
    M2C_FIELD(D_8007AFF8, u16 *, 0x9E) = (u16) M2C_FIELD(D_8007AFF8, u16 *, 0x5A);
    M2C_FIELD(temp_v0_3, s16 *, 0x28) = -3;
    M2C_FIELD(temp_v0_3, void **, 0x104) = (void *) (temp_v0_3 + 0x74);
    M2C_FIELD(temp_v0_3, s8 *, 0x57) = 0x2E;
    M2C_FIELD(temp_v0_3, s8 *, 0x5A) = 0x2E;
    M2C_FIELD(temp_v0_3, s8 *, 0x5B) = 0x2E;
    M2C_FIELD(temp_v0_3, s8 *, 0x65) = 0xD;
    M2C_FIELD(temp_v0_3, s8 *, 0x56) = 7;
    M2C_FIELD(temp_v0_3, s8 *, 0x58) = 7;
    M2C_FIELD(temp_v0_3, s8 *, 0x59) = 7;
    M2C_FIELD(temp_v0_3, M2C_UNK **, 0x68) = &D_800313F8;
    M2C_FIELD(temp_v0_3, s32 *, 0x78) = (s32) M2C_FIELD(temp_v0_3, s32 *, 0x7C);
    temp_a1 = *((*(s16 *)0x2123D4 * 4) + &D_8007B018);
    M2C_FIELD(temp_v0_3, M2C_UNK **, 0x70) = &D_8003188C;
    M2C_FIELD(temp_v0_3, s32 *, 0x130) = -1;
    M2C_FIELD(temp_v0_3, M2C_UNK **, 0x3C) = &D_8004ED60;
    M2C_FIELD(temp_v0_3, M2C_UNK **, 0x44) = &D_8004ECB8;
    M2C_FIELD(temp_v0_3, s8 *, 0x4A) = 8;
    M2C_FIELD(temp_v0_3, s8 *, 0x4B) = 0x32;
    M2C_FIELD(temp_v0_3, s8 *, 0x4C) = 0x11;
    M2C_FIELD(temp_v0_3, M2C_UNK **, 0x120) = &D_800318E4;
    M2C_FIELD(temp_v0_3, s32 *, 0x134) = 0;
    M2C_FIELD(temp_v0_3, s32 *, 0x6C) = temp_a1;
    M2C_FIELD(D_8006A4FC, M2C_UNK32 *, 0x24) = (M2C_UNK32) *(M2C_UNK32 *)0x21436C;
    M2C_FIELD(D_8006A4FC, M2C_UNK32 *, 0x28) = (M2C_UNK32) *(M2C_UNK32 *)0x214370;
    M2C_FIELD(D_8006A4FC, M2C_UNK32 *, 0x2C) = (M2C_UNK32) *(M2C_UNK32 *)0x214374;
    M2C_FIELD(&D_8007B0C8, M2C_UNK32 *, 0) = (M2C_UNK32) M2C_FIELD(D_8006A4FC, M2C_UNK32 *, 0x24);
    M2C_FIELD(&D_8007B0C8, M2C_UNK32 *, 4) = (M2C_UNK32) M2C_FIELD(D_8006A4FC, M2C_UNK32 *, 0x28);
    M2C_FIELD(&D_8007B0C8, M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(D_8006A4FC, M2C_UNK32 *, 0x2C);
    M2C_FIELD(&D_8007B0D8, s32 *, 0) = (s32) M2C_FIELD(D_8006A4FC, s32 *, 0x18);
    M2C_FIELD(&D_8007B0D8, s32 *, 4) = (s32) M2C_FIELD(D_8006A4FC, s32 *, 0x1C);
    M2C_FIELD(&D_8007B0D8, s32 *, 8) = (s32) M2C_FIELD(D_8006A4FC, s32 *, 0x20);
    M2C_FIELD(temp_v0_3, M2C_UNK **, 0x124) = &D_278900;
    func_8027006C(&D_8006A4FC, temp_a1);
}
