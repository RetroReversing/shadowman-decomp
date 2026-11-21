#include "common.h"

/* adapted from similar verified C in osSendMesg in TWINE (matched), with its names changed by decompdecomp */
/* identical to func_80116EB0 in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
typedef void *OSMesg;
typedef struct OSThread_s OSThread;
struct OSThread_s { struct OSThread_s *next; s32 priority; struct OSThread_s **queue; struct OSThread_s *tlnext; u16 state; };
typedef struct OSMesgQueue_s {
    OSThread    *mtqueue;
    OSThread    *fullqueue;
    s32          validCount;
    s32          first;
    s32          msgCount;
    OSMesg      *msg;
} OSMesgQueue;

extern OSThread *D_800285E0;
extern u32 func_80118330(void);
extern void func_80118350(u32);
extern void func_80117E1C(OSThread **);
extern OSThread *func_80118008(OSThread **);
extern void func_801171A0(OSThread *);

/* Sends msg to mq. If the queue is full, OS_MESG_BLOCK (flags == 1) sleeps the
 * running thread until there is room; otherwise returns -1. Wakes a thread
 * waiting to receive. Returns 0 on success. */
s32 func_80116EB0(OSMesgQueue* mq, OSMesg msg, s32 flags) {
    register u32 saveMask;
    register s32 last;

    saveMask = func_80118330();

    while ((((  mq  )->validCount)  >= ( mq )->msgCount) ) {
        if (flags == 1 ) {
            D_800285E0->state = (1 << 3) ;
            func_80117E1C(&mq->fullqueue);
        } else {
            func_80118350(saveMask);
            return -1;
        }
    }

    last = (mq->first + mq->validCount) % mq->msgCount;
    mq->msg[last] = msg;
    mq->validCount++;

    if (mq->mtqueue->next != 0 ) {
        func_801171A0(func_80118008(&mq->mtqueue));
    }

    func_80118350(saveMask);
    return 0;
}
