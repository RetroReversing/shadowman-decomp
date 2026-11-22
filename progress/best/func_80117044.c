/* adapted from similar verified C in osSetThreadPri in V-RALLY-PAL (matched), with its names changed by decompdecomp */
s32 func_8008B4D4();
s32 func_80117FB8();
s32 func_80118330();
s32 func_80118350();
s32 func_80117370();
extern void *D_800A2518;
extern void *stream_default_slot;

/* Thread control block fields used here: next at 0x00, priority at 0x04, queue at 0x08, state at 0x10. */
typedef struct OSThreadRec {
    struct OSThreadRec *next;
    s32 priority;
    void *queue;
    u8 pad0C[4];
    u16 state;
} OSThreadRec;

/* Sets a thread's priority (NULL means the running thread). A queued thread is moved to the queue
 * for its new priority. If the highest runnable thread now outranks the running thread, the running
 * thread yields to the run queue. Interrupts are masked for the whole update. */
void func_80117044(void *t, s32 pri)
{
    s32 new_var;
    s32 saved_mask;
    t = t;
    saved_mask = func_80118330();
    if (t == NULL)
    {
        t = stream_default_slot;
    }
    if (((OSThreadRec *)t)->priority != pri)
    {
        new_var = t != stream_default_slot;
        ((OSThreadRec *)t)->priority = pri;
        if (new_var && (((OSThreadRec *)t)->state != 1))
        {
            func_80117370(((OSThreadRec *)t)->queue, t);
            func_80117FB8(((OSThreadRec *)t)->queue, t);
        }
        if (((OSThreadRec *)stream_default_slot)->priority < ((OSThreadRec *)D_800A2518)->priority)
        {
            ((OSThreadRec *)stream_default_slot)->state = 2;
            func_8008B4D4(&D_800A2518);
        }
    }
    func_80118350(saved_mask);
}
