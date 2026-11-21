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

M2C_UNK func_8021E990(f32, f32, u8, u8, f32, M2C_UNK32, M2C_UNK32, f32, s32, s32, s32, s32, s32); /* extern */
s32 func_80296738(s32);                             /* extern */
extern s32 D_8002C1B0;
extern M2C_UNK D_800619F0;

void func_802AFE30(void *arg0, void *arg1) {
    f32 sp30[3];
    s32 temp_v0;

    temp_v0 = func_80296738(M2C_FIELD(arg0, s32 *, 0x6C));
    D_8002C1B0 = temp_v0;
    if (temp_v0 != 0) {
        sp30[0] = M2C_FIELD(arg0, f32 *, 0) + M2C_FIELD(arg1, f32 *, 0x54);
        sp30[1] = M2C_FIELD(arg0, f32 *, 4) + M2C_FIELD(arg1, f32 *, 0x58);
        sp30[2] = M2C_FIELD(arg0, f32 *, 8) + M2C_FIELD(arg1, f32 *, 0x5C);
        func_8021E990(sp30[0], sp30[1], M2C_FIELD(&D_800619F0, u8 *, 1), M2C_FIELD(&D_800619F0, u8 *, 2), sp30[2], M2C_FIELD(arg0, f32 *, 0x4C), M2C_FIELD(arg0, f32 *, 0x4C), *(f32 *)0x216834, (s32) M2C_FIELD(&D_800619F0, f32 *, 0), (s32) M2C_FIELD(&D_800619F0, u8 *, 1), (s32) M2C_FIELD(&D_800619F0, u8 *, 2), (s32) M2C_FIELD(&D_800619F0, u8 *, 3), temp_v0 + ((s32) M2C_FIELD(arg0, f32 *, 0x58) * 0x10));
    }
}
