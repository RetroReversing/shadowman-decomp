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

void *func_80103878();
s32 func_80103E24();
s32 func_80103F90();
s32 func_8011BA20();
extern void *D_8004AD70;
extern void *D_8004AD80;

typedef struct { int value; } __repair_field_0;
s32 func_80103E10(void) {
    void **__base_D_8004AD80;
    s16 temp_v0_4;
    s16 var_a1;
    s32 temp_a0;
    s32 temp_v0_5;
    s32 var_v0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_a0;
    void *var_a0_2;

    __base_D_8004AD80 = &D_8004AD80;
    if (M2C_FIELD((*__base_D_8004AD80), u8 *, 0xC) == 0) {
        temp_v0 = M2C_FIELD((*__base_D_8004AD80), void **, 0x10);
        if (temp_v0 != NULL) {
            (*__base_D_8004AD80) = temp_v0;
        }
        ((__repair_field_0 *)(*__base_D_8004AD80))->value = 0;
        M2C_FIELD((*__base_D_8004AD80), s32 *, 4) = 0;
        M2C_FIELD((*__base_D_8004AD80), s32 *, 8) = 0;
        M2C_FIELD((*__base_D_8004AD80), u8 *, 0xC) = (s32) ((s32) M2C_FIELD((*__base_D_8004AD80), u8 *, 0xC) & 0xFF000000);
        return func_80103F90((void *)0xFF000000, __base_D_8004AD80);
    }
    var_a0 = D_8004AD70;
    if (var_a0 != NULL) {
loop_7:
        if (M2C_FIELD(var_a0, u8 *, 0xC) == 0) {
            temp_v0_2 = M2C_FIELD(var_a0, void **, 0x10);
            if (temp_v0_2 != NULL) {
                (*__base_D_8004AD80) = temp_v0_2;
            }
            ((__repair_field_0 *)var_a0)->value = 0;
            M2C_FIELD(var_a0, s32 *, 4) = 0;
            M2C_FIELD(var_a0, s32 *, 8) = 0;
            M2C_FIELD(var_a0, u8 *, 0xC) = (s32) ((s32) M2C_FIELD(var_a0, u8 *, 0xC) & 0xFF000000);
            return func_80103F90(var_a0, (void **)0xFF000000, 1);
        }
        var_a0 = M2C_FIELD(var_a0, void **, 0x10);
        if (var_a0 == NULL) {
            goto block_13;
        }
        goto loop_7;
    }
block_13:
    var_a0_2 = D_8004AD70;
    if (var_a0_2 != NULL) {
        for (;;) {
            if (M2C_FIELD(var_a0_2, u8 *, 0xC) == 2) {
                M2C_FIELD(var_a0_2, u8 *, 0xC) = 0U;
                temp_v0_3 = func_80103878(0x7D0, 4, 0);
                func_8011BA20(temp_v0_3, 0, 0x7D0);
                var_a1 = 0;
                var_v0 = 0 << 0x10;
                do {
                    temp_a0 = var_v0 >> 0x10;
                    if (temp_a0 < 0x63) {
                        temp_v0_5 = temp_a0 * 0x14;
                        M2C_FIELD((temp_v0_5 + temp_v0_3), void **, 0x10) = (void *) (temp_v0_3 + (temp_v0_5 + 0x14));
                    }
                    M2C_FIELD(((temp_a0 * 0x14) + temp_v0_3), s8 *, 0xC) = 0;
                    temp_v0_4 = var_a1 + 1;
                    var_a1 = temp_v0_4;
                    var_v0 = var_a1 << 0x10;
                } while (temp_v0_4 < 0x64);
                M2C_FIELD(temp_v0_3, s8 *, 0xC) = 2;
                return func_80103E24(temp_a0, var_a1);
            }
            var_a0_2 = M2C_FIELD(var_a0_2, void **, 0x10);
            if (var_a0_2 == NULL) {
                /* Duplicate return node #22. Try simplifying control flow for better match */
                return 0;
            }
            continue;
            break;
        }
    }
    return 0;
}
