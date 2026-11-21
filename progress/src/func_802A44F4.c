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

M2C_UNK func_8022DDD0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_8025DAB8(M2C_UNK *, M2C_UNK *);        /* extern */
void *func_80296BC0(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_8029C7DC(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32); /* extern */
extern M2C_UNK D_80036B1C;
extern M2C_UNK D_80036BB8;
extern M2C_UNK D_80036BC4;
extern M2C_UNK D_80036D00;
extern M2C_UNK D_80075568;

void func_802A44F4(void) {
    char sp20[0x30];
    f32 temp_fv0;
    void *temp_v0;

    func_8025DAB8(&D_80036B1C, sp20);
    func_8029C7DC(&D_80075568, &D_80036B1C, &D_80036B1C, &D_80036BB8, &D_80036B1C, &D_80036BC4, *(f32 *)0x216150);
    temp_v0 = func_80296BC0(&D_80075568, 0, &D_80036D00);
    if (temp_v0 != NULL) {
        func_8022DDD0(1, 0x46, 0xFF, 0xFF, 0xFF);
        temp_fv0 = *(f32 *)0x216154;
        M2C_FIELD(temp_v0, s8 *, 0x73) = 0;
        M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv0;
        M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fv0;
    }
}
