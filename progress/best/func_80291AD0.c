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

s32 func_801043F8(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_8026F6BC(M2C_UNK);                     /* extern */
M2C_UNK func_8027003C();                            /* extern */
M2C_UNK func_8027006C();                            /* extern */
M2C_UNK func_8027206C(M2C_UNK, M2C_UNK, void *, M2C_UNK); /* extern */
extern M2C_UNK D_80045930;
extern s8 D_8007AFBC;
extern void *D_8007AFF8;
extern M2C_UNK D_8007B270;

void func_80291AD0(s32 arg0) {
    s16 *var_a1;
    u16 var_a0;
    void *temp_a1;

    func_8027003C();
    M2C_FIELD(&D_80045930, s32 *, 0x15C) = arg0;
    D_8007AFBC = 0;
    M2C_FIELD(&D_80045930, void **, 0x160) = (void *) M2C_FIELD(D_8007AFF8, void **, 0x10C);
    M2C_FIELD(D_8007AFF8, s32 *, 0x48) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x48) | 0x4000);
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x44) | 0x22088);
    func_8027206C(0x13, 0x4B, D_8007AFF8, 0x22088);
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x44) | 0x10);
    func_8026F6BC(0x30);
    func_8026F6BC(0x3D);
    temp_a1 = M2C_FIELD(D_8007AFF8, void **, 0xC);
    D_8007AFBC = 0;
    if (temp_a1 != NULL) {
        var_a1 = temp_a1 + 2;
        var_a0 = (u16) M2C_FIELD(temp_a1, s16 *, 2);
        if (M2C_FIELD(temp_a1, s16 *, 2) != -1) {
            do {
                *((M2C_FIELD(D_8007AFF8, u16 *, 0x90) * 2) + &D_8007B270) = var_a0;
                var_a1 += 2;
                M2C_FIELD(D_8007AFF8, u16 *, 0x90) = (u16) (M2C_FIELD(D_8007AFF8, u16 *, 0x90) + 1);
                var_a0 = (u16) *var_a1;
            } while (*var_a1 != -1);
        }
    }
    M2C_FIELD(M2C_FIELD(D_8007AFF8, void **, 0x10C), s32 *, 0x44) = func_801043F8(M2C_FIELD(M2C_FIELD(D_8007AFF8, void **, 0x10C), s16 *, 0x3E) * 0x30, 2, 0);
    func_8027006C();
}
