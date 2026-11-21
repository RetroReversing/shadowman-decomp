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
M2C_UNK func_802C3274();                            /* extern */
M2C_UNK func_802C382C();                            /* extern */
M2C_UNK func_802C3934(f32);                         /* extern */
M2C_UNK func_802C49AC();                            /* extern */
M2C_UNK func_802CC190();                            /* extern */
extern s32 D_8002D420;
extern s32 D_8002D424;
extern f32 D_8003AFF8;
extern s32 D_800458AC;
extern M2C_UNK D_80075518;
extern s16 D_80075522;
extern M2C_UNK D_80075568;

void func_802C4D0C(void) {
    if ((D_8002D420 & 0x24) != 0x24) {
        if (!(D_8002D420 & 0x800000)) {
            func_8023DF7C(&D_80075568, &D_80075518, 0, 0xA, 0x2D, 2);
        }
    }
    if (D_8002D420 & 1) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x62, 0xA, 0x2D, 2);
    }
    if (D_8002D420 & 2) {
        D_8003AFF8 = *(f32 *)0x218470;
    }
    if ((D_8002D420 & 0x80) && (D_800458AC == 0)) {
        D_800458AC = 1;
        func_8023DF7C(&D_80075568, &D_80075518, 0x94, 0xA, 0x2D, 2);
    }
    func_802C49AC();
    func_802C3934(*(f32 *)0x218474);
    if (D_8002D424 & 0x40) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x99, 0xA, 0x2D, 2);
    }
    func_802C3274();
    if (D_80075522 == 0) {
        func_802CC190();
    }
    func_802C382C();
}
