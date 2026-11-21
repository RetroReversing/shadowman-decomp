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

s32 func_80104BC0(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_80109D88();                            /* extern */
M2C_UNK func_80225570(u16 *, u16, M2C_UNK *, s32);  /* extern */
M2C_UNK func_80229470(s32);                         /* extern */
void *func_8022ADB0(M2C_UNK *, M2C_UNK, s32 *);     /* extern */
M2C_UNK func_8022B090();                            /* extern */
M2C_UNK func_8022B588(M2C_UNK *);                   /* extern */
M2C_UNK func_8022EFF4(M2C_UNK *, M2C_UNK, s32);     /* extern */
M2C_UNK func_8023040C(M2C_UNK);                     /* extern */
s32 func_802304E0(s32);                             /* extern */
M2C_UNK func_80266BA4(s32, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_8026E2F4(M2C_UNK);                         /* extern */
extern M2C_UNK D_109620;
extern M2C_UNK D_201424;
extern M2C_UNK D_228904;
extern u16 D_8002C110;
extern u16 D_8002C112;
extern M2C_UNK D_8002C114;
extern s16 *D_8002C11C;
extern s8 D_8002C1BC;
extern s32 D_8002C240;
extern s32 D_8002E0A0;
extern M2C_UNK D_8004ADF8;
extern M2C_UNK D_8004AE08;
extern s8 D_8004DF42;
extern M2C_UNK *D_80052778;
extern u8 D_80059640;
extern s32 D_80059644;
extern void *D_80059648;
extern M2C_UNK *D_80059668;
extern u8 D_800755D9;
extern M2C_UNK D_8007DB68;
extern M2C_UNK D_8007DC30;

void func_80228A8C(void) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s16 *var_t0;
    s32 temp_v0_2;
    s32 var_a3;
    u16 *var_a0;
    void *temp_v0;
    void *temp_v1;

    sp10 = M2C_FIELD(&D_201424, s32 *, 0);
    sp14 = M2C_FIELD(&D_201424, s32 *, 4);
    sp18 = M2C_FIELD(&D_201424, s32 *, 8);
    sp1C = M2C_FIELD(&D_201424, s32 *, 0xC);
    sp20 = M2C_FIELD(&D_201424, s32 *, 0x10);
    func_8023040C(0);
    M2C_FIELD(&D_8007DB68, s32 *, 0xC) = (s32) (M2C_FIELD(&D_8007DB68, s32 *, 0xC) & ~0x7F00);
    func_80266BA4(D_8002E0A0, 0x10, &D_109620, -0x7F01);
    func_80109D88();
    D_8004DF42 = 0;
    func_8022B588(&D_8007DC30);
    func_8022B090();
    var_t0 = D_8002C11C;
    var_a0 = *((((D_8002C240 + 1) % 2) * 4) + &D_8002C114);
    var_a3 = 0;
    if ((D_8002C110 * D_8002C112) > 0) {
        do {
            *var_t0 = *var_a0 | 1;
            var_a0 += 2;
            var_a3 += 1;
            var_t0 += 2;
        } while (var_a3 < (D_8002C110 * D_8002C112));
    }
    D_8002C1BC = 1;
    D_80052778 = &D_228904;
    func_80225570(var_a0, D_8002C110, &D_8002C114, var_a3);
    temp_v0 = func_8022ADB0(&D_8004ADF8, 1, &sp10);
    D_80059648 = temp_v0;
    if (temp_v0 == NULL) {
        D_8002C1BC = 1;
        D_80052778 = D_80059668;
    }
    func_80229470(M2C_FIELD(temp_v0, s32 *, 4));
    D_80059640 = D_800755D9;
    temp_v0_2 = func_802304E0(func_80104BC0(&D_8004AE08, 4));
    D_80059644 = temp_v0_2;
    func_8022EFF4(&D_8004AE08, 4, temp_v0_2);
    if (func_8026E2F4(0xA3) != 0) {
        temp_v1 = M2C_FIELD(M2C_FIELD(D_80059648, void **, 4), void **, 4);
        M2C_FIELD(temp_v1, u16 *, 0xD2) = (u16) (M2C_FIELD(temp_v1, u16 *, 0xD2) | 0x80);
    }
}
