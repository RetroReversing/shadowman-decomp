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

s32 func_8021E130();
s32 func_8021E344();
extern s32 D_8002C0F0;
extern char D_8002C1C0[];
extern s32 D_8002C240;
extern char D_80046560[];
extern char D_80046630[];
extern char D_80047450[];
extern char D_800487E0[];
extern char D_80049C30[];
extern char D_8005281F[];
extern char D_8005342F[];
extern s32 *D_8005387C;
extern s32 D_80053880;
extern char D_80053910[];
extern void *D_80056998;
extern s32 D_8005699C;
extern void *D_800569A4;
extern s32 D_800569A8;
extern s32 D_80075F50;

void func_8021DFEC(void) {
    s32 *temp_a0;
    s32 *temp_a1_2;
    s32 *temp_t0;
    s32 *temp_v1;
    void *temp_a1;
    void *temp_a1_3;
    void *temp_a2;
    void *temp_t1;

    temp_a1 = D_800569A4;
    temp_t0 = D_8005387C;
    temp_v1 = D_8005387C + 8;
    temp_t1 = D_80056998;
    D_800569A4 += 8;
    M2C_FIELD(temp_a1, s32 *, 0) = 0xDF000000;
    M2C_FIELD(temp_a1, s32 *, 4) = 0;
    D_80056998 += 8;
    M2C_FIELD(temp_t0, s32 *, 4) = (s32) D_800569A8;
    temp_a0 = temp_v1 + 8;
    D_8005387C = temp_v1;
    M2C_FIELD(temp_t0, s32 *, 0) = 0xDE000000;
    D_8005387C = temp_a0;
    M2C_FIELD(temp_t1, s32 *, 0) = 0xDF000000;
    M2C_FIELD(temp_t1, s32 *, 4) = 0;
    M2C_FIELD(D_8005387C, s32 *, 8) = 0xDE000000;
    temp_a1_2 = temp_v1 + 0x10;
    D_8005387C = temp_a1_2;
    M2C_FIELD(temp_v1, s32 *, 4) = (s32) D_8005699C;
    M2C_FIELD(temp_v1, s32 *, 8) = 0xE9000000;
    M2C_FIELD(temp_a0, s32 *, 4) = 0;
    D_8005387C = temp_v1 + 0x18;
    M2C_FIELD(temp_v1, s32 *, 0x10) = 0xDF000000;
    M2C_FIELD(temp_a1_2, s32 *, 4) = 0;
    func_8021E344(1,  temp_a1_2);
    temp_a1_3 = (D_8002C240 << 6) + D_8002C1C0;
    M2C_FIELD(temp_a1_3, s32 *, 0x20) = (s32) (((u32) &D_8005342F >> 4) * 0x10);
    M2C_FIELD(temp_a1_3, s32 **, 8) = D_80046560;
    M2C_FIELD(temp_a1_3, s32 *, 0xC) = (s32) (D_80046630 - D_80046560);
    if (!(D_8002C0F0 & 2)) {
        if (!(D_80075F50 & 0x10)) {
            M2C_FIELD(temp_a1_3, s32 **, 0x10) = D_80047450;
            M2C_FIELD(temp_a1_3, s32 **, 0x18) = D_80049C30;
            temp_a2 = (D_8002C240 << 6) + D_8002C1C0;
            M2C_FIELD(temp_a2, void **, 0x30) = (void *) ((D_8002C240 * 0x1888) + D_80053910);
            M2C_FIELD(temp_a2, s32 *, 0x38) = (s32) (((u32) &D_8005281F >> 4) * 0x10);
            M2C_FIELD(temp_a2, s32 *, 0x3C) = 0xC00;
            M2C_FIELD(temp_a2, s32 *, 0x34) = (s32) (D_8005387C - D_80053880);
            return;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        M2C_FIELD(temp_a1_3, s32 **, 0x10) = D_800487E0;
        func_8021E130(D_80046560, temp_a1_3);
        return;
    }
    M2C_FIELD(temp_a1_3, s32 **, 0x10) = D_800487E0;
    func_8021E130(D_80046560, temp_a1_3);
}
