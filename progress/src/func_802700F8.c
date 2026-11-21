void *func_80272830(f32 *, s32 *, s32, s32, s32, s32);
extern s32 D_80030C50;
extern u8 *D_8006A4FC;

void func_802700F8(f32 arg0, f32 arg1, f32 arg2, u8 arg3, u8 arg4) {
    f32 sp18[3];
    s32 sp28[3];
    s32 temp_s1;
    u8 *p;
    u8 *temp_v0;

    sp18[0] = *(f32 *)(D_8006A4FC + 0x24) + arg0;
    p = D_8006A4FC;
    sp18[1] = *(f32 *)(p + 0x28) + arg1;
    temp_s1 = D_80030C50;
    sp18[2] = *(f32 *)(p + 0x2C) + arg2;
    D_80030C50 = 0;
    sp28[0] = 0;
    sp28[1] = 0;
    sp28[2] = 0;
    temp_v0 = func_80272830(sp18, sp28, arg3, arg4, 0, 0);
    if (temp_v0 != 0) {
        *(u8 **)(temp_v0 + 0x110) = D_8006A4FC;
    }
    D_80030C50 = temp_s1;
}
