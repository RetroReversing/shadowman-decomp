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
M2C_UNK func_8023A0DC(f32, f32, f32, f32 *, M2C_UNK *); /* extern */
M2C_UNK func_8023B714(void *, M2C_UNK *, void *);   /* extern */
extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_8027F888(void) {
    void **__base_D_8007AFF8;
    union {
        unsigned char bytes[64];
        struct { M2C_UNK value; } view_sp18;
        struct { unsigned char pad[48]; f32 value; } view_sp48;
        struct { unsigned char pad[52]; f32 value; } view_sp4C;
        struct { unsigned char pad[56]; f32 value; } view_sp50;
    } m2c_initial_frame;

                 
             
    f32 temp_fs0;
    f32 temp_fv0;
    f32 var_fv0f;

    M2C_FIELD(D_8006A4FC, f32 *, 0x18) = 0.0f;
    __base_D_8007AFF8 = &D_8007AFF8;
    var_fv0f = M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xD4) + *(f32 *)0x214970;
    temp_fs0 = M2C_FIELD(D_8006A4FC, f32 *, 0x18);
    if (var_fv0f < temp_fs0) {
        var_fv0f += *(f32 *)0x214974;
    }
    temp_fv0 = *(f32 *)0x214978;
    if (temp_fv0 < var_fv0f) {
        var_fv0f -= temp_fv0;
    }
    M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xD4) = var_fv0f;
    M2C_FIELD(D_8006A4FC, f32 *, 0x1C) = var_fv0f;
    M2C_FIELD(D_8006A4FC, f32 *, 0x20) = temp_fs0;
    func_8023B714(D_8006A4FC + 0x18, &m2c_initial_frame.view_sp18.value, D_8006A4FC + 0x24);
    func_8023A0DC(temp_fs0, temp_fs0, (f32) (func_80113AD0() % (s16) M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x9E)), &m2c_initial_frame.view_sp48.value, &m2c_initial_frame.view_sp18.value);
    M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xC8) = (f32) (M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xBC) + m2c_initial_frame.view_sp48.value);
    M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xCC) = (f32) (M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xC0) + m2c_initial_frame.view_sp4C.value);
    M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x90) = 1;
    M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xD0) = (f32) (M2C_FIELD((*__base_D_8007AFF8), f32 *, 0xC4) + m2c_initial_frame.view_sp50.value);
    M2C_FIELD((*__base_D_8007AFF8), s16 *, 0xA0) = (s16) ((func_80113AD0() & 0xFF) + 0x7F);
}
