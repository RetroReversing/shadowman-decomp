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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023A0DC(f32, f32, s32, void*);
extern void *D_80075558;
extern char D_80075598[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x28, 0x2c, 0x30, 0x34, 0x40, 0x44], gap at: 0x38. */
typedef struct { unsigned char pad_0[36]; float field_24; float field_28; float field_2C; } __repair_record_temp_s0_2;
void func_802BA3A8(f32 arg0, f32 arg1, f32 arg2) {
    union {
        unsigned char bytes[16];
        struct { f32 value; } view_sp18;
        struct { unsigned char pad[4]; f32 value; } view_sp1C;
        struct { unsigned char pad[8]; f32 value; } view_sp20;
    } m2c_initial_frame;

             
    f32 temp_ft0;
    void *temp_s0;
    void *temp_s0_2;

    temp_s0 = D_80075598 + 4;
    func_8023A0DC(arg0, arg1, &m2c_initial_frame.view_sp18.value, temp_s0);
    temp_ft0 = *(f32 *)0x217F34;
    temp_s0_2 = temp_s0 - 0x34;
    ((__repair_record_temp_s0_2*)temp_s0_2)->field_24 = M2C_BITWISE(f64, (((__repair_record_temp_s0_2*)temp_s0_2)->field_28 + m2c_initial_frame.view_sp1C.value));
    ((__repair_record_temp_s0_2*)temp_s0_2)->field_2C += m2c_initial_frame.view_sp20.value;
    M2C_FIELD(D_80075558, s16 *, 0x38) = (s16) (s32) ((f32) M2C_FIELD(D_80075558, s16 *, 0x38) - (arg0 * temp_ft0));
    M2C_FIELD(D_80075558, s16 *, 0x3A) = (s16) (s32) ((f32) M2C_FIELD(D_80075558, s16 *, 0x3A) - (arg1 * temp_ft0));
    M2C_FIELD(D_80075558, s16 *, 0x3C) = (s16) (s32) ((f32) M2C_FIELD(D_80075558, s16 *, 0x3C) - (arg2 * temp_ft0));
}
