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

M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_802C71E4();                            /* extern */
M2C_UNK func_802C744C();                            /* extern */
extern s32 D_8002D420;
extern s32 D_80030E40;
extern f32 D_80030E48;
extern M2C_UNK D_80044EB0;
extern f32 D_800458A8;
extern M2C_UNK D_80052770;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_802C72FC(void) {
    if (M2C_FIELD(&D_80075518, s16 *, 0x2E) == 0) {
        D_80030E40 = 0;
    }
    if (M2C_FIELD(&D_80075568, f32 *, 0x10) <= *(f32 *)0x218540) {
        if (M2C_FIELD(&D_80075518, s16 *, 0x2E) >= 7) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x12, 0xA, 0x28, 2);
        }
    }
    if (D_80030E40 >= 0x19) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x12, 0xA, 0x4B, 2);
    }
    if (M2C_FIELD(&D_80044EB0, s32 *, 0x420) != 0) {
        if (M2C_FIELD(&D_80044EB0, s16 *, 0x436) != 0) {
            if (M2C_FIELD(&D_80075568, f32 *, 0x10) > 0.0f) {
                M2C_FIELD(&D_80075568, f32 *, 0x10) = 0.0f;
            }
            func_8023DF7C(&D_80075568, &D_80075518, 0x12, 0xA, 0x4B, 2);
        }
    }
    if (D_8002D420 & 0x80) {
        if (M2C_FIELD(&D_80052770, s32 *, 4) >= 3) {
            func_802C744C();
            return;
        }
        D_80030E48 = D_800458A8;
        /* Duplicate return node #19. Try simplifying control flow for better match */
        func_802C71E4();
        return;
    }
    func_802C71E4();
}
