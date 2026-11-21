/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80234BEC(f32 *, f32 *, f32 *);         /* extern */
extern s32 D_80073318;
extern s32 D_80073350;
extern s32 D_80073364;
extern f32 D_80074BC0;
extern s32 D_80075568;
extern s32 D_8007BEB8;

void func_802477A0(void) {
    f32 *__base_D_80074BC0;
    s32 *__base_D_80073364;
    union {
        unsigned char bytes[52];
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

             
             
             
             
             
             
             
    f32 temp_ft0f;

    __base_D_80073364 = &D_80073364;
    if ((*__base_D_80073364) != 0) {
        temp_ft0f = *(f32 *)0x202C74;
        m2c_initial_frame.view_sp30.value = (*(f32 *)((char *)(&D_80075568) + 0x24)) - (*(f32 *)((char *)(&D_80073318) + 0));
        m2c_initial_frame.view_sp34.value = (*(f32 *)((char *)(&D_80075568) + 0x28)) - (*(f32 *)((char *)(&D_80073318) + 4));
        m2c_initial_frame.view_sp10.value = (*(f32 *)((char *)(&D_80073350) + 0)) * temp_ft0f;
        m2c_initial_frame.view_sp38.value = (*(f32 *)((char *)(&D_80075568) + 0x2C)) - (*(f32 *)((char *)(&D_80073318) + 8));
        m2c_initial_frame.view_sp14.value = (*(f32 *)((char *)(&D_80073350) + 4)) * temp_ft0f;
        m2c_initial_frame.view_sp18.value = (*(f32 *)((char *)(&D_80073350) + 8)) * temp_ft0f;
        __base_D_80074BC0 = &D_80074BC0;
        (*(f32 *)((char *)(&D_80075568) + 0x18)) = (f32) ((*(f32 *)((char *)(&D_80075568) + 0x18)) + ((*(f32 *)((char *)(&D_80073350) + 0)) * (*__base_D_80074BC0)));
        (*(f32 *)((char *)(&D_80075568) + 0x20)) = (f32) ((*(f32 *)((char *)(&D_80075568) + 0x20)) + ((*(f32 *)((char *)(&D_80073350) + 8)) * (*__base_D_80074BC0)));
        (*(f32 *)((char *)(&D_80075568) + 0x1C)) = (f32) ((*(f32 *)((char *)(&D_80075568) + 0x1C)) + ((*(f32 *)((char *)(&D_80073350) + 4)) * (*__base_D_80074BC0)));
        /*__repair_pointer_balance*/if ((unsigned long)__base_D_80074BC0 & 0x100) {
func_80234BEC(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp30.value, &m2c_initial_frame.view_sp20.value);
} else {
func_80234BEC(&m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp30.value, &m2c_initial_frame.view_sp20.value);
}
        (*__base_D_80073364) = 0;
        (*(f32 *)((char *)(&D_8007BEB8) + 0)) = (f32) ((*__base_D_80074BC0) * m2c_initial_frame.view_sp20.value);
        (*(f32 *)((char *)(&D_8007BEB8) + 4)) = (f32) ((*__base_D_80074BC0) * m2c_initial_frame.view_sp24.value);
        (*(f32 *)((char *)(&D_8007BEB8) + 8)) = (f32) ((*__base_D_80074BC0) * m2c_initial_frame.view_sp28.value);
    }
}
