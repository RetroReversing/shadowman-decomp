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

M2C_UNK func_8011BA20(M2C_UNK *, M2C_UNK, M2C_UNK, f32); /* extern */
M2C_UNK func_80246F50(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_802601F4(M2C_UNK);                     /* extern */
M2C_UNK func_802C8A48();                            /* extern */
extern M2C_UNK D_218584;
extern s32 D_80030C74;
extern s32 D_80030E34;
extern s32 D_80030E3C;
extern M2C_UNK D_80075598;
extern M2C_UNK D_80075F58;

void func_802C8C34(void) {
int __repair_constant = -1;

    f32 sp10;
    s32 sp14;
    s32 sp18;
    M2C_UNK sp20;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_ft1;
    f32 temp_ft1f;
    void *temp_v0;

    sp10 = M2C_FIELD(&D_218584, s32 *, 0);
    sp14 = M2C_FIELD(&D_218584, s32 *, 4);
    sp18 = M2C_FIELD(&D_218584, s32 *, 8);
    func_8011BA20(&sp20, 0, 0xC, M2C_FIELD(&D_218584, s32 *, 0));
    D_80030C74 = 2;
    D_80030E34 = D_80030E3C;
    do { func_80246F50(-1, 1); } while (0);
    func_802601F4(0x17);
    M2C_FIELD(&D_80075F58, u16 *, 0xA) = __repair_constant;
    M2C_FIELD(&D_80075F58, u16 *, 6) = __repair_constant;
    temp_v0 = &D_80075598 + 4;
    temp_ft1f = M2C_FIELD(&sp10, f32 *, 4);
    temp_ft1 = M2C_FIELD(&sp10, f32 *, 8);
    sp30 = (sp10 * M2C_FIELD(&D_80075598, f32 *, 4)) + (temp_ft1f * M2C_FIELD(temp_v0, f32 *, 4)) + (temp_ft1 * M2C_FIELD(temp_v0, f32 *, 8));
    sp34 = (sp10 * M2C_FIELD(temp_v0, f32 *, 0xC)) + (temp_ft1f * M2C_FIELD(temp_v0, f32 *, 0x10)) + (temp_ft1 * M2C_FIELD(temp_v0, f32 *, 0x14));
    sp38 = (sp10 * M2C_FIELD(temp_v0, f32 *, 0x18)) + (temp_ft1f * M2C_FIELD(temp_v0, f32 *, 0x1C)) + (temp_ft1 * M2C_FIELD(temp_v0, f32 *, 0x20));
    func_802C8A48();
}
