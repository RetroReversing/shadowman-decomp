/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80113AD0();                                /* extern */
s32 func_80236E10();                            /* extern */
extern u16 D_80052776;

void func_80236DB8(void *arg0) {
    u16 temp_v1;

    (*(u16 *)((char *)(arg0) + 0x42)) = temp_v1;
    temp_v1 = (*(u16 *)((char *)(arg0) + 0x42)) - D_80052776;
    if ((temp_v1 << 0x10) <= 0) {
        (*(s16 *)((char *)(arg0) + 0x40)) = (s16) ((*(s16 *)((char *)(arg0) + 0x40)) == 0);
    }
    if ((*(s16 *)((char *)(arg0) + 0x40)) == 0) {
        func_80236E10();
        return;
    }
    (*(f32 *)((char *)(arg0) + 0x18)) = (f32) (*(f32 *)((char *)(arg0) + 0x4C));
    (*(u16 *)((char *)(arg0) + 0x42)) = (u16) ((*(u16 *)((char *)(arg0) + 0x42)) + (func_80113AD0() & 7));
}
