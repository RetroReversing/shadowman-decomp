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

s32 func_80116EB0();
s32 osWritebackDCacheAll();
extern char D_8002C114[];
extern char D_8002C1C0[];
extern s32 D_8002C240;
extern char D_8004AECC[];
extern char D_800527D0[];
extern char D_80053860[];

void func_8021E1B8(void) {
    s32 *__base_D_8002C240;
    s32 *temp_a1;
    void *temp_a0;

    __base_D_8002C240 = &D_8002C240;
    temp_a0 = ((*__base_D_8002C240) * 0x14) + D_800527D0;
    M2C_FIELD(temp_a0, s32 **, 8) = D_80053860;
    temp_a1 = ((*__base_D_8002C240) * 4) + D_8002C114;
    M2C_FIELD(temp_a0, void **, 0) = (void *) (((*__base_D_8002C240) << 6) + D_8002C1C0);
    M2C_FIELD(temp_a0, s32 *, 0x10) = 0x13;
    M2C_FIELD(temp_a0, s32 *, 4) = (s32) *temp_a1;
    osWritebackDCacheAll(temp_a0);
    func_80116EB0(D_8004AECC, ((*__base_D_8002C240) * 0x14) + D_800527D0, 1);
    (*(&D_8002C240)) = ((*__base_D_8002C240) + 1) % 2;
}
