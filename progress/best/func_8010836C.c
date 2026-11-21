/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 alSndpPlay();
s32 alSndpSetFXMix();
s32 alSndpSetPan();
s32 alSndpSetVol();
s16 func_8010F020();
s32 func_8010FD10();
s32 func_8010FD60();
extern char D_8004DB48[];
extern f32 D_8004DF10;

s32 func_8010836C(s32 arg0, void *arg1, s32 arg2, s8 arg3) {
    s16 temp_v0;
    char *var_s0;
    s32 var_s1;
    s32 var_v0;
    
    union { void * pointer; s32 value; } __repair_phase_storage;

    var_v0 = -1;
    (*(s32 *)((char *)(arg1) + 4)) = 0;
    if ((unsigned)arg2 != -1) {
        __repair_phase_storage.pointer = ((u32)arg2 * 0xC) + D_8004DB48;
        (*(s16 *)((char *)(__repair_phase_storage.pointer) + 4)) = temp_v0;
        temp_v0 = func_8010F020(arg0, *(s32 *)(((*(s16 *)((char *)(arg1) + 0xC)) * 4) + (*(s32 *)((char *)(D_8004DB48) + -4))));
        if (!(temp_v0 & 0x8000)) {
            (*(s32 *)((char *)(__repair_phase_storage.pointer) + 0)) = 1;
            (*(s8 *)((char *)(__repair_phase_storage.pointer) + 7)) = arg3;
            (*(u8 *)((char *)(__repair_phase_storage.pointer) + 6)) = (u8) (*(u8 *)((char *)(arg1) + 8));
            (*(u16 *)((char *)(__repair_phase_storage.pointer) + 8)) = (u16) (*(s16 *)((char *)(arg1) + 0xC));
            (*(u16 *)((char *)(__repair_phase_storage.pointer) + 0xA)) = (u16) (*(u16 *)((char *)(arg1) + 0xE));
            func_8010FD60(arg0, (*(s16 *)((char *)(__repair_phase_storage.pointer) + 4)));
            func_8010FD10(arg0, (*(s32 *)((char *)(arg1) + 0x10)));
            alSndpSetFXMix(arg0, (*(u8 *)((char *)(arg1) + 9)));
            alSndpSetPan(arg0, (*(u8 *)((char *)(arg1) + 0xA)));
            alSndpSetVol(arg0, (s16) (s32) ((f32) (s16) (*(u16 *)((char *)(arg1) + 0xE)) * D_8004DF10));
            alSndpPlay(arg0);
        }do{do{do{do{do{
        var_s1 = arg2 + 1;}while(0);}while(0);}while(0);}while(0);}while(0);
        var_s0 = __repair_phase_storage.pointer + 0xC;
        if (var_s1 < 0x10) {
loop_4:
            __repair_phase_storage.value = var_s1 < 0x10;
            if (*(s32 *)var_s0 != 0) {
                var_s1 += 1;
                var_s0 += 0xC;
                if (var_s1 >= 0x10) {
                    __repair_phase_storage.value = var_s1 < 0x10;
                } else {
                    goto loop_4;
                }
            }
            var_v0 = var_s1;
            if (__repair_phase_storage.value == 0) {
                goto block_8;
            }
        } else {
block_8:
            var_v0 = -1;
        }
    }
    return var_v0;
}
