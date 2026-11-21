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

M2C_UNK func_802393D4(void *, s32);                 /* extern */
void *func_8025BA08(M2C_UNK *, void *, M2C_UNK, M2C_UNK, s32, M2C_UNK *); /* extern */
extern M2C_UNK D_2041F8;
extern M2C_UNK D_2BF5B4;
extern M2C_UNK D_2BF78C;
extern s32 D_80075510;
extern M2C_UNK D_8007558C;
extern s32 D_8007BE14;
extern M2C_UNK D_8007BE38;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x38, 0x3c], gap at: 0x30. */
void func_802BF8EC(void) {
    f32 temp_fs0;
    f32 temp_fs0f;
    void *temp_s2;
    void *temp_t0;
    
    void *temp_t1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_s2 = &D_8007558C - 0xC;
    temp_v0 = func_8025BA08(&D_8007558C, temp_s2, 0x2E, 0, 0, &D_2041F8);
    func_802393D4(temp_v0, D_80075510);
    temp_t0 = M2C_FIELD(temp_v0, void **, 8);
    temp_fs0 = *(f32 *)0x2181BC;
    temp_fs0f = *(f32 *)0x2181C0;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x10) = &D_2BF5B4;
    temp_t1 = M2C_FIELD(temp_t0, void **, 0x64);
    M2C_FIELD(temp_t0, f32 *, 0x28) = (f32) *(f32 *)0x2181B8;
    M2C_FIELD(temp_t0, s32 *, 0x24) = 0;
    M2C_FIELD(temp_t0, f32 *, 0x2C) = temp_fs0;
    M2C_FIELD(temp_t0, s32 *, 0x18) = 0;
    M2C_FIELD(temp_t0, f32 *, 0x1C) = temp_fs0f;
    M2C_FIELD(temp_t0, s32 *, 0x20) = 0;
    D_8007BE14 = -1;
    M2C_FIELD(temp_t1, u16 *, 0x3C) = (u16) (M2C_FIELD(temp_t1, u16 *, 0x3C) & 0xFFFB);
    M2C_FIELD(&D_8007BE38, s32 *, 0) = 0;
    M2C_FIELD(&D_8007BE38, f32 *, 4) = (f32) *(f32 *)0x2181C8;
    M2C_FIELD(&D_8007BE38, f32 *, 8) = (f32) *(f32 *)0x2181C4;
    temp_v0_2 = func_8025BA08(&D_8007558C, temp_s2, 0x2F, 0, 0, &D_2041F8 + 0x2C);
    func_802393D4(temp_v0_2, D_80075510);
    temp_t0 = M2C_FIELD(temp_v0_2, void **, 8);
    M2C_FIELD(temp_v0_2, M2C_UNK **, 0x10) = &D_2BF78C;
    temp_v1 = M2C_FIELD(temp_t0, void **, 0x64);
    M2C_FIELD(temp_t0, f32 *, 0x24) = (f32) *(f32 *)0x2181CC;
    M2C_FIELD(temp_t0, f32 *, 0x28) = temp_fs0;
    M2C_FIELD(temp_t0, f32 *, 0x2C) = (f32) *(f32 *)0x2181D0;
    M2C_FIELD(temp_t0, s32 *, 0x18) = 0;
    M2C_FIELD(temp_t0, f32 *, 0x1C) = temp_fs0f;
    M2C_FIELD(temp_t0, s32 *, 0x20) = 0;
    M2C_FIELD(temp_v1, u16 *, 0x3C) = (u16) (M2C_FIELD(temp_v1, u16 *, 0x3C) & 0xFFFB);
}
