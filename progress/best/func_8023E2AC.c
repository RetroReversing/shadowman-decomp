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

M2C_UNK func_80224240(void *, s32);                 /* extern */
M2C_UNK func_802383C0(void *);                      /* extern */
M2C_UNK func_802397D0(void *);                      /* extern */
M2C_UNK func_8023981C(void *);                      /* extern */
M2C_UNK func_802398C8(void *, s32, M2C_UNK *);      /* extern */
s32 func_8023E4F8(u16, M2C_UNK *, u16, s16 *);      /* extern */
M2C_UNK func_8023EB4C(void *, void *);              /* extern */
M2C_UNK func_802BD278();                            /* extern */
extern s32 D_8002C1B0;
extern void *D_8005EA2C;
extern void *D_80061A10;
extern M2C_UNK D_80075568;

void func_8023E2AC(void *arg0, void *arg1) {
    M2C_UNK sp10;
    s16 sp40;
    s32 temp_a1;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_s6;
    u16 temp_a0;
    u16 temp_a2;
    u16 var_s4_2;
    void *temp_s7;
    void *var_s0;
    void *var_s3;
    void *var_v1;

    D_80061A10 = M2C_FIELD(arg0, void **, 0x64);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x80);
    temp_s7 = M2C_FIELD(arg1, void **, 0x48);
    D_8002C1B0 = temp_v1;
    if (temp_v1 != 0) {
        var_s5 = 0;
        func_802397D0(D_8005EA2C + 0x3C);
        var_v1 = D_8005EA2C;
        do {
            var_s5 += 1;
            M2C_FIELD(var_v1, f32 *, 0x3C) = (f32) (M2C_FIELD(var_v1, f32 *, 0x3C) * *(f32 *)0x202628);
            var_v1 += 4;
        } while (var_s5 < 0xC);
        var_s4 = 0xFF;
        var_s6 = M2C_FIELD(arg1, s32 *, 0x40);
        var_s5_2 = 0;
        sp40 = 0;
        if (M2C_FIELD(temp_s7, u16 *, 0) != 0) {
            var_s3 = M2C_FIELD(temp_s7, s32 *, 8) + 6;
            __repair_rows: {
                func_802398C8(D_8005EA2C + 0x3C, var_s6, &sp10);
                var_s4 &= func_8023E4F8(M2C_FIELD(var_s3, u16 *, 2), &sp10, M2C_FIELD(var_s3, u16 *, -2), &sp40);
                if (M2C_FIELD(var_s3, u16 *, 0) != 0) {
                    var_s2 = 0;
                    var_s1 = M2C_FIELD(temp_s7, s32 *, 0xC) + (M2C_FIELD(var_s3, u16 *, 4) * 0x3C);
                    if (M2C_FIELD(var_s3, u16 *, 0) != 0) {
                        var_s0 = var_s1 + 6;
                        do {
                            temp_a1 = var_s1 + 0xC;
                            var_s2 += 1;
                            var_s1 += 0x3C;
                            func_802398C8(D_8005EA2C + 0x3C, temp_a1, &sp10);
                            temp_a0 = M2C_FIELD(var_s0, u16 *, 2);
                            temp_a2 = M2C_FIELD(var_s0, u16 *, 0);
                            var_s0 += 0x3C;
                            var_s4 &= func_8023E4F8(temp_a0, &sp10, temp_a2, &sp40);
                        } while (var_s2 < (s32) M2C_FIELD(var_s3, u16 *, 0));
                    }
                }
                var_s5_2 += 1;
                var_s3 += 0xC;
                var_s6 += 0x40;
            }
if (var_s5_2 < (s32) M2C_FIELD(temp_s7, u16 *, 0)) goto __repair_rows;
        }
        if (arg0 == &D_80075568) {
            func_802BD278();
        }
        func_8023981C(D_8005EA2C + 0x3C);
        if ((var_s4 << 0x10) == 0) {
            var_s4_2 = M2C_FIELD(arg0, u16 *, 0x78);
            if ((sp40 == 0) && (var_s4_2 & 2)) {
                var_s4_2 &= 0xFFFD;
            }
            if (M2C_FIELD(arg1, s32 *, 0x4C) != 0) {
                func_8023EB4C(D_80061A10, arg1);
            }
            if (M2C_FIELD(D_80061A10, u16 *, 0x3C) & 8) {
                func_802383C0(arg0);
            }
            func_80224240(arg0, (var_s4_2 >> 1) & 1);
        }
    }
}
