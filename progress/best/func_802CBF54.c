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
M2C_UNK func_802CC004(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_802CC190();                            /* extern */
extern s32 D_8002D420;
extern s32 D_80030E40;
extern f32 D_80030E48;
extern s16 D_80044EC6;
extern f32 D_800458A8;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_802CBF54(void) {
    M2C_UNK *__base_D_80075518;
    M2C_UNK *__base_D_80075568;
    __base_D_80075518 = &D_80075518;
    if (M2C_FIELD(__base_D_80075518, s16 *, 0x2E) == 0) {
        D_80030E40 = 0;
    }
    __base_D_80075568 = &D_80075568;
    if (M2C_FIELD(__base_D_80075568, f32 *, 0x10) <= 0.0f) {
        /*__repair_pointer_balance*/if ((unsigned long)__base_D_80075518 & 0x100) {
func_8023DF7C(__base_D_80075568, __base_D_80075518, 0x14, 0xA, 0x1E, 2);
} else {
func_8023DF7C(__base_D_80075568, __base_D_80075518, 0x14, 0xA, 0x1E, 2);
}
    }
    if ((D_80044EC6 != 0) && (M2C_FIELD(__base_D_80075518, s16 *, 0x2E) >= 4)) {
        if (D_8002D420 & 2) {
            func_802CC004(__base_D_80075568, __base_D_80075518);
            return;
        }
        func_8023DF7C(__base_D_80075568, __base_D_80075518, 0x16, 0xA, 0x28, 2);
        goto block_10;
    }
block_10:
    if (D_8002D420 & 0x80) {
        D_80030E48 = D_800458A8;
    }
    func_802C7278();
    func_802CC190();
}
