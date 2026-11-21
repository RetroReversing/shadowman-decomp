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
s32 func_802C2CC0();
s32 func_802C2F30();
s32 func_802C3274();
s32 func_802C382C();
s32 func_802C3934();
s32 func_802C3E58();
s32 func_802C413C();
s32 func_802C6A70();
s32 func_802CC190();
extern s32 D_8002D420;
extern char D_80075518[];
extern char D_80075568[];

void func_802C6A1C(void) {
    if (D_8002D420 & 0x20) {
        if (D_8002D420 & 4) {
            func_802C6A70(D_80075568, D_80075518);
            return;
        }
        if (D_8002D420 & 8) {
            func_8023DF7C(D_80075568, D_80075518, 0x63, 0xA, 0x4B, 2);
        }
        goto block_6;
    }
block_6:
    if (D_8002D420 & 0x800000) {
        func_8023DF7C(D_80075568, D_80075518, 0x62, 0xA, 0x4B, 2);
    }
    if (D_8002D420 & 0x01000000) {
        func_8023DF7C(D_80075568, D_80075518, 0x63, 0xA, 0x4B, 2);
    }
    func_802C2CC0();
    func_802C413C();
    func_802C3934(*(f32 *)0x218508);
    func_802C3274();
    func_802CC190();
    func_802C382C();
    func_802C3E58();
    func_802C2F30();
}
