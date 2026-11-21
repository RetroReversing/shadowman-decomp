/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8010E8F0(s32 *, void *, s32);          /* extern */
s32 func_8023E724(s32, s32, s32 *, s32 *);  /* extern */
extern void *D_8007AFF8;
extern void *D_8007B0C0;

void func_80278DA0(void) {
void *__repair_cached_pointer = D_8007AFF8;

    void **__base_D_8007B0C0;
    union {
        unsigned char bytes[32];
        struct { s32 value; } view_sp10;
        struct { unsigned char pad[4]; f32 value; } view_sp14;
        struct { unsigned char pad[8]; s32 value; } view_sp18;
        struct { unsigned char pad[16]; s32 value; } view_sp20;
        struct { unsigned char pad[20]; s32 value; } view_sp24;
        struct { unsigned char pad[24]; s32 value; } view_sp28;
    } m2c_initial_frame;

             
             
             
             

    m2c_initial_frame.view_sp10.value = 0;
    m2c_initial_frame.view_sp18.value = 0;
    m2c_initial_frame.view_sp14.value = *(f32 *)0x214378;
    func_8023E724((*(s32 *)((char *)(__repair_cached_pointer) + 0x10C)), 0x1B, &m2c_initial_frame.view_sp10.value, &m2c_initial_frame.view_sp20.value);
    __base_D_8007B0C0 = &D_8007B0C0;
    if ((*(u8 *)((char *)(D_8007B0C0) + 0x66)) == 0) {
        if (func_8010E8F0(&m2c_initial_frame.view_sp20.value, (*__base_D_8007B0C0) + 0x144, 0x41F00001) & 0xFF) {
            (*(u8 *)((char *)(D_8007B0C0) + 0x66)) = 1U;
        }
    }
    (*(s32 *)((char *)(D_8007B0C0) + 0x144)) = m2c_initial_frame.view_sp20.value;
    (*(s32 *)((char *)(D_8007B0C0) + 0x14C)) = m2c_initial_frame.view_sp28.value;
    (*(s32 *)((char *)(D_8007B0C0) + 0x148)) = m2c_initial_frame.view_sp24.value;
}
