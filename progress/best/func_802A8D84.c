/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8021E990(f32, f32, s32 *, u8, s32, s32, s32); /* extern */
s32 func_80296738(s32);                             /* extern */
s32 func_802A8E2C(s32 *, u8, s32 *);            /* extern */
extern s32 D_8002C1B0;
extern s32 D_800619F0;

void func_802A8D84(void *arg0) {
    s32 *__base_D_800619F0;
    s32 *__base_D_8002C1B0;
    f32 temp_fv0;
    f32 temp_fv0f;
    s32 temp_v0;

    temp_v0 = func_80296738((*(s32 *)((char *)(arg0) + 0x40)));
    __base_D_8002C1B0 = &D_8002C1B0;
    (*__base_D_8002C1B0) = temp_v0;
    if (temp_v0 != 0) {
        temp_fv0 = (*(f32 *)((char *)(arg0) + 0x34));
        temp_fv0f = *(f32 *)0x2163C4;
        if (!(temp_fv0f <= temp_fv0)) {
            func_802A8E2C(__base_D_8002C1B0, (*(u8 *)((char *)(__base_D_800619F0) + 2)), __base_D_8002C1B0);
            __base_D_800619F0 = &D_800619F0;
            return;
        }
        func_8021E990((*(f32 *)((char *)(arg0) + 0x54)), (*(f32 *)((char *)(arg0) + 0x58)), __base_D_8002C1B0, (*(u8 *)((char *)(__base_D_800619F0) + 2)), (*(s32 *)((char *)(arg0) + 0x5C)), (*(s32 *)((char *)(arg0) + 0x20)), (*__base_D_8002C1B0) + (((s32) (temp_fv0 - temp_fv0f) | 0x80000000) * 0x10));
    }
}
