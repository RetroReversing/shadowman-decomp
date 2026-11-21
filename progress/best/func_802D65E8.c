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

s32 func_80104BF0(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_8021F16C(M2C_UNK, void **, M2C_UNK, void *); /* extern */
M2C_UNK func_8021F1E0();                            /* extern */
M2C_UNK func_8021F4D0();                            /* extern */
M2C_UNK func_8021FB8C(s16, s16, s16, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80220A84();                            /* extern */
M2C_UNK func_80220B14();                            /* extern */
M2C_UNK func_802214F8(M2C_UNK *, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_8022ECC0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_802428D8();                            /* extern */
M2C_UNK func_802D5668();                            /* extern */
M2C_UNK func_802DA9F0(M2C_UNK);                     /* extern */
extern M2C_UNK D_101760;
extern u8 D_8002C1BD;
extern M2C_UNK D_8002D200;
extern s32 D_800458F4;
extern M2C_UNK D_80045F90;
extern M2C_UNK D_8004AE08;
extern u16 D_80052776;
extern void *D_80056998;
extern s32 D_800753E4;
extern s32 D_8007C440;
extern M2C_UNK D_8007DB68;
extern M2C_UNK D_8007DB78;
extern u8 D_8007DB7A;

void func_802D65E8(void) {
    s32 var_v0;
    u16 temp_v1_2;
    void *temp_a3;
    void *temp_v0;
    void *temp_v1;

    if (D_8002C1BD != 0) {
        func_802428D8();
    }
    temp_v1 = D_80056998 + 8;
    M2C_FIELD(D_80056998, s32 *, 0) = 0xE7000000;
    temp_v0 = temp_v1 + 8;
    temp_a3 = temp_v1 + 0x10;
    M2C_FIELD(D_80056998, s32 *, 4) = 0;
    M2C_FIELD(D_80056998, s32 *, 8) = 0xE3000C00;
    D_80056998 = temp_v1;
    D_80056998 = temp_v0;
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    M2C_FIELD(temp_v1, s32 *, 8) = 0xE2001D00;
    M2C_FIELD(temp_v0, s32 *, 4) = 4;
    D_80056998 = temp_a3;
    D_80056998 = temp_v1 + 0x18;
    M2C_FIELD(temp_v1, s32 *, 0x10) = 0xFC119623;
    M2C_FIELD(temp_a3, s32 *, 4) = 0xFF2FFFFF;
    if ((D_800753E4 == 4) && (D_8007DB7A == 0) && (M2C_FIELD(((D_800458F4 * 0x14) + D_8007C440), u8 *, 0x11) != 0)) {
        func_8021F16C(0xF, &D_80056998, 4, temp_a3);
    }
    func_8021F4D0();
    func_80220B14();
    func_8022ECC0(0, 0);
    func_80220A84();
    func_8021F1E0();
    func_802D5668();
    if (M2C_FIELD(&D_8007DB78, u8 *, 2) != 0) {
        temp_v1_2 = M2C_FIELD(&D_8007DB68, u16 *, 0xC) - (D_80052776 * 2);
        M2C_FIELD(&D_8007DB68, u16 *, 0xC) = temp_v1_2;
        if (temp_v1_2 & 0x8000) {
            M2C_FIELD(&D_8007DB68, u16 *, 0xC) = (u16) (temp_v1_2 + 0xFE);
        }
        var_v0 = (s16) M2C_FIELD(&D_8007DB68, u16 *, 0xC) - 0x7F;
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        func_802214F8(&D_101760, *((M2C_FIELD(&D_8007DB78, u8 *, 0x8E) * 4) + &D_80045F90), 0xBE, 0xFF, (var_v0 * 2) & 0xFF);
        if (M2C_FIELD(&D_8007DB68, s32 *, 4) == 0) {
            M2C_FIELD(&D_8007DB68, s32 *, 4) = func_80104BF0(&D_8004AE08, 0x3B);
        }
        func_8021FB8C((s16) (s32) (M2C_FIELD(&D_8002D200, f32 *, 0) * *(f32 *)0x21D4A4), (s16) (s32) (M2C_FIELD(&D_8002D200, f32 *, 4) * *(f32 *)0x21D4A8), (s16) (s32) (M2C_FIELD(&D_8002D200, f32 *, 0) * *(f32 *)0x21D4AC), (s16) (s32) (M2C_FIELD(&D_8002D200, f32 *, 4) * *(f32 *)0x21D4B0), 0xA0, 0x40, M2C_FIELD(&D_8007DB68, s32 *, 4), 0, 0, 3, 0xFF, 0xFF, 0xFF, 0xA0);
        func_802DA9F0(0);
    }
}
