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

M2C_UNK func_80234CDC();                            /* extern */
M2C_UNK func_80234CE8(M2C_UNK *, f32);              /* extern */
M2C_UNK func_8023641C(M2C_UNK *, f32);              /* extern */
M2C_UNK func_80239FCC(f32 *, f32 *, void *);        /* extern */
extern M2C_UNK D_8002DBD0;
extern M2C_UNK D_80044EB0;
extern s32 D_80044F60;
extern M2C_UNK D_800453D8;
extern s32 D_80072C18;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern s32 D_800755F8;
extern f32 D_8007BDDC;
extern M2C_UNK D_8007BE20;
extern s32 D_8007BED4;

void func_802BB408(void) {
    union {
        unsigned char bytes[48];
        struct { f32 value; } view_sp10;
        struct { unsigned char pad[4]; f32 value; } view_sp14;
        struct { unsigned char pad[8]; f32 value; } view_sp18;
        struct { unsigned char pad[16]; f32 value; } view_sp20;
        struct { unsigned char pad[20]; f32 value; } view_sp24;
        struct { unsigned char pad[24]; f32 value; } view_sp28;
        struct { unsigned char pad[32]; f32 value; } view_sp30;
        struct { unsigned char pad[36]; f32 value; } view_sp34;
        struct { unsigned char pad[40]; f32 value; } view_sp38;
    } m2c_initial_frame;

             
             
             
             
             
             
             
    f32 temp_a1_2;
    f32 temp_ft0;
    f32 temp_fv0f;
    s32 temp_v0;
    s32 temp_v1;
    u16 temp_a1;
    void *temp_v0_2;

    temp_a1 = M2C_FIELD(((M2C_FIELD(&D_80075518, s16 *, 4) * 0x38) + M2C_FIELD(&D_80075518, s32 *, 0x30)), u16 *, 0x34);
    M2C_FIELD(&D_80044EB0, s32 *, 0) = (s32) (temp_a1 & 1);
    M2C_FIELD(&D_80044EB0, s32 *, 0x58) = (s32) (temp_a1 & 2);
    M2C_FIELD(&D_80044EB0, s32 *, 0xB0) = (s32) (temp_a1 & 4);
    if ((M2C_FIELD(&D_80075518, s16 *, 0x22) == 0x40) || (M2C_FIELD(&D_80075518, s16 *, 0x22) == 0x4A) || (M2C_FIELD(&D_80075518, s16 *, 0x22) == 0x49)) {
        D_80044F60 = 0;
    }
    if ((u32) ((u16) M2C_FIELD(&D_80075518, s16 *, 0x22) - 0x17) < 3U) {
        D_80044F60 = 0;
    }
    temp_v1 = temp_a1 & 8;
    M2C_FIELD(&D_80044EB0, s32 *, 0x160) = (s32) (temp_a1 & 0x10);
    M2C_FIELD(&D_80044EB0, s32 *, 0x1B8) = (s32) (temp_a1 & 0x20);
    temp_v0 = temp_a1 & 0x40;
    M2C_FIELD(&D_80044EB0, s32 *, 0x210) = temp_v0;
    M2C_FIELD(&D_80044EB0, s32 *, 0x268) = temp_v0;
    M2C_FIELD(&D_80044EB0, s32 *, 0x2C0) = temp_v0;
    M2C_FIELD(&D_80044EB0, s32 *, 0x318) = temp_v0;
    M2C_FIELD(&D_80044EB0, s32 *, 0x370) = (s32) (temp_a1 & 0x100);
    M2C_FIELD(&D_80044EB0, s32 *, 0x108) = temp_v1;
    M2C_FIELD(&D_80044EB0, s32 *, 0x420) = (s32) (temp_a1 & 0x400);
    M2C_FIELD(&D_80044EB0, s32 *, 0x478) = temp_v1;
    M2C_FIELD(&D_80044EB0, s32 *, 0x4D0) = (s32) (temp_a1 & 0x800);
    if ((u32) ((u16) M2C_FIELD(&D_80075518, s16 *, 4) - 0x17) < 3U) {
        M2C_FIELD(&D_80044EB0, s32 *, 0x478) = 0;
    }
    D_8007BED4 = 0;
    if (D_800755F8 == 0) {
        if (!(M2C_FIELD(&D_80075518, u16 *, 0x1C) & 4)) {
            M2C_FIELD(&D_80044EB0, s32 *, 0x3C8) = 0;
        } else {
            goto block_12;
        }
    } else {
block_12:
        M2C_FIELD(&D_80044EB0, s32 *, 0x3C8) = 1;
        temp_v0_2 = (D_80072C18 << 6) + M2C_FIELD(&D_80075518, s32 *, 0x40);
        m2c_initial_frame.view_sp10.value = M2C_FIELD(temp_v0_2, f32 *, 0x24) - M2C_FIELD(&D_80075568, f32 *, 0x24);
        m2c_initial_frame.view_sp14.value = M2C_FIELD(temp_v0_2, f32 *, 0x28) - M2C_FIELD(&D_80075568, f32 *, 0x28);
        m2c_initial_frame.view_sp18.value = M2C_FIELD(temp_v0_2, f32 *, 0x2C) - M2C_FIELD(&D_80075568, f32 *, 0x2C);
        func_80239FCC(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp20.value, &D_80075568 + 0x34);
        M2C_FIELD(&D_80044EB0, f32 *, 0x3CC) = m2c_initial_frame.view_sp20.value;
        M2C_FIELD(&D_80044EB0, f32 *, 0x3D0) = m2c_initial_frame.view_sp24.value;
        M2C_FIELD(&D_80044EB0, f32 *, 0x3D4) = m2c_initial_frame.view_sp28.value;
    }
    if ((M2C_FIELD(&D_8002DBD0, s32 *, 8) != 0) && (M2C_FIELD(&D_8002DBD0, s32 *, 0x18) != 0)) {
        M2C_FIELD(&D_80044EB0, s32 *, 0xB0) = 0;
        M2C_FIELD(&D_80044EB0, s32 *, 0x370) = 0;
    }
    func_80234CDC();
    temp_fv0f = M2C_FIELD(&D_800453D8, f32 *, 0x1C) * *(f32 *)0x217FA0;
    temp_ft0 = temp_fv0f * temp_fv0f;
    m2c_initial_frame.view_sp30.value = temp_fv0f;
    m2c_initial_frame.view_sp34.value = temp_fv0f;
    m2c_initial_frame.view_sp38.value = temp_fv0f;
    temp_a1_2 = sqrtf((2.0f * temp_ft0) + temp_ft0) + *(f32 *)0x217FA4;
    M2C_FIELD(&D_8007BE20, f32 *, 0) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x24) + temp_fv0f);
    M2C_FIELD(&D_8007BE20, f32 *, 4) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x28) + temp_fv0f);
    M2C_FIELD(&D_8007BE20, f32 *, 8) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x2C) + temp_fv0f);
    D_8007BDDC = temp_a1_2;
    func_80234CE8(&D_8007BE20, temp_a1_2);
    func_8023641C(&D_8007BE20, D_8007BDDC);
    M2C_FIELD(&D_800453D8, f32 *, 4) = (f32) M2C_FIELD(&D_80075568, f32 *, 0x24);
    M2C_FIELD(&D_800453D8, f32 *, 8) = (f32) M2C_FIELD(&D_80075568, f32 *, 0x28);
    M2C_FIELD(&D_800453D8, f32 *, 0xC) = (f32) M2C_FIELD(&D_80075568, f32 *, 0x2C);
    M2C_FIELD(&D_800453D8, f32 *, 0x10) = (f32) M2C_FIELD(&D_80075568, f32 *, 0xC);
    M2C_FIELD(&D_800453D8, f32 *, 0x14) = (f32) M2C_FIELD(&D_80075568, f32 *, 0x10);
    M2C_FIELD(&D_800453D8, f32 *, 0x18) = (f32) M2C_FIELD(&D_80075568, f32 *, 0x14);
}
