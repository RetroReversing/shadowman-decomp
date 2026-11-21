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

s32 func_80108B30(s32);                             /* extern */
M2C_UNK func_80109DB4(M2C_UNK);                     /* extern */
M2C_UNK func_8011BA20(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_8022B114(M2C_UNK, f32, f32, M2C_UNK);  /* extern */
M2C_UNK func_8023E724(M2C_UNK *, M2C_UNK, M2C_UNK *, f32 *); /* extern */
M2C_UNK func_802401D0(M2C_UNK *, f32 *, M2C_UNK);   /* extern */
M2C_UNK func_802645F0(s32, f32 *, f32 *);           /* extern */
M2C_UNK func_80265C10(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_80265C1C();                            /* extern */
M2C_UNK func_80265D44();                            /* extern */
M2C_UNK func_80265D48();                            /* extern */
M2C_UNK func_80265DA4(M2C_UNK *);                   /* extern */
M2C_UNK func_80265E6C();                            /* extern */
M2C_UNK func_80265E80(f32 *, s32);                  /* extern */
M2C_UNK func_8026B618(s32, M2C_UNK);                /* extern */
M2C_UNK func_8026B718(s32, M2C_UNK);                /* extern */
s32 func_802A5EC4(f32 *, f32 *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_802A6548(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK D_2179CC;
extern s8 D_80030E58;
extern M2C_UNK D_80030EA8;
extern M2C_UNK D_80030EB4;
extern s32 D_800458F0;
extern void *D_8005EA2C;
extern M2C_UNK D_8006A510;
extern s32 D_8006A5B4;
extern s32 D_800752D0;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007558C;
extern M2C_UNK D_80075598;
extern M2C_UNK D_8007BB10;
extern M2C_UNK D_8007BDE8;

void func_80265B68(s32 arg0) {
    union {
        unsigned char bytes[80];
        struct { s32 value; } view_sp18;
        struct { unsigned char pad[4]; s32 value; } view_sp1C;
        struct { unsigned char pad[8]; f32 value; } view_sp20;
        struct { unsigned char pad[16]; f32 value; } view_sp28;
        struct { unsigned char pad[20]; f32 value; } view_sp2C;
        struct { unsigned char pad[24]; f32 value; } view_sp30;
        struct { unsigned char pad[32]; f32 value; } view_sp38;
        struct { unsigned char pad[36]; f32 value; } view_sp3C;
        struct { unsigned char pad[40]; f32 value; } view_sp40;
        struct { unsigned char pad[48]; s32 value; } view_sp48;
        struct { unsigned char pad[52]; s32 value; } view_sp4C;
        struct { unsigned char pad[56]; s32 value; } view_sp50;
        struct { unsigned char pad[64]; s32 value; } view_sp58;
        struct { unsigned char pad[68]; s32 value; } view_sp5C;
        struct { unsigned char pad[72]; s32 value; } view_sp60;
    } m2c_initial_frame;

             
             
             
             
             
             
             
             
             
             
             
    f32 temp_fs0;
    f32 temp_ft0;
    f32 temp_fv0;
    f32 temp_fv0f;
    void *temp_v0;

    func_8011BA20(&m2c_initial_frame.view_sp48.value, 0, 0xC);
    func_8011BA20(&m2c_initial_frame.view_sp58.value, 0, 0xC);
    if (arg0 != 0) {
        if (arg0 != 1) {
            func_80265C1C();
            return;
        }
        m2c_initial_frame.view_sp18.value = m2c_initial_frame.view_sp58.value;
        m2c_initial_frame.view_sp1C.value = m2c_initial_frame.view_sp5C.value;
        m2c_initial_frame.view_sp20.value = m2c_initial_frame.view_sp60.value;
        func_8023E724(&D_80075518, 0xD, &D_80030EB4, &m2c_initial_frame.view_sp28.value);
        temp_fs0 = *(f32 *)0x20DEC8;
        m2c_initial_frame.view_sp18.value = 0;
        m2c_initial_frame.view_sp1C.value = 0;
        m2c_initial_frame.view_sp20.value = temp_fs0;
        if (D_800752D0 != 0) {
            m2c_initial_frame.view_sp28.value = M2C_FIELD(D_8005EA2C, f32 *, 0);
            m2c_initial_frame.view_sp2C.value = M2C_FIELD(D_8005EA2C, f32 *, 4);
            m2c_initial_frame.view_sp30.value = M2C_FIELD(D_8005EA2C, f32 *, 8);
            func_80265E80(&m2c_initial_frame.view_sp28.value, arg0);
            m2c_initial_frame.view_sp38.value = M2C_FIELD(&D_8007BB10, f32 *, 0) - m2c_initial_frame.view_sp28.value;
            func_80265D44();
            return;
        }
        if (*((arg0 * 4) + &D_8007BDE8) != 0) {
            func_802645F0(arg0, &m2c_initial_frame.view_sp38.value, &m2c_initial_frame.view_sp28.value);
            m2c_initial_frame.view_sp38.value *= temp_fs0;
            m2c_initial_frame.view_sp3C.value *= temp_fs0;
            func_80265D48();
            return;
        }
        temp_v0 = &D_80075598 + 4;
        temp_fv0f = M2C_FIELD(&m2c_initial_frame.view_sp18.value, f32 *, 4);
        temp_ft0 = M2C_FIELD(&m2c_initial_frame.view_sp18.value, f32 *, 8);
        m2c_initial_frame.view_sp38.value = (temp_fv0f * M2C_FIELD(temp_v0, f32 *, 4)) + (temp_ft0 * M2C_FIELD(temp_v0, f32 *, 8));
        m2c_initial_frame.view_sp3C.value = (temp_fv0f * M2C_FIELD(temp_v0, f32 *, 0x10)) + (temp_ft0 * M2C_FIELD(temp_v0, f32 *, 0x14));
        m2c_initial_frame.view_sp40.value = (temp_fv0f * M2C_FIELD(temp_v0, f32 *, 0x1C)) + (temp_ft0 * M2C_FIELD(temp_v0, f32 *, 0x20));
        if (!(M2C_FIELD(((M2C_FIELD(&D_80075518, s16 *, 4) * 0x38) + M2C_FIELD(&D_80075518, s32 *, 0x30)), u16 *, 4) & 0x20)) {
            D_8006A5B4 = 3;
            if (D_800458F0 != 0) {
                func_80265DA4(&D_80075568);
                return;
            }
            func_802401D0(&D_8007558C, &m2c_initial_frame.view_sp28.value, 0x3F800000);
            if (M2C_FIELD(&D_8006A510, s32 *, 0x78) != 0) {
                m2c_initial_frame.view_sp28.value = M2C_FIELD(&D_8006A510, f32 *, 0x80);
                m2c_initial_frame.view_sp2C.value = M2C_FIELD(&D_8006A510, f32 *, 0x84);
                m2c_initial_frame.view_sp30.value = M2C_FIELD(&D_8006A510, f32 *, 0x88);
            }
            goto block_18;
        }
block_18:
        if (func_802A5EC4(&m2c_initial_frame.view_sp28.value, &m2c_initial_frame.view_sp38.value, &D_2179CC, 0, 0, 0) != 0) {
            func_8026B618(arg0, 1);
            func_8026B718(arg0, 0);
            temp_fv0 = *(f32 *)0x20DECC;
            D_80030E58 = 1;
            func_8022B114(3, temp_fv0, temp_fv0, 0);
            func_80265E6C();
            return;
        }
        if (func_80108B30(arg0) == 0) {
            func_80109DB4(1);
        }
        func_802A6548(&D_8007558C, 0x44);
        return;
    }
    m2c_initial_frame.view_sp18.value = m2c_initial_frame.view_sp48.value;
    m2c_initial_frame.view_sp1C.value = m2c_initial_frame.view_sp4C.value;
    m2c_initial_frame.view_sp20.value = m2c_initial_frame.view_sp50.value;
    func_80265C10(&D_80075518, 9, &D_80030EA8);
}
