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

extern int D_8002DBD8;
extern int D_8002DBE8;
extern int D_80075580;
s32 func_8023DF7C();
s32 func_80265348();
s32 func_802C3934();
s32 func_802CC680();
s32 func_802CD63C();
s32 func_802CD7D8();
extern s32 D_8002D420;
extern s32 D_8002D424;
extern char D_8002DBD0[];
extern char D_80075518[];
extern char D_80075568[];

void func_802CD5D8(void) {
    func_802CC680();
    if (D_8002DBD8 != 0) {
        if (D_8002DBE8 != 0) {
            func_802CD63C(*(f32 *)0x2187F0);
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        func_802CD63C(*(f32 *)0x2187F4);
        return;
    }
    if (D_8002DBE8 != 0) {
        func_802CD63C(*(f32 *)0x2187F4);
        return;
    }
    func_802C3934();
    D_80075580 = 0;
    func_80265348();
    if (D_8002D420 & 1) {
        func_802CD7D8(D_80075568, D_80075518, 0x24, 0xA, 0x50);
        return;
    }
    if (D_8002D420 & 2) {
        func_802CD7D8(D_80075568, D_80075518, 0x25, 0xA, 0x50);
        return;
    }
    if ((D_8002D420 & 4)) {
        if ((D_8002D420 & 0x20)) {
            func_8023DF7C(D_80075568, D_80075518, 0x26, 0xA, 0x50, 2);
        }
    }
    if (D_8002D420 & 0x800000) {
        func_8023DF7C(D_80075568, D_80075518, 0x26, 0xA, 0x50, 2);
    }
    if ((D_8002D420 & 8)) {
        if ((D_8002D420 & 0x20)) {
            func_8023DF7C(D_80075568, D_80075518, 0x27, 0xA, 0x50, 2);
        }
    }
    if (D_8002D420 & 0x01000000) {
        func_8023DF7C(D_80075568, D_80075518, 0x27, 0xA, 0x50, 2);
    }
    if (D_8002D424 & 0x80) {
        func_8023DF7C(D_80075568, D_80075518, 0x28, 0xA, 0, 2);
    }
}
