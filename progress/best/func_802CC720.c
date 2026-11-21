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

M2C_UNK func_8023E724(M2C_UNK *, s32, f32 *, M2C_UNK *); /* extern */
extern M2C_UNK D_8002D410;
extern M2C_UNK D_8002D418;
extern s32 D_8002D420;
extern f32 D_80044E94;
extern M2C_UNK D_80052770;
extern f32 D_8005E6E8;
extern s32 D_80072BD0;
extern f32 D_80074BC0;
extern f32 D_800754F0;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_802CC720(f32 arg0) {
    union {
        unsigned char bytes[36];
        struct { f32 value; } view_sp10;
        struct { unsigned char pad[4]; f32 value; } view_sp14;
        struct { unsigned char pad[8]; f32 value; } view_sp18;
        struct { unsigned char pad[16]; M2C_UNK value; } view_sp20;
        struct { unsigned char pad[20]; f32 value; } view_sp24;
    } m2c_initial_frame;

             
             
             
                 
    f32 temp_fv0;
    f32 temp_fv0_2;
    s32 var_v1;

    if (D_8002D420 & 4) {
        temp_fv0 = D_80044E94 + (sqrtf((M2C_FIELD(&D_80075568, f32 *, 0xC) * M2C_FIELD(&D_80075568, f32 *, 0xC)) + (M2C_FIELD(&D_80075568, f32 *, 0x10) * M2C_FIELD(&D_80075568, f32 *, 0x10)) + (M2C_FIELD(&D_80075568, f32 *, 0x14) * M2C_FIELD(&D_80075568, f32 *, 0x14))) * D_80074BC0 * arg0 * M2C_FIELD(&D_8002D410, f32 *, 4));
        M2C_FIELD(&D_80075568, f32 *, 0x1C) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x1C) - (D_80074BC0 * (arg0 * *(f32 *)0x218718) * M2C_FIELD(&D_8002D410, f32 *, 0)));
        D_80044E94 = temp_fv0;
    }
    if (D_8002D420 & 8) {
        temp_fv0_2 = D_80044E94 - (sqrtf((M2C_FIELD(&D_80075568, f32 *, 0xC) * M2C_FIELD(&D_80075568, f32 *, 0xC)) + (M2C_FIELD(&D_80075568, f32 *, 0x10) * M2C_FIELD(&D_80075568, f32 *, 0x10)) + (M2C_FIELD(&D_80075568, f32 *, 0x14) * M2C_FIELD(&D_80075568, f32 *, 0x14))) * D_80074BC0 * arg0 * M2C_FIELD(&D_8002D410, f32 *, 4));
        M2C_FIELD(&D_80075568, f32 *, 0x1C) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x1C) + (D_80074BC0 * (arg0 * *(f32 *)0x21871C) * M2C_FIELD(&D_8002D410, f32 *, 4)));
        D_80044E94 = temp_fv0_2;
    }
    if (D_8002D420 & 1) {
        D_800754F0 = (D_8005E6E8 - M2C_FIELD(&D_80075568, f32 *, 0x28)) + *(f32 *)0x218720;
        m2c_initial_frame.view_sp18.value = 0.0f;
        m2c_initial_frame.view_sp14.value = 0.0f;
        m2c_initial_frame.view_sp10.value = 0.0f;
        func_8023E724(&D_80075518, D_80072BD0, &m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp20.value);
        if (m2c_initial_frame.view_sp24.value < (D_8005E6E8 - *(f32 *)0x218724)) {
            if (M2C_FIELD(&D_80075568, f32 *, 0x18) < *(f32 *)0x218728) {
                M2C_FIELD(&D_80075568, f32 *, 0x18) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x18) + (D_80074BC0 * (arg0 * *(f32 *)0x21872C) * M2C_FIELD(&D_8002D418, f32 *, 0)));
            }
        }
    }
    if ((D_8002D420 & 2) && (*(f32 *)0x218730 < M2C_FIELD(&D_80075568, f32 *, 0x18))) {
        M2C_FIELD(&D_80075568, f32 *, 0x18) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x18) - (D_80074BC0 * (arg0 * *(f32 *)0x218734) * M2C_FIELD(&D_8002D418, f32 *, 4)));
    }
    var_v1 = 0;
    if (M2C_FIELD(&D_80052770, s32 *, 4) > 0) {
        do {
            var_v1 += 1;
            D_80044E94 -= D_80044E94 * *(f32 *)0x218738;
        } while (var_v1 < M2C_FIELD(&D_80052770, s32 *, 4));
    }
}
