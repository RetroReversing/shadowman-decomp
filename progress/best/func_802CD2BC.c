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
extern int D_80075580;
extern int D_8002DBD8;
extern int D_8002DBE8;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023DF7C();
s32 func_80265348();
s32 func_802654E8();
s32 func_802CC680();
s32 func_802CD424();
s32 func_802CD428();
extern s32 D_8002D420;
extern s32 D_8002D424;
extern char D_8002DBD0[];
extern f32 D_8003AD50;
extern char D_80075518[];
extern char D_80075568[];

void func_802CD2BC(void) {
    int *__base_D_8002DBE8;
    s32 *__base_D_8002D420;
    s32 *__base_D_80075518;

    __base_D_80075518 = D_80075518;
    func_802CC680();
    D_80075580 = 0;
    func_80265348();
    __base_D_8002D420 = &D_8002D420;
    if ((*__base_D_8002D420) & 1) {
        func_8023DF7C(D_80075568, __base_D_80075518, 0x24, 0xA, 0x8C, 2);
        func_802CD428();
        return;
    }
    if (D_8002D424 & 0x80) {
        func_8023DF7C(D_80075568, __base_D_80075518, 0x28, 0xA, 0x1E, 2);
    }
    if (func_802654E8() == 0) {
        func_8023DF7C(D_80075568, __base_D_80075518, 0, 0xA, 0x28, 2);
    }
    if (((*__base_D_8002D420) & 0x24) != 0x24) {
        if (!((*__base_D_8002D420) & 0x800000)) {
            func_8023DF7C(D_80075568, __base_D_80075518, 0x23, 0xA, 0x8C, 2);
        }
    }
    if (D_8002DBD8 != 0) {
        __base_D_8002DBE8 = &D_8002DBE8;
        if ((*__base_D_8002DBE8) != 0) {
            /*__repair_pointer_balance*/if ((unsigned long)__base_D_8002DBE8 & 0x10000) {
if ((unsigned long)__base_D_8002DBE8 & 0x100) {
func_802CD428();
} else {
func_802CD428();
}
} else {
if ((unsigned long)__base_D_8002DBE8 & 0x100) {
func_802CD428();
} else {
func_802CD428();
}
}
            return;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        func_802CD424();
        return;
    }
    if ((*__base_D_8002DBE8) == 0) {
        D_8003AD50 = *(f32 *)0x2187E0;
    } else {
        func_802CD424();
    }
}
