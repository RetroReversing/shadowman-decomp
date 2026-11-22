/* adapted from similar verified C in osPfsIsPlug in PENNY RACERS (matched), with its names changed by decompdecomp */
/* adapted from similar verified C in func_802DD8F0 in V-RALLY-PAL (matched), with its names changed by decompdecomp */
typedef struct { u16 type; u8 status; u8 errno; } CS;
extern u8 D_8004EDEC;
extern char D_800D555E[];
s32 func_802DDA6C(s32);
void func_802DDB08();
void func_80115764();
void func_801157D0();
s32 func_80115800();
s32 func_80116D80(s32, s32 *, s32);

s32 func_802DD8F0(s32 queue, u8 *pattern) {
    s32 ret;
    s32 dummy;
    s32 channel;
    s32 cntrlrs = 0;
    u8 bitpattern;
    CS data[4];
    s32 crap = 3;
    u8 *pif;
    func_80115764();
    pif = (u8*)(D_800D555E + 0x7E82);
    do {
        func_802DDA6C(0);
        func_80115800(1, pif);
        func_80116D80(queue, &dummy, 1);
        ret = func_80115800(0, pif);
        func_80116D80(queue, &dummy, 1);
        func_802DDB08(&bitpattern, data);
        for (channel = 0; channel < D_8004EDEC; channel++) {
            if (!(data[channel].status & 4)) { crap--; break; }
        }
        if (channel != D_8004EDEC) continue;
        crap = 0;
    } while (crap > 0);
    for (channel = 0; channel < D_8004EDEC; channel++) {
        if (data[channel].errno == 0 && (data[channel].status & 1)) cntrlrs |= 1 << channel;
    }
    func_801157D0();
    *pattern = cntrlrs;
    return ret;
}
