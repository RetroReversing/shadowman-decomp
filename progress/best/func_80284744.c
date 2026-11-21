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

M2C_UNK func_8023A0DC(M2C_UNK, M2C_UNK, M2C_UNK, f32 *, void *); /* extern */
extern void *D_8006A4FC;

void func_80284744(void) {
    void **__base_D_8006A4FC;
    union {
        unsigned char bytes[16];
        struct { f32 value; } view_sp18;
        struct { unsigned char pad[4]; f32 value; } view_sp1C;
        struct { unsigned char pad[8]; f32 value; } view_sp20;
    } m2c_initial_frame;

             

    __base_D_8006A4FC = &D_8006A4FC;
    func_8023A0DC(0, 0, 0x41200000, &m2c_initial_frame.view_sp18.value, (*__base_D_8006A4FC) + 0x34);
    M2C_FIELD((*__base_D_8006A4FC), f32 *, 0xC) = m2c_initial_frame.view_sp18.value;
    M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x10) = m2c_initial_frame.view_sp1C.value;
    M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x14) = m2c_initial_frame.view_sp20.value;
    M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x24) = (f32) (M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x24) + m2c_initial_frame.view_sp18.value);
    M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x28) = (f32) (M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x28) + m2c_initial_frame.view_sp1C.value);
    M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x2C) = (f32) (M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x2C) + m2c_initial_frame.view_sp20.value);
}
