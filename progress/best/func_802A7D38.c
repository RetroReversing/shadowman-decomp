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

M2C_UNK func_8023F58C(M2C_UNK *, f32 *, void *);    /* extern */
M2C_UNK func_8023F818(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8023FA1C(f32 *, f32 *, M2C_UNK *);     /* extern */
M2C_UNK func_8025D960(f32 *, f32);                  /* extern */
extern M2C_UNK D_2177EC;
extern M2C_UNK D_80075568;

void func_802A7D38(void *arg0, M2C_UNK arg1) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    M2C_UNK sp30;
    f32 temp_a3;
    f32 temp_fv1;

    if (M2C_FIELD(arg0, u8 *, 0x50) & 2) {
        sp10 = M2C_FIELD(&D_80075568, f32 *, 0x24) - M2C_FIELD(arg0, f32 *, 0x54);
        sp14 = M2C_FIELD(&D_80075568, f32 *, 0x28) - M2C_FIELD(arg0, f32 *, 0x58);
        sp18 = M2C_FIELD(&D_80075568, f32 *, 0x2C) - M2C_FIELD(arg0, f32 *, 0x5C);
        temp_a3 = M2C_FIELD(arg0, f32 *, 0x6C);
        sp20 = temp_a3;
        sp24 = M2C_FIELD(arg0, f32 *, 0x70);
        sp28 = M2C_FIELD(arg0, f32 *, 0x74);
        func_8025D960(&sp20, temp_a3);
        func_8023FA1C(&sp20, &sp10, &sp30);
        func_8023F818(&sp30, arg1);
        func_8023F58C(&sp30, &sp20, arg0 + 0x6C);
        temp_fv1 = *(f32 *)0x216314;
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(arg0, f32 *, 0x6C) * temp_fv1 * M2C_FIELD(M2C_FIELD(((M2C_FIELD(arg0, s16 *, 0x52) << 5) + &D_2177EC), void **, 8), f32 *, 0x1C));
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) (M2C_FIELD(arg0, f32 *, 0x70) * temp_fv1 * M2C_FIELD(M2C_FIELD(((M2C_FIELD(arg0, s16 *, 0x52) << 5) + &D_2177EC), void **, 8), f32 *, 0x1C));
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) (M2C_FIELD(arg0, f32 *, 0x74) * temp_fv1 * M2C_FIELD(M2C_FIELD(((M2C_FIELD(arg0, s16 *, 0x52) << 5) + &D_2177EC), void **, 8), f32 *, 0x1C));
    }
}
