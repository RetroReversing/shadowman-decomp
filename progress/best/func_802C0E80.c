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

M2C_UNK func_80109A1C(s32);                         /* extern */
M2C_UNK func_80246F50(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_80268E6C(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_8026B618(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_802A6548(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_802C074C(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK D_8002DBD0;
extern s32 D_80036B10;
extern s32 D_80075508;
extern M2C_UNK D_8007558C;
extern M2C_UNK D_80075F58;

void func_802C0E80(s16 arg0) {
    s32 *__base_D_80075508;
    __base_D_80075508 = &D_80075508;
    if ((*__base_D_80075508) != 0) {
        func_80109A1C((*__base_D_80075508));
        (*__base_D_80075508) = 0;
        func_802A6548(&D_8007558C, 0x23);
    }
    if (D_80036B10 != 0) {
        func_80109A1C(D_80036B10);
        D_80036B10 = 0;
    }
    func_8026B618(0, 0);
    if (M2C_FIELD(&D_8002DBD0, s32 *, 0x14) != 7) {
        func_80268E6C(4, -0x2710);
    }
    if (M2C_FIELD(&D_8002DBD0, s32 *, 4) != -1) {
        M2C_FIELD(&D_80075F58, s16 *, 0) = arg0;
        M2C_FIELD(&D_80075F58, u16 *, 8) = (u16) M2C_FIELD(&D_8002DBD0, u16 *, 6);
    }
    func_80246F50(-1, 0);
    func_802C074C(-1, 0, 0x50);
}
