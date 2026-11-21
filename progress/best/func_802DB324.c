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

M2C_UNK func_80221CE8(M2C_UNK *, s32, M2C_UNK, s16, s32, M2C_UNK, f32, f32); /* extern */
f32 func_8022A308(void *, s16);                     /* extern */
M2C_UNK func_8022A358(s16, f32 *, f32 *);           /* extern */
s32 func_802DB2C4(u16);                             /* extern */
M2C_UNK func_802DB3D0();                            /* extern */
extern M2C_UNK D_100F80;
extern M2C_UNK D_80046398;
extern M2C_UNK D_80046500;
extern M2C_UNK D_80046518;
extern M2C_UNK D_80046530;
extern M2C_UNK D_80046548;
extern u16 D_8006A4D0;
extern M2C_UNK D_8007DB78;

void func_802DB324(void *arg0) {
    M2C_UNK sp20;
    s8 sp23;
    f32 sp28;
    f32 sp2C;
    f32 temp_fv0;
    f32 temp_fv0f;
    s16 var_s4;
    s32 var_s2;
    u16 *var_s1;
    u32 var_s3;

    sp20 = M2C_UNALIGNED32(M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x28), M2C_UNK *, 0x20));
    func_8022A358(M2C_FIELD(arg0, s16 *, 0x38), &sp28, &sp2C);
    temp_fv0 = func_8022A308(arg0, M2C_FIELD(arg0, s16 *, 0x38)) * *(f32 *)0x2D7D4C;
    temp_fv0f = *(f32 *)0x2D7D50;
    if (temp_fv0f <= temp_fv0) {
        var_s3 = 0;
        sp23 = (s32) (temp_fv0 - temp_fv0f) | 0x80000000;
        var_s2 = 0;
        func_80221CE8((M2C_UNK *)0x100000, *((M2C_FIELD(&D_8007DB78, u8 *, 0x8E) * 4) + &D_80046500), 0x64, 0x37, 2, M2C_UNALIGNED32(sp20), sp28, sp2C);
        func_80221CE8((M2C_UNK *)0x100000, *((M2C_FIELD(&D_8007DB78, u8 *, 0x8E) * 4) + &D_80046518), 0x64, 0x37, 0, M2C_UNALIGNED32(sp20), sp28, sp2C);
        var_s1 = &D_8006A4D0;
        var_s4 = (*(u8 *)0x100F80 & 0x7F) + 0x37;
        do {
            if (*var_s1 != 0) {
                func_80221CE8((M2C_UNK *)0x100000, *((M2C_FIELD(&D_8007DB78, u8 *, 0x8E) * 4) + var_s2 + &D_80046398), 0x64, var_s4, 2, M2C_UNALIGNED32(sp20), sp28, sp2C);
                func_80221CE8((M2C_UNK *)0x100000, func_802DB2C4(*var_s1), 0x64, var_s4, 0, M2C_UNALIGNED32(sp20), sp28, sp2C);
                var_s4 += *(u8 *)0x100F80 & 0x7F;
            }
            var_s2 += 0x18;
            var_s3 += 1;
            var_s1 += 2;
        } while (var_s3 < 0xFU);
        func_80221CE8(&D_100F80, *((M2C_FIELD(&D_8007DB78, u8 *, 0x8E) * 4) + &D_80046530), 0x64, var_s4, 2, M2C_UNALIGNED32(sp20), sp28, sp2C);
        func_80221CE8(&D_100F80, *((M2C_FIELD(&D_8007DB78, u8 *, 0x8E) * 4) + &D_80046548), 0x64, var_s4, 0, M2C_UNALIGNED32(sp20), sp28, sp2C);
        return;
    }
    func_802DB3D0();
}
