/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void *func_802390CC();                              /* extern */

void *func_80239174(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    register void *temp_v0;

    temp_v0 = func_802390CC();
    if (temp_v0 != NULL) {
        (*(void **)((char *)(temp_v0) + 0)) = (void *) *arg0;
        (*(void ***)((char *)(temp_v0) + 4)) = arg0;
        (*(void **)((char *)(*arg0) + 4)) = temp_v0;
        *arg0 = temp_v0;
        (*(s16 *)((char *)(temp_v0) + 0x14)) = arg2;
        (*(s32 *)((char *)(temp_v0) + 8)) = arg1;
        (*(s32 *)((char *)(temp_v0) + 0x10)) = arg3;
        (*(s16 *)((char *)(temp_v0) + 0x16)) = 0;
        (*(s32 *)((char *)(temp_v0) + 0x18)) = arg4;
    }
    return temp_v0;
}
