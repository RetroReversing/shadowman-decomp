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

M2C_UNK func_80240418(f32 *, f32 *, M2C_UNK, M2C_UNK); /* extern */
extern void *D_8006A4FC;
extern u8 D_8006A58B;
extern M2C_UNK D_80075568;

u8 func_8029001C(void) {
void *__repair_cached_pointer = D_8006A4FC;

    f32 sp10[3];
    f32 sp20[3];

    sp10[0] = M2C_FIELD(&D_80075568, f32 *, 0x24);
    sp10[2] = M2C_FIELD(&D_80075568, f32 *, 0x2C);
    sp10[1] = M2C_FIELD(&D_80075568, f32 *, 0x28) + *(f32 *)0x215640;
    sp20[0] = M2C_FIELD(__repair_cached_pointer, f32 *, 0x24);
    sp20[1] = M2C_FIELD(D_8006A4FC, f32 *, 0x28);
    sp20[2] = M2C_FIELD(D_8006A4FC, f32 *, 0x2C);
    do { func_80240418(sp20, sp10, 0x41A00000, 1); } while (0);
    return D_8006A58B;
}
