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

M2C_UNK func_801186D0(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_8021F8CC(f32, f32, void *, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80221CE8(M2C_UNK *, M2C_UNK *, M2C_UNK, s16, s32, M2C_UNK, f32, f32); /* extern */
extern M2C_UNK D_100F80;
extern M2C_UNK D_20E204;
extern M2C_UNK D_8002D200;
extern M2C_UNK D_80075AA8;

s32 func_802694BC(void) {
    union {
        unsigned char bytes[32];
        struct { M2C_UNK value; } view_sp40;
        struct { unsigned char pad[24]; s32 value; } view_sp58;
        struct { unsigned char pad[25]; u8 value; } view_unksp59;
        struct { unsigned char pad[26]; u8 value; } view_unksp5A;
        struct { unsigned char pad[27]; u8 value; } view_unksp5B;
    } m2c_initial_frame;

                 
             
    f32 temp_fs0;
    f32 temp_fv1;

    temp_fs0 = *(f32 *)0x20E21C;
    m2c_initial_frame.view_sp58.value = M2C_FIELD(&D_80075AA8, u8 *, 0x6B) | 0x80808000;
    func_8021F8CC(*(f32 *)0x20E220, M2C_FIELD(&D_80075AA8, f32 *, 4) + temp_fs0, &D_8002D200 + 4, 0x80808000, 0, 0, M2C_FIELD(&D_8002D200, f32 *, 0), M2C_FIELD(&D_8002D200, f32 *, 4), 0x18, 0x18, *M2C_FIELD(&D_80075AA8, s32 **, 0xC) + 0x200, *M2C_FIELD(&D_80075AA8, s32 **, 0xC), 0, 1, (s32) (u8) m2c_initial_frame.view_sp58.value, (s32) m2c_initial_frame.view_unksp59.value, (s32) m2c_initial_frame.view_unksp5A.value, (s32) m2c_initial_frame.view_unksp5B.value);
    func_801186D0(&m2c_initial_frame.view_sp40.value, &D_20E204, M2C_FIELD(&D_80075AA8, s32 *, 0x88));
    temp_fv1 = *(f32 *)0x20E228;
    func_80221CE8(&D_100F80, &m2c_initial_frame.view_sp40.value, 0x32, (s16) (s32) (M2C_FIELD(&D_80075AA8, f32 *, 4) + temp_fs0 + *(f32 *)0x20E224), 0, M2C_UNALIGNED32(m2c_initial_frame.view_sp58.value), temp_fv1, temp_fv1);
    return 1;
}
