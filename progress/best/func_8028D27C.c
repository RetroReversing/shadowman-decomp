/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023A0DC(s32, s32, s32, f32 *, void *); /* extern */
s32 func_8028D3A4(f32 *);     /* extern */
s32 func_802A5EC4(f32 *, f32 *, s32 *, s32, s32, s32); /* extern */
extern s32 D_217BEC;
extern s32 D_217C4C;
extern void *D_8006A4FC;
extern s32 D_80075568;
extern void *D_8007AFF8;

void func_8028D27C(void) {
void *__repair_cached_pointer = D_8007AFF8;

    f32 sp18;
    f32 sp1C;
    f32 sp20;
    s32 sp28;
    f32 sp40;
    s32 sp30;
    f32 sp38;
    f32 sp3C;
    f32 sp2C;
    f32 temp_fs0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;

    temp_fs0 = *(f32 *)0x215418;
    sp28 = 0;
    sp30 = 0;
    sp2C = (*(f32 *)((char *)(D_8006A4FC) + 0x1C)) - (unsigned)temp_fs0;
    func_8023A0DC(sp28, sp28, 0x437A0000, &sp18, D_8006A4FC + 0x34);
    sp18 += (*(f32 *)((char *)(D_8006A4FC) + 0x24));
    temp_fv1 = *(f32 *)0x21541C;
    sp1C += (*(f32 *)((char *)(D_8006A4FC) + 0x28));
    sp20 += (*(f32 *)((char *)(D_8006A4FC) + 0x2C));
    temp_fv1f = (*(f32 *)((char *)(&D_80075568) + 0x24)) - (*(f32 *)((char *)(D_8006A4FC) + 0x24));
    sp38 = temp_fv1f;
    temp_fv0f = (*(f32 *)((char *)(&D_80075568) + 0x28)) - ((*(f32 *)((char *)(D_8006A4FC) + 0x28)) + temp_fs0);
    sp3C = temp_fv0f;
    temp_fv1_2 = (*(f32 *)((char *)(&D_80075568) + 0x2C)) - (*(f32 *)((char *)(D_8006A4FC) + 0x2C));
    sp38 = temp_fv1f + ((*(f32 *)((char *)(&D_80075568) + 0xC)) * temp_fv1);
    sp3C = temp_fv0f + ((*(f32 *)((char *)(&D_80075568) + 0x10)) * temp_fv1);
    sp40 = temp_fv1_2;
    sp40 = temp_fv1_2 + ((*(f32 *)((char *)(&D_80075568) + 0x14)) * temp_fv1);
    if ((*(u16 *)((char *)(__repair_cached_pointer) + 0x98)) == 0) {
        func_8028D3A4(&sp18);
        return;
    }
    func_802A5EC4(&sp18, &sp38, &D_217C4C, 0, 1, (s32) (*(u8 *)((char *)(D_8007AFF8) + 0x40)));
}
