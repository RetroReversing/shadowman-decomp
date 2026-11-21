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

void *func_8021E344(u16);                           /* extern */
s32 func_8021E37C(s32);                             /* extern */
s32 func_802234F4(void *, s32, void *, s32, s32, s32, s32); /* extern */
s32 func_80224CFC(void *, s32, u16, s16, s32);      /* extern */
M2C_UNK func_80225910(M2C_UNK);                     /* extern */
M2C_UNK func_802259B0(M2C_UNK);                     /* extern */
M2C_UNK func_80225A50(M2C_UNK);                     /* extern */
M2C_UNK func_802387D8(void *);                      /* extern */
extern s32 D_8002C0F0;
extern void *D_8005387C;
extern void *D_80056998;
extern void *D_800569A4;
extern M2C_UNK D_800591A0;

void func_80224240(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s2;
    s32 var_s3;
    u16 temp_v0_2;
    u16 temp_v0_4;
    u16 temp_v0_6;
    void *temp_s1;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_v0_3;
    void *temp_v0_5;
    void *temp_v0_7;

    temp_s1 = M2C_FIELD(arg0, void **, 0x64);
    if (D_8002C0F0 & 4) {
        var_s3 = M2C_FIELD(temp_s1, s32 *, 0x14);
        temp_v0 = func_80224CFC(temp_s1, var_s3, M2C_FIELD(temp_s1, u16 *, 0x30), M2C_FIELD(temp_s1, s16 *, 0x3C), arg1 & 0xFF);
        if (temp_v0 != 0) {
            var_s2 = func_8021E37C(temp_v0);
            if (var_s2 != 0) {
                if ((u16) M2C_FIELD(temp_s1, s16 *, 0x3C) & 8) {
                    func_802387D8(arg0);
                }
                temp_v0_2 = M2C_FIELD(temp_s1, u16 *, 0x40);
                if (temp_v0_2 != 0) {
                    temp_v0_3 = func_8021E344(temp_v0_2);
                    if (temp_v0_3 != NULL) {
                        func_80225910(0x3F);
                        M2C_FIELD(D_8005387C, s32 *, 0) = 0xDE000000;
                        M2C_FIELD(D_8005387C, void **, 4) = temp_v0_3;
                        M2C_FIELD(temp_v0_3, s32 *, 0) = 0xDA380002;
                        M2C_FIELD(temp_v0_3, M2C_UNK **, 4) = &D_800591A0;
                        D_8005387C += 8;
                        var_s2 = func_802234F4(temp_v0_3 + 8, var_s2, temp_s1, var_s3, (s32) M2C_FIELD(temp_s1, u16 *, 0x46), 0, 0);
                        var_s3 += M2C_FIELD(temp_s1, u16 *, 0x46) * 0x12;
                        goto block_8;
                    }
                } else {
block_8:
                    temp_v0_4 = M2C_FIELD(temp_s1, u16 *, 0x42);
                    if (temp_v0_4 != 0) {
                        temp_v0_5 = func_8021E344(temp_v0_4);
                        if (temp_v0_5 != NULL) {
                            func_802259B0(0x3F);
                            temp_t0 = D_80056998;
                            D_80056998 += 8;
                            M2C_FIELD(temp_t0, s32 *, 0) = 0xDE000000;
                            M2C_FIELD(temp_t0, void **, 4) = temp_v0_5;
                            M2C_FIELD(temp_v0_5, s32 *, 0) = 0xDA380002;
                            M2C_FIELD(temp_v0_5, M2C_UNK **, 4) = &D_800591A0;
                            var_s2 = func_802234F4(temp_v0_5 + 8, var_s2, temp_s1, var_s3, (s32) M2C_FIELD(temp_s1, u16 *, 0x48), 1, 0);
                            var_s3 += M2C_FIELD(temp_s1, u16 *, 0x48) * 0x12;
                            goto block_11;
                        }
                    } else {
block_11:
                        temp_v0_6 = M2C_FIELD(temp_s1, u16 *, 0x44);
                        if (temp_v0_6 != 0) {
                            temp_v0_7 = func_8021E344(temp_v0_6);
                            if (temp_v0_7 != NULL) {
                                func_80225A50(0x3F);
                                temp_t0_2 = D_800569A4;
                                D_800569A4 += 8;
                                M2C_FIELD(temp_t0_2, s32 *, 0) = 0xDE000000;
                                M2C_FIELD(temp_t0_2, void **, 4) = temp_v0_7;
                                M2C_FIELD(temp_v0_7, s32 *, 0) = 0xDA380002;
                                M2C_FIELD(temp_v0_7, M2C_UNK **, 4) = &D_800591A0;
                                func_802234F4(temp_v0_7 + 8, var_s2, temp_s1, var_s3, (s32) M2C_FIELD(temp_s1, u16 *, 0x4A), 2, 0);
                            }
                        }
                    }
                }
            }
        }
    }
}
