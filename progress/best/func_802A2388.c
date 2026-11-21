/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8022DDD0(s32, s32, s32, s32, s32); /* extern */
s32 func_8026E9E0();                                /* extern */
s32 func_802A23F0(s32);                     /* extern */
extern s8 D_80030E34;
extern s32 D_8007BAB8;

s32 func_802A2388(s32 arg0, const void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    (*(s32 *)((char *)(&D_8007BAB8) + 0)) = arg3;
    (*(s32 *)((char *)(&D_8007BAB8) + 4)) = arg0;
    (*(s32 *)((char *)(&D_8007BAB8) + 8)) = (s32) (*(const s32 *)((char *)(arg1) + 0));
    (*(s32 *)((char *)(&D_8007BAB8) + 0xC)) = (s32) (*(const s32 *)((char *)(arg1) + 4));
    (*(s32 *)((char *)(&D_8007BAB8) + 0x10)) = (s32) (*(const s32 *)((char *)(arg1) + 8));
    (*(s32 *)((char *)(&D_8007BAB8) + 0x18)) = 0;
    (*(s32 *)((char *)(&D_8007BAB8) + 0x14)) = arg2;
    (*(s32 *)((char *)(&D_8007BAB8) + 0x1C)) = (s32) D_80030E34;
    if (func_8026E9E0() != 0) {
        func_802A23F0(4);
    } else {
        do { func_8022DDD0(0, arg4, 0, 0, 0); } while (0);
        D_80030E34 = 7;
        return D_80030E34;
    }
}
