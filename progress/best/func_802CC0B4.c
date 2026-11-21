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
M2C_UNK func_802C7278();                            /* extern */
M2C_UNK func_802CBD70();                            /* extern */
M2C_UNK func_802CC148(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_802CC190();                            /* extern */
extern s32 D_8002D420;
extern f32 D_80030E48;
extern s16 D_80044EC6;
extern f32 D_800458A8;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_802CC0B4(void) {
    M2C_FIELD(M2C_FIELD(&D_80075518, void **, 0x30), s32 *, 0x410) = 0;
    M2C_FIELD(M2C_FIELD(&D_80075518, void **, 0x30), s32 *, 0x40C) = 0;
    if (D_80044EC6 != 0) {
        do { func_802CBD70(); } while (0);
        if (M2C_FIELD(&D_80075518, s16 *, 4) != 0x14) {
            if (D_8002D420 & 2) {
                func_802CC148(&D_80075568, &D_80075518, 0x15, 0xA, 0xA);
                return;
            }
            func_8023DF7C(&D_80075568, &D_80075518, 0x16, 0xA, 0x14, 2);
            goto block_6;
        }
block_6:
        goto block_7;
    }
block_7:
    if (D_8002D420 & 0x80) {
        D_80030E48 = D_800458A8;
    }
    func_802C7278();
    func_802CC190();
}
