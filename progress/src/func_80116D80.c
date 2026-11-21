/* adapted from similar verified C in osRecvMesg in TWINE (matched), with its names changed by decompdecomp */
/* identical to func_80116D80 in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
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

/* Receives the next message from a queue. If the queue is empty, flag 0 returns -1 at once; otherwise the thread blocks until a message arrives. Copies the message to *msg if msg is non-null, then wakes the first blocked sender. */
s32 func_80116D80(OSMesgQueue *mq, OSMesg *msg, s32 flags) {
    register u32 saveMask;

    saveMask = func_80118330();

    while ((((mq)->validCount) == 0)) {
        if (flags == 0) {
            do { func_80118350(saveMask); } while (0);
            return -1;
        } else {
            D_800285E0->state = (1 << 3);
            func_80117E1C(&mq->mtqueue);
        }
    }

    if (msg != 0) {
        *msg = mq->msg[mq->first];
    }

    mq->first = (mq->first + 1) % mq->msgCount;
    mq->validCount--;

    if (mq->fullqueue->next != 0) {
        func_801171A0(func_80118008(&mq->fullqueue));
    }

    func_80118350(saveMask);
    return 0;
}
