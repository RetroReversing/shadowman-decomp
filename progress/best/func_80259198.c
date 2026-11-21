/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80239F50(f32 *, f32 *, void *);        /* extern */
s32 func_80239FCC(f32 *, f32 *, void *);        /* extern */
extern f32 D_80074BC0;
extern s32 D_80075568;
extern s32 D_8007BEB8;

void func_80259198(void *arg0) {
    union {
        unsigned char bytes[32];
        struct { f32 value; } view_sp10;
        struct { unsigned char pad[4]; f32 value; } view_sp14;
        struct { unsigned char pad[8]; f32 value; } view_sp18;
        struct { unsigned char pad[16]; f32 value; } view_sp20;
        struct { unsigned char pad[20]; f32 value; } view_sp24;
        struct { unsigned char pad[24]; f32 value; } view_sp28;
    } m2c_initial_frame;

             
             
             
             
    void *temp_a2;
    void *temp_s0;

    temp_a2 = (*(void **)((char *)(arg0) + 8));
    if (*(*(s32 **)((char *)(temp_a2) + 0x6C)) == 2) {
        m2c_initial_frame.view_sp10.value = (*(f32 *)((char *)(&D_80075568) + 0x24)) - (*(f32 *)((char *)(temp_a2) + 0x24));
        m2c_initial_frame.view_sp14.value = (*(f32 *)((char *)(&D_80075568) + 0x28)) - (*(f32 *)((char *)(temp_a2) + 0x28));
        temp_s0 = temp_a2 + 0x34;
        m2c_initial_frame.view_sp18.value = (*(f32 *)((char *)(&D_80075568) + 0x2C)) - (*(f32 *)((char *)(temp_a2) + 0x2C));
        func_80239FCC(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp20.value, temp_s0);
        if (m2c_initial_frame.view_sp28.value < 0.0f) {
            m2c_initial_frame.view_sp14.value = 0.0f;
            m2c_initial_frame.view_sp18.value = D_80074BC0 * *(f32 *)0x203888;
            m2c_initial_frame.view_sp10.value = 0.0f;
            func_80239F50(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp20.value, temp_s0);
            (*(f32 *)((char *)(&D_8007BEB8) + 4)) = (f32) ((*(f32 *)((char *)(&D_8007BEB8) + 4)) + m2c_initial_frame.view_sp24.value);
            (*(f32 *)((char *)(&D_8007BEB8) + 0)) = (f32) ((*(f32 *)((char *)(&D_8007BEB8) + 0)) + m2c_initial_frame.view_sp20.value);
            (*(f32 *)((char *)(&D_8007BEB8) + 8)) = (f32) ((*(f32 *)((char *)(&D_8007BEB8) + 8)) + m2c_initial_frame.view_sp28.value);
        }
    }
}
