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

s32 func_80113AD0();                                /* extern */
M2C_UNK func_8023A0DC(f32, f32, M2C_UNK, s32 *, void *); /* extern */
M2C_UNK func_8023E724(s32, s32, s32 *, M2C_UNK *);  /* extern */
f32 func_802759C4(f32, void *);                     /* extern */
M2C_UNK func_802A5EC4(M2C_UNK *, f32 *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_2178AC;
extern void *D_8006A4FC;
extern M2C_UNK D_80075568;
extern s32 D_8007AF84;
extern void *D_8007AFF8;

void func_802798C0(s32 arg0) {
    char sp18[0x10];
    s32 sp28[3];
    f32 sp38[3];
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fv1;
    s32 temp_v1;

    sp28[0] = 0;
    sp28[1] = 0;
    sp28[2] = 0;
    func_8023E724(D_8007AF84, arg0, sp28, sp18);
    temp_fa0 = *(f32 *)0x2143E0;
    func_8023A0DC(temp_fa0, temp_fa0, 0x40C00000, sp28, D_8006A4FC + 0x34);
    temp_fs0 = (f32) ((func_80113AD0() % 60) + 1);
    arg0 = func_80113AD0() % 60;
    temp_fv1 = *(f32 *)0x2143E4;
    temp_fs0_2 = temp_fs0 - temp_fv1;
    sp38[0] = (M2C_FIELD(&D_80075568, f32 *, 0x24) - M2C_FIELD(D_8006A4FC, f32 *, 0x24)) + temp_fs0_2;
    temp_fa0_2 = ((M2C_FIELD(&D_80075568, f32 *, 0x28) - M2C_FIELD(D_8006A4FC, f32 *, 0x28)) - *(f32 *)0x2143E8) + ((f32) (arg0 + 1) - temp_fv1);
    sp38[1] = temp_fa0_2;
    sp38[2] = (M2C_FIELD(&D_80075568, f32 *, 0x2C) - M2C_FIELD(D_8006A4FC, f32 *, 0x2C)) - temp_fs0_2;
    sp38[1] = func_802759C4(temp_fa0_2, D_8006A4FC);
    func_802A5EC4(sp18, sp38, &D_2178AC, 0, 1, (s32) M2C_FIELD(D_8007AFF8, u8 *, 0x40));
}
