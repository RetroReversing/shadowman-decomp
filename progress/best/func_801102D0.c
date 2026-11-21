/* adapted from similar verified C in alSynSetVol in V-RALLY-PAL (matched), with its names changed by decompdecomp */
void *__allocParam();
s32 func_80110A10(void *, s32, s32);

/* Queues a set-volume parameter (type 0xB) on the voice's unit, timed from
 * the synth clock plus the unit delay, and sends it to the unit's sink
 * handler (message 3). Does nothing if the voice has no unit or no param
 * is free. */
void func_801102D0(void *synth, void *voice, s32 vol, s32 t)
{
    char *p;
    char *unit;
    char *sink;
    s32 unitDelay;
    s32 synthTime;
    void (*handler)(void *, s32, void *);

    if (*(char **)((char *)voice + 8) != NULL) {
        p = __allocParam(synth);
        if (p != NULL) {
            unit = *(char **)((char *)voice + 8);
            synthTime = *(s32 *)((char *)synth + 0x1C);
            unitDelay = *(s32 *)(unit + 0xD8);
            *(s16 *)(p + 8) = 0xB;
            *(s32 *)(p + 0xC) = (s16)vol;
            *(s32 *)(p + 4) = synthTime + unitDelay;
            *(s32 *)(p + 0x10) = func_80110A10(synth, t, unitDelay);
            *(s32 *)p = 0;
            sink = *(char **)(*(char **)((char *)voice + 8) + 0xC);
            handler = *(void (**)(void *, s32, void *))(sink + 8);
            handler(sink, 3, p);
        }
    }
}
