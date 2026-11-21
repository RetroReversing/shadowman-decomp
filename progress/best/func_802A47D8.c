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
M2C_UNK func_802A5EC4(void *, f32 *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_217BEC;
extern void *D_8004599C;
extern M2C_UNK D_80075568;

void func_802A47D8(void) {
    f32 sp18;
    f32 sp1C;
    f32 sp20;

    if (D_8004599C != NULL) {
        sp18 = M2C_FIELD(D_8004599C, f32 *, 0x24) - M2C_FIELD(&D_80075568, f32 *, 0);
        sp1C = M2C_FIELD(D_8004599C, f32 *, 0x28) - M2C_FIELD(&D_80075568, f32 *, 4);
        sp20 = M2C_FIELD(D_8004599C, f32 *, 0x2C) - M2C_FIELD(&D_80075568, f32 *, 8);
        do { func_802A5EC4(D_8004599C, &sp18, &D_217BEC, 0, 1, 0); } while (0);
        func_8022DDD0(1, 0xA, 0xFF, 0xFF, 0xFF);
    }
}
