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

M2C_UNK func_8011BA20(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_8004A5A0;
extern M2C_UNK *D_8004AD70;
extern s32 D_8004AD80;

void func_801035A4(void) {
    s32 temp_a1;
    s16 temp_v0;
    s16 var_a2;
    s32 temp_v0_2;

    D_8004AD70 = &D_8004A5A0;
    func_8011BA20(&D_8004A5A0, 0, 0x7D0);
    var_a2 = 0;
    do {
        temp_a1 = var_a2;
        if (temp_a1 < 0x63) {
            temp_v0_2 = temp_a1 * 0x14;
            M2C_FIELD((temp_v0_2 + D_8004AD70), void **, 0x10) = (void *) (D_8004AD70 + (temp_v0_2 + 0x14));
        }
        temp_v0 = var_a2 + 1;
        var_a2 = temp_v0;
        M2C_FIELD(((temp_a1 * 0x14) + D_8004AD70), s8 *, 0xC) = 0;
    } while (temp_v0 < 0x64);
    M2C_FIELD(D_8004AD70, s8 *, 0xC) = 2;
    D_8004AD80 = M2C_FIELD(D_8004AD70, s32 *, 0x10);
}
