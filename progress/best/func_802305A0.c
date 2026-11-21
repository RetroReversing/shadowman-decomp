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

void *func_801043F8(s32, M2C_UNK, M2C_UNK);         /* extern */
M2C_UNK func_8011BA20(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_802305EC();                            /* extern */
M2C_UNK func_8023067C();                            /* extern */
extern u32 D_80000318;
extern void *D_80059890;
extern void *D_80059894;
extern u32 D_8005989C;
extern M2C_UNK D_800598A0;

void func_802305A0(void) {
    u32 *__base_D_8005989C;
    void **__base_D_80059890;
    u32 var_a0;
    void *var_a1;
    void *var_v1;

    func_8023067C();
    func_8011BA20(&D_800598A0, 0, 0x4E20);
    if ((u32) D_80000318 > 0x400000U) {
        func_802305EC();
        return;
    }
    __base_D_8005989C = &D_8005989C;
    (*__base_D_8005989C) = 0x200;
    __base_D_80059890 = &D_80059890;
    (*__base_D_80059890) = func_801043F8((*__base_D_8005989C) * 8, 3, 0);
    var_a1 = func_801043F8((*(&D_8005989C)) << 8, 3, 0);
    var_a0 = 0;
    D_80059894 = var_a1;
    if ((*__base_D_8005989C) != 0) {
        var_v1 = (*__base_D_80059890);
        do {
            M2C_FIELD(var_v1, void **, 4) = var_a1;
            var_a1 += 0x100;
            M2C_FIELD(var_v1, s16 *, 0) = 0xFFFF;
            M2C_FIELD(var_v1, s16 *, 2) = 0;/*__repair_loop_weight*/do {
            var_a0 += 1;} while (0);
            var_v1 += 8;
        } while (var_a0 < (u32) (*__base_D_8005989C));
    }
}
