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

s32 func_801164B0();
s32 func_80116538();
s32 func_80116578();
void *func_801176C0();
extern void *D_80027780;
extern void *D_80027784;
extern s32 D_A4400000;

void func_80116410(void) {
    s32 sp10;
    s32 *sp14;
    void *sp18;
    void *sp1C;
    f32 temp_fv0;
    f32 temp_fv0f;
    f64 var_fv1;
    s32 temp_a2;
    s32 temp_s7;
    s32 temp_v0;
    u16 temp_v1;
    void *temp_a3;
    void *temp_fp;
    void *temp_v0_2;
    void *var_a1;
    void *var_a3;
    void *var_t4;
    void *var_t8;

    temp_fp = D_80027784;
    temp_a3 = M2C_FIELD(temp_fp, void **, 8);
    temp_s7 = *(s32 *)0xA4400010 & 1;
    sp18 = temp_a3;
    var_a3 = temp_a3;
    var_a1 = func_801176C0(M2C_FIELD(temp_fp, s32 *, 4), temp_a3) + M2C_FIELD((var_a3 + (temp_s7 * 0x14)), s32 *, 0x28);
    if (M2C_FIELD(temp_fp, u16 *, 0) & 2) {
        func_801164B0(M2C_FIELD(temp_fp, s32 *, 0x20) | (M2C_FIELD(var_a3, s32 *, 0x20) & ~0xFFF), var_a1);
        return;
    }
    M2C_FIELD(temp_fp, s32 *, 0x20) = (s32) M2C_FIELD(var_a3, s32 *, 0x20);
    if (M2C_FIELD(temp_fp, u16 *, 0) & 4) {
        temp_v0 = M2C_FIELD((var_a3 + (temp_s7 * 0x14)), s32 *, 0x2C) & 0xFFF;
        var_fv1 = (f64) temp_v0;
        if (temp_v0 < 0) {
            var_fv1 += *(f64 *)0x102570;
        }
        temp_fv0 = M2C_FIELD(temp_fp, f32 *, 0x24) * (f32) var_fv1;
        temp_fv0f = *(f32 *)0x102578;
        if (temp_fv0f <= temp_fv0) {
            M2C_FIELD(temp_fp, s32 *, 0x2C) = (s32) ((s32) (temp_fv0 - temp_fv0f) | 0x80000000);
            func_80116578(-0x1000, var_a1);
            return;
        }
        func_80116538(temp_fp + 0x2C, var_a1);
        return;
    }
    M2C_FIELD(temp_fp, s32 *, 0x2C) = (s32) M2C_FIELD((var_a3 + (temp_s7 * 0x14)), s32 *, 0x2C);
    temp_v1 = M2C_FIELD(temp_fp, u16 *, 0);
    temp_a2 = M2C_FIELD(var_a3, s32 *, 0x1C);
    sp10 = temp_a2;
    if (temp_v1 & 0x20) {
        sp10 = 0;
    }
    if (temp_v1 & 0x40) {
        M2C_FIELD(temp_fp, s32 *, 0x2C) = 0;
        sp18 = var_a3;
        var_a1 = func_801176C0(M2C_FIELD(temp_fp, s32 *, 4), var_a1, temp_a2, var_a3);
    }
    if (M2C_FIELD(temp_fp, u16 *, 0) & 0x80) {
        M2C_FIELD(temp_fp, s32 *, 0x2C) = (s32) ((M2C_FIELD(temp_fp, u16 *, 0x28) << 0x10) & 0x03FF0000);
        sp18 = var_a3;
        var_a1 = func_801176C0(M2C_FIELD(temp_fp, s32 *, 4), var_a1);
    }
    var_t8 = temp_fp;
    sp14 = (s32 *)0xA4400008;
    var_t4 = D_80027780;
    sp1C = var_t8 + 0x30;
    *(void **)0xA4400004 = var_a1;
    D_80027780 = var_t8;
    temp_v0_2 = var_a3 + (temp_s7 * 0x14);
    *sp14 = M2C_FIELD(var_a3, s32 *, 8);
    *(s32 *)0xA4400014 = M2C_FIELD(var_a3, s32 *, 0xC);
    *(s32 *)0xA4400018 = M2C_FIELD(var_a3, s32 *, 0x10);
    *(s32 *)0xA440001C = M2C_FIELD(var_a3, s32 *, 0x14);
    *(s32 *)0xA4400020 = M2C_FIELD(var_a3, s32 *, 0x18);
    *(s32 *)0xA4400024 = sp10;
    *(s32 *)0xA4400028 = M2C_FIELD(temp_v0_2, s32 *, 0x30);
    *(s32 *)0xA440002C = M2C_FIELD(temp_v0_2, s32 *, 0x34);
    *(s32 *)0xA440000C = M2C_FIELD(temp_v0_2, s32 *, 0x38);
    *(s32 *)0xA4400030 = M2C_FIELD(var_t8, s32 *, 0x20);
    *(s32 *)0xA4400034 = M2C_FIELD(var_t8, s32 *, 0x2C);
    D_A4400000 = M2C_FIELD(var_t8, s32 *, 0xC);
    D_80027784 = var_t4;
    do {
        M2C_FIELD(var_t4, s32 *, 0) = (s32) M2C_FIELD(var_t8, s32 *, 0);
        M2C_FIELD(var_t4, s32 *, 4) = (s32) M2C_FIELD(var_t8, s32 *, 4);
        M2C_FIELD(var_t4, s32 *, 8) = (s32) M2C_FIELD(var_t8, s32 *, 8);
        M2C_FIELD(var_t4, s32 *, 0xC) = (s32) M2C_FIELD(var_t8, s32 *, 0xC);
        var_t8 += 0x10;
        var_t4 += 0x10;
    } while (var_t8 != sp1C);
}
