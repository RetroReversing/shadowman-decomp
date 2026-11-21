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

s32 func_80108AAC();
s32 func_80108B30();
s32 func_8023DF7C();
s32 func_80268AF8();
s32 func_80268E6C();
s32 func_802C4CBC();
s32 func_802C4CD0();
extern char D_80075518[];
extern char D_80075568[];

void func_802C4C2C(void) {
    s32 temp_v0;

    if (func_80108B30() == 0) {
        temp_v0 = func_80268AF8(0);
        if (temp_v0 != 0x1B58) {
            if (temp_v0 < 0x1B59) {
                if (temp_v0 != 0x1388) {
                    if (temp_v0 != 0x1770) {
                        func_802C4CD0(D_80075568);
                        return;
                    }
                    func_802C4CBC(D_80075568);
                    return;
                }
                func_802C4CBC();
                return;
            }
            if (temp_v0 != 0x1F40) {
                if (temp_v0 != 0x2328) {
                    func_802C4CD0(D_80075568);
                    return;
                }
                func_80108AAC(0x5A, 0x3F, 0x7FFF);
                func_8023DF7C(D_80075568, D_80075518, 0, 0xA, 0x28, 2);
                func_80268E6C(0, 0x3E8);
            } else {
                func_802C4CBC();
            }
        } else {
            func_802C4CBC();
        }
    }
}
