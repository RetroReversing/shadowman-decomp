/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

M2C_UNK func_80234BEC(f32 *, f32 *, f32 *);         /* extern */
extern M2C_UNK D_80073318;
extern M2C_UNK D_80073350;
extern s32 D_80073364;
extern f32 D_80074BC0;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007BEB8;

void func_802477A0(void) {
    union {
        unsigned char bytes[52];
        struct { f32 value; } view_sp10;
        struct { unsigned char pad[4]; f32 value; } view_sp14;
        struct { unsigned char pad[8]; f32 value; } view_sp18;
        struct { unsigned char pad[16]; f32 value; } view_sp20;
        struct { unsigned char pad[20]; f32 value; } view_sp24;
        struct { unsigned char pad[24]; f32 value; } view_sp28;
        struct { unsigned char pad[32]; f32 value; } view_sp30;
        struct { unsigned char pad[36]; f32 value; } view_sp34;
        struct { unsigned char pad[40]; f32 value; } view_sp38;
    } m2c_initial_frame;

             
             
             
             
             
             
             
    f32 temp_ft0f;

    if (D_80073364 != 0) {
        temp_ft0f = *(f32 *)0x202C74;
        m2c_initial_frame.view_sp30.value = M2C_FIELD(&D_80075568, f32 *, 0x24) - M2C_FIELD(&D_80073318, f32 *, 0);
        m2c_initial_frame.view_sp34.value = M2C_FIELD(&D_80075568, f32 *, 0x28) - M2C_FIELD(&D_80073318, f32 *, 4);
        m2c_initial_frame.view_sp10.value = M2C_FIELD(&D_80073350, f32 *, 0) * temp_ft0f;
        m2c_initial_frame.view_sp38.value = M2C_FIELD(&D_80075568, f32 *, 0x2C) - M2C_FIELD(&D_80073318, f32 *, 8);
        m2c_initial_frame.view_sp14.value = M2C_FIELD(&D_80073350, f32 *, 4) * temp_ft0f;
        m2c_initial_frame.view_sp18.value = M2C_FIELD(&D_80073350, f32 *, 8) * temp_ft0f;
        M2C_FIELD(&D_80075568, f32 *, 0x18) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x18) + (M2C_FIELD(&D_80073350, f32 *, 0) * D_80074BC0));
        M2C_FIELD(&D_80075568, f32 *, 0x1C) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x1C) + (M2C_FIELD(&D_80073350, f32 *, 4) * D_80074BC0));
        M2C_FIELD(&D_80075568, f32 *, 0x20) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x20) + (M2C_FIELD(&D_80073350, f32 *, 8) * D_80074BC0));
        func_80234BEC(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp30.value, &m2c_initial_frame.view_sp20.value);
        D_80073364 = 0;
        M2C_FIELD(&D_8007BEB8, f32 *, 0) = (f32) (D_80074BC0 * m2c_initial_frame.view_sp20.value);
        M2C_FIELD(&D_8007BEB8, f32 *, 4) = (f32) (D_80074BC0 * m2c_initial_frame.view_sp24.value);
        M2C_FIELD(&D_8007BEB8, f32 *, 8) = (f32) (D_80074BC0 * m2c_initial_frame.view_sp28.value);
    }
}
