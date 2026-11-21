/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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
M2C_UNK func_8026EA40();                            /* extern */
M2C_UNK func_802A241C();                            /* extern */
M2C_UNK func_802A28B8();                            /* extern */
M2C_UNK func_802C2F20();                            /* extern */
extern s32 D_8005E9D8;
extern f32 D_80074BC0;
extern M2C_UNK D_80075518;
extern s16 D_80075546;
extern M2C_UNK D_80075568;
extern s32 D_800755F8;

void func_802C2E48(void) {
    if ((D_800755F8 != 0) && (D_8005E9D8 != 0)) {
        if ((u32) (M2C_FIELD(&D_80075518, u16 *, 4) - 0x66) >= 2U) {
            func_8023DF7C(&D_80075568, &D_80075518, 0x67, 0xA, 0x28, 2);
            M2C_FIELD(&D_80075568, s32 *, 0x10) = 0;
        }
        M2C_FIELD(&D_80075568, f32 *, 0x18) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x18) + ((*(f32 *)0x2183A4 - M2C_FIELD(&D_80075568, f32 *, 0x18)) * D_80074BC0 * *(f32 *)0x2183A8));
    }
    if (D_80075546 >= 0x12D) {
        func_8026EA40();
        func_802A28B8();
        func_802C2F20();
        return;
    }
    func_802A241C();
}
