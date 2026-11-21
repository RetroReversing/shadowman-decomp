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

M2C_UNK func_8023C4E4(M2C_UNK *, M2C_UNK, s32);     /* extern */
M2C_UNK func_8023C55C(void *, s32, s32);            /* extern */
M2C_UNK func_8023C5D4(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_8023C650(void *, s32, s32);            /* extern */
extern M2C_UNK D_25D6EC;
extern M2C_UNK D_8002D410;
extern M2C_UNK D_8002D418;
extern s32 D_8002D420;
extern s32 D_8002D424;
extern s32 D_80052778;
extern M2C_UNK D_80058F08;
extern M2C_UNK D_8006A4D0;
extern s32 D_800753E4;

void func_8023C450(void) {
    f32 temp_fv0;
    s32 temp_v1_5;
    s32 var_a1;
    s32 var_a2;
    s8 temp_v1;
    s8 temp_v1_2;
    s8 temp_v1_3;
    s8 temp_v1_4;

    var_a2 = 0;
    var_a1 = 0;
    if (D_800753E4 == 2) {
        var_a2 = D_80052778 == (s32) &D_25D6EC;
    }
    temp_v1 = M2C_FIELD((((var_a2 & 0xFF) * 6) + &D_80058F08), s8 *, 0x191);
    if (temp_v1 >= 0x1F) {
        var_a1 = 1;
        if (temp_v1 < 0x4B) {
            func_8023C4E4(&D_8002D418, 1, var_a2);
            return;
        }
        M2C_FIELD(&D_8002D418, f32 *, 0) = (f32) *(f32 *)0x2025C0;
        M2C_FIELD(&D_8002D418, f32 *, 0) = (f32) (M2C_FIELD(&D_8002D418, f32 *, 0) * *(f32 *)0x2025C4);
        goto block_7;
    }
block_7:
    temp_v1_2 = M2C_FIELD((((var_a2 & 0xFF) * 6) + &D_80058F08), s8 *, 0x191);
    if (temp_v1_2 < -0x1E) {
        var_a1 |= 2;
        if (temp_v1_2 >= -0x4A) {
            func_8023C55C(&D_8002D418 + 4, var_a1, var_a2);
            return;
        }
        M2C_FIELD(&D_8002D418, f32 *, 4) = (f32) *(f32 *)0x2025CC;
        M2C_FIELD(&D_8002D418, f32 *, 4) = (f32) (M2C_FIELD(&D_8002D418, f32 *, 4) * *(f32 *)0x2025D0);
        goto block_12;
    }
block_12:
    temp_v1_3 = M2C_FIELD((((var_a2 & 0xFF) * 6) + &D_80058F08), s8 *, 0x190);
    if (temp_v1_3 < -0x1E) {
        var_a1 |= 4;
        if (temp_v1_3 >= -0x4A) {
            func_8023C5D4(&D_8002D410, var_a1, var_a2);
            return;
        }
        M2C_FIELD(&D_8002D410, f32 *, 0) = (f32) *(f32 *)0x2025D8;
        M2C_FIELD(&D_8002D410, f32 *, 0) = (f32) (M2C_FIELD(&D_8002D410, f32 *, 0) * *(f32 *)0x2025DC);
        goto block_17;
    }
block_17:
    temp_v1_4 = M2C_FIELD((((var_a2 & 0xFF) * 6) + &D_80058F08), s8 *, 0x190);
    if (temp_v1_4 >= 0x1F) {
        var_a1 |= 8;
        if (temp_v1_4 < 0x4B) {
            func_8023C650(&D_8002D410 + 4, var_a1, var_a2);
            return;
        }
        M2C_FIELD(&D_8002D410, f32 *, 4) = (f32) *(f32 *)0x2025E4;
        M2C_FIELD(&D_8002D410, f32 *, 4) = (f32) (M2C_FIELD(&D_8002D410, f32 *, 4) * *(f32 *)0x2025E8);
        goto block_22;
    }
block_22:
    if ((M2C_FIELD(&D_8006A4D0, u16 *, 0xA) != 0) && (M2C_FIELD(((var_a2 * 4) + &D_80058F08), s32 *, 0x1A8) & M2C_FIELD(&D_8006A4D0, u16 *, 0xA))) {
        var_a1 |= 0x8000;
    }
    if ((M2C_FIELD(&D_8006A4D0, u16 *, 8) != 0) && (M2C_FIELD(((var_a2 * 4) + &D_80058F08), s32 *, 0x1A8) & M2C_FIELD(&D_8006A4D0, u16 *, 8))) {
        var_a1 |= 0x40;
    }
    if ((M2C_FIELD(&D_8006A4D0, u16 *, 0xC) != 0) && (M2C_FIELD(((var_a2 * 4) + &D_80058F08), s32 *, 0x1A8) & M2C_FIELD(&D_8006A4D0, u16 *, 0xC))) {
        var_a1 |= 0x400;
    }
    if ((M2C_FIELD(&D_8006A4D0, u16 *, 0xE) != 0) && (M2C_FIELD(((var_a2 * 4) + &D_80058F08), s32 *, 0x1A8) & M2C_FIELD(&D_8006A4D0, u16 *, 0xE))) {
        var_a1 |= 0x2000;
    }
    if ((M2C_FIELD(&D_8006A4D0, u16 *, 2) != 0) && (M2C_FIELD(((var_a2 * 4) + &D_80058F08), s32 *, 0x1A8) & M2C_FIELD(&D_8006A4D0, u16 *, 2))) {
        var_a1 |= 0x20;
    }
    if ((M2C_FIELD(&D_8006A4D0, u16 *, 4) != 0) && (M2C_FIELD(((var_a2 * 4) + &D_80058F08), s32 *, 0x1A8) & M2C_FIELD(&D_8006A4D0, u16 *, 4))) {
        var_a1 |= 0x800000;
    }
    if ((M2C_FIELD(&D_8006A4D0, u16 *, 6) != 0) && (M2C_FIELD(((var_a2 * 4) + &D_80058F08), s32 *, 0x1A8) & M2C_FIELD(&D_8006A4D0, u16 *, 6))) {
        var_a1 |= 0x01000000;
    }
    if ((M2C_FIELD(&D_8006A4D0, u16 *, 0x10) != 0) && (M2C_FIELD(((var_a2 * 4) + &D_80058F08), s32 *, 0x1A8) & M2C_FIELD(&D_8006A4D0, u16 *, 0x10))) {
        var_a1 |= 0x100;
    }
    if ((M2C_FIELD(&D_8006A4D0, u16 *, 0x12) != 0) && (M2C_FIELD(((var_a2 * 4) + &D_80058F08), s32 *, 0x1A8) & M2C_FIELD(&D_8006A4D0, u16 *, 0x12))) {
        var_a1 |= 0x200;
    }
    if ((M2C_FIELD(&D_8006A4D0, u16 *, 0) != 0) && (M2C_FIELD(((var_a2 * 4) + &D_80058F08), s32 *, 0x1A8) & M2C_FIELD(&D_8006A4D0, u16 *, 0))) {
        var_a1 |= 0x80;
    }
    if ((M2C_FIELD(&D_8006A4D0, u16 *, 0x18) != 0) && (M2C_FIELD(((var_a2 * 4) + &D_80058F08), s32 *, 0x1A8) & M2C_FIELD(&D_8006A4D0, u16 *, 0x18))) {
        var_a1 |= 0x40000;
    }
    if ((M2C_FIELD(&D_8006A4D0, u16 *, 0x1A) != 0) && (M2C_FIELD(((var_a2 * 4) + &D_80058F08), s32 *, 0x1A8) & M2C_FIELD(&D_8006A4D0, u16 *, 0x1A))) {
        var_a1 |= 0x80000;
    }
    if ((M2C_FIELD(&D_8006A4D0, u16 *, 0x14) != 0) && (M2C_FIELD(((var_a2 * 4) + &D_80058F08), s32 *, 0x1A8) & M2C_FIELD(&D_8006A4D0, u16 *, 0x14))) {
        var_a1 |= 0x10000;
    }
    if ((M2C_FIELD(&D_8006A4D0, u16 *, 0x16) != 0) && (M2C_FIELD(((var_a2 * 4) + &D_80058F08), s32 *, 0x1A8) & M2C_FIELD(&D_8006A4D0, u16 *, 0x16))) {
        var_a1 |= 0x20000;
    }
    if ((M2C_FIELD(&D_8006A4D0, u16 *, 0x1C) != 0) && (M2C_FIELD(((var_a2 * 4) + &D_80058F08), s32 *, 0x1A8) & M2C_FIELD(&D_8006A4D0, u16 *, 0x1C))) {
        var_a1 |= 0x100000;
    }
    if (M2C_FIELD(((var_a2 * 4) + &D_80058F08), s32 *, 0x1A8) & 0x1000) {
        var_a1 |= 0x4000;
    }
    if (D_80052778 != &D_25D6EC) {
        temp_fv0 = *(f32 *)0x2025EC;
        M2C_FIELD(&D_8002D418, f32 *, 4) = temp_fv0;
        M2C_FIELD(&D_8002D418, f32 *, 0) = temp_fv0;
        M2C_FIELD(&D_8002D410, f32 *, 4) = temp_fv0;
        M2C_FIELD(&D_8002D410, f32 *, 0) = temp_fv0;
    }
    temp_v1_5 = D_8002D420;
    D_8002D420 = var_a1;
    D_8002D424 = var_a1 ^ (temp_v1_5 & var_a1);
}
