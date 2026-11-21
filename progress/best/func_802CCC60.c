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

M2C_UNK func_8023E724(M2C_UNK *, s32, s32 *, f32 *); /* extern */
extern s32 D_80072BD8;
extern s32 D_80072C18;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;

void func_802CCC60(void) {
    union {
        unsigned char bytes[48];
        struct { s32 value; } view_sp10;
        struct { unsigned char pad[4]; s32 value; } view_sp14;
        struct { unsigned char pad[8]; s32 value; } view_sp18;
        struct { unsigned char pad[16]; f32 value; } view_sp20;
        struct { unsigned char pad[24]; f32 value; } view_sp28;
        struct { unsigned char pad[32]; f32 value; } view_sp30;
        struct { unsigned char pad[40]; f32 value; } view_sp38;
    } m2c_initial_frame;

             
             
             
             
             
    f32 temp_fv0f;

    if (M2C_FIELD(&D_80075518, s16 *, 0x16) >= 0x65) {
        m2c_initial_frame.view_sp10.value = 0;
        m2c_initial_frame.view_sp14.value = 0;
        m2c_initial_frame.view_sp18.value = 0;
        func_8023E724(&D_80075518, D_80072C18, &m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp30.value);
        func_8023E724(&D_80075518, D_80072BD8, &m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp20.value);
        temp_fv0f = *(f32 *)0x218764;
        M2C_FIELD(&D_80075568, f32 *, 0xC) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0xC) + ((m2c_initial_frame.view_sp30.value - m2c_initial_frame.view_sp20.value) * temp_fv0f));
        M2C_FIELD(&D_80075568, f32 *, 0x10) = M2C_BITWISE(f64, (M2C_FIELD(&D_80075568, f32 *, 0x14) + ((m2c_initial_frame.view_sp38.value - m2c_initial_frame.view_sp28.value) * temp_fv0f)));
    }
}
