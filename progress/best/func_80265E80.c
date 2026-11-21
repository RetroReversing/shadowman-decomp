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

M2C_UNK func_80239FCC(f32 *, f32 *, s32);           /* extern */
M2C_UNK func_80265EC0();                            /* extern */
M2C_UNK func_80265EDC();                            /* extern */
extern s32 D_8005EA2C;

void func_80265E80(void *arg0, s32 arg1) {
    union {
        unsigned char bytes[32];
        struct { f32 value; } view_sp10;
        struct { unsigned char pad[4]; f32 value; } view_sp14;
        struct { unsigned char pad[8]; s32 value; } view_sp18;
        struct { unsigned char pad[16]; f32 value; } view_sp20;
        struct { unsigned char pad[20]; f32 value; } view_sp24;
        struct { unsigned char pad[24]; f32 value; } view_sp28;
    } m2c_initial_frame;

             
             
             
             

    if (arg1 != 0) {
        if (arg1 != 1) {
            func_80265EDC();
            return;
        }
        m2c_initial_frame.view_sp18.value = 0;
        m2c_initial_frame.view_sp10.value = *(f32 *)0x20DED4;
        m2c_initial_frame.view_sp14.value = *(f32 *)0x20DED8;
        do { func_80239FCC(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp20.value, D_8005EA2C + 0x3C); } while (0);
        M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) + m2c_initial_frame.view_sp20.value);
        M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + m2c_initial_frame.view_sp24.value);
        M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + m2c_initial_frame.view_sp28.value);
        return;
    }
    func_80265EC0();
}
