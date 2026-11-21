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

M2C_UNK func_802C2CC0();                            /* extern */
M2C_UNK func_802C2F30();                            /* extern */
M2C_UNK func_802C3274();                            /* extern */
M2C_UNK func_802C3934(f32);                         /* extern */
M2C_UNK func_802C3E58();                            /* extern */
M2C_UNK func_802C413C();                            /* extern */
M2C_UNK func_802CC190();                            /* extern */

void func_802CC060(void) {
    func_802C413C();
    func_802C2CC0();
    func_802C3934(*(f32 *)0x2186E8);
    func_802C3274();
    func_802CC190();
    func_802C3E58();
    func_802C2F30();
}
