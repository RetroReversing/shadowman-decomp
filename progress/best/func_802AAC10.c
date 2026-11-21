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

M2C_UNK func_8025DD7C(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80296738(s32);                             /* extern */
s32 func_802968C0(void *, M2C_UNK, s32);                    /* extern */
extern s32 D_8002C774;

void func_802AAC10(void *arg0) {
    char sp10[0x18];
    s32 sp28[7];
    s32 sp74[3];
    s8 sp80;
    s32 sp90;
    s32 temp_v0;

    temp_v0 = func_80296738(D_8002C774);
    sp90 = temp_v0;
    if (temp_v0 != 0) {
        sp28[3] = M2C_FIELD(arg0, s32 *, 0x54);
        sp28[4] = M2C_FIELD(arg0, s32 *, 0x58);
        sp28[5] = M2C_FIELD(arg0, s32 *, 0x5C);
        sp28[0] = M2C_FIELD(arg0, s32 *, 0x84);
        sp28[1] = M2C_FIELD(arg0, s32 *, 0x88);
        sp28[2] = M2C_FIELD(arg0, s32 *, 0x8C);
        sp74[0] = func_802968C0(arg0, 0x13, M2C_FIELD(arg0, s32 *, 0x34));
        sp74[2] = 0;
        sp74[1] = 0;
        sp80 = 0xFF;
        sp28[6] = *(f32 *)0x2164DC;
        func_8025DD7C(sp10, 0, 6, -1);
    }
}
