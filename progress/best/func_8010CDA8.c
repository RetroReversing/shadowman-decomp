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

M2C_UNK func_8010CACC(s32, void *, void *);         /* extern */
M2C_UNK func_8023A0DC(f32, f32, void *, s32, f32 *, void *); /* extern */
extern M2C_UNK D_80052770;
extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_8010CDA8(s32 arg0, void *arg1) {
    void **__base_D_8007AFF8;
    void **__base_D_8006A4FC;
    union {
        unsigned char bytes[16];
        struct { f32 value; } view_sp18;
        struct { unsigned char pad[4]; f32 value; } view_sp1C;
        struct { unsigned char pad[8]; f32 value; } view_sp20;
    } m2c_initial_frame;

             
    f32 temp_fs0;
    f32 temp_fv1;
    void *temp_a0;
    void *temp_v0;

    __base_D_8007AFF8 = &D_8007AFF8;
    temp_a0 = M2C_FIELD((*__base_D_8007AFF8), void **, 0x10C);
    temp_v0 = (M2C_FIELD(temp_a0, s16 *, 4) * 0x38) + M2C_FIELD(temp_a0, s32 *, 0x30);
    temp_fs0 = M2C_FIELD(temp_v0, f32 *, 0x24);
    __base_D_8006A4FC = &D_8006A4FC;
    func_8023A0DC(M2C_FIELD(temp_v0, f32 *, 0xC), M2C_FIELD(temp_v0, f32 *, 0x10), temp_a0, M2C_FIELD(temp_v0, s32 *, 0x14), &m2c_initial_frame.view_sp18.value, (*__base_D_8006A4FC) + 0x34);
    temp_fv1 = (f32) M2C_FIELD(&D_80052770, s32 *, 4);
    M2C_FIELD((*__base_D_8006A4FC), f32 *, 0xC) = (f32) (M2C_FIELD((*__base_D_8006A4FC), f32 *, 0xC) + (m2c_initial_frame.view_sp18.value * temp_fv1));
    M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x10) = (f32) (M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x10) + (m2c_initial_frame.view_sp1C.value * temp_fv1));
    M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x14) = (f32) (M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x14) + (m2c_initial_frame.view_sp20.value * temp_fv1));
    M2C_FIELD((*__base_D_8006A4FC), f32 *, 0xC) = (f32) (M2C_FIELD((*__base_D_8006A4FC), f32 *, 0xC) * M2C_FIELD(arg1, f32 *, 0x20));
    M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x14) = (f32) (M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x14) * M2C_FIELD(arg1, f32 *, 0x20));
    if (M2C_FIELD(M2C_FIELD((*__base_D_8007AFF8), void **, 0x10C), u16 *, 0x1C) & 0x20) {
        M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x10) = (f32) (M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x10) * temp_fs0);
    }
    func_8010CACC(arg0, arg1, (*__base_D_8006A4FC) + 0xC);
}
