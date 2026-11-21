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

extern int D_80075678;
extern int D_80075690;
extern float D_80075640;
s32 func_8021DD0C();
void *func_8023A1D0();
s32 func_802688D4();
extern s32 D_8002C1B0;
extern char D_8004AEA0[];
extern char D_80075610[];
extern s32 D_8007569C;

void func_80268840(s32 arg0, s16 arg1, s16 arg2) {
    s32 temp_v0;
    void *temp_v0_2;

    if ((arg1 == -1) || (arg2 == -1)) {
        func_802688D4(arg1);
        return;
    }
    temp_v0 = func_8021DD0C(D_8004AEA0, arg1);
    D_8007569C = temp_v0;
    D_8002C1B0 = temp_v0;
    temp_v0_2 = func_8023A1D0(D_8004AEA0, arg2);
    M2C_FIELD(D_80075610, void **, 0x64) = temp_v0_2;
    M2C_FIELD(temp_v0_2, u16 *, 0x3C) &= 0xFFF7;
    D_80075678 = 0;
    D_80075690 = (s32) D_8007569C;
    D_80075640 = (f32) *(f32 *)0x20E1D0;
}
