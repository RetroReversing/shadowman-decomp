/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 func_8022EBE8(f32);                             /* extern */
f32 func_8022EC3C(f32);                             /* extern */
void *func_80296BC0(s32, s32 *);            /* extern */
extern s32 D_80036BF0;

void *func_80297834(void) {
    f32 temp_fs0;
    void *temp_v0;

    temp_v0 = func_80296BC0(0, &D_80036BF0);
    if (temp_v0 != NULL) {
        temp_fs0 = *(f32 *)0x215914;
        (*(f32 *)((char *)(temp_v0) + 4)) = func_8022EC3C(temp_fs0);
        (*(f32 *)((char *)(temp_v0) + 0)) = func_8022EBE8(temp_fs0);
        (*(f32 *)((char *)(temp_v0) + 8)) = func_8022EBE8(temp_fs0);
        (*(f32 *)((char *)(temp_v0) + 0x24)) = func_8022EBE8(temp_fs0);
        (*(f32 *)((char *)(temp_v0) + 0x28)) = func_8022EBE8(temp_fs0);
        (*(f32 *)((char *)(temp_v0) + 0x2C)) = func_8022EBE8(temp_fs0);
        (*(f32 *)((char *)(temp_v0) + 0x58)) = temp_fs0;
        (*(s8 *)((char *)(temp_v0) + 0x73)) = 0;
        (*(f32 *)((char *)(temp_v0) + 0x4C)) = (f32) *(f32 *)0x215918;
        (*(s32 *)((char *)(temp_v0) + 0x6C)) = 7;
    }
    return temp_v0;
}
