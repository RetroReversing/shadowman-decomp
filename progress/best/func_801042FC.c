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

M2C_UNK func_801035A4();                            /* extern */
M2C_UNK memcpy(M2C_UNK *, s32, s32);                /* extern */
extern M2C_UNK D_8004A510;
extern M2C_UNK D_8004A5A0;
extern M2C_UNK D_8004AD78;
extern M2C_UNK D_8004AD7C;

void func_801042FC(void) {
    M2C_UNK *__base_D_8004A510;
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v0_2;
    M2C_UNK *var_a1;
    M2C_UNK *var_a1_2;
    s16 temp_v1;
    u16 temp_v1_2;
    s16 var_a0;
    s16 var_a0_2;
    s32 var_v0;
    s32 var_v0_2;

    func_801035A4();
    __base_D_8004A510 = &D_8004A510;
    memcpy(&D_8004A5A0, M2C_FIELD(__base_D_8004A510, s32 *, 0x88), M2C_FIELD(__base_D_8004A510, u16 *, 4) * 0x14);
    var_a1 = &D_8004AD78;
    var_a0 = 0;
    if (M2C_FIELD(__base_D_8004A510, u16 *, 0) != 0) {
        var_v0 = 0 << 0x10;
        do {
            temp_v1 = var_a0 + 1;
            var_a0 = temp_v1;
            temp_v0 = M2C_FIELD(((var_v0 >> 0xE) + __base_D_8004A510), M2C_UNK **, 8);
            *var_a1 = temp_v0;
            var_a1 = temp_v0;
            var_v0 = var_a0 << 0x10;
        } while (temp_v1 < (s32) M2C_FIELD(__base_D_8004A510, u16 *, 0));
    }
    var_a1_2 = &D_8004AD7C;
    var_a0_2 = 0;
    if (M2C_FIELD(__base_D_8004A510, u16 *, 2) != 0) {
        var_v0_2 = 0 << 0x10;
        do {
            temp_v1_2 = var_a0_2 + 1;
            var_a0_2 = temp_v1_2;
            temp_v0_2 = M2C_FIELD(((var_v0_2 >> 0xE) + __base_D_8004A510), M2C_UNK **, 0x48);
            *var_a1_2 = temp_v0_2;
            var_a1_2 = temp_v0_2;
            var_v0_2 = var_a0_2 << 0x10;
        } while (temp_v1_2 < (s32) M2C_FIELD(__base_D_8004A510, u16 *, 2));
    }
}
