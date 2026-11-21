/* identical to __osSetTimerIntr in PENNY RACERS (local match library) (matched), with its names changed by decompdecomp */
/* adapted from similar verified C in __osSetTimerIntr in V-RALLY-PAL (matched), with its names changed by decompdecomp */
typedef u64 OSTime;
typedef struct OSTimer_s OSTimer;
extern u32 func_80118330(void);
extern void func_80118350(u32);
extern u32 func_80118310(void);
extern void func_80118550(u32);
extern u32 D_80050440;

/* Schedules the next timer interrupt: the compare value is the current count plus tim.
 * Interrupts are masked while the compare register is written. */
void __osSetTimerIntr(OSTime tim)
{
    OSTime newCompare;
    u32 savedMask;

    savedMask = func_80118330();
    D_80050440 = func_80118310();
    newCompare = D_80050440 + tim;
    func_80118550(newCompare);
    func_80118350(savedMask);
}
