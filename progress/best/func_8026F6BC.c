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

s32 func_8021DD0C();
s32 func_8023A1D0();
s32 func_8023CA10();
s32 func_8023CD3C();
extern char D_212078[];
extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_8026F6BC(s32 arg0) {
    void **__base_D_8006A4FC;
    char *__base_D_212078;
    s32 temp_v0;
    void *temp_s0;
    void *temp_s0_2;

    __base_D_212078 = D_212078;
    temp_s0 = ((arg0 & 0xFF) * 0x6C) + __base_D_212078;
    __base_D_8006A4FC = &D_8006A4FC;
    M2C_FIELD((*__base_D_8006A4FC), s32 *, 0x64) = func_8023A1D0(M2C_FIELD(temp_s0, const s32 *, 0x4C), M2C_FIELD(temp_s0, const s16 *, 0x50));
    M2C_FIELD((*__base_D_8006A4FC), s32 *, 0x80) = func_8021DD0C(M2C_FIELD(temp_s0, const s32 *, 0x4C), M2C_FIELD(temp_s0, const s16 *, 0x52));
    temp_s0_2 = M2C_FIELD(D_8007AFF8, void **, 0x10C);
    temp_v0 = func_8023CA10(M2C_FIELD(temp_s0, const s32 *, 0x4C), M2C_FIELD(temp_s0, const s16 *, 0x64), (*__base_D_8006A4FC));
    M2C_FIELD(temp_s0_2, s32 *, 0x48) = temp_v0;
    func_8023CD3C(temp_v0, M2C_FIELD((*__base_D_8006A4FC), s32 *, 0x64));
}
