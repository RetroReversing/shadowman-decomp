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

s32 func_8023DF7C();
s32 func_80268AF8();
s32 func_80268E6C();
s32 func_8026B618();
s32 func_802CDDC0();
s32 func_802CDDD4();
extern char D_209890[];
extern s32 D_8002D420;
extern s32 D_80074BB0;
extern char D_80075518[];
extern char D_80075568[];

void func_802CDCFC(void) {
    func_80268E6C(4, -0x2710);
    func_8026B618(1, 0);
    if (M2C_FIELD(((D_80074BB0 * 0x34) + D_209890), s16 *, 8) == 0) {
        if ((D_8002D420 & 0xA00) == 0x200) {
            func_802CDDC0(D_80075568, D_80075518);
        }
    } else if (D_8002D420 & 0x200) {
        if (func_80268AF8(3) != 0) {
            func_802CDDD4(D_80075568, D_80075518, 0xD1);
            return;
        }
        M2C_FIELD(M2C_FIELD(D_80075518, void **, 0x44), f32 *, 0x20C) = (f32) *(f32 *)0x218820;
        func_8023DF7C(D_80075568, D_80075518, 0xD2, 0xA, 0, 1);
    }
}
