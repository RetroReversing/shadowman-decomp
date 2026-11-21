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

M2C_UNK func_8023A0DC(M2C_UNK32, M2C_UNK32, f32, M2C_UNK *, void *); /* extern */
M2C_UNK func_8023E724(s32, M2C_UNK, M2C_UNK32 *, M2C_UNK *); /* extern */
M2C_UNK func_802A5EC4(M2C_UNK *, f32 *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_217BCC;
extern void *D_8006A4FC;
extern M2C_UNK D_80075568;
extern s32 D_8007AF84;
extern void *D_8007AFF8;

void func_8028D4D4(void) {
void *__repair_cached_pointer = D_8007AFF8;

    u8 sp18[0x10];
    M2C_UNK32 sp28;
    f32 sp2C;
    s32 sp30;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    M2C_UNK32 sp48;
    M2C_UNK32 sp4C;
    M2C_UNK32 sp50;
    u8 sp58[0x10];
    f32 temp_fs0f;

    sp28 = 0;
    sp30 = 0;
    sp50 = sp28;
    sp4C = sp28;
    sp48 = sp28;
    sp2C = M2C_FIELD(D_8006A4FC, f32 *, 0x1C) - *(f32 *)0x215424;
    func_8023E724(D_8007AF84, 0xF, &sp48, sp58);
    temp_fs0f = *(f32 *)0x215428;
    func_8023A0DC(sp28, sp28, temp_fs0f, sp18, D_8006A4FC + 0x34);
    sp38 = M2C_FIELD(&D_80075568, f32 *, 0x24) - M2C_FIELD(D_8006A4FC, f32 *, 0x24);
    sp3C = (M2C_FIELD(&D_80075568, f32 *, 0x28) - M2C_FIELD(D_8006A4FC, f32 *, 0x28)) - temp_fs0f;
    sp40 = M2C_FIELD(&D_80075568, f32 *, 0x2C) - M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    func_802A5EC4(sp58, &sp38, &D_217BCC, 0, 1, (s32) M2C_FIELD(__repair_cached_pointer, u8 *, 0x40));
}
