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

s32 func_801049E4(void *, M2C_UNK, u8 *, s8);       /* extern */
M2C_UNK func_80116D80(M2C_UNK *, s32 *, M2C_UNK);   /* extern */
M2C_UNK func_80116EB0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
void *func_8021E320(M2C_UNK);                       /* extern */
M2C_UNK func_802295C0(s32, s32);                    /* extern */
M2C_UNK func_802D86D4(s32, s32, void *);            /* extern */
M2C_UNK func_802D8724(s32, s32, void *, s32);       /* extern */
M2C_UNK func_802D87E0(u8 *, s32, void *, s8);       /* extern */
M2C_UNK func_802D8920(u8 *, u32, u8 *, s8);         /* extern */
M2C_UNK func_802D89D4(u8 *, u32, u8 *, s8);         /* extern */
M2C_UNK func_802D8BF4();                            /* extern */
u32 func_802D9EC4(s32);                             /* extern */
extern M2C_UNK D_8000031C;
extern u8 D_80000325;
extern M2C_UNK D_80030610;
extern M2C_UNK D_80030630;
extern M2C_UNK D_80046380;
extern M2C_UNK D_8004DF10;
extern M2C_UNK D_8004E050;
extern M2C_UNK D_8004EC20;
extern M2C_UNK D_8005901C;
extern u8 D_80074BB3;
extern M2C_UNK D_80074C48;
extern u8 D_80075B13;
extern M2C_UNK D_80075B14;
extern u8 D_80075F20;
extern M2C_UNK D_80075F58;
extern M2C_UNK D_80075F68;
extern M2C_UNK D_80075F80;
extern M2C_UNK D_8007DB78;
extern M2C_UNK D_8007DC10;
extern M2C_UNK D_8007DC30;

void func_802D85E8(s32 arg0) {
    u8 sp10;                                        /* compiler-managed */
    u8 sp11;
    s8 sp13;
    s8 sp14;
    u8 sp15;
    u8 sp16;
    s32 sp18;
    s32 sp1C;
    M2C_UNK *var_t0;
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_3;
    M2C_UNK *var_v1_4;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v0_2;
    s32 var_a1;
    s32 var_a1_3;
    s32 var_v0;
    s32 var_v0_2;
    s8 temp_a3;
    u32 temp_v0_4;
    u32 var_a1_2;
    u8 *temp_a0_2;
    u8 *temp_a2_5;
    u8 *temp_a2_6;
    u8 *var_a0;
    u8 *var_a0_2;
    u8 *var_a2;
    u8 *var_a2_2;
    u8 *var_v1_2;
    u8 temp_v0_3;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *temp_v0;

    D_80075F20 = D_80074BB3;
    temp_v0 = func_8021E320(0x4900);
    temp_a2 = temp_v0 + 4;
    M2C_FIELD(temp_v0, s32 *, 0) = 0x11;
    sp11 = D_80075B13;
    sp10 = D_80000325;
    temp_a1 = ((s32) sp10 & 0xFFFF7FFF) | ((M2C_FIELD(&D_8007DB78, u8 *, 0xC) != 0) << 0xF);
    temp_fv0 = M2C_FIELD(&D_8004DF10, f32 *, 0) * *(f32 *)0x2D6DA0;
    temp_fv0f = *(f32 *)0x2D6DA4;
    temp_a0 = (temp_a1 & ~0x4000) | ((M2C_FIELD(&D_8007DB78, u8 *, 0xD) != 0) << 0xE);
    sp10 = temp_a1;
    sp10 = temp_a0;
    if (!(temp_fv0f <= temp_fv0)) {
        func_802D86D4(temp_a0, temp_a1, temp_a2);
        return;
    }
    temp_fv0_2 = M2C_FIELD(&D_8004DF10, f32 *, 4) * *(f32 *)0x2D6DA8;
    temp_fv0f_2 = *(f32 *)0x2D6DAC;
    sp13 = (s32) (temp_fv0 - temp_fv0f) | 0x80000000;
    if (!(temp_fv0f_2 <= temp_fv0_2)) {
        func_802D8724(temp_a0, temp_a1, temp_a2, (s32) temp_fv0_2);
        return;
    }
    temp_a3 = (s32) (temp_fv0_2 - temp_fv0f_2) | 0x80000000;
    var_a1 = 0;
    var_t0 = &D_80030630;
    sp14 = temp_a3;
    sp15 = M2C_FIELD(&D_8000031C, u8 *, 7);
    sp16 = M2C_FIELD(&D_8000031C, u8 *, 0xA);
    M2C_FIELD(temp_v0, M2C_UNK *, 4) = M2C_UNALIGNED32(sp10);
    M2C_FIELD(temp_a2, s8 *, 4) = sp14;
    M2C_FIELD(temp_a2, s8 *, 5) = (s8) sp15;
    M2C_FIELD(temp_a2, s8 *, 6) = (s8) sp16;
    temp_a2_2 = temp_a2 + 7;
loop_7:
    if (M2C_FIELD(var_t0, u8 *, 3) & 0x38) {
        var_v0 = var_a1;
        if (var_a1 < 0) {
            var_v0 = var_a1 + 7;
        }
        func_802D87E0(temp_a2_2 + (var_v0 >> 3), var_a1, temp_a2_2, temp_a3);
        return;
    }
    var_v0_2 = var_a1;
    if (var_a1 < 0) {
        var_v0_2 = var_a1 + 7;
    }
    temp_v0_2 = var_v0_2 >> 3;
    temp_a0_2 = temp_a2_2 + temp_v0_2;
    *temp_a0_2 &= ~(1 << (var_a1 - (temp_v0_2 * 8)));
    var_a1 += 1;
    var_t0 += 0x20;
    if (var_a1 >= 0x1E) {
        temp_a2_3 = temp_a2_2 + 4;
        M2C_FIELD(temp_a2_2, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(&D_8004EC20, M2C_UNK *, 0));
        M2C_FIELD(temp_a2_3, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(&D_8004EC20, M2C_UNK *, 4));
        M2C_FIELD(temp_a2_3, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(&D_8004EC20, M2C_UNK *, 8));
        temp_a2_4 = temp_a2_3 + 0xC;
        M2C_FIELD(temp_a2_3, s8 *, 0xC) = (s8) M2C_FIELD(&D_80074C48, s8 *, 0);
        M2C_FIELD(temp_a2_4, s8 *, 1) = (s8) M2C_FIELD(&D_80074C48, s8 *, 1);
        M2C_FIELD(temp_a2_4, s8 *, 2) = (s8) M2C_FIELD(&D_80074C48, s8 *, 2);
        var_a2 = temp_a2_4 + 3;
        var_a1_2 = 0;
        var_v1 = &D_80030610;
        do {
            temp_v0_3 = M2C_FIELD(var_v1, u8 *, 1);
            var_v1 += 2;
            var_a1_2 += 1;
            *var_a2 = temp_v0_3;
            var_a2 += 1;
        } while (var_a1_2 < 0x10U);
        var_v1_2 = &D_80075F20;
        var_a0 = var_a2;
        if (((s32) var_a2 | (s32) &D_80075F20) & 3) {
            __repair_rows: {
                M2C_FIELD(var_a0, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, u8 *, 0));
                M2C_FIELD(var_a0, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 4));
                M2C_FIELD(var_a0, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 8));
                M2C_FIELD(var_a0, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1_2, M2C_UNK *, 0xC));
                var_v1_2 += 0x10;
                var_a0 += 0x10;
            }
if (var_v1_2 != (&D_80075F20 + 0x30)) goto __repair_rows;
            func_802D8920(var_a0, var_a1_2, var_a2, temp_a3);
            return;
        }
        do {
            M2C_FIELD(var_a0, s32 *, 0) = (s32) M2C_FIELD(var_v1_2, s32 *, 0);
            M2C_FIELD(var_a0, s32 *, 4) = (s32) M2C_FIELD(var_v1_2, s32 *, 4);
            M2C_FIELD(var_a0, s32 *, 8) = (s32) M2C_FIELD(var_v1_2, s32 *, 8);
            M2C_FIELD(var_a0, s32 *, 0xC) = (s32) M2C_FIELD(var_v1_2, s32 *, 0xC);
            var_v1_2 += 0x10;
            var_a0 += 0x10;
        } while (var_v1_2 != (&D_80075F20 + 0x30));
        *var_a0 = M2C_UNALIGNED32(*var_v1_2);
        temp_a2_5 = var_a2 + 0x34;
        var_v1_3 = &D_80075B14;
        var_a0_2 = temp_a2_5;
        if (((s32) temp_a2_5 | (s32) &D_80075B14) & 3) {
            do {
                M2C_FIELD(var_a0_2, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_3, M2C_UNK *, 0));
                M2C_FIELD(var_a0_2, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_3, M2C_UNK *, 4));
                M2C_FIELD(var_a0_2, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_v1_3, M2C_UNK *, 8));
                M2C_FIELD(var_a0_2, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_v1_3, M2C_UNK *, 0xC));
                var_v1_3 += 0x10;
                var_a0_2 += 0x10;
            } while (var_v1_3 != (&D_80075B14 + 0x20));
            func_802D89D4(var_a0_2, var_a1_2, temp_a2_5, temp_a3);
            return;
        }
        do {
            M2C_FIELD(var_a0_2, s32 *, 0) = (s32) M2C_FIELD(var_v1_3, s32 *, 0);
            M2C_FIELD(var_a0_2, s32 *, 4) = (s32) M2C_FIELD(var_v1_3, s32 *, 4);
            M2C_FIELD(var_a0_2, s32 *, 8) = (s32) M2C_FIELD(var_v1_3, s32 *, 8);
            M2C_FIELD(var_a0_2, s32 *, 0xC) = (s32) M2C_FIELD(var_v1_3, s32 *, 0xC);
            var_v1_3 += 0x10;
            var_a0_2 += 0x10;
        } while (var_v1_3 != (&D_80075B14 + 0x20));
        M2C_FIELD(var_a0_2, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_3, M2C_UNK *, 0));
        M2C_FIELD(var_a0_2, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_3, M2C_UNK *, 4));
        var_a2_2 = temp_a2_5 + 0x28;
        var_a1_3 = 0;
        var_v1_4 = &D_80075F80;
        do {
            M2C_FIELD(var_a2_2, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_v1_4, M2C_UNK *, 0));
            M2C_FIELD(var_a2_2, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_v1_4, M2C_UNK *, 4));
            M2C_FIELD(var_a2_2, s8 *, 8) = (s8) M2C_FIELD(var_v1_4, s8 *, 8);
            var_a2_2 += 9;
            var_a1_3 += 1;
            var_v1_4 += 0xA;
        } while (var_a1_3 < 0x800);
        M2C_FIELD(var_a2_2, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(&D_80075F68, M2C_UNK *, 0));
        M2C_FIELD(var_a2_2, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(&D_80075F68, M2C_UNK *, 4));
        M2C_FIELD(var_a2_2, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(&D_80075F68, M2C_UNK *, 8));
        M2C_FIELD(var_a2_2, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(&D_80075F68, M2C_UNK *, 0xC));
        M2C_FIELD(var_a2_2, s8 *, 0x10) = (s8) M2C_FIELD(&D_80075F68, s8 *, 0x10);
        temp_a2_6 = var_a2_2 + 0x11;
        M2C_FIELD(var_a2_2, M2C_UNK *, 0x11) = M2C_UNALIGNED32(M2C_FIELD(&D_80075F58, M2C_UNK *, 0));
        M2C_FIELD(temp_a2_6, M2C_UNK *, 4) = M2C_UNALIGNED32(M2C_FIELD(&D_80075F58, M2C_UNK *, 4));
        M2C_FIELD(temp_a2_6, M2C_UNK *, 8) = M2C_UNALIGNED32(M2C_FIELD(&D_80075F58, M2C_UNK *, 8));
        M2C_FIELD(temp_a2_6, M2C_UNK *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(&D_80075F58, M2C_UNK *, 0xC));
        M2C_FIELD(temp_a2_6, M2C_UNK *, 0x10) = M2C_UNALIGNED32(M2C_FIELD(&D_8004E050, M2C_UNK *, 0));
        M2C_FIELD(temp_a2_6, M2C_UNK *, 0x14) = M2C_UNALIGNED32(M2C_FIELD(&D_8004E050, M2C_UNK *, 4));
        sp18 = func_801049E4(temp_v0, 0x48D3, temp_a2_6, temp_a3);
        M2C_FIELD(temp_v0, M2C_UNK *, 0x48D3) = M2C_UNALIGNED32(sp18);
        M2C_FIELD(&D_8007DC10, s32 *, 0) = 6;
        M2C_FIELD(&D_8007DC10, s16 *, 6) = 1;
        M2C_FIELD(&D_8007DC10, s32 *, 0xC) = 0;
        M2C_FIELD(&D_8007DC10, s32 *, 8) = 0x4900;
        M2C_FIELD(&D_8007DC10, void **, 0x14) = temp_v0;
        func_80116EB0(&D_8005901C, &D_80046380, 1);
        func_80116D80(&D_8007DC30, &sp1C, 1);
        temp_v0_4 = func_802D9EC4(sp1C);
        switch (temp_v0_4) {                        /* irregular */
        case 2:
            func_802D8BF4();
            return;
        case 3:
            func_802D8BF4();
            return;
        case 4:
            func_802D8BF4();
            return;
        default:
            func_802295C0(arg0, *(s32 *)0x8007E060);
            return;
        }
    } else {
        goto loop_7;
    }
}
