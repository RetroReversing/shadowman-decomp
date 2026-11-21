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

M2C_UNK func_80239C38(f32 *, f32 *, void *, f32);   /* extern */
M2C_UNK func_802C8FC4();                            /* extern */
extern M2C_UNK D_24D44C;
extern s32 D_80044E90;
extern M2C_UNK D_800453D8;
extern s32 D_800458C0;
extern f32 D_80074BC0;
extern M2C_UNK D_80075568;
extern M2C_UNK D_8007BD90;
extern void *D_8007BE7C;
extern f32 D_8007BED0;

void func_802C8DBC(void) {
    union {
        unsigned char bytes[96];
        struct { f32 value; } view_sp10;
        struct { unsigned char pad[4]; f32 value; } view_sp14;
        struct { unsigned char pad[8]; f32 value; } view_sp18;
        struct { unsigned char pad[16]; f32 value; } view_sp20;
        struct { unsigned char pad[20]; f32 value; } view_sp24;
        struct { unsigned char pad[24]; f32 value; } view_sp28;
        struct { unsigned char pad[32]; f32 value; } view_sp30;
        struct { unsigned char pad[36]; f32 value; } view_sp34;
        struct { unsigned char pad[40]; f32 value; } view_sp38;
        struct { unsigned char pad[48]; f32 value; } view_sp40;
        struct { unsigned char pad[52]; f32 value; } view_sp44;
        struct { unsigned char pad[56]; f32 value; } view_sp48;
        struct { unsigned char pad[60]; f32 value; } view_sp4C;
        struct { unsigned char pad[64]; f32 value; } view_sp50;
        struct { unsigned char pad[68]; f32 value; } view_sp54;
    } m2c_initial_frame;

             
             
             
             
             
             
             
             
    f32 temp_a3;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    void *temp_a1;
    void *temp_v0;

    m2c_initial_frame.view_sp30.value = 0.0f;
    m2c_initial_frame.view_sp34.value = 0.0f;
    D_80044E90 = 1;
    m2c_initial_frame.view_sp38.value = M2C_FIELD(&D_8007BD90, f32 *, 4);
    m2c_initial_frame.view_sp20.value = m2c_initial_frame.view_sp30.value;
    m2c_initial_frame.view_sp24.value = m2c_initial_frame.view_sp34.value;
    m2c_initial_frame.view_sp28.value = m2c_initial_frame.view_sp38.value;
    temp_a1 = M2C_FIELD(M2C_FIELD(D_8007BE7C, void **, 0x88), void **, 0xC);
    if (M2C_FIELD(temp_a1, s32 *, 0x1C) == &D_24D44C) {
        M2C_FIELD(&D_80075568, f32 *, 0x1C) = (f32) (M2C_FIELD(&D_80075568, f32 *, 0x1C) + (M2C_FIELD(temp_a1, f32 *, 0x10) * D_80074BC0));
        temp_a3 = M2C_FIELD(D_8007BE7C, f32 *, 0x18);
        m2c_initial_frame.view_sp30.value = temp_a3;
        m2c_initial_frame.view_sp34.value = M2C_FIELD(D_8007BE7C, f32 *, 0x1C);
        m2c_initial_frame.view_sp38.value = M2C_FIELD(D_8007BE7C, f32 *, 0x20);
        m2c_initial_frame.view_sp30.value += M2C_FIELD(temp_a1, f32 *, 0xC) * D_80074BC0;
        m2c_initial_frame.view_sp34.value += M2C_FIELD(temp_a1, f32 *, 0x10) * D_80074BC0;
        D_8007BED0 += M2C_FIELD(temp_a1, f32 *, 0x10) * D_80074BC0;
        m2c_initial_frame.view_sp38.value += M2C_FIELD(temp_a1, f32 *, 0x14) * D_80074BC0;
        func_80239C38(&m2c_initial_frame.view_sp30.value, &m2c_initial_frame.view_sp40.value, D_8007BE7C, temp_a3);
        m2c_initial_frame.view_sp28.value = M2C_FIELD(&D_8007BD90, f32 *, 4);
        m2c_initial_frame.view_sp10.value = (m2c_initial_frame.view_sp20.value * m2c_initial_frame.view_sp40.value) + (m2c_initial_frame.view_sp24.value * m2c_initial_frame.view_sp44.value) + (M2C_FIELD(&D_8007BD90, f32 *, 4) * m2c_initial_frame.view_sp48.value);
        M2C_FIELD(&m2c_initial_frame.view_sp10.value, f32 *, 4) = (f32) ((m2c_initial_frame.view_sp20.value * m2c_initial_frame.view_sp4C.value) + (m2c_initial_frame.view_sp24.value * m2c_initial_frame.view_sp50.value) + (M2C_FIELD(&D_8007BD90, f32 *, 4) * m2c_initial_frame.view_sp54.value));
        func_802C8FC4();
        return;
    }
    temp_v0 = D_8007BE7C + 0x34;
    m2c_initial_frame.view_sp10.value = (m2c_initial_frame.view_sp20.value * M2C_FIELD(D_8007BE7C, f32 *, 0x34)) + (m2c_initial_frame.view_sp24.value * M2C_FIELD(temp_v0, f32 *, 4)) + (m2c_initial_frame.view_sp28.value * M2C_FIELD(temp_v0, f32 *, 8));
    M2C_FIELD(&m2c_initial_frame.view_sp10.value, f32 *, 4) = (f32) ((m2c_initial_frame.view_sp20.value * M2C_FIELD(temp_v0, f32 *, 0xC)) + (m2c_initial_frame.view_sp24.value * M2C_FIELD(temp_v0, f32 *, 0x10)) + (m2c_initial_frame.view_sp28.value * M2C_FIELD(temp_v0, f32 *, 0x14)));
    M2C_FIELD(&m2c_initial_frame.view_sp10.value, f32 *, 8) = (f32) ((m2c_initial_frame.view_sp20.value * M2C_FIELD(temp_v0, f32 *, 0x18)) + (m2c_initial_frame.view_sp24.value * M2C_FIELD(temp_v0, f32 *, 0x1C)) + (m2c_initial_frame.view_sp28.value * M2C_FIELD(temp_v0, f32 *, 0x20)));
    temp_fv0f = M2C_FIELD(D_8007BE7C, f32 *, 0x24) + m2c_initial_frame.view_sp10.value;
    M2C_FIELD(&D_80075568, f32 *, 0x24) = temp_fv0f;
    M2C_FIELD(&D_800453D8, f32 *, 0x48) = temp_fv0f;
    temp_fv0f_2 = (M2C_FIELD(D_8007BE7C, f32 *, 0x28) + m2c_initial_frame.view_sp14.value) - (f32) D_800458C0;
    M2C_FIELD(&D_80075568, s32 *, 0x10) = 0;
    M2C_FIELD(&D_80075568, f32 *, 0x28) = temp_fv0f_2;
    M2C_FIELD(&D_800453D8, f32 *, 0x4C) = temp_fv0f_2;
    temp_fv0 = M2C_FIELD(D_8007BE7C, f32 *, 0x2C) + m2c_initial_frame.view_sp18.value;
    M2C_FIELD(&D_80075568, f32 *, 0x2C) = temp_fv0;
    M2C_FIELD(&D_800453D8, f32 *, 0x50) = temp_fv0;
}
