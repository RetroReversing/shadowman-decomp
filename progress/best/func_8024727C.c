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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802244AC();
s32 func_802383C0();
s32 func_802397D0();
s32 func_8023981C();
s32 func_802398C8();
s32 func_80239AEC();
s32 func_8023B714();
s32 func_802472FC();
s32 func_80247370();
extern s32 D_8002C1B0;
extern char D_8002DBD0[];
extern s32 D_8005EA2C;
extern s32 D_80075558;

void func_8024727C(void *arg0, s32 arg1) {
    s32 *__base_D_8005EA2C;
    f32 sp10;
    f32 sp20;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_fv0;
    f32 temp_fv0f;
    void *temp_a0;

    if (M2C_FIELD(((arg1 * 0x10) + D_8002DBD0), s32 *, 4) == 8) {
        temp_fv0 = *(f32 *)0x202C68;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, f32 *, 0x18) = temp_fv0;
        M2C_FIELD(arg0, f32 *, 0x1C) = temp_fv0;
        func_80239AEC(arg0 + 0x18, &sp10);
        sp34 = M2C_FIELD(arg0, f32 *, 0x24);
        sp38 = M2C_FIELD(arg0, f32 *, 0x28);
        func_802472FC();
        return;
    }
    func_8023B714(arg0 + 0x18, &sp10, arg0 + 0x24);
    temp_fv0f = M2C_FIELD(arg0, f32 *, 0x30);
    if (temp_fv0f != *(f32 *)0x202C6C) {
        sp10 *= temp_fv0f;
        sp20 *= M2C_FIELD(arg0, f32 *, 0x30);
        sp30 *= M2C_FIELD(arg0, f32 *, 0x30);
    }
    if (arg1 == 1) {
        func_80247370(D_80075558, &sp10, arg0 + 0x34);
        return;
    }
    func_802398C8(D_80075558 + 0x240, &sp10, arg0 + 0x34);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), u16 *, 0x3C) & 8) {
        func_802383C0(arg0);
    }
    __base_D_8005EA2C = &D_8005EA2C;
    func_802397D0((*(&D_8005EA2C)) + 0x3C);
    temp_a0 = (*__base_D_8005EA2C) + 0x3C;
    func_802398C8(temp_a0, arg0 + 0x34, temp_a0);
    D_8002C1B0 = M2C_FIELD(arg0, s32 *, 0x80);
    func_802244AC(arg0, 1);
    func_8023981C((*__base_D_8005EA2C) + 0x3C);
}
