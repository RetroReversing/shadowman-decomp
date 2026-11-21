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
M2C_UNK func_80234B70(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_8026F6BC(M2C_UNK);                     /* extern */
M2C_UNK func_8027003C();                            /* extern */
M2C_UNK func_8027006C();                            /* extern */
M2C_UNK func_80270090(M2C_UNK);                     /* extern */
M2C_UNK func_8027206C(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK D_28702C;
extern M2C_UNK D_80034758;
extern M2C_UNK D_80034B4C;
extern M2C_UNK D_80034B84;
extern M2C_UNK D_80034BB0;
extern M2C_UNK D_80045930;
extern s16 D_8004EC2A;
extern s8 D_8004EC85;
extern void *D_8007AFF8;
extern M2C_UNK D_8007B018;
extern void *D_8007B1E0;
extern s32 D_8007B1E4;

void func_80287258(s32 arg0) {
    u16 temp_v0;
    short temp_v0_2;
    void *temp_v0_3;

    func_8027003C();
    M2C_FIELD(&D_80045930, s32 *, 0x6C) = arg0;
    M2C_FIELD(&D_80045930, s32 *, 0x70) = (s32) M2C_FIELD(D_8007AFF8, s32 *, 0x10C);
    func_8027206C(5, 0);
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x44) | 0x0200208A);
    temp_v0 = func_801043F8(0x174, 2, 0);
    M2C_FIELD(D_8007AFF8, u16 *, 0x94) = temp_v0;
    temp_v0_2 = temp_v0 >> 0x10;
    M2C_FIELD(D_8007AFF8, s16 *, 0x92) = (s16) temp_v0_2;
    temp_v0_3 = func_8010B5CC(temp_v0 & 0xFFFF, temp_v0_2 & 0xFFFF);
    D_8007B1E0 = temp_v0_3;
    M2C_FIELD(temp_v0_3, s8 *, 0) = 5;
    func_80270090(2);
    D_8004EC2A = -1;
    D_8004EC85 = 0;
    M2C_FIELD(D_8007AFF8, s8 *, 0x3C) = 4;
    M2C_FIELD(D_8007AFF8, s16 *, 0x96) = 0;
    func_8026F6BC(0x38);
    func_8026F6BC(0x1E);
    M2C_FIELD(D_8007AFF8, u16 *, 0x9E) = (u16) M2C_FIELD(D_8007AFF8, u16 *, 0x5A);
    M2C_FIELD(temp_v0_3, s16 *, 0x28) = -3;
    M2C_FIELD(temp_v0_3, void **, 0x104) = (void *) (temp_v0_3 + 0x74);
    M2C_FIELD(temp_v0_3, s8 *, 0x56) = 0x38;
    M2C_FIELD(temp_v0_3, M2C_UNK **, 0x68) = &D_80034758;
    M2C_FIELD(temp_v0_3, s8 *, 0x57) = 0x1E;
    M2C_FIELD(temp_v0_3, s8 *, 0x65) = 5;
    M2C_FIELD(temp_v0_3, s32 *, 0x78) = (s32) M2C_FIELD(temp_v0_3, s32 *, 0x7C);
    M2C_FIELD(temp_v0_3, M2C_UNK **, 0x70) = &D_80034B4C;
    M2C_FIELD(temp_v0_3, s32 *, 0x130) = -1;
    M2C_FIELD(temp_v0_3, s32 *, 0x134) = 0;
    M2C_FIELD(temp_v0_3, s32 *, 0x3C) = 0;
    M2C_FIELD(temp_v0_3, s32 *, 0x6C) = (s32) *((*(s16 *)0x212D88 * 4) + &D_8007B018);
    func_80234B70(&D_80034B84, &D_8007B018);
    M2C_FIELD(temp_v0_3, M2C_UNK **, 0x120) = &D_80034BB0;
    M2C_FIELD(temp_v0_3, M2C_UNK **, 0x124) = &D_28702C;
    M2C_FIELD(temp_v0_3, s8 *, 0x4A) = 8;
    M2C_FIELD(temp_v0_3, s8 *, 0x4C) = 0xC;
    M2C_FIELD(temp_v0_3, s8 *, 0x4B) = 0x1E;
    D_8007B1E4 = 0;
    func_8027006C();
}
