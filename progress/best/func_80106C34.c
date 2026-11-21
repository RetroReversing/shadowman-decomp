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

M2C_UNK func_80106B30(void *);                      /* extern */
M2C_UNK func_80106DD4(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_80106E10();                            /* extern */
void *func_80106EF0(u32);                           /* extern */
M2C_UNK func_801073A0(void *, void *);              /* extern */
M2C_UNK func_801073F4(void *, void *);              /* extern */
s32 func_80107454(s32, void *);                     /* extern */
M2C_UNK func_80107554(s16, void *, u8, u8 *);       /* extern */
void *func_80116870();                              /* extern */
M2C_UNK func_80116D80(void *, void **, M2C_UNK);    /* extern */
M2C_UNK func_80116EB0(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK func_801171A0(void *);                      /* extern */
extern M2C_UNK D_8004B420;
extern M2C_UNK D_8004C680;

void func_80106C34(void) {
    void *sp10;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_s1;
    s32 temp_v1;
    u32 temp_s3;
    u8 *temp_s5;
    u8 temp_v0_3;
    void *temp_s0;
    void *temp_s1_2;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_80116870();
    temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x120) & 0x7C;
    if ((temp_v1 == 4) || (temp_v1 == 8)) {
        M2C_FIELD(&D_8004B420, s32 *, 4) = (s32) (M2C_FIELD(&D_8004B420, s32 *, 4) + 1);
        temp_s3 = (u32) M2C_FIELD(temp_v0, u32 *, 0x124) >> 0xC;
        temp_v0_2 = func_80106EF0(temp_s3);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(&D_8004B420, u32 *, 0x10) = (u32) M2C_FIELD(temp_v0, u32 *, 0x124);
            temp_s5 = M2C_FIELD(temp_v0_2, s32 *, 0x10) + (temp_s3 - M2C_FIELD(temp_v0_2, u16 *, 4));
            temp_v0_3 = *temp_s5;
            temp_s1 = M2C_FIELD(temp_v0_2, s32 *, 8);
            if (temp_v0_3 != 0xFF) {
                temp_s1_2 = (temp_v0_3 * 0x10) + (&D_8004B420 + 0x928);
                if (M2C_FIELD(temp_s1_2, u8 *, 0xB) == 0xFF) {
                    temp_s0 = &D_8004B420 + 0x1378;
                    func_801073A0(temp_s0, temp_s1_2);
                    func_80107554((s16) temp_s3, temp_s1_2, M2C_FIELD(temp_v0, u8 *, 0x17), temp_s5);
                    func_801073F4(temp_s0, temp_s1_2);
                }
                M2C_FIELD(temp_v0, s16 *, 0x12) = 2;
                func_801171A0(temp_v0);
                func_80106E10();
                return;
            }
            func_80116D80(&D_8004B420 + 0x1228, &sp10, 1);
            if (temp_s1 != 0) {
                M2C_FIELD(&D_8004B420, s32 *, 8) = (s32) (M2C_FIELD(&D_8004B420, s32 *, 8) + 1);
                temp_a2 = M2C_FIELD((temp_v0_2 + ((temp_s3 - M2C_FIELD(temp_v0_2, u16 *, 4)) * 4)), s32 *, 0x14);
                M2C_FIELD(sp10, s16 *, 0xC) = 1;
                M2C_FIELD(sp10, s32 *, 4) = (s32) (temp_a2 & ~1);
                func_80106DD4(sp10, -2, temp_a2);
                return;
            }
            M2C_FIELD(&D_8004B420, s32 *, 0xC) = (s32) (M2C_FIELD(&D_8004B420, s32 *, 0xC) + 1);
            temp_a0 = M2C_FIELD(temp_v0_2, s32 *, 0xC) + ((temp_s3 - M2C_FIELD(temp_v0_2, u16 *, 4)) << 0xC);
            M2C_FIELD(sp10, s32 *, 8) = 0x1000;
            M2C_FIELD(sp10, s16 *, 0xC) = 0;
            M2C_FIELD(sp10, s32 *, 4) = temp_a0;
            M2C_FIELD(sp10, s32 *, 0x10) = func_80107454(temp_a0, sp10);
            M2C_FIELD(sp10, s16 *, 0xE) = (s16) temp_s3;
            M2C_FIELD(sp10, u8 **, 0x18) = temp_s5;
            M2C_FIELD(sp10, void **, 0x14) = temp_v0;
            func_80116EB0(&D_8004C680, sp10, 1);
            func_80106E10();
            return;
        }
    }
    func_80106B30(temp_v0);
}
