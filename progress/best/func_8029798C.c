/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8021E990(f32, f32, u8, s32, f32, f32, f32, f32, s32, s32, s32, s32, s32); /* extern */
s32 func_80296738(s32);                         /* extern */
s32 func_80297748(void *, s32);                 /* extern */
s32 func_80297AF4(void *);                      /* extern */
extern s32 D_8002C1B0;
extern s32 D_80036B28;
extern s32 D_8007DB78;

void func_8029798C(void *arg0) {
    s32 *__base_D_8007DB78;
f32 __repair_cmp_l; f32 __repair_cmp_r;

    f32 temp_fv0f;
    register f32 temp_fv1;
    register s32 temp_v0;

    __base_D_8007DB78 = &D_8007DB78;
    (*(f32 *)((char *)(arg0) + 0)) = (f32) ((*(f32 *)((char *)(arg0) + 0)) + ((*(f32 *)((char *)(arg0) + 0x18)) * (*(f32 *)((char *)(__base_D_8007DB78) + 0x14))));
    (*(f32 *)((char *)(arg0) + 4)) = (f32) ((*(f32 *)((char *)(arg0) + 4)) + ((*(f32 *)((char *)(arg0) + 0x1C)) * (*(f32 *)((char *)(__base_D_8007DB78) + 0x14))));
    (*(f32 *)((char *)(arg0) + 0x4C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x4C)) + ((*(f32 *)((char *)(__base_D_8007DB78) + 0x14)) * *(f32 *)0x215924));
    (*(f32 *)((char *)(arg0) + 8)) = (f32) ((*(f32 *)((char *)(arg0) + 8)) + ((*(f32 *)((char *)(arg0) + 0x20)) * (*(f32 *)((char *)(__base_D_8007DB78) + 0x14))));
    temp_fv1 = *(f32 *)0x21592C;
    (*(f32 *)((char *)(arg0) + 0x1C)) = (f32) ((*(f32 *)((char *)(arg0) + 0x1C)) + ((*(f32 *)((char *)(__base_D_8007DB78) + 0x14)) * *(f32 *)0x215928));
    if (temp_fv1 < (*(f32 *)((char *)(arg0) + 0x4C))) {
        (*(f32 *)((char *)(arg0) + 0x4C)) = temp_fv1;
    }
    func_80297748(arg0, (*(s32 *)((char *)(arg0) + 0x5C)));
    __repair_cmp_r = (*(f32 *)((char *)(arg0) + 4));
__repair_cmp_l = (*(f32 *)((char *)(arg0) + 0x34));
if (__repair_cmp_l < __repair_cmp_r) {
        (*(f32 *)((char *)(arg0) + 0x50)) = 0.0f;
        func_80297AF4(arg0);
        (*(f32 *)((char *)(arg0) + 0x54)) = 0.0f;
    }
    temp_v0 = func_80296738(0x1B);
    D_8002C1B0 = temp_v0;
    if (temp_v0 != 0) {
        temp_fv0f = *(f32 *)0x215930;
        func_8021E990((*(f32 *)((char *)(arg0) + 0)), (*(f32 *)((char *)(arg0) + 4)), (*(u8 *)((char *)(&D_80036B28) + 0)), temp_v0, (*(f32 *)((char *)(arg0) + 8)), temp_fv0f, temp_fv0f, (*(f32 *)((char *)(arg0) + 0x4C)), (s32) (*(u8 *)((char *)(&D_80036B28) + 0)), (s32) (*(u8 *)((char *)(&D_80036B28) + 1)), (s32) (*(u8 *)((char *)(&D_80036B28) + 2)), 0xFF, temp_v0);
    }
}
