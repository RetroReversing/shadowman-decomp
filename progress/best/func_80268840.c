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

s32 func_8021DD0C(M2C_UNK *, s16);                  /* extern */
void *func_8023A1D0(M2C_UNK *, s16);                /* extern */
M2C_UNK func_802688D4(s16);                         /* extern */
extern s32 D_8002C1B0;
extern M2C_UNK D_8004AEA0;
extern M2C_UNK D_80075610;
extern s32 D_8007569C;

void func_80268840(s16 arg1, s16 arg2) {
    s32 temp_v0;
    void *temp_v0_2;

    if ((arg1 == -1) || (arg2 == -1)) {
        func_802688D4(arg1);
        return;
    }
    temp_v0 = func_8021DD0C(&D_8004AEA0, arg1);
    D_8007569C = temp_v0;
    D_8002C1B0 = temp_v0;
    temp_v0_2 = func_8023A1D0(&D_8004AEA0, arg2);
    M2C_FIELD(&D_80075610, void **, 0x64) = temp_v0_2;
    M2C_FIELD(temp_v0_2, u16 *, 0x3C) = (u16) (M2C_FIELD(temp_v0_2, u16 *, 0x3C) & 0xFFF7);
    M2C_FIELD(&D_80075610, s32 *, 0x68) = 0;
    M2C_FIELD(&D_80075610, s32 *, 0x80) = (s32) D_8007569C;
    M2C_FIELD(&D_80075610, f32 *, 0x30) = (f32) *(f32 *)0x20E1D0;
}
