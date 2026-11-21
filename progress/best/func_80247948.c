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

M2C_UNK func_80239FCC(f32 *, f32 *, void *);        /* extern */
M2C_UNK func_802478C0(s32, void *);                 /* extern */
M2C_UNK func_8024E094();                            /* extern */
extern M2C_UNK D_80075568;
extern s32 D_800755F8;
extern s32 D_8007BE5C;

void func_80247948(void *arg0) {
    union {
        unsigned char bytes[32];
        struct { f32 value; } view_sp10;
        struct { unsigned char pad[4]; f32 value; } view_sp14;
        struct { unsigned char pad[8]; f32 value; } view_sp18;
        struct { unsigned char pad[16]; f32 value; } view_sp20;
        struct { unsigned char pad[24]; f32 value; } view_sp28;
    } m2c_initial_frame;

             
             
             
             
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 8);
    temp_s1 = M2C_FIELD(temp_s0, s32 *, 0x6C);
    if (D_800755F8 != 0) {
        func_8024E094();
    }
    if ((D_8007BE5C == 0) || ((m2c_initial_frame.view_sp10.value = M2C_FIELD(&D_80075568, f32 *, 0x24) - M2C_FIELD(temp_s0, f32 *, 0x24), m2c_initial_frame.view_sp14.value = M2C_FIELD(&D_80075568, f32 *, 0x28) - M2C_FIELD(temp_s0, f32 *, 0x28), m2c_initial_frame.view_sp18.value = M2C_FIELD(&D_80075568, f32 *, 0x2C) - M2C_FIELD(temp_s0, f32 *, 0x2C), func_80239FCC(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp20.value, temp_s0 + 0x34), (*(f32 *)0x202C78 < m2c_initial_frame.view_sp20.value)) && (m2c_initial_frame.view_sp28.value < 0.0f))) {
        func_802478C0(temp_s1 + 4, temp_s0 + 0x24);
    }
}
