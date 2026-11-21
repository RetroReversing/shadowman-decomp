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
s32 func_802968C0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_802A5D00(void *, M2C_UNK *);           /* extern */
f32 func_802A65D0(void *, f32, f32);        /* extern */
extern s32 D_8002C7B4;

void func_802B0A54(void *arg0) {
    char sp10[0x18];
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    f32 sp40;
    M2C_UNK sp44;
    s32 sp74[3];
    s8 sp80;
    s32 sp90;
    s32 temp_v0;

    temp_v0 = func_80296738(D_8002C7B4);
    sp90 = temp_v0;
    if (temp_v0 != 0) {
        sp34 = M2C_FIELD(arg0, s32 *, 0x54);
        sp38 = M2C_FIELD(arg0, s32 *, 0x58);
        sp3C = M2C_FIELD(arg0, s32 *, 0x5C);
        sp74[0] = func_802968C0(0x17, 0);
        sp30 = 0.0f;
        sp28 = 0.0f;
        sp74[2] = 0;
        sp74[1] = 0;
        sp80 = 0xFF;
        sp2C = *(f32 *)0x2168B8;
        sp40 = func_802A65D0(arg0, 0.45f, 0.85f);
        func_802A5D00(arg0 + 0x6C, &sp44);
        func_8025DD7C(sp10, 2, 6, -1);
    }
}
