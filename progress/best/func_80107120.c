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

M2C_UNK func_80116790(void *, M2C_UNK, M2C_UNK *, M2C_UNK, void *, s32); /* extern */
M2C_UNK func_80116FE0(M2C_UNK, void *, void *);     /* extern */
M2C_UNK func_801171A0(void *);                      /* extern */
extern M2C_UNK D_1071D4;
extern M2C_UNK D_10728C;
extern M2C_UNK D_8004B420;

void func_80107120(void) {
    void *temp_s1;
    void *temp_s2;

    M2C_FIELD(&D_8004B420, s16 *, 0x28) = 0;
    func_80116FE0(0xC, &D_8004B420 + 0x2C, &D_8004B420 + 0x28);
    temp_s2 = &D_8004B420 + 0xC8;
    temp_s1 = &D_8004B420 + 0x4F8;
    func_80116790(temp_s2, 0x63, &D_1071D4, 0, temp_s1, 0x7B);
    func_801171A0(temp_s2);
    func_80116790(temp_s1, 0x62, &D_10728C, 0, &D_8004B420 + 0x928, 0x7C);
    func_801171A0(temp_s1);
}
