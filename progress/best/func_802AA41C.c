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

s32 func_80109918(s32, M2C_UNK, s16);               /* extern */
M2C_UNK func_80239A94(void);                         /* extern */
M2C_UNK func_802A5D00(s32, f32 *);                  /* extern */
M2C_UNK func_802A5EC4(s32, f32 *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_217A8C;
extern M2C_UNK D_8002D3C0;
extern M2C_UNK D_80036DF0;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x80, 0x84, 0x90, 0x94], gap at: 0x88. */
void func_802AA41C(void *arg0) {
    union {
        unsigned char bytes[80];
        struct { f32 value; } view_sp18;
        struct { unsigned char pad[16]; f32 value; } view_sp28;
        struct { unsigned char pad[20]; f32 value; } view_sp2C;
        struct { unsigned char pad[24]; f32 value; } view_sp30;
        struct { unsigned char pad[32]; f32 value; } view_sp38;
        struct { unsigned char pad[36]; f32 value; } view_sp3C;
        struct { unsigned char pad[40]; f32 value; } view_sp40;
        struct { unsigned char pad[44]; f32 value; } view_sp44;
        struct { unsigned char pad[48]; f32 value; } view_sp48;
        struct { unsigned char pad[52]; f32 value; } view_sp4C;
        struct { unsigned char pad[56]; f32 value; } view_sp50;
        struct { unsigned char pad[60]; f32 value; } view_sp54;
        struct { unsigned char pad[64]; f32 value; } view_sp58;
    } m2c_initial_frame;

             
             
             
             
             
    f32 temp_fs0f;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_fv1;
    f32 var_fs0;
    u32 var_s1;

    func_802A5D00(arg0 + 0x6C, &m2c_initial_frame.view_sp38.value);
    var_s1 = 0;
    temp_fs0f = *(f32 *)0x216468;
    var_fs0 = 0.0f;
    do {
        func_80239A94();
        temp_fv1 = (M2C_FIELD(&D_80036DF0, f32 *, 0) * M2C_FIELD(&D_8002D3C0, f32 *, 0)) + (M2C_FIELD(&D_80036DF0, f32 *, 4) * M2C_FIELD(&D_8002D3C0, f32 *, 4)) + (M2C_FIELD(&D_80036DF0, f32 *, 8) * M2C_FIELD(&D_8002D3C0, f32 *, 8));
        temp_ft0 = (M2C_FIELD(&D_80036DF0, f32 *, 0) * M2C_FIELD(&D_8002D3C0, f32 *, 0xC)) + (M2C_FIELD(&D_80036DF0, f32 *, 4) * M2C_FIELD(&D_8002D3C0, f32 *, 0x10)) + (M2C_FIELD(&D_80036DF0, f32 *, 8) * M2C_FIELD(&D_8002D3C0, f32 *, 0x14));
        m2c_initial_frame.view_sp18.value = temp_fv1;
        M2C_FIELD(&m2c_initial_frame.view_sp18.value, f32 *, 4) = temp_ft0;
        temp_ft1 = (M2C_FIELD(&D_80036DF0, f32 *, 0) * M2C_FIELD(&D_8002D3C0, f32 *, 0x18)) + (M2C_FIELD(&D_80036DF0, f32 *, 4) * M2C_FIELD(&D_8002D3C0, f32 *, 0x1C)) + (M2C_FIELD(&D_80036DF0, f32 *, 8) * M2C_FIELD(&D_8002D3C0, f32 *, 0x20));
        M2C_FIELD(&m2c_initial_frame.view_sp18.value, f32 *, 8) = temp_ft1;
        var_fs0 += temp_fs0f;/*__repair_loop_weight*/do {
        var_s1 += 1;} while (0);
        m2c_initial_frame.view_sp28.value = ((temp_ft0 * m2c_initial_frame.view_sp3C.value) + (temp_ft1 * m2c_initial_frame.view_sp40.value)) + ((temp_fv1 * m2c_initial_frame.view_sp38.value));
        m2c_initial_frame.view_sp2C.value = ((temp_ft0 * m2c_initial_frame.view_sp48.value) + (temp_ft1 * m2c_initial_frame.view_sp4C.value)) + ((temp_fv1 * m2c_initial_frame.view_sp44.value));
        m2c_initial_frame.view_sp30.value = (temp_fv1 * m2c_initial_frame.view_sp50.value) + (temp_ft0 * m2c_initial_frame.view_sp54.value) + (temp_ft1 * m2c_initial_frame.view_sp58.value);
        func_802A5EC4(arg0 + 0x54, &m2c_initial_frame.view_sp28.value, &D_217A8C, 2, 0, 0);
    } while (var_s1 < 3U);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_80109918(arg0 + 0x54, 0x7F, *(s16 *)0x216C26);
}
