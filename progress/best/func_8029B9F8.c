/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void *func_80296BC0();
extern char D_80036D30[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x20, 0x24, 0x28, 0x2c], gap at: 0x14. */
void *func_8029B9F8(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, f32 arg6, s32 arg7) {
    register f32 temp_fv0f;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg0, arg1, D_80036D30);
    if (temp_v0 != NULL) {
        (*(s32 *)((char *)(temp_v0) + 0x6C)) = 7;
        (*(f32 *)((char *)(temp_v0) + 0x5C)) = arg2;
        (*(f32 *)((char *)(temp_v0) + 0xC)) = arg4;
        temp_fv0f = *(f32 *)0x215BB0;
        (*(f32 *)((char *)(temp_v0) + 0x58)) = arg6;
        (*(s8 *)((char *)(temp_v0) + 0x72)) = (s8) arg7;
        (*(f32 *)((char *)(temp_v0) + 0x54)) = temp_fv0f;
        (*(f32 *)((char *)(temp_v0) + 0x50)) = temp_fv0f;
        (*(f32 *)((char *)(temp_v0) + 0x4C)) = arg4;
        (*(f32 *)((char *)(temp_v0) + 0x4C)) = (f32) *(f32 *)0x215BB4;
        (*(f32 *)((char *)(temp_v0) + 0x54)) = arg3;
        (*(f32 *)((char *)(temp_v0) + 0x50)) = arg3;
        (*(s32 *)((char *)(temp_v0) + 0x6C)) = arg5;
    }
    return temp_v0;
}
