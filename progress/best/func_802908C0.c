/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023A0DC(s32, s32, f32, f32 *, void *); /* extern */
s32 func_80270E0C(f32);                         /* extern */
s32 func_80276EC0(f32, f32, s32, s32); /* extern */
extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_802908C0(f32 arg0) {
    union {
        unsigned char bytes[16];
        struct { f32 value; } view_sp18;
        struct { unsigned char pad[8]; f32 value; } view_sp20;
    } m2c_initial_frame;

             

    (*(f32 *)((char *)(D_8006A4FC) + 0xC)) = m2c_initial_frame.view_sp18.value;
    func_8023A0DC(0, 0, arg0, &m2c_initial_frame.view_sp18.value, D_8006A4FC + 0x34);
    (*(s32 *)((char *)(D_8006A4FC) + 0x14)) = m2c_initial_frame.view_sp20.value;
    do { func_80276EC0(m2c_initial_frame.view_sp18.value, (*(f32 *)((char *)(D_8006A4FC) + 0x10)), m2c_initial_frame.view_sp20.value, 0x10); } while (0);
    if ((*(u8 *)((char *)(D_8007AFF8) + 0x39)) != 0) {
        func_80270E0C(*(f32 *)0x2156B0);
    }
}
