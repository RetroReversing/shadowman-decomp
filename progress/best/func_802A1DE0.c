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

M2C_UNK func_80239C38(void *, M2C_UNK *);           /* extern */
M2C_UNK func_8025DCDC(u8, u8, u8, u8);              /* extern */
M2C_UNK func_8025DD7C(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80296738(s32);                             /* extern */
s32 func_802968C0(s32, s32);                        /* extern */
M2C_UNK func_802A1ED4();                            /* extern */
M2C_UNK func_802A1F30();                            /* extern */
M2C_UNK func_802A1F8C(s32);                         /* extern */
M2C_UNK func_802A1FB0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_8002C63C;
extern M2C_UNK D_8007DB88;

void func_802A1DE0(void *arg0) {
    M2C_UNK *__base_D_8002C63C;
    union {
        unsigned char bytes[152];
        struct { M2C_UNK value; } view_sp10;
        struct { unsigned char pad[24]; f32 value; } view_sp28;
        struct { unsigned char pad[28]; f32 value; } view_sp2C;
        struct { unsigned char pad[32]; f32 value; } view_sp30;
        struct { unsigned char pad[36]; s32 value; } view_sp34;
        struct { unsigned char pad[40]; s32 value; } view_sp38;
        struct { unsigned char pad[44]; s32 value; } view_sp3C;
        struct { unsigned char pad[48]; f32 value; } view_sp40;
        struct { unsigned char pad[52]; M2C_UNK value; } view_sp44;
        struct { unsigned char pad[100]; s32 value; } view_sp74;
        struct { unsigned char pad[104]; s32 value; } view_sp78;
        struct { unsigned char pad[108]; s32 value; } view_sp7C;
        struct { unsigned char pad[112]; s8 value; } view_sp80;
        struct { unsigned char pad[128]; s32 value; } view_sp90;
        struct { unsigned char pad[144]; s32 value; } view_spA0;
        struct { unsigned char pad[148]; s32 value; } view_spA4;
        struct { unsigned char pad[151]; u8 value; } view_unkspA7;
    } m2c_initial_frame;

                 
             
             
             
             
             
             
             
                 
             
             
             
            
             
             
             
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    s32 temp_v0;

    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x54) - M2C_FIELD(&D_8007DB88, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x54) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
    }
    __base_D_8002C63C = &D_8002C63C;
    temp_v0 = func_80296738(M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x6C) * 0x10) + __base_D_8002C63C), s32 *, 8));
    m2c_initial_frame.view_sp90.value = temp_v0;
    if (temp_v0 != 0) {
        m2c_initial_frame.view_sp34.value = M2C_FIELD(arg0, s32 *, 0);
        m2c_initial_frame.view_sp38.value = M2C_FIELD(arg0, s32 *, 4);
        m2c_initial_frame.view_sp3C.value = M2C_FIELD(arg0, s32 *, 8);
        m2c_initial_frame.view_sp30.value = 0.0f;
        m2c_initial_frame.view_sp2C.value = 0.0f;
        m2c_initial_frame.view_sp28.value = 0.0f;
        m2c_initial_frame.view_sp80.value = 0xFF;
        m2c_initial_frame.view_sp40.value = M2C_FIELD(arg0, f32 *, 0x4C);
        m2c_initial_frame.view_sp74.value = func_802968C0(M2C_FIELD(arg0, s32 *, 0x6C), M2C_FIELD(arg0, s32 *, 0x58));
        m2c_initial_frame.view_sp7C.value = 0;
        m2c_initial_frame.view_sp78.value = 0;
        temp_fv0_2 = M2C_FIELD(arg0, f32 *, 0xC);
        temp_fv0f = *(f32 *)0x215FB0;
        if (temp_fv0f <= temp_fv0_2) {
            m2c_initial_frame.view_sp80.value = (s32) (temp_fv0_2 - temp_fv0f) | 0x80000000;
            func_80239C38(arg0 + 0x24, &m2c_initial_frame.view_sp44.value);
            if (!(M2C_FIELD(arg0, u8 *, 0x72) & 2)) {
                temp_fv0_3 = M2C_FIELD(arg0, f32 *, 0xC);
                temp_fv0f_2 = *(f32 *)0x215FB4;
                if (temp_fv0f_2 <= temp_fv0_3) {
                    m2c_initial_frame.view_spA0.value = (s32) (temp_fv0_3 - temp_fv0f_2) | 0x80000000;
                    func_802A1FB0(&m2c_initial_frame.view_sp10.value, 2, 6, 0);
                    return;
                }
                func_802A1F30();
                return;
            }
            temp_fv0_4 = M2C_FIELD(arg0, f32 *, 0xC);
            temp_fv0f_3 = *(f32 *)0x215FB8;
            if (temp_fv0f_3 > temp_fv0_4) {
                func_802A1F8C((s32) temp_fv0_4);
            } else {
                m2c_initial_frame.view_spA4.value = (s32) (temp_fv0_4 - temp_fv0f_3) | 0x80000000;
                func_8025DCDC(m2c_initial_frame.view_unkspA7.value, m2c_initial_frame.view_unkspA7.value, m2c_initial_frame.view_unkspA7.value, m2c_initial_frame.view_unkspA7.value);
                func_8025DD7C(&m2c_initial_frame.view_sp10.value, 6, 0x46, 0);
            }
        } else {
            func_802A1ED4();
        }
    }
}
