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

void *func_80233CD8(s32, s32);                      /* extern */
M2C_UNK func_802D0614(s32, s32, void *, void *);    /* extern */
s32 func_802D0868();                                /* extern */
extern s32 D_8005EA14;
extern M2C_UNK D_8007BEF8;
extern M2C_UNK D_8007BF00;
extern M2C_UNK D_8007BF08;
extern M2C_UNK D_8007BF10;
extern M2C_UNK D_8007BF18;
extern M2C_UNK D_8007BF28;
extern M2C_UNK D_8007BF30;

void func_802D0FFC(s32 arg0) {
    s32 temp_v0_2;
    void *temp_s0;
    void *temp_s1;
    void *temp_v0;

    temp_v0 = func_80233CD8(D_8005EA14, arg0);
    temp_s1 = M2C_FIELD(temp_v0, void **, 0x6C);
    temp_s0 = M2C_FIELD(temp_v0, void **, 0x64);
    M2C_FIELD(temp_s1, void **, 0x14) = temp_s0;
    temp_v0_2 = func_802D0868();
    M2C_FIELD(temp_s0, s32 *, 0x18) = (s32) ((u32 *) &D_8007BEF8)[temp_v0_2];
    M2C_FIELD(temp_s0, s32 *, 0x14) = (s32) ((u32 *) &D_8007BF00)[temp_v0_2];
    M2C_FIELD(temp_s0, s32 *, 0x1C) = (s32) ((u32 *) &D_8007BF08)[temp_v0_2];
    M2C_FIELD(temp_s0, s32 *, 0x20) = (s32) ((u32 *) &D_8007BF10)[temp_v0_2];
    M2C_FIELD(temp_s0, s32 *, 0x24) = (s32) ((u32 *) &D_8007BF28)[temp_v0_2];
    M2C_FIELD(temp_s0, s32 *, 0x28) = (s32) ((u32 *) &D_8007BF30)[temp_v0_2];
    M2C_FIELD(temp_s1, s32 *, 0x10) = (s32) ((u32 *) &D_8007BF18)[temp_v0_2];
    func_802D0614(arg0, temp_v0_2, temp_s0, temp_s1);
}
