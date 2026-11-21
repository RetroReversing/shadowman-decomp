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

s32 func_80113AD0();                                /* extern */
M2C_UNK func_8023A0DC(M2C_UNK, M2C_UNK, f32, f32 *, M2C_UNK *); /* extern */
M2C_UNK func_8023B714(void *, M2C_UNK *, void *);   /* extern */
extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_8027F9B0(void) {
    union {
        unsigned char bytes[64];
        struct { M2C_UNK value; } view_sp18;
        struct { unsigned char pad[48]; f32 value; } view_sp48;
        struct { unsigned char pad[52]; f32 value; } view_sp4C;
        struct { unsigned char pad[56]; f32 value; } view_sp50;
    } m2c_initial_frame;

                 
             
    s32 temp_a1;
    s32 temp_hi;
    s32 temp_v0;

    M2C_FIELD(D_8006A4FC, s32 *, 0x18) = 0;
    temp_v0 = func_80113AD0();
    temp_hi = MULT_HI(temp_v0, 0xB60B60B7);
    temp_a1 = temp_v0 >> 0x1F;
    M2C_FIELD(D_8006A4FC, s32 *, 0x20) = 0;
    M2C_FIELD(D_8006A4FC, f32 *, 0x1C) = (f32) (temp_v0 - ((((s32) (temp_hi + temp_v0) >> 8) - temp_a1) * 0x168));
    func_8023B714(D_8006A4FC + 0x18, &m2c_initial_frame.view_sp18.value, D_8006A4FC + 0x24);
    func_8023A0DC(0, 0, (f32) (func_80113AD0() % (s16) M2C_FIELD(D_8007AFF8, s16 *, 0x9C)), &m2c_initial_frame.view_sp48.value, &m2c_initial_frame.view_sp18.value);
    M2C_FIELD(D_8007AFF8, f32 *, 0xC8) = (f32) (M2C_FIELD(D_8007AFF8, f32 *, 0xB0) + m2c_initial_frame.view_sp48.value);
    M2C_FIELD(D_8007AFF8, f32 *, 0xCC) = (f32) (M2C_FIELD(D_8007AFF8, f32 *, 0xB4) + m2c_initial_frame.view_sp4C.value);
    M2C_FIELD(D_8007AFF8, s16 *, 0x90) = 2;
    M2C_FIELD(D_8007AFF8, u16 *, 0xA0) = 0x4BU;
    M2C_FIELD(D_8007AFF8, f32 *, 0xD0) = (f32) (M2C_FIELD(D_8007AFF8, f32 *, 0xB8) + m2c_initial_frame.view_sp50.value);
    M2C_FIELD(D_8007AFF8, u16 *, 0xA0) = (u16) (M2C_FIELD(D_8007AFF8, u16 *, 0xA0) + (func_80113AD0() & 0xF));
}
