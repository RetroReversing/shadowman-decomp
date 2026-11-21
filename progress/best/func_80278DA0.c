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

s32 func_8010E8F0(s32 *, void *, M2C_UNK);          /* extern */
M2C_UNK func_8023E724(s32, M2C_UNK, s32 *, s32 *);  /* extern */
extern void *D_8007AFF8;
extern void *D_8007B0C0;

void func_80278DA0(void) {
    void **__base_D_8007B0C0;
    union {
        unsigned char bytes[32];
        struct { s32 value; } view_sp10;
        struct { unsigned char pad[4]; f32 value; } view_sp14;
        struct { unsigned char pad[8]; s32 value; } view_sp18;
        struct { unsigned char pad[16]; s32 value; } view_sp20;
        struct { unsigned char pad[20]; s32 value; } view_sp24;
        struct { unsigned char pad[24]; s32 value; } view_sp28;
    } m2c_initial_frame;

             
             
             
             

    m2c_initial_frame.view_sp10.value = 0;
    m2c_initial_frame.view_sp18.value = 0;
    m2c_initial_frame.view_sp14.value = *(f32 *)0x214378;
    func_8023E724(M2C_FIELD(D_8007AFF8, s32 *, 0x10C), 0x1B, &m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp20.value);
    __base_D_8007B0C0 = &D_8007B0C0;
    if (M2C_FIELD(D_8007B0C0, u8 *, 0x66) == 0) {
        if (func_8010E8F0(&m2c_initial_frame.view_sp20.value, (*__base_D_8007B0C0) + 0x144, 0x41F00001) & 0xFF) {
            M2C_FIELD(D_8007B0C0, u8 *, 0x66) = 1U;
        }
    }
    M2C_FIELD(D_8007B0C0, s32 *, 0x144) = m2c_initial_frame.view_sp20.value;
    M2C_FIELD(D_8007B0C0, s32 *, 0x148) = m2c_initial_frame.view_sp24.value;
    M2C_FIELD(D_8007B0C0, s32 *, 0x14C) = m2c_initial_frame.view_sp28.value;
}
