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
s32 func_80265464();                                /* extern */
s32 func_802654BC();                                /* extern */
M2C_UNK func_802C3274();                            /* extern */
M2C_UNK func_802C3934(f32);                         /* extern */
M2C_UNK func_802C3E58();                            /* extern */
M2C_UNK func_802C413C();                            /* extern */
extern s32 D_8002D420;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_802C6748(void) {
    if (((D_8002D420 & 0x24) == 0x24) || (D_8002D420 & 0x800000)) {
        func_8023DF7C(&D_80075568, &D_80075518, 0xAB, 0xA, 0x2D, 2);
    }
    if (((D_8002D420 & 0x28) == 0x28) || (D_8002D420 & 0x01000000)) {
        func_8023DF7C(&D_80075568, &D_80075518, 0xAA, 0xA, 0x2D, 2);
    }
    if (func_80265464() == 0) {
        func_8023DF7C(&D_80075568, &D_80075518, 4, 0xA, 0x2D, 2);
    }
    if (func_802654BC() != 0) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x23, 0xA, 0x2D, 2);
    }
    func_802C3E58();
    func_802C413C();
    if (!(D_8002D420 & 1)) {
        func_8023DF7C(&D_80075568, &D_80075518, 0, 0xA, 0x28, 2);
    }
    func_802C3934(*(f32 *)0x218500);
    func_802C3274();
}
