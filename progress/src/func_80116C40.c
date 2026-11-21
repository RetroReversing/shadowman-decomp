/* adapted from similar verified C in osJamMesg in TWINE (matched), with its names changed by decompdecomp */
/* identical to func_80116C40 in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
typedef void *OSMesg;
typedef s32 OSPri;

typedef struct OSThread_s {
    struct OSThread_s *next;
    OSPri priority;
    struct OSThread_s **queue;
    struct OSThread_s *tlnext;
    u16 state;
} OSThread;

typedef struct OSMesgQueue_s {
    OSThread *mtqueue;
    OSThread *fullqueue;
    s32 validCount;
    s32 first;
    s32 msgCount;
    OSMesg *msg;
} OSMesgQueue;

extern OSThread *D_800285E0;
extern u32 func_80118330(void);
extern void func_80118350(u32);
extern void func_80117E1C(OSThread **);
extern OSThread *func_80118008(OSThread **);
extern void func_801171A0(OSThread *);

/* Sends a message to the front of a queue, jamming it in ahead of others. If the queue is full, flag 1 blocks the current thread until there is room; otherwise returns -1. Wakes the first waiting receiver. */
s32 func_80116C40(OSMesgQueue *mq, OSMesg msg, s32 flag) {
    register u32 saveMask;

    saveMask = func_80118330();

    while (mq->validCount >= mq->msgCount) {
        if (flag == 1) {
            D_800285E0->state = (1 << 3);
            func_80117E1C(&mq->fullqueue);
        } else {
            func_80118350(saveMask);
            return -1;
        }
    }

    mq->first = (mq->first + mq->msgCount - 1) % mq->msgCount;
    mq->msg[mq->first] = msg;
    mq->validCount++;

    if (mq->mtqueue->next != 0) {
        func_801171A0(func_80118008(&mq->mtqueue));
    }

    func_80118350(saveMask);
    return 0;
}
