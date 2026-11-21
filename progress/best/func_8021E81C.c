/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8021E744();
s32 func_8021E954();
extern char D_80056A00[];
extern s32 D_80058E08;
extern s32 D_80058E10;

void func_8021E81C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u32 *arg5) {
    u32 temp_v0;
    s32 *__base_D_80058E10;
    u32 temp_v1;
    void *temp_s0;

    if (D_80058E08 < 0x180) {
        temp_s0 = (D_80058E08 * 0x18) + D_80056A00;
        func_8021E744(arg5);
        temp_v1 = *arg5;
        temp_v0 = temp_v1 >> 0x10;
        if (!(temp_v0 & 1)) {
            *arg5 = (temp_v1 & 0xFF80FFFF) | (((temp_v0 & 0x7F) | 1) << 0x10);
            (*__base_D_80058E10) += 8;
            __base_D_80058E10 = &D_80058E10;
        }
        (*(s8 *)((char *)(temp_s0) + 0)) = 1;
        (*(s32 *)((char *)(temp_s0) + 4)) = arg0;
        (*(s32 *)((char *)(temp_s0) + 8)) = arg1;
        (*(s32 *)((char *)(temp_s0) + 0xC)) = arg2;
        (*(s8 *)((char *)(temp_s0) + 0x11)) = (s8) ((arg4 >> 1) & 1);
        if (arg1 != 0) {
            func_8021E954();
            return;
        }
        if (arg2 != 0) {
            (*__base_D_80058E10) += 2;
        }
        (*__base_D_80058E10) = (*__base_D_80058E10) + (((s32) ((arg3 & 0xFF) - 2) / 2) + (arg3 & 1)) + 1;
        (*(s8 *)((char *)(temp_s0) + 0x10)) = arg3;
        D_80058E08 += 1;
    }
}
