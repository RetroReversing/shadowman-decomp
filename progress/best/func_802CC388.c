/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80113AD0();                                /* extern */
s32 func_8011BA20(s32, s32 *, s32, s32); /* extern */
s32 func_8023E724(s32 *, s32, s32 *, s32 *); /* extern */
s32 func_802978E4(s32 *, s32 *, s32);       /* extern */
extern s32 D_2186F8;
extern s32 D_8005E6E8;
extern s32 D_80072C18;
extern f32 D_800754F0;
extern s32 D_80075518;
extern f32 D_80075590;

void func_802CC388(s32 arg0) {
    union {
        unsigned char bytes[32];
        struct { s32 value; } view_sp10;
        struct { unsigned char pad[4]; s32 value; } view_sp14;
        struct { unsigned char pad[8]; s32 value; } view_sp18;
        struct { unsigned char pad[16]; s32 value; } view_sp20;
        struct { unsigned char pad[20]; f32 value; } view_sp24;
    } m2c_initial_frame;

             
             
             
                 

    if ((func_80113AD0() % (unsigned)arg0) == 0) {
        m2c_initial_frame.view_sp10.value = (*(s32 *)((char *)(&D_2186F8) + 0));
        m2c_initial_frame.view_sp14.value = (*(s32 *)((char *)(&D_2186F8) + 4));
        m2c_initial_frame.view_sp18.value = (*(s32 *)((char *)(&D_2186F8) + 8));
        do { func_8011BA20(arg0, &m2c_initial_frame.view_sp20.value, 0, 0xC); } while (0);
        func_8023E724(&D_80075518, D_80072C18, &m2c_initial_frame.view_sp20.value, &m2c_initial_frame.view_sp20.value);
        if (((D_800754F0 + (D_80075590 - m2c_initial_frame.view_sp24.value)) - *(f32 *)0x218704) > 0.0f) {
            func_802978E4(&m2c_initial_frame.view_sp20.value, &m2c_initial_frame.view_sp10.value, D_8005E6E8);
        }
    }
}
