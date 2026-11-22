void func_8026F8E8(int a0, int a1, int a2, int a3) {
}

 





typedef struct { char pad[0x18]; } gl_23F98_MQ;
typedef struct { u16 type; u8 pri; u8 status; gl_23F98_MQ *retQueue; } gl_23F98_IoHdr;
typedef struct { gl_23F98_IoHdr hdr; void *dramAddr; u32 devAddr; u32 size; } gl_23F98_IoMesg;
typedef struct { u32 cmdType; } gl_23F98_Tranx;
typedef struct { char pad[0x14]; gl_23F98_Tranx transferInfo; } gl_23F98_PiHandle;
typedef struct { char pad0[0x1644]; gl_23F98_PiHandle *cartHandle; gl_23F98_PiHandle *driveHandle; char pad1650[0x215C - 0x164C]; u32 resetTimer; } gl_23F98_Ctx;

typedef s32 (*gl_23F98_DmaHandler)(gl_23F98_PiHandle *handle, gl_23F98_IoMesg *mb, s32 direction);
extern gl_23F98_DmaHandler gl_23f98_sDmaHandler;


s32 AudioLoad_Dma(gl_23F98_IoMesg *mesg, u32 priority, s32 direction, u32 devAddr, void *ramAddr, u32 size,
                 gl_23F98_MQ *reqQueue, s32 medium, const char *dmaFuncType) {
    gl_23F98_PiHandle *handle;

    if ((*(gl_23F98_Ctx *)&D_00000000 ) .resetTimer > 16) {
        return -1;
    }

    switch (medium) {
        case 2:
            handle = (*(gl_23F98_Ctx *)&D_00000000 ) .cartHandle;
            break;
        case 3:
            handle = (*(gl_23F98_Ctx *)&D_00000000 ) .driveHandle;
            break;
        default:
            return 0;
    }

    if ((size % 0x10) != 0) {
        size = ((size) + 0xF) & ~0xF;
    }

    mesg->hdr.pri = priority;
    mesg->hdr.retQueue = reqQueue;
    mesg->dramAddr = ramAddr;
    mesg->devAddr = devAddr;
    mesg->size = size;
    handle->transferInfo.cmdType = 2;
    gl_23f98_sDmaHandler (handle, mesg, direction);
    return 0;
}



void AudioLoad_Unused1(void) {}

void aud_LoadStub_00024078(void) {}

extern int gl_ref_00037F80();
int AudioLoad_SyncLoadSimple(int a0, int a1) {
    int scratch;
    return gl_ref_00037F80(a0, a1, &scratch);
}

 








int AudioLoad_AsyncLoadInner(int cls, int idx, int a2, int a3, void *a4) {
    volatile int ret = cls;
    return ret;
}

 



extern int gl_func_00000000();
void AudioLoad_ProcessLoads(int a0) {
    gl_func_00000000 (a0);
    gl_func_00000000 (a0);
    gl_func_00000000 (a0);
}

extern int D_24360_a;
void AudioLoad_SetDmaHandler(int a0) { D_24360_a = a0; }

extern int D_2436C_a;
void AudioLoad_SetUnusedHandler(int a0) { D_2436C_a = a0; }

 









 

typedef struct { s32 unk0; s32 heapSize; s32 initPoolSize; s32 permanentPoolSize; } gl_24378_HeapInitSizes;

extern void *gl_24378_gAudioCustomUpdateFunction;
extern u8 gAudioHeap_24378[];
extern gl_24378_HeapInitSizes gAudioHeapInitSizes_24378;
extern s32 gl_24378_osTvType;
extern u8 gl_24378_rodata[];
extern AudioTable gl_24378_gSequenceTable, gl_24378_gSoundFontTable, gl_24378_gSampleBankTable;
extern u8 gl_24378_gSequenceFontTable[];
extern u32 gl_24378_seqRom, gl_24378_fontRom, gl_24378_sampleRom;
extern void gl_24378_AudioThread_InitMesgQueues(void);
extern int gl_ref_000375CC();




void AudioLoad_Init(void) {
    s32 pad[16];
    s32 i;
    void *ramAddr;
    s32 numFonts;




    gl_24378_gAudioCustomUpdateFunction = ((void*)0) ;
    (*(AudioContext *)&D_00000000 ) .resetTimer = 0;

    for (i = 0; i < gAudioHeapInitSizes_24378.heapSize / 8; i++) {
        ((u64 *)gAudioHeap_24378)[i] = 0;
    }

    {
        s32 i;
        u8 *audioContextPtr = (u8 *)&(*(AudioContext *)&D_00000000 ) ;

        for (i = 0x5C30; i >= 0; i--) {
            *audioContextPtr++ = 0;
        }
    }

    switch (gl_24378_osTvType) {
        case 0:
            (*(AudioContext *)&D_00000000 ) .maxTempoTvTypeFactors = *(f32 *)(gl_24378_rodata + 0xEC8 );
            (*(AudioContext *)&D_00000000 ) .refreshRate = 50;
            break;
        case 2:
            (*(AudioContext *)&D_00000000 ) .maxTempoTvTypeFactors = *(f32 *)(gl_24378_rodata + 0xECC );
            (*(AudioContext *)&D_00000000 ) .refreshRate = 60;
            break;
        case 1:
        default:
            (*(AudioContext *)&D_00000000 ) .maxTempoTvTypeFactors = *(f32 *)(gl_24378_rodata + 0xED0 );
            (*(AudioContext *)&D_00000000 ) .refreshRate = 60;
            break;
    }

    gl_24378_AudioThread_InitMesgQueues();

    for (i = 0; i < 3; i++) {
        (*(AudioContext *)&D_00000000 ) .aiBufLengths[i] = 0xA0;
    }

    (*(AudioContext *)&D_00000000 ) .totalTaskCount = 0;
    (*(AudioContext *)&D_00000000 ) .rspTaskIndex = 0;
    (*(AudioContext *)&D_00000000 ) .curAiBufIndex = 0;
    (*(AudioContext *)&D_00000000 ) .soundOutputMode = 0;
    (*(AudioContext *)&D_00000000 ) .curTask = ((void*)0) ;
    (*(AudioContext *)&D_00000000 ) .rspTask[0].task.data_size = 0;
    (*(AudioContext *)&D_00000000 ) .rspTask[1].task.data_size = 0;
    gl_func_00000000 (&(*(AudioContext *)&D_00000000 ) .syncDmaQueue, &(*(AudioContext *)&D_00000000 ) .syncDmaMesg, 1);
    gl_func_00000000 (&(*(AudioContext *)&D_00000000 ) .curAudioFrameDmaQueue, (*(AudioContext *)&D_00000000 ) .curAudioFrameDmaMsgBuf, 0x40);
    gl_func_00000000 (&(*(AudioContext *)&D_00000000 ) .externalLoadQueue, (*(AudioContext *)&D_00000000 ) .externalLoadMsgBuf, 8);
    gl_func_00000000 (&(*(AudioContext *)&D_00000000 ) .preloadSampleQueue, (*(AudioContext *)&D_00000000 ) .preloadSampleMsgBuf, 8);
    (*(AudioContext *)&D_00000000 ) .curAudioFrameDmaCount = 0;
    (*(AudioContext *)&D_00000000 ) .sampleDmaCount = 0;
    (*(AudioContext *)&D_00000000 ) .cartHandle = (void *)gl_func_00000000 ();
    (*(AudioContext *)&D_00000000 ) .driveHandle = (void *)gl_func_00000000 ();

    gl_func_00000000 (gAudioHeapInitSizes_24378.initPoolSize);

    for (i = 0; i < 3; i++) {
        (*(AudioContext *)&D_00000000 ) .aiBuffers[i] = (void *)gl_func_00000000 (&(*(AudioContext *)&D_00000000 ) .initPool, 0xB00);
    }

    (*(AudioContext *)&D_00000000 ) .sequenceTable = &gl_24378_gSequenceTable;
    (*(AudioContext *)&D_00000000 ) .soundFontTable = &gl_24378_gSoundFontTable;
    (*(AudioContext *)&D_00000000 ) .sampleBankTable = &gl_24378_gSampleBankTable;
    (*(AudioContext *)&D_00000000 ) .sequenceFontTable = gl_24378_gSequenceFontTable;
    (*(AudioContext *)&D_00000000 ) .numSequences = (*(AudioContext *)&D_00000000 ) .sequenceTable->header.numEntries;
    (*(AudioContext *)&D_00000000 ) .specId = 0;
    (*(AudioContext *)&D_00000000 ) .resetStatus = 1;

    gl_func_00000000 ();

    gl_ref_000375CC((*(AudioContext *)&D_00000000 ) .sequenceTable, gl_24378_seqRom, 0);
    gl_ref_000375CC((*(AudioContext *)&D_00000000 ) .soundFontTable, gl_24378_fontRom, 0);
    gl_ref_000375CC((*(AudioContext *)&D_00000000 ) .sampleBankTable, gl_24378_sampleRom, 0);
    numFonts = (*(AudioContext *)&D_00000000 ) .soundFontTable->header.numEntries;
    (*(AudioContext *)&D_00000000 ) .soundFontList = (void *)gl_func_00000000 (&(*(AudioContext *)&D_00000000 ) .initPool, numFonts * sizeof(SoundFont));

    for (i = 0; i < numFonts; i++) {
        (*(AudioContext *)&D_00000000 ) .soundFontList[i].sampleBankId1 = ((*(AudioContext *)&D_00000000 ) .soundFontTable->entries[i].shortData1 >> 8) & 0xFF;
        (*(AudioContext *)&D_00000000 ) .soundFontList[i].sampleBankId2 = ((*(AudioContext *)&D_00000000 ) .soundFontTable->entries[i].shortData1) & 0xFF;
        (*(AudioContext *)&D_00000000 ) .soundFontList[i].numInstruments = ((*(AudioContext *)&D_00000000 ) .soundFontTable->entries[i].shortData2 >> 8) & 0xFF;
        (*(AudioContext *)&D_00000000 ) .soundFontList[i].numDrums = (*(AudioContext *)&D_00000000 ) .soundFontTable->entries[i].shortData2 & 0xFF;
        (*(AudioContext *)&D_00000000 ) .soundFontList[i].numSfx = (*(AudioContext *)&D_00000000 ) .soundFontTable->entries[i].shortData3;
    }

    ramAddr = (void *)gl_func_00000000 (&(*(AudioContext *)&D_00000000 ) .initPool, gAudioHeapInitSizes_24378.permanentPoolSize);
    if (ramAddr == ((void*)0) ) {
        gAudioHeapInitSizes_24378.permanentPoolSize = 0;
    }

    gl_func_00000000 (&(*(AudioContext *)&D_00000000 ) .permanentPool, ramAddr, gAudioHeapInitSizes_24378.permanentPoolSize);
    gl_func_00000000 ((*(AudioContext *)&D_00000000 ) .taskStartQueueP, (*(AudioContext *)&D_00000000 ) .totalTaskCount, 0);
}


void AudioLoad_InitSlowLoads(void) {
    *(int*)((char*)&D_00000000 + 0x1590) = 0;
    *(int*)((char*)&D_00000000 + 0x15F4) = 0;
}

 












extern int gl_func_00000000();
extern int func_00039194();   
typedef struct { unsigned int w0; int w1; int w2; int w3; } gl_2495C_Hdr;
typedef struct {
    unsigned char tag; unsigned char id; unsigned char sub; unsigned char pad3;
    int x4; int x8; int xC; int x10; int state; int size; char *out;
    gl_2495C_Hdr hdr;
    char pad[100 - 0x30];
} gl_2495C_Rec;
typedef struct { char p0[0x1578]; int cnt; gl_2495C_Rec recs[2]; } gl_2495C_GS;
 










int AudioLoad_SlowLoadSample(int a0, unsigned char a1, char *s0) {
    gl_2495C_Hdr *obj;
    gl_2495C_Rec *rec;
    int r;

    obj = (gl_2495C_Hdr *)func_00039194(a0, a1);
    if (obj == 0) {
        *s0 = 0;
        return -1;
    }
    if ((((obj->w0) << 4) >> 30)  == 0) {
        *s0 = 2;
        return 0;
    }
    rec = &(*(gl_2495C_GS *)&D_00000000 ).recs[(*(gl_2495C_GS *)&D_00000000 ).cnt];
    if (rec->state == 3) {
        rec->state = 0;
    }
    rec->hdr = *obj;
    rec->out = s0;
    r = gl_func_00000000 (((obj->w0) & 0xFFFFFF) , a0, obj->w1, (signed char)(((obj->w0) << 4) >> 30) );
    rec->xC = r;
    if (r == 0) {
        if ((((obj->w0) << 4) >> 30)  == 1 || ((obj->w0) >> 28)  == 2) {
            *s0 = 0;
        } else {
            *s0 = 3;
        }
        return -1;
    }
    rec->state = 1;
    rec->size = (((obj->w0) & 0xFFFFFF)  + 15) & ~15;
    rec->x10 = rec->xC;
    rec->x8 = obj->w1;
    rec->tag = (((obj->w0) << 4) >> 30) ;
    rec->id = a0;
    rec->sub = a1;
    if (rec->tag == 1) {
        rec->x4 = *(short *)(*(char **)((char *)&D_00000000 + 0x2024) + 2);
    }
    *(int *)((char *)&D_00000000 + 0x1578) ^= 1;
    return 0;
}




int AudioLoad_GetFontSample(int a0, int a1) {
    int v0;
    int v1;
    int a2 = a1;

    if (a1 < 0x80) {
        v0 = gl_func_00000000 (a0, a1);
        if (v0 == 0) {
            return 0;
        }
        v1 = (int)((Instrument *)v0)->normalPitchTunedSample.sample;
    } else {
        v0 = gl_func_00000000 (a0, a2 - 0x80);
        if (v0 == 0) {
            return 0;
        }
        v1 = (int)((Drum *)v0)->tunedSample.sample;
    }
    return v1;
}

 

void AudioLoad_Unused2(void) {}

 



























 

struct gl_func_00024B94_Four { int a, b, c, d; };
void AudioLoad_FinishSlowLoad(int *a0) {
    struct gl_func_00024B94_Four *v0;
    if (a0[9] == 0) return;
    v0 = (struct gl_func_00024B94_Four*)func_00039194(((unsigned char*)a0)[1], ((unsigned char*)a0)[2]);
    if (v0 == 0) return;
    *(struct gl_func_00024B94_Four*)&((AudioSlowLoad *)a0)->sample = *v0;
    ((int*)v0)[1] = a0[4];



    *(char*)v0 &= ~0x0C;

}

 




















extern int gl_ref_00039200();
extern int gl_ref_000393FC();
extern int gl_ref_00039480();
void AudioLoad_ProcessSlowLoads(int arg0) {
    gl_2495C_Rec *rec;
    int remaining;
    int i;
    int state;
    int one;

    one = 1;
    for (i = 0; i != 2; i++) {
        state = (*(gl_2495C_GS *)&D_00000000 ).recs[i].state;
        rec = &(*(gl_2495C_GS *)&D_00000000 ).recs[i];
        if (state != 1) {
            if (state != 2) {
                continue;
            }
            if (rec->tag != 1) {
                gl_func_00000000 (rec->pad, 0, 1);
            }
            if (arg0 != 0) {
                rec->state = 3;
                continue;
            }
        }
        remaining = rec->size;
        rec->state = 2;
        if (remaining == 0) {
            gl_ref_00039200(rec);
            rec->state = 3;
            *rec->out = one;
        } else if (remaining < 0x400) {
            if (rec->tag == 1) {
                gl_ref_00039480(rec->x8, rec->xC, remaining, rec->x4);
            } else {
                gl_ref_000393FC(rec, remaining);
            }
            rec->size = 0;
        } else {
            if (rec->tag == 1) {
                gl_ref_00039480(rec->x8, rec->xC, 0x400, rec->x4);
            } else {
                gl_ref_000393FC(rec, 0x400);
            }
            rec->size -= 0x400;
            if (remaining) {
            }
            rec->xC += 0x400;
            rec->x8 += 0x400;
        }
    }
}

                                                                         
                                                                  
                                                                 
                                               
  
                                                 
                                                                     
                                                                      
                                                                       
                                          
                                       
      
  
                                                                  
                                                                     
                                                                 
                                                                   
                                                                      
                                                                 
                                                              
                                                                       
                                                        
                                                                
                                                       
                                                                     
                                                                  
                                                                  
                                                                  
                                                                
                                                                
                                                                         
                                                                      
                                                                              
                                                                            
                                                                               
                                                                    
                                                                             
                                                                                
                                                                             
                                                                              
                                                  
extern int gl_func_00000000();
extern int gl_func_00038604();
extern int D_00000000;

void AudioLoad_DmaSlowCopy(char *obj, int a1) {
    gl_func_00000000 (((AudioSlowLoad *)obj) ->curRamAddr  );
    gl_func_00000000 (&((AudioSlowLoad *)obj) ->msgQueue, &((AudioSlowLoad *)obj) ->msg, 1);
    gl_func_00038604(((AudioSlowLoad *)obj) ->ioMesg, 0, 0, ((AudioSlowLoad *)obj) ->curDevAddr,  
                     ((AudioSlowLoad *)obj) ->curRamAddr, a1, &((AudioSlowLoad *)obj) ->msgQueue,
                     ((AudioSlowLoad *)obj) ->medium, ((char *)&D_00000000 + (0x1AFCC))  );
}


void AudioLoad_DmaSlowCopyUnkMedium(int a0, int a1, int a2, int a3) {
}

 
















extern int gAudioContext_345c0;
extern int gl_ref_00038174();
extern int gl_ref_00038204();
typedef struct { int w0; int w1; signed char b8; char p9[7]; } gl_24E28_Ent;
typedef struct { short h0; short h2; char p4[12]; gl_24E28_Ent e[1]; } gl_24E28_Bank;

int AudioLoad_SlowLoadSeq(int idx, int a1, char *a2) {
    gl_24E28_Bank *base;
    gl_24E28_Ent *src;
    gl_2495C_Rec *rec;
    int tmp;

    if (idx >= *(unsigned short *)&((AudioContext *)&gAudioContext_345c0)->numSequences) {
        *a2 = 0;
        return -1;
    }
    idx = gl_ref_00038174(0, idx);
    base = (gl_24E28_Bank *)gl_ref_00038204(0);
    rec = &(*(gl_2495C_GS *)&gAudioContext_345c0) .recs[(*(gl_2495C_GS *)&gAudioContext_345c0) .cnt];
    if (rec->state == 3) {
        rec->state = 0;
    }
    src = &base->e[idx];
    rec->hdr.w1 = 0;
    rec->out = a2;
    tmp = src->w1;
    rec->state = 1;
    rec->xC = a1;
    tmp += 15;
    tmp &= ~15;
    rec->size = tmp;
    rec->x10 = a1;
    rec->x8 = src->w0;
    rec->tag = src->b8;
    rec->id = idx;
    if (rec->tag == 1) {
        rec->x4 = base->h2;
    }
    (*(gl_2495C_GS *)&gAudioContext_345c0) .cnt ^= 1;
    return 0;
}


 
















typedef struct {
    s8 flag; s8 b1; s8 b2; char p3;
    int w4; int w8; int wC; int w10; int w14; int w18; int w1C;
    char x20[0x18]; char x38[0x1C];
} gl_24F30_Slot;
typedef struct { char p0[0x1038]; gl_24F30_Slot slots[16]; } gl_24F30_GS;

gl_24F30_Slot *AudioLoad_StartAsyncLoad(int a0, int a1, int a2, int a3, int arg4, int arg5, int arg6) {
    gl_24F30_Slot *s;
    int i;

    for (i = 0; i != 16; i++) {
        if ((*(gl_24F30_GS *)&D_00000000 ) .slots[i].flag == 0) {
            s = &(*(gl_24F30_GS *)&D_00000000 ) .slots[i];
            break;
        }
    }
    if (i == 16) {
        return 0;
    }
    s->flag = 1;
    s->w8 = a0;
    s->w4 = a1;
    s->wC = a1;
    s->w10 = a2;
    if (arg4 == 0) {
        s->w14 = 4096;
    } else {
        s->w14 = ((a2 / arg4) + 255) & ~0xFF;
        if ((u32)s->w14 < 256U) {
            s->w14 = 256;
        }
    }
    s->w1C = arg5;
    s->b1 = 3;
    s->b2 = a3;
    s->w18 = arg6;
    gl_func_00000000 (s->x20, s->x38, 1);
    return s;
}


 













extern int gl_ref_00039734();
typedef struct { char p0[0x1038]; gl_24F30_Slot slots[16]; char p1[0x215C - 0x1578]; unsigned int x215C; } gl_25044_GS;

void AudioLoad_ProcessAsyncLoads(int a0) {
    int i;
    volatile gl_25044_GS *g = &(*(gl_25044_GS *)&D_00000000) ;

    if (g->x215C == 1U) {
        return;
    }
    for (i = 0; i != 16; i++) {
        if ((*(gl_25044_GS *)&D_00000000) .slots[i].flag == 1) {
            gl_ref_00039734(&(*(gl_25044_GS *)&D_00000000) .slots[i], a0);
        }
    }
}


                                                                                
                                                                  
                                                                 
                       
  
                                                      
                                                                       
                                         
                       
                                                                       
            
                              
                                                                     
                  
                                                                        
          
                                                                    
                      
                                                                        
                                                                        
        
      
  
                                                                    
                                                                  
                                                                   
                                                                     
                                                                   
                                                                     
                                                                       
                                                                          
                                             
                                                                    
                                                                    
                                                                 
                                                                  
                                                                   
                                                              
                                                             
                                                                  
                                                         
                                   
                                                                                         
                                                                       
                                                                            
                                                                            
                                                                   
                                                                               
                                                                            
                                                                        
                                                                           
                                                                              
                                                                              
                                                                              
                                                                           
                                                                           
                                                                             
                                                                         
                                                                 
                                                     
                                                                    
                                                                            
                                                                           
                                                                              
                                                                           
                                                                     
                                                                        
                                                                             
                                                                          
                                                                               
                                                                          
                                                                               
                                                                               
                                                                                 
                                                                                
                                                                                
                                                                                 
                                                                            
                                                                                 
                                                                               
                                                                      
typedef struct { void *a; void *b; s32 validCount; s32 first; s32 msgCount; void *msg; } gl_250C8_OSMesgQueue;
typedef struct {
    s8 status; s8 delay; s8 medium; u8 *ramAddr; u32 curDevAddr; u8 *curRamAddr; u32 bytesRemaining; u32 chunkSize;
    u32 retMsg; gl_250C8_OSMesgQueue *retQueue; gl_250C8_OSMesgQueue msgQueue;
} gl_250C8_AudioAsyncLoad;
typedef struct { s32 sampleBankId1; s32 sampleBankId2; s32 baseAddr1; s32 baseAddr2; u32 medium1; u32 medium2; } gl_250C8_SampleBankRelocInfo;
 
extern AudioContext gAudioContext_250C8;

extern s32 gl_250C8_osRecvMesg(void *, void *, s32);
extern s32 gl_250C8_osSendMesg(void *, u32, s32);
extern void gl_250C8_SetSeqLoadStatus(s32, s32);
extern void gl_250C8_SetSampleFontLoadStatus(s32, s32);
extern void gl_250C8_SetFontLoadStatus(u32, s32);
extern s32 gl_ref_00037DCC(s32, u32 *);
extern s32 gl_ref_00039B70(u32, void *, gl_250C8_SampleBankRelocInfo *, s32);
extern void gl_ref_00039A1C(u32, void *, u32, s32);
extern void gl_ref_0003998C(gl_250C8_AudioAsyncLoad *, u32);








void AudioLoad_ProcessAsyncLoad(gl_250C8_AudioAsyncLoad *asyncLoad, s32 resetStatus) {
    AudioTable *sampleBankTable = gAudioContext_250C8 .sampleBankTable;
    u32 retMsg;
    u32 fontId;
    u32 pad;
    void *doneMsg;
    u32 sampleBankId1;
    u32 sampleBankId2;
    gl_250C8_SampleBankRelocInfo sampleBankReloc;

    if (asyncLoad->delay >= 2) {
        asyncLoad->delay--;
        return;
    }

    if (asyncLoad->delay == 1) {
        asyncLoad->delay = 0;
    } else if (resetStatus != 0) {
        gl_250C8_osRecvMesg(&asyncLoad->msgQueue, ((void*)0) , 1);
        asyncLoad->status = 0;
        return;
    } else if (gl_250C8_osRecvMesg(&asyncLoad->msgQueue, ((void*)0) , 0) == -1) {
        return;
    }

    if (asyncLoad->bytesRemaining == 0) {
        retMsg = asyncLoad->retMsg;
        switch ((s32)(((retMsg) >> 16) & 0xFF) ) {
            case 0:
                gl_250C8_SetSeqLoadStatus((((retMsg) >> 8) & 0xFF) , ((retMsg) & 0xFF) );
                break;

            case 2:
                gl_250C8_SetSampleFontLoadStatus((((retMsg) >> 8) & 0xFF) , ((retMsg) & 0xFF) );
                break;

            case 1:
                fontId = (((retMsg) >> 8) & 0xFF) ;
                gl_250C8_SetFontLoadStatus(fontId, ((retMsg) & 0xFF) );
                sampleBankId1 = gAudioContext_250C8 .soundFontList[fontId].sampleBankId1;
                sampleBankId2 = gAudioContext_250C8 .soundFontList[fontId].sampleBankId2;
                sampleBankReloc.sampleBankId1 = sampleBankId1;
                sampleBankReloc.sampleBankId2 = sampleBankId2;
                sampleBankReloc.baseAddr1 =
                    sampleBankId1 != 0xFF ? gl_ref_00037DCC (sampleBankId1, &sampleBankReloc.medium1) : 0;
                sampleBankReloc.baseAddr2 =
                    sampleBankId2 != 0xFF ? gl_ref_00037DCC (sampleBankId2, &sampleBankReloc.medium2) : 0;
                gl_ref_00039B70 (fontId, asyncLoad->ramAddr, &sampleBankReloc, 1);
                break;
        }
        asyncLoad->status = 0;
        gl_250C8_osSendMesg(asyncLoad->retQueue, asyncLoad->retMsg, 0);
        return;
    }

    if (asyncLoad->bytesRemaining < asyncLoad->chunkSize) {
        if (asyncLoad->medium == 1) {
            gl_ref_00039A1C (asyncLoad->curDevAddr, asyncLoad->curRamAddr, asyncLoad->bytesRemaining,
                                        sampleBankTable->header.unkMediumParam);
        } else {
            gl_ref_0003998C (asyncLoad, asyncLoad->bytesRemaining);
        }
        asyncLoad->bytesRemaining = 0;
        return;
    }

    if (asyncLoad->medium == 1) {
        gl_ref_00039A1C (asyncLoad->curDevAddr, asyncLoad->curRamAddr, asyncLoad->chunkSize,
                                    sampleBankTable->header.unkMediumParam);
    } else {
        gl_ref_0003998C (asyncLoad, asyncLoad->chunkSize);
    }

    asyncLoad->bytesRemaining -= asyncLoad->chunkSize;
    asyncLoad->curDevAddr += asyncLoad->chunkSize;
    asyncLoad->curRamAddr += asyncLoad->chunkSize;
}










                                                                        
                                                                 
                                                                     
                                                                      
                                                                    
  
                                              
                                                                   
                                                                      
                                                                       
                                                                        
                                         
                                       
      
  
                                                           
                                                                        
                                                                
                                                                    
                                                                     
                                                                  
                                                                     
                                                                 
                                                                    
                                                                 
                                                                   
                        
                                                                    
                                                                     
                                                                        
                                                                    
                                                                  
                                                           
                                                                   
                                                                 
                                                                  
                                                        
                                                                
 



void AudioLoad_AsyncDma(void *asyncLoad, u32 size) {
    volatile int x = 0;
}

 
void AudioLoad_AsyncDmaUnkMedium(int a0, int a1, int a2, int a3) {
}












 





extern void gAudioContext_253c4_fd();

typedef u8 gl_253C4_FontData;

void AudioLoad_RelocateSample(TunedSample *tunedSample, gl_253C4_FontData *fontData, SampleBankRelocInfo *sampleBankReloc) {
    Sample *sample;
    void *reloc;






    if ((u32)tunedSample->sample <= 0x80000000) {


        sample = tunedSample->sample = (reloc = (void *)((u32)(tunedSample->sample) + (u32)( fontData))) ;

        if ((sample->size != 0) && (sample->isRelocated != 1)) {
            sample->loop = (reloc = (void *)((u32)(sample->loop) + (u32)( fontData))) ;
            sample->book = (reloc = (void *)((u32)(sample->book) + (u32)( fontData))) ;

            switch (sample->medium) {
                case 0:
                    sample->sampleAddr = (reloc = (void *)((u32)(sample->sampleAddr) + (u32)( sampleBankReloc->baseAddr1))) ;
                    sample->medium = sampleBankReloc->medium1;
                    break;

                case 1:
                    sample->sampleAddr = (reloc = (void *)((u32)(sample->sampleAddr) + (u32)( sampleBankReloc->baseAddr2))) ;
                    sample->medium = sampleBankReloc->medium2;
                    break;

                case 2:
                case 3:
                    break;
            }

            sample->isRelocated = 1;

            if (sample->unk_bit26 && (sample->medium != 0)) {
                (*(AudioContext *)gAudioContext_253c4_fd) .usedSamples[(*(AudioContext *)gAudioContext_253c4_fd) .numUsedSamples++] = sample;
            }
        }
    }


}


                                                                                         
                                                                  
                                                                
                                   
  
                                                                  
                   
                                                                        
                                                                         
                                                                         
                                                                          
                                                                          
                              
                                                                        
                                                                       
                                                         
        
                  
      
  
                                                               
                                                               
                                                                  
                                                                
                                                                   
                                                                    
                                                              
                                                                     
                                                                        
               
                                                                   
                                                                          
                                                                    
                                                                   
                                                            
                                                                   
                                                             
                                                                 
                                                                    
                                                                 
                     
                                                                                                       
                                                                              
                                                                              
                                                                            
                                                                           
                                                                               
                                                                               
                                                        
                                                                                 
                                                                          
                                                                               
                                                                             
                                                                                                       
                                                                              
                                                                                     
                                                                                   
                                                                                     
                                                                               
                                                                               
                                                        
                                                                             
                                                                                      
                  
                                                                                 
                                                                          
                                                                                       
                                                                                       
                                                                               
                                                                                       
                                                                                              
                                                                                         
                                                                                 
                                                                                     
                                                                                        
                                                                                   
                                                                                  
                                                                             
                                                                                    
                                                                           
                                                                                  
                                                                                  
                                                                               
                                                                                 
                                                                               
 






 
extern AudioContext gAudioContext_25504;

extern s32 gl_25504_D_8016B780;

extern void gl_25504_RelocateFont(s32, void *, SampleBankRelocInfo *);
extern u8 *gl_25504_AllocSampleCache(u32, s32, void *, s8);
extern void gl_25504_SyncDmaUnkMedium(u32, u8 *, u32, s32);
extern void gl_25504_SyncDma(u32, u8 *, u32, s32);
extern void gl_25504_StartAsyncLoad(u32, u8 *, u32, s32, s32, void *, u32);







void AudioLoad_RelocateFontAndPreloadSamples(s32 fontId, void *fontData, SampleBankRelocInfo *sampleBankReloc, s32 isAsync) {
    AudioPreloadReq *preload;
    AudioPreloadReq *topPreload;
    u8 *sampleRamAddr;
    Sample *sample;
    s32 size;
    s32 nChunks;
    s32 preloadInProgress;
    s32 i;

    preloadInProgress = 0;
    if (gAudioContext_25504 .preloadSampleStackTop != 0) {
        preloadInProgress = 1;
    } else {
        gl_25504_D_8016B780  = 0;  
    }

    gAudioContext_25504 .numUsedSamples = 0;
    gl_25504_RelocateFont (fontId, fontData, sampleBankReloc);

    size = 0;
    for (i = 0; i < gAudioContext_25504 .numUsedSamples; i++) {
        size += (((gAudioContext_25504.usedSamples[i]->size) + 0xF) & ~0xF) ;
    }
    if (size && size) {}

    for (i = 0; i < gAudioContext_25504 .numUsedSamples; i++) {
        if (gAudioContext_25504 .preloadSampleStackTop == 120) {
            break;
        }

        sample = gAudioContext_25504 .usedSamples[i];
        if (sample) {}
        switch (isAsync) {
            case 0:
                if (sample->medium == sampleBankReloc->medium1) {
                    sampleRamAddr = gl_25504_AllocSampleCache (sample->size, sampleBankReloc->sampleBankId1, sample->sampleAddr, sample->medium);
                } else if (sample->medium == sampleBankReloc->medium2) {
                    sampleRamAddr = gl_25504_AllocSampleCache (sample->size, sampleBankReloc->sampleBankId2, sample->sampleAddr, sample->medium);
                }
                break;

            case 1:
                if (sample->medium == sampleBankReloc->medium1) {
                    sampleRamAddr = gl_25504_AllocSampleCache (sample->size, sampleBankReloc->sampleBankId1, sample->sampleAddr, sample->medium);
                } else if (sample->medium == sampleBankReloc->medium2) {
                    sampleRamAddr = gl_25504_AllocSampleCache (sample->size, sampleBankReloc->sampleBankId2, sample->sampleAddr, sample->medium);
                }
                break;
        }
        if (sampleRamAddr == ((void*)0) ) {
            continue;
        }

        switch (isAsync) {
            case 0:
                if (sample->medium == 1) {
                    gl_25504_SyncDmaUnkMedium ((u32)sample->sampleAddr, sampleRamAddr, sample->size, gAudioContext_25504 .sampleBankTable->header.unkMediumParam);
                    sample->sampleAddr = sampleRamAddr;
                    sample->medium = 0;
                } else {
                    gl_25504_SyncDma ((u32)sample->sampleAddr, sampleRamAddr, sample->size, sample->medium);
                    sample->sampleAddr = sampleRamAddr;
                    sample->medium = 0;
                }
                break;

            case 1:
                gAudioContext_25504 .preloadSampleStack[gAudioContext_25504 .preloadSampleStackTop].sample = sample;
                gAudioContext_25504 .preloadSampleStack[gAudioContext_25504 .preloadSampleStackTop].ramAddr = sampleRamAddr;
                gAudioContext_25504 .preloadSampleStack[gAudioContext_25504 .preloadSampleStackTop].encodedInfo = (gAudioContext_25504 .preloadSampleStackTop << 24) | 0xFFFFFF;
                gAudioContext_25504 .preloadSampleStack[gAudioContext_25504 .preloadSampleStackTop].isFree = 0;
                gAudioContext_25504 .preloadSampleStack[gAudioContext_25504 .preloadSampleStackTop].endAndMediumKey = (u32)sample->sampleAddr + sample->size + sample->medium;
                gAudioContext_25504 .preloadSampleStackTop++;
                break;
        }
    }
    gAudioContext_25504 .numUsedSamples = 0;

    if (gAudioContext_25504 .preloadSampleStackTop != 0 && !preloadInProgress) {
        sample = gAudioContext_25504 .preloadSampleStack[gAudioContext_25504 .preloadSampleStackTop - 1].sample;
        nChunks = (sample->size >> 12) + 1;
        gl_25504_StartAsyncLoad ((u32)sample->sampleAddr, gAudioContext_25504 .preloadSampleStack[gAudioContext_25504 .preloadSampleStackTop - 1].ramAddr, sample->size, sample->medium, nChunks,
                                 &gAudioContext_25504 .preloadSampleQueue, gAudioContext_25504 .preloadSampleStack[gAudioContext_25504 .preloadSampleStackTop - 1].encodedInfo);
    }
}










 











































 





typedef struct { u32 codec : 4; u32 medium : 2; u32 unk_bit26 : 1; u32 isRelocated : 1; u32 size : 24; u8 *sampleAddr; } gl_258C0_Sample;
typedef struct { u32 endAndMediumKey; gl_258C0_Sample *sample; u8 *ramAddr; u32 encodedInfo; s32 isFree; } gl_258C0_Req;
typedef struct { char pad0[0x630]; gl_258C0_Req preloadSampleStack[0x80]; s32 numUsedSamples; s32 preloadSampleStackTop; char pad1038[0x1684 - 0x1038]; char preloadSampleQueue[0x18]; } gl_258C0_Ctx;
extern gl_258C0_Ctx gAudioContext_258C0;

extern s32 gl_258C0_osRecvMesg(void *, void *, s32);
extern void gl_258C0_StartAsyncLoad(u32, u8 *, u32, s32, s32, void *, u32);



s32 AudioLoad_ProcessSamplePreloads(s32 resetStatus) {
    gl_258C0_Sample *sample;
    u32 preloadIndex;
    u32 key;
    u32 nChunks;
    s32 pad;

    if (gAudioContext_258C0 .preloadSampleStackTop > 0) {
        if (resetStatus != 0) {
            gl_258C0_osRecvMesg (&gAudioContext_258C0 .preloadSampleQueue, &preloadIndex, 0);
            gAudioContext_258C0 .preloadSampleStackTop = 0;
            return 0;
        }
        if (gl_258C0_osRecvMesg (&gAudioContext_258C0 .preloadSampleQueue, &preloadIndex, 0) == -1) {
            return 0;
        }

        preloadIndex >>= 24;

        if (gAudioContext_258C0 .preloadSampleStack[preloadIndex].isFree == 0) {
            sample = gAudioContext_258C0 .preloadSampleStack[preloadIndex].sample;
            key = (u32)sample->sampleAddr + sample->size + sample->medium;
            if (key == gAudioContext_258C0 .preloadSampleStack[preloadIndex].endAndMediumKey) {
                sample->sampleAddr = gAudioContext_258C0 .preloadSampleStack[preloadIndex].ramAddr;
                sample->medium = 0;
            }
            gAudioContext_258C0 .preloadSampleStack[preloadIndex].isFree = 1;
        }

        while (1) {
            if (gAudioContext_258C0 .preloadSampleStackTop <= 0) {
                break;
            }
            if (gAudioContext_258C0 .preloadSampleStack[gAudioContext_258C0 .preloadSampleStackTop - 1].isFree == 1) {
                gAudioContext_258C0 .preloadSampleStackTop--;
                continue;
            }

            sample = gAudioContext_258C0 .preloadSampleStack[gAudioContext_258C0 .preloadSampleStackTop - 1].sample;
            nChunks = (sample->size >> 12) + 1;
            key = (u32)sample->sampleAddr + sample->size + sample->medium;
            if (key != gAudioContext_258C0 .preloadSampleStack[gAudioContext_258C0 .preloadSampleStackTop - 1].endAndMediumKey) {
                gAudioContext_258C0 .preloadSampleStack[gAudioContext_258C0 .preloadSampleStackTop - 1].isFree = 1;
                gAudioContext_258C0 .preloadSampleStackTop--;
            } else {
                gl_258C0_StartAsyncLoad ((u32)sample->sampleAddr, gAudioContext_258C0 .preloadSampleStack[gAudioContext_258C0 .preloadSampleStackTop - 1].ramAddr, sample->size, sample->medium,
                                         nChunks, &gAudioContext_258C0 .preloadSampleQueue, gAudioContext_258C0 .preloadSampleStack[gAudioContext_258C0 .preloadSampleStackTop - 1].encodedInfo);
                break;
            }
        }
    }
    return 1;
}




 




                                                                         
                                                                       
                                                                        
                                                                   
int AudioLoad_AddToSampleSet(int *a0, int a1, int **a2) {
    int i = 0;
    if (a1 > 0) {
        int key = a0[1];
        do {
            if (key == a2[i][1]) {
                break;
            }
            i++;
        } while (i != a1);
    }
    if (i == a1) {
        a2[a1] = (int)a0;
        a1++;
    }
    return a1;
}

 






extern int gl_func_00000000();
extern int D_00000000;
extern int gl_ref_0003A0EC();  
int AudioLoad_GetSamplesForFont(int idx, int a1) {
    AudioContext *g = (AudioContext *)&D_00000000;
    SoundFont *rec = &g->soundFontList[idx];
    int n2 = rec->numDrums;
    int acc = 0;
    int i;
    int n1 = rec->numInstruments;
    Instrument *r;
    for (i = 0; i < n2; i++) {
        Drum *q;
        r = (Instrument *)gl_func_00000000 (idx, i); q = (Drum *)r; if (1) {}
        if (q != 0) {
            acc = gl_ref_0003A0EC(q->tunedSample.sample, acc, a1);
        }
    }
    for (i = 0; i < n1; i++) {
        r = (Instrument *)gl_func_00000000 (idx, i);
        if (r != 0) {
            if (r->normalRangeLo != 0) {
                acc = gl_ref_0003A0EC(r->lowPitchTunedSample.sample, acc, a1);
            }
            if (r->normalRangeHi != 127) {
                acc = gl_ref_0003A0EC(r->highPitchTunedSample.sample, acc, a1);
            }
            acc = gl_ref_0003A0EC(r->normalPitchTunedSample.sample, acc, a1);
        }
    }
    return acc;
}

 










typedef struct {
    unsigned int type : 4;      
    unsigned int kind : 2;      
    unsigned int queued : 1;    
    unsigned int bit24 : 1;     
    unsigned int size : 24;     
} Desc25BFC;

void AudioLoad_AddUsedSample(Desc25BFC **a0) {
    Desc25BFC *p = a0[0];
    if (p->size == 0) {
        return;
    }
    if (p->queued == 0) {
        return;
    }
    if (p->kind == 0) {
        return;
    }
    *(int *)((char *)&D_00000000  + *(int *)((char *)&D_00000000 + 0x1030) * 4 + 0x430) = (int)p;
    *(int *)((char *)&D_00000000 + 0x1030) += 1;
}


 



void AudioLoad_PreloadSamplesForFont(s32 fontId, s32 async, void *sampleBankReloc) {
    volatile int x = 0;
}

 











extern int gl_ref_00038204();
extern int gl_ref_00038174();
extern void gl_ref_0003A2C0();
void AudioLoad_LoadPermanentSamples(void) {
    struct { char p0[0x18]; struct { signed char b; char p1[15]; } e[1]; } *tbl;
    int i;
    int j;
    gl_260B4_Reg *rec;
    int pad;
    struct { int b0; int b4; int pad8; int padc; int b10; int b14; } frame;

    tbl = (void *)gl_ref_00038204(2);
    for (i = 0; i < gAudioContext_345c0_1CC98.nents; i++) {
        if (gAudioContext_345c0_1CC98.ents[i].active == 1) {
            j = gl_ref_00038174(1, gAudioContext_345c0_1CC98.ents[i].key);
            rec = (gl_260B4_Reg *)((char *)gAudioContext_345c0_1CC98.regs + j * 0x14);
            frame.b0 = rec->sel0;
            frame.b4 = rec->sel1;
            if (frame.b0 != 0xFF) {
                frame.b0 = gl_ref_00038174(2, frame.b0);
                frame.b10 = tbl->e[frame.b0].b;
            }
            if (frame.b4 != 0xFF) {
                frame.b4 = gl_ref_00038174(2, frame.b4);
                frame.b14 = tbl->e[frame.b4].b;
            }
            gl_ref_0003A2C0(j, 0, &frame);
        }
    }
}

extern int gl_ref_0003A880();
int AudioThread_Update() {
    return gl_ref_0003A880();
}

 



void *AudioThread_UpdateImpl(void) {
    volatile int x = 0;
    return 0;
}

                                                                                
                                                                    
                                                                  
                                                                   
                
  
                                                  
                       
                                                                         
                                          
                                                                     
                                            
                                                                     
                                                                      
                                                              
                                                               
                                            
      
  
                                                                  
                                                                    
                                                                  
                                                                   
                                                                   
                                                                  
                                                                  
                                                                   
                                                                    
                                                                   
                   
                                                                   
                                                                   
                                                                 
                                                         
                                                                      
                                                               
                                                                  
                                                                 
                                                                
                                                                    
                                                        
                                                                
 





void AudioThread_ProcessGlobalCmd(unsigned char *cmd) {
    volatile int x = cmd[0];
}

 




void AudioThread_SetFadeOutTimer(int a0, int a1) {
    SequencePlayer *player;
    player = (SequencePlayer *)((char *)&D_00000000  + a0 * 352 + 0x2D00);  
    if (a1 == 0) {
        a1 = 1;
    }
    player->state = 2;
    player->fadeTimer = a1;
    player->fadeVelocity = -(player->fadeVolume / (float)a1);
}

void AudioThread_SetFadeInTimer(int a0, int a1) {
    if (a1 == 0) {
        return;
    }
    (*(AudioContext *)&D_00000000 ) .seqPlayers[a0].state = 1;
    (*(AudioContext *)&D_00000000 ) .seqPlayers[a0].fadeTimerUnkEu = a1;
    (*(AudioContext *)&D_00000000 ) .seqPlayers[a0].fadeTimer = a1;
    (*(AudioContext *)&D_00000000 ) .seqPlayers[a0].fadeVolume = 0.0f;
    (*(AudioContext *)&D_00000000 ) .seqPlayers[a0].fadeVelocity = 0.0f;
}

                                                                              
                                                                                      
                                                                               
                                                                              
                                                                               
                                                                             
                                                                                 
                                                                            
                                                                               
                                                                            
                                                                             
                                                                         
                                                                            
                                                                        
                                                                       
                                                                              
                                                                         
                                                                         
                                                                         
                                                                            
                                                                           
                                                                       
                                                                          
                                                                        
                                                                      
                                                                        
                                                                
                                                                        
                                                                              
                                                                            
                                                                          
                                                                           
extern int gl_func_00000000();
extern int D_00000000;
void AudioThread_InitMesgQueuesImpl(void) {
  (*(AudioContext *)&D_00000000 ) .threadCmdWritePos = 0;
  (*(AudioContext *)&D_00000000 ) .threadCmdReadPos = 0;
  (*(AudioContext *)&D_00000000 ) .threadCmdQueueFinished = 0;
  (*(AudioContext *)&D_00000000 ) .taskStartQueueP = &(*(AudioContext *)&D_00000000 ) .taskStartQueue;
  (*(AudioContext *)&D_00000000 ) .threadCmdProcQueueP = &(*(AudioContext *)&D_00000000 ) .threadCmdProcQueue;
  (*(AudioContext *)&D_00000000 ) .audioResetQueueP = &(*(AudioContext *)&D_00000000 ) .audioResetQueue;
  gl_func_00000000 ((*(AudioContext *)&D_00000000 ) .taskStartQueueP, (*(AudioContext *)&D_00000000 ) .taskStartMsgBuf, 1);
  gl_func_00000000 ((*(AudioContext *)&D_00000000 ) .threadCmdProcQueueP, (*(AudioContext *)&D_00000000 ) .threadCmdProcMsgBuf, 4);
  gl_func_00000000 ((*(AudioContext *)&D_00000000 ) .audioResetQueueP, (*(AudioContext *)&D_00000000 ) .audioResetMesgBuf, 1);
}

 













typedef struct { int a; int b; } Ring26BD8;

void AudioThread_QueueCmd(int a0, int *a1) {
    Ring26BD8 *e;  
    e = (Ring26BD8 *)((AudioContext *)&D_00000000) ->threadCmdBuf;
    e += ((AudioContext *)&D_00000000) ->threadCmdWritePos & 0xFF;






    e->a = a0;

    e->b = *a1;
    ((AudioContext *)&D_00000000) ->threadCmdWritePos++;
    if (((AudioContext *)&D_00000000) ->threadCmdWritePos == ((AudioContext *)&D_00000000) ->threadCmdReadPos) {
        ((AudioContext *)&D_00000000) ->threadCmdWritePos--;
    }
}

extern int gl_ref_0003B244();
void AudioThread_QueueCmdF32(int a0, int a1) {
    gl_ref_0003B244(a0, &a1);
}

extern int gl_ref_0003B244();
void AudioThread_QueueCmdS32(int a0, int a1) {
    gl_ref_0003B244(a0, &a1);
}

 




extern int gl_ref_0003B244();
void AudioThread_QueueCmdS8(int a0, char a1) {
    int local;



    local = a1 << 24;

    gl_ref_0003B244(a0, &local);
}

 



extern int gl_ref_0003B244();
void AudioThread_QueueCmdU16(int a0, short a1) {
    int local;



    local = a1 << 16;

    gl_ref_0003B244(a0, &local);
}

 











extern int gl_func_00000000();
extern int D_00000000;
extern int gAudioContext_345c0;
 







void AudioThread_ScheduleProcessCmds(void) {
    int cur, committed, n, r;

    cur = (*(AudioContext *)&gAudioContext_345c0) .threadCmdWritePos;
    committed = (*(AudioContext *)&gAudioContext_345c0) .threadCmdReadPos;
    n = (cur - committed + 256) & 0xFF;
    if (*(int *)(((char *)&D_00000000 + (0x1B594)) ) < n) {
        *(int *)(((char *)&D_00000000 + (0x1B594)) ) = n;
    }
    r = gl_func_00000000 ((*(AudioContext *)&gAudioContext_345c0) .threadCmdProcQueueP, ((committed & 0xFF) << 8) | (cur & 0xFF), 0);
    if (r != -1) {
        (*(AudioContext *)&gAudioContext_345c0) .threadCmdReadPos = (*(AudioContext *)&gAudioContext_345c0) .threadCmdWritePos;
    }
}


void AudioThread_ResetCmdQueue(void) {
    *(unsigned char *)((char *)&D_00000000 + 0x53B9) = *(unsigned char *)((char *)&D_00000000 + 0x53B8);
    *(unsigned char *)((char *)&D_00000000 + 0x53BA) = 0;
}

                                                                           
                                                                  
                                                                     
                                                                
                                                 
  
                                          
                      
                                                                       
                      
                                                                     
        
                          
                                                                         
                               
                                                                   
                                                                         
                                                       
                              
        
      
  
                                                                  
                                                                  
                                                               
                                                                
                                                                     
                                                                   
                                                                   
                                                                 
                                                      
                              
                                                                     
                                                                
                                                                     
                                                                  
                                                                 
                                                                 
                                                                      
                                                                 
                                                                 
                     
 



































 




void AudioThread_ProcessCmds(u32 arg0) {
    volatile int ret = arg0;
}

 


int AudioThread_GetAsyncLoadStatus(int *a0) {
    int local;
    int rv = func_00000000 ((char*)&D_00000000  + 0x164C, &local, 0);
    if (rv == -1) {
        *a0 = 0;
        return 0;
    }
    *a0 = local & 0xFFFFFF;
    return (unsigned)local >> 24;
}

extern int gl_func_00000000();



int AudioThread_GetFontsForSequence() {

    return gl_func_00000000 (   );
}

 

int AudioThread_CheckSpecChange(void) {
    int v;
    int local;
    v = gl_func_00000000 ((*(AudioContext *)&D_00000000 ) .audioResetQueueP, &local, 0);
    if (v == -1) return 0;
    if (local != ((AudioContext *)&D_00000000 )->specId) {
        return 0;
    }
    return 1;
}

 







void AudioThread_ClearSpecChangeQueue(void) {
    int sentinel;
    int scratch;
    do {
        sentinel = -1;
    } while (gl_func_00000000 ((*(AudioContext *)&D_00000000 ) .audioResetQueueP, &scratch, 0) != sentinel);
}

                                                                              
                                                                  
                                                                    
            
  
                                              
                                                                           
                   
                                                                         
                                                                       
                                                                       
                                
                                                                         
                                                                        
          
                                                                               
                                                                        
        
      
  
                                                                      
                                                                   
                                                                    
                                                                        
                                                                    
                                                                    
                                                                  
                                                                     
                                                                      
                                
 








extern int gl_func_00000000();
extern void gl_func_00000000_void();
extern int D_00000000;
extern void gl_ref_0003B844();
int AudioThread_ResetAudioHeap(int a0) {
    int state;
    gl_ref_0003B844(a0);
    state = *((unsigned char *)&D_00000000 + 0x2CF0);
    if (state != 0) {
        int local;
        gl_func_00000000_void ();
        if (a0 == *((unsigned char *)&D_00000000 + 0x2CF1)) {
            return 0;
        }
        if (state >= 3) {
            return 0;
        }
        gl_func_00000000 ((*(AudioContext *)&D_00000000 ) .audioResetQueueP, &local, 1);
    }
    gl_ref_0003B844();
    gl_func_00000000 (0xF9000000, a0);
    return gl_func_00000000 ();
}

                                                                              
                                                                 
                                                                  
                                                                       
  
                                            
                   
                                                                          
                                                                      
                                                                        
      
  
                                                         
                                                                  
                                                                    
                                                                                    
                                                                 
                                                               
                                                                        
                                                                 
                                                                     
                                                                   
                                                                    
                                                                  
                                                               
                                                                    
                                                                                
                                                                 
                     
 









extern unsigned char gAudioContext_23f98[];
extern unsigned char gAudioContext_272c4[];
extern int gl_func_00000000();
void AudioThread_PreNMIInternal(void) {
    int g = (int)gAudioContext_23f98;
    int h = (int)gAudioContext_272c4;
    ((AudioContext *)g)->resetTimer = 1;
    gl_func_00000000 (0);
    ((AudioContext *)h)->resetStatus = 0;
}

 
















int AudioThread_GetChannelIO(int a0, int a1, int a2) {
    char *p = (char *)&D_00000000  + a0 * 352;



    if ((unsigned int)*(int *)&((AudioContext *)p)->seqPlayers[0] >> 31) {

        char *q = (char *)((int *)(p + 0x2D38))[a1];
        return ((SequenceChannel *)q)->seqScriptIO[a2];
    }
    return -1;
}

signed char AudioThread_GetSeqPlayerIO(int a0, int a1) {
    return (*(AudioContext *)&D_00000000 ) .seqPlayers[a0].seqScriptIO[a1];
}

                                                                                  
                                                                 
                                                                   
                                                                    
                                             
  
                                                        
                                                                     
      
  
                                                                    
                                                                 
                                                                      
                                                                     
                                                                                                    
                                                               
                                                                     
                                                                  
                                                              
                                                                     
                                                                   
                                                                  
              
                                                                    
                                                                         
                                                                          
                                                                   
                                   
extern int gl_func_00000000();
extern int D_00000000;
void AudioThread_InitExternalPool(int a0, int a1) {
    char *g = (char *)&D_00000000;
    gl_func_00000000 (g + 0x2178, a0, a1);
}

void AudioThread_ResetExternalPool(void) {
    ((AudioContext *)&D_00000000 )->externalPool.startRamAddr = 0;
}

 


































void AudioThread_ProcessChannelCmd(unsigned char *a0, unsigned char *a1) {
    a0[0] = a1[0];
}


 


 







 













 




void game_libs_func_000274E0(char *a0, signed char *a1) {
     










    a0[3] = a1[4];
}




 






 





 






 



 






 




 




 













 











extern int gl_func_00000000();

void AudioThread_Noop1Cmd(int a0, int a1, int a2) {
    int packed = 0xFA000000 | ((a0 & 0xFF) << 16) | ((a1 & 0xFF) << 8) | (a2 & 0xFF);
    gl_func_00000000 (packed, 1);
}

void AudioThread_Noop1CmdZeroed(void) {
    gl_func_00000000 (0xFA000000, 0);
}

extern int D_gl275B0;
void AudioThread_SetExtWord_000275B0(int a0) { D_gl275B0 = a0; }

extern int D_gl275BC;
void AudioThread_ClearExtWord_000275BC(void) { D_gl275BC = 0; }

                                                                                 
                                                                 
                                                                    
                                                                   
  
                                              
                                                                      
                                                                      
      
  
                                                                    
                                                                     
                                                                      
                                                                   
                                                                    
                                                            
                                                                 
                                                           
                                                            
                                                                    
              
                                                                     
                                                                     
                                                         
                                                                    
                                                                   
                                                                 
                     
extern int gl_func_00000000();
void AudioThread_WaitForAudioTask(void) {
    AudioContext *g = (AudioContext *)&D_00000000 ;
    gl_func_00000000 (g->taskStartQueueP, 0, 1);
}

 



































extern char gAudioContext_275F4[];
int AudioThread_GetLayerSamplesLeft(int a0, int a1, int a2) {
    SequencePlayer *player = &((AudioContext *)gAudioContext_275F4)->seqPlayers[a0];
    SequenceChannel *channel;
    SequenceLayer *layer;
    char *q;     
    char *q2;    
    int flags;
    int end;
    int start;
     



    if (!(*(unsigned int *)player >> 31)) {

        goto ret0;
    }
    channel = player->channels[a1];



    if (!(*(unsigned int *)channel >> 31)) {

        goto ret0;
    }
    layer = channel->layers[a2];
    if (layer == 0) {
        return 0;
    }
    flags = *(int *)layer;



    if (!((unsigned int)flags >> 31)) {

        goto ret0;
    }
    q = (char *)layer->note;
    if (q == 0) {
        return 0;
    }



    if ((flags << 3 << 1) >= 0) {  

        return 0;
    }
    q2 = q;
    if (layer != ((Note *)q)->playbackState.parentLayer) {
        goto ret0b;
    }
    q = (char *)((Note *)q)->sampleState.tunedSample;
    if (q == 0) {
        return 0;
    }
    end = ((TunedSample *)q)->sample->loop->end;
    start = ((Note *)q2)->synthesisState.samplePosInt;
    return end - start;
ret0b:
    return 0;
ret0:
    return 0;
}

 


extern int gl_ref_0003B1AC();
int AudioThread_InitMesgQueues() {
    return gl_ref_0003B1AC();
}

extern int gl_func_00000000();
void Audio_InvalDCache(int a0, int a1) {
    int r = gl_func_00000000(1);  
    gl_func_00000000 (a0, a1);
    gl_func_00000000(r);  
}

                                                                         
                                                                 
                                                                     
                                                        
  
                                                 
                                                                     
                                                                      
                                                                      
      
  
                                                          
                                                                   
                                                                    
                                                                
                                                               
                                                                  
                                                                     
                                                                     
                                                                     
                                                              
                                                                     
                       
                                                                    
                                                            
                                                                    
                                                                 
                                                               
                                                             
                                                                 
                     
extern int gl_func_00000000();
void Audio_WritebackDCache(int a0, int a1) {
    int r1 = gl_func_00000000 (1);  
    gl_func_00000000 (a0, a1);  
    gl_func_00000000 (r1);  
}

 





extern u8 gl_hdwrBugFlag;     
extern u8 gl_hdwrBugFlag_w1;  



extern u8 gl_hdwrBugFlag_w0;
s32 osAiSetNextBuffer(void *bufPtr, u32 size) {
    char *bptr = bufPtr;
    u32 status;

    if (gl_hdwrBugFlag != 0) {
        bptr -= 0x2000;
    }
    if ((((u32)bufPtr + size) & 0x1FFF) == 0) {
        gl_hdwrBugFlag_w1 = 1;
    } else {
        gl_hdwrBugFlag_w0 = 0;
    }
    status = *(volatile u32 *)0xA450000C;
    if (status & 0x80000000) {
        return -1;
    }
    *(volatile u32 *)0xA4500000 = (u32)bptr + 0x80000000;
    *(volatile u32 *)0xA4500004 = size;
    return 0;
}


 





void Audio_InitSampleState(void *note, void *attrs) {
    volatile int x = 0;
}




 







void Audio_NoteSetResamplingRate(char *arg0, f32 arg1) {
  f32 temp_f2;
  int *new_var;
  f32 var_f0;
  char *temp_v0;
  char *temp_v0_2;
  temp_v0 = ((int) arg0) + 0xB0;
  var_f0 = arg1;
  if (arg1 < 2.0f)
  {
    temp_f2 = *((f32 *) (((char *) (&D_00000000)) + 0xFC8));
    temp_v0_2 = ((int) arg0) + 0xB0;
    if (1)
    {



      *((u8 *) (((char *) temp_v0_2) + 0x1)) = (u8) ((*((u8 *) (((char *) temp_v0_2) + 0x1))) & 0xFFFD);

    }
    if (temp_f2 < arg1)
    {
      var_f0 = temp_f2;
    }
    else
    {
      var_f0 = arg1;
    }
  }
  else
  {
    new_var = &D_00000000;



    *((u8 *) (((char *) temp_v0) + 0x1)) = (u8) (((*((u8 *) (((char *) temp_v0) + 0x1))) & 0xFFFF) | 2);

    if ((*((f32 *) (((char *) new_var) + 0xFCC))) < arg1)
    {
      var_f0 = *((f32 *) (((char *) new_var) + 0xFD0));
    }
    else
    {
      var_f0 = arg1 * 0.5f;
    }
  }
  *((s16 *) (((char *) arg0) + 0xBC)) = (s16) ((s32) (var_f0 * 32768.0f));
}

                                                                   
                                                                 
                                                                    
                                                               
                                                  
  
                                  
                                                                      
                          
                                                                      
               
                                                                       
        
                      
                                                                         
                                                                       
                                                                     
                                                                      
                                                                     
                                                                          
                                                                          
      
  
                                                                     
                                                                     
                                                                  
                                                                     
                                                                      
                                                        
                                                                           
                                                                
                                                                    
                                                        
                                                                    
                                                                
                                                                     
                                    
                                                        
 
extern int gl_func_00000000();
 



void Audio_NoteInit(Note *note) {
    SequenceLayer *p = note->playbackState.parentLayer;
    int *tmpl;
    unsigned char f60;
    if (p->adsr.decayIndex == 0) {
        gl_func_00000000 (&note->playbackState.adsr, p->channel->adsr.envelope,
                         &note->playbackState.adsrVolScaleUnused);
    } else {
        gl_func_00000000 (&note->playbackState.adsr, p->adsr.envelope,
                         &note->playbackState.adsrVolScaleUnused);
    }
    f60 = note->playbackState.adsr.action.asByte;
    note->playbackState.unk_04 = 0;



    note->playbackState.adsr.action.asByte = (f60 & 0xFFFF & ~0xF) | 1;

    tmpl = (int *)&D_00000000;
    {
        struct Blk8 { int w[8]; };
        *(struct Blk8 *)&note->sampleState = *(struct Blk8 *)tmpl;
    }
}

 










void Audio_NoteDisable(char *a0) {
    if (((Note *)a0) ->sampleState.needsInit == 1) {
        ((Note *)a0) ->sampleState.needsInit = 0;
    }
    ((Note *)a0) ->playbackState.priority = 0;
    ((volatile NoteSampleState *)&((Note *)a0) ->sampleState)->enabled = 0;
    ((Note *)a0) ->playbackState.unk_04 = 0;
    ((volatile NoteSampleState *)&((Note *)a0) ->sampleState)->finished = 0;
    ((Note *)a0) ->playbackState.parentLayer = (SequenceLayer *)-1;  
    ((Note *)a0) ->playbackState.prevParentLayer = (SequenceLayer *)-1;



    ((Note *)a0) ->playbackState.adsr.action.asByte &= ~0x0F;  

    ((Note *)a0) ->playbackState.adsr.current = 0.0f;
}


 





























 








typedef struct { u32 enabled : 1; u32 finished : 1; u32 muted : 1; u32 rest : 29; } gl_27E24_SeqPlayer;
typedef struct {
    char pad0[3]; u8 muteBehavior; u8 targetReverbVol; char pad5[4]; u8 bookOffset; char padA[2]; u8 gain; char padD[2]; u8 combFilterGain;
    char pad10[0x20 - 0x10]; u16 combFilterSize; char pad22[0x4C - 0x22]; gl_27E24_SeqPlayer *seqPlayer;
    char pad50[0xDC - 0x50]; s16 *filter; Stereo stereo;
} gl_27E24_Channel;
typedef struct gl_27E24_Layer {
    u8 enabled : 1; u8 finished : 1; u8 muted : 1; u8 continuousNotes : 1; u8 bit3 : 1; u8 ignoreDrumPan : 1; u8 bit1 : 1; u8 notePropertiesNeedInit : 1;
    Stereo stereo; char pad2[4]; u8 notePan; char pad7[0x2C - 7]; struct gl_27E24_Note *note; char pad30[0x40 - 0x30];
    f32 noteVelocity; f32 noteFreqScale; char pad48[0x50 - 0x48]; gl_27E24_Channel *channel;
} gl_27E24_Layer;
typedef struct { u8 reverbVol; u8 gain; u8 pan; Stereo stereo; f32 frequency; f32 velocity; char padC[4]; s16 *filter; u8 combFilterGain; char pad15; u16 combFilterSize; } gl_27E24_SampleStateAttrs;
typedef struct { u8 unk0 : 1; u8 hang : 1; u8 decay : 1; u8 release : 1; u8 state : 4; } gl_27E24_AdsrBits;
typedef struct { char pad0[0xC]; char *pool; } gl_27E24_ListItem;
typedef struct {
    u8 priority; char pad1[3]; u8 unk_04; char pad5[3]; f32 portamentoFreqScale; f32 vibratoFreqScale;
    struct gl_27E24_Layer *prevParentLayer; struct gl_27E24_Layer *parentLayer; struct gl_27E24_Layer *wantedParentLayer;
    NoteAttributes attributes;
    struct { union { gl_27E24_AdsrBits s; u8 asByte; } action; char pad1[0xB]; f32 fadeOutVel; } adsr;
    char pad40[0x80 - 0x40];
} gl_27E24_PlaybackState;
typedef struct {
    union {
        struct { u32 enabled : 1; u32 needsInit : 1; u32 finished : 1; u32 unused : 1; u32 stopLoop : 1; u32 hasTwoParts : 1; u32 isSyntheticWave : 1; u32 usesHeadsetPanEffects : 1; u32 rest : 24; } bitField0;
        struct { u32 b0 : 8; u32 reverbIndex : 3; u32 bookOffset : 2; u32 isSyntheticWave : 1; u32 hasTwoParts : 1; u32 useHaasEffect : 1; u32 rest : 16; } bitField1;
    } u;
} gl_27E24_SampleState;
typedef struct gl_27E24_Note {
    gl_27E24_ListItem listItem; char pad10[0x30 - 0x10];
    gl_27E24_PlaybackState playbackState;
    gl_27E24_SampleState sampleState;
    char padB4[0xD0 - 0xB4];
} gl_27E24_Note;
typedef struct { char pad[0x204C]; f32 resampleRate; f32 ticksPerUpdateInv; char pad2054[0x2070 - 0x2054]; s32 numNotes; char pad2074[0x2CFC - 0x2074]; gl_27E24_Note *notes; } gl_27E24_Ctx;
extern gl_27E24_Ctx gAudioContext_27E24;


extern f32 gl_func_00000000_27E24f();
extern void gl_ref_0003BE70();
extern void gl_ref_0003D414();

void Audio_ProcessNotes(void) {
    s32 pad[2];
    NoteAttributes *attrs;
    gl_27E24_SampleState *sampleState2;
    gl_27E24_SampleState *sampleState;
    gl_27E24_Note *note;
    gl_27E24_PlaybackState *playbackState;
    gl_27E24_SampleStateAttrs sampleStateAttrs;
    u8 bookOffset;
    f32 scale;
    s32 i;

    for (i = 0; i < gAudioContext_27E24.numNotes; i++) {
        note = &gAudioContext_27E24.notes[i];
        playbackState = &note->playbackState;
        if (playbackState->parentLayer != ((gl_27E24_Layer *)(-1)) ) {



            if ((u32)playbackState->parentLayer < 0x7FFFFFFF) {

                continue;
            }

            if (note != playbackState->parentLayer->note && playbackState->unk_04 == 0) {
                playbackState->adsr.action.s.release = 1;
                playbackState->adsr.fadeOutVel = gAudioContext_27E24.ticksPerUpdateInv;
                playbackState->priority = 1;
                playbackState->unk_04 = 2;
                goto out;
            } else if (!playbackState->parentLayer->enabled && playbackState->unk_04 == 0 &&
                       playbackState->priority >= 1) {
            } else if (playbackState->parentLayer->channel->seqPlayer == ((void*)0) ) {
                gl_func_00000000 (playbackState->parentLayer->channel);
                playbackState->priority = 1;
                playbackState->unk_04 = 1;
                continue;
            } else if (playbackState->parentLayer->channel->seqPlayer->muted &&
                       (playbackState->parentLayer->channel->muteBehavior & 0x40)) {
            } else {
                goto out;
            }

            gl_func_00000000 (playbackState->parentLayer);
            gl_func_00000000 (&note->listItem);
            gl_ref_0003D414(note->listItem.pool + 0x10, &note->listItem);
            playbackState->priority = 1;
            playbackState->unk_04 = 2;
        } else if (playbackState->unk_04 == 0 && playbackState->priority >= 1) {
            continue;
        }

    out:
        if (playbackState->priority != 0) {
            if (1) {}
            sampleState = &note->sampleState;
            if (playbackState->unk_04 >= 1 || sampleState->u.bitField0.finished) {
                if (playbackState->adsr.action.s.state == 0 || sampleState->u.bitField0.finished) {
                    if (playbackState->wantedParentLayer != ((gl_27E24_Layer *)(-1)) ) {
                        gl_func_00000000 (note);
                        if (playbackState->wantedParentLayer->channel != ((void*)0) ) {
                            gl_func_00000000 (note, playbackState->wantedParentLayer);
                            gl_func_00000000 (note);
                            gl_func_00000000 (note);
                            gl_func_00000000 (&note->listItem);
                            gl_func_00000000 (note->listItem.pool + 0x30, &note->listItem);
                            playbackState->wantedParentLayer = ((gl_27E24_Layer *)(-1)) ;
                        } else {
                            gl_func_00000000 (note);
                            gl_func_00000000 (&note->listItem);
                            gl_func_00000000 (note->listItem.pool, &note->listItem);
                            playbackState->wantedParentLayer = ((gl_27E24_Layer *)(-1)) ;
                            goto skip;
                        }
                    } else {
                        if (playbackState->parentLayer != ((gl_27E24_Layer *)(-1)) ) {
                            playbackState->parentLayer->bit1 = 1;
                        }
                        gl_func_00000000 (note);
                        gl_func_00000000 (&note->listItem);
                        gl_func_00000000 (note->listItem.pool, &note->listItem);
                        goto skip;
                    }
                }
            } else if (playbackState->adsr.action.s.state == 0) {
                if (playbackState->parentLayer != ((gl_27E24_Layer *)(-1)) ) {
                    playbackState->parentLayer->bit1 = 1;
                }
                gl_func_00000000 (note);
                gl_func_00000000 (&note->listItem);
                gl_func_00000000 (note->listItem.pool, &note->listItem);
                goto skip;
            }

            scale = gl_func_00000000_27E24f (&playbackState->adsr);
            gl_func_00000000 (note);
            attrs = &playbackState->attributes;
            if (playbackState->unk_04 == 1 || playbackState->unk_04 == 2) {
                sampleStateAttrs.frequency = attrs->freqScale;
                sampleStateAttrs.velocity = attrs->velocity;
                sampleStateAttrs.pan = attrs->pan;
                sampleStateAttrs.reverbVol = attrs->reverb;
                sampleStateAttrs.stereo = attrs->stereo;
                sampleStateAttrs.gain = attrs->gain;
                sampleStateAttrs.filter = attrs->filter;
                sampleStateAttrs.combFilterGain = attrs->combFilterGain;
                sampleStateAttrs.combFilterSize = attrs->combFilterSize;
                bookOffset = sampleState->u.bitField1.bookOffset;
            } else {
                gl_27E24_Layer *layer = playbackState->parentLayer;
                gl_27E24_Channel *channel = layer->channel;

                sampleStateAttrs.frequency = layer->noteFreqScale;
                sampleStateAttrs.velocity = layer->noteVelocity;
                sampleStateAttrs.pan = layer->notePan;
                if (layer->stereo.asByte == 0) {
                    sampleStateAttrs.stereo = channel->stereo;
                } else {
                    sampleStateAttrs.stereo = layer->stereo;
                }
                sampleStateAttrs.reverbVol = channel->targetReverbVol;
                sampleStateAttrs.gain = channel->gain;
                sampleStateAttrs.filter = channel->filter;
                sampleStateAttrs.combFilterGain = channel->combFilterGain;
                sampleStateAttrs.combFilterSize = channel->combFilterSize;
                bookOffset = channel->bookOffset & 0x7;

                if (channel->seqPlayer->muted && (channel->muteBehavior & 8)) {
                    sampleStateAttrs.frequency = 0.0f;
                    sampleStateAttrs.velocity = 0.0f;
                }
            }

            sampleStateAttrs.frequency *= playbackState->vibratoFreqScale * playbackState->portamentoFreqScale;
            sampleStateAttrs.frequency *= gAudioContext_27E24.resampleRate;
            sampleStateAttrs.velocity *= scale;
            gl_ref_0003BE70(note, &sampleStateAttrs);
            sampleState->u.bitField1.bookOffset = bookOffset;
        skip:;
        }
    }
}


 








typedef struct {
    char pad0;
    unsigned char lo;    
    unsigned char hi;    
    char pad3[5];
    char rec[3][8];      
} Gl2831CRange;
char *Audio_GetInstrumentTunedSample(Gl2831CRange *a0, int a1) {
    char *r;
    if (a1 < a0->lo) {
        r = a0->rec[0];
    } else if (a1 <= a0->hi) {
        r = a0->rec[1];
    } else {
        r = a0->rec[2];
    }
    return r;
}

                                                                                 
                                                                      
                                            
                                                                        
                                                                         
                                                                        
                                                                         
                                                                          
                                                                          
                                                                             
                                                                    
typedef struct {
    unsigned char b0;   
    unsigned char b1;
    unsigned short h2;
    int x4;
    int *tbl;   
    int xC;
    int x10;
} gl_28358_Rec;
extern int gl_func_00000000();
extern int D_00000000;
int Audio_GetInstrumentInner(int a0, int a1) {
    int r;
    gl_28358_Rec *rec;
    int v;
    if (a0 == 0xFF) {
        return 0;
    }
    r = gl_func_00000000 (a0, a1);
    if (r == 0) {
        *(int *)((char *)&D_00000000 + 0x2158) = a0 + 0x10000000;
        return 0;
    }
    rec = (gl_28358_Rec *)(*(int *)((char *)&D_00000000 + 0x2030) + a0 * 0x14);
    if (a1 >= rec->b0) {
        *(int *)((char *)&D_00000000 + 0x2158) = (a0 << 8) + a1 + 0x3000000;
        return 0;
    }
    v = rec->tbl[a1];
    if (v == 0) {
        *(int *)((char *)&D_00000000 + 0x2158) = (a0 << 8) + a1 + 0x1000000;
        return v;
    }
    return v;
}

                                                                      
                                                                      
                                         
                                                                            
                                                                               
                                                                     
                                                                   
                                                                       
                                                                        
typedef struct {
    unsigned char b0;
    unsigned char b1;   
    unsigned short h2;
    int x4;
    int x8;
    int *tbl;   
    int x10;
} gl_2842C_Rec;
extern int gl_func_00000000();
extern int D_00000000;
int Audio_GetDrum(int a0, int a1) {
    int r;
    gl_2842C_Rec *rec;
    int v;
    if (a0 == 0xFF) {
        return 0;
    }
    r = gl_func_00000000 (a0);
    if (r == 0) {
        *(int *)((char *)&D_00000000 + 0x2158) = a0 + 0x10000000;
        return 0;
    }
    rec = (gl_2842C_Rec *)(*(int *)((char *)&D_00000000 + 0x2030) + a0 * 0x14);
    if (a1 >= rec->b1) {
        *(int *)((char *)&D_00000000 + 0x2158) = (a0 << 8) + a1 + 0x4000000;
        return 0;
    }



    if ((unsigned int)rec->tbl < 0x80000000U) {

        return 0;
    }
    v = rec->tbl[a1];
    if (v == 0) {
        *(int *)((char *)&D_00000000 + 0x2158) = (a0 << 8) + a1 + 0x5000000;
    }
    return v;
}

                                                                              
                                                                            
                                                                                
                                                                         
                                                                           
                                                                             
                                                                           
                                                                             
                                                                           
                                                                            
                           
                                                                      
                                                                     
                                                     
                                                                              
typedef struct {
    unsigned char b0;
    unsigned char b1;
    unsigned short h2;
    unsigned short h4;   
    unsigned short h6;
    int x8;
    int xC;
    struct { int w0; int w1; } *tbl;   
} gl_28510_Rec;
extern int gl_func_00000000();
extern int D_00000000;
int Audio_GetSoundEffect(int a0, int a1) {
    int r;
    gl_28510_Rec *rec;
    int *e;
    if (a0 == 0xFF) {
        return 0;
    }
    r = gl_func_00000000 (a0);
    if (r == 0) {
        *(int *)((char *)&D_00000000 + 0x2158) = a0 + 0x10000000;
        return 0;
    }
    rec = (gl_28510_Rec *)(*(int *)((char *)&D_00000000 + 0x2030) + a0 * 0x14);
    if (a1 >= rec->h4) {
        *(int *)((char *)&D_00000000 + 0x2158) = (a0 << 8) + a1 + 0x4000000;
        return 0;
    }



    if ((unsigned int)rec->tbl < 0x80000000U) {

        return 0;
    }
    e = (int *)&rec->tbl[a1];
    if (e == 0) {
        *(int *)((char *)&D_00000000 + 0x2158) = (a0 << 8) + a1 + 0x5000000;
    }
    if (*e == 0) {
        return 0;
    }
    return (int)e;
}

                                                                                
                                                                  
                                              
  
                                                                    
                                                                   
                                                                     
                                                                        
                                                                       
                                                                   
                                                                  
                                                                      
                                                                       
                                                                    
                                                                        
                                                             
                                                                    
                                                                    
                                                                      
                                                                     
                                                                    
                                                                   
                                                             
                                                                    
                                                                    
                                                                 
                                                                     
                                                                    
                                     
  
                                                     
                                                                          
                          
                                                                        
                                                                         
                                                                        
                                                                       
                                                                       
                                                                      
                                                                      
                           
                                                                      
                                                                         
      
  
                                                               
                                                                     
                                                                   
                                                                      
                                                                     
                                                                      
                                                                    
                                                                     
                                                              
                                                              
                                                                  
                             
                                                                      
                                                                   
                                                              
                                                            
 









typedef struct { u32 enabled : 1; u32 finished : 1; u32 muted : 1; u32 rest : 29; } gl_28604_SeqPlayer;
typedef struct { u8 unk0 : 1; u8 hang : 1; u8 decay : 1; u8 release : 1; u8 state : 4; } gl_28604_AdsrBits;
typedef struct {
    char pad0[3]; u8 muteBehavior; u8 targetReverbVol; char pad5; u8 someOtherPriority; char pad7[0xC - 7];
    u8 gain; char padD[2]; u8 combFilterGain; char pad10[0x20 - 0x10]; u16 combFilterSize;
    char pad22[0x4C - 0x22]; gl_28604_SeqPlayer *seqPlayer; char pad50[0x8C - 0x50];
    u8 adsrDecayIndex; u8 adsrSustain; char pad8e[0xDC - 0x8E]; s16 *filter; Stereo stereo;
} gl_28604_Channel;
typedef struct gl_28604_Layer {
    u8 bits0; Stereo stereo; char pad2[4]; u8 notePan; char pad7[0x18 - 7]; u8 adsrDecayIndex;
    char pad19[0x2C - 0x19]; struct gl_28604_Note *note; char pad30[0x40 - 0x30];
    f32 noteVelocity; f32 noteFreqScale; char pad48[0x50 - 0x48]; gl_28604_Channel *channel;
} gl_28604_Layer;
typedef struct gl_28604_Note {
    char pad0[0xC]; char *pool; char pad10[0x30 - 0x10];
    u8 priority; char pad31[3]; u8 unk_04; char pad35[0x40 - 0x35];
    gl_28604_Layer *prevParentLayer; gl_28604_Layer *parentLayer; gl_28604_Layer *wantedParentLayer;
    NoteAttributes attributes;
    union { gl_28604_AdsrBits s; u8 asByte; } action; char pad61[3]; f32 sustain; char pad68[4]; f32 fadeOutVel; f32 current;
    char pad74[0xB0 - 0x74];
    struct { volatile u8 enabled : 1; u8 needsInit : 1; u8 finished : 1; u8 rest : 5; } bitField0;
} gl_28604_Note;



void Audio_SeqLayerDecayRelease(gl_28604_Layer *layer, s32 target) {
    gl_28604_Note *note;
    NoteAttributes *attrs;
    gl_28604_Channel *channel;

    if (layer == ((gl_28604_Layer *)(-1)) ) {
        return;
    }




    layer->bits0 &= ~8;


    if (layer->note == ((void*)0) ) {
        return;
    }

    note = layer->note;
    attrs = &note->attributes;

    if (note->wantedParentLayer == layer) {
        note->wantedParentLayer = ((gl_28604_Layer *)(-1)) ;
    }

    if (note->parentLayer != layer) {
        if (note->parentLayer == ((gl_28604_Layer *)(-1))  && note->wantedParentLayer == ((gl_28604_Layer *)(-1))  &&
            note->prevParentLayer == layer && target != 6) {
            note->fadeOutVel = (*(AudioContext *)&D_00000000 ) .ticksPerUpdateInv;
            note->action.s.release = 1;
        }
        return;
    }

    if (note->action.s.state != 6) {
        attrs->freqScale = layer->noteFreqScale;
        attrs->velocity = layer->noteVelocity;
        attrs->pan = layer->notePan;

        if (layer->channel != ((void*)0) ) {
            channel = layer->channel;
            attrs->reverb = channel->targetReverbVol;
            attrs->gain = channel->gain;
            attrs->filter = channel->filter;
            attrs->combFilterSize = channel->combFilterSize;
            attrs->combFilterGain = channel->combFilterGain;
            if (channel->seqPlayer->muted && (channel->muteBehavior & 8)) {
                note->bitField0.finished = 1;
            }

            if (layer->stereo.asByte == 0) {
                attrs->stereo = channel->stereo;
            } else {
                attrs->stereo = layer->stereo;
            }
            note->priority = channel->someOtherPriority;
        } else {
            attrs->stereo = layer->stereo;
            note->priority = 1;
        }

        note->prevParentLayer = note->parentLayer;
        note->parentLayer = ((gl_28604_Layer *)(-1)) ;
        if (target == 7) {
            note->fadeOutVel = (*(AudioContext *)&D_00000000 ) .ticksPerUpdateInv;
            note->action.s.release = 1;
            note->unk_04 = 2;
        } else {
            note->unk_04 = 1;
            note->action.s.decay = 1;
            if (layer->adsrDecayIndex == 0) {
                note->fadeOutVel = (*(AudioContext *)&D_00000000 ) .adsrDecayTable[layer->channel->adsrDecayIndex];
            } else {
                note->fadeOutVel = (*(AudioContext *)&D_00000000 ) .adsrDecayTable[layer->adsrDecayIndex];
            }
            note->sustain = ((f32)(s32)(layer->channel->adsrSustain) * note->current) / 256.0f;
        }
    }

    if (target == 6) {
        gl_func_00000000 (note);
        gl_func_0003D414(note->pool + 0x10, note);
    }
}



extern int gl_ref_0003CC70();
int Audio_SeqLayerNoteDecay(int a0) {
    return gl_ref_0003CC70(a0, 6);
}

                                                                              
                                                                 
                                                                 
                                                         
  
                                             
                                                                       
                                                                           
  
                                                                    
                                                               
                                                                      
                                                                  
                                                                     
                                                              
                                                           
                                                                     
                                                                     
                                   
                                                                    
                                                                
                                                                   
                                                                     
                                                                 
                                                 
extern int gl_ref_0003CC70();
void Audio_SeqLayerNoteRelease(int a0) {
    gl_ref_0003CC70(a0, 7);
}

 




























extern float kRo_Audio_BuildSyntheticWave_FD4, kRo_Audio_BuildSyntheticWave_FD8, kRo_Audio_BuildSyntheticWave_FDC, kRo_Audio_BuildSyntheticWave_FE0, kRo_Audio_BuildSyntheticWave_FE4, kRo_Audio_BuildSyntheticWave_FE8, kRo_Audio_BuildSyntheticWave_FEC;
extern char D_tbl_288ac;
 








int Audio_BuildSyntheticWave(char *a0, char *a1, int a2)
{
  float f0;
  float f2;
  float f4;
  int v1 = 0;
  if (a2 < 128)
  {
    a2 = 128;
  }
  f0 = *((float *) (a1 + 0x30));
  f2 = f0;
  if ((*((unsigned char *) (a1 + 0x20))) != 0)
  {
    float f12 = *((float *) (a1 + 0x28));
    if (f12 > 0.0f)
    {
      float s = f12 + 1.0f;
      f0 = *((float *) (a1 + 0x30));
      f2 = f2 * s;
    }
  }
  if (f2 < kRo_Audio_BuildSyntheticWave_FD4)
  {
    v1 = 0;
    f2 = kRo_Audio_BuildSyntheticWave_FD8;
  }
  else
    if (f2 < kRo_Audio_BuildSyntheticWave_FDC)
  {
    v1 = 1;
    f2 = kRo_Audio_BuildSyntheticWave_FE0;
  }
  else
    if (f2 < kRo_Audio_BuildSyntheticWave_FE4)
  {
    v1 = 2;
    f2 = kRo_Audio_BuildSyntheticWave_FE8;
  }
  else
  {
    v1 = 3;
    f2 = kRo_Audio_BuildSyntheticWave_FEC;
  }
  f4 = f0 * f2;
  *((float *) (a1 + 0x30)) = f4;
  a0[0x31] = (char) a2;
  a0[0x32] = (char) v1;
  *((int *) (a0 + 0xC0)) = (*((int *) ((((char *) (&D_tbl_288ac)) + (a2 * 4)) - (0x200 & 0xFFFF)))) + (v1 << 7);
  return v1;
}


 



extern int gl_func_0003CF18();
 



 
void Audio_InitSyntheticWave(Note *note, SequenceLayer *layer) {
    int v1;
    int rv;
    int sel = layer->instOrWave;
    if (sel == 255) {
        sel = layer->channel->instOrWave;
    }
    v1 = note->playbackState.harmonicIndex;
    rv = gl_func_0003CF18(note, layer, sel);
    if (rv != v1) {
        note->sampleState.harmonicIndexCurAndPrev = (rv << 2) + v1;
    }
}

 
void Audio_InitNoteList(AudioListItem *list) {
    list->prev = list;
    list->next = list;
    list->u.value = ((void*)0) ;
}

 



extern void gl_func_0003D074();
void Audio_InitNoteLists(NotePool *pool) {
    gl_func_0003D074(&pool->disabled);  
    gl_func_0003D074(&pool->decaying);
    gl_func_0003D074(&pool->releasing);
    gl_func_0003D074(&pool->active);
    pool->disabled.pool = pool;
    pool->decaying.pool = pool;
    pool->releasing.pool = pool;
    pool->active.pool = pool;
}

 


 

void Audio_InitNoteFreeList(void) {
}

                                                                        
                                                                  
                                                                    
  
                                                                             
                                      
                                                                      
                 
                      
                                                                   
                                          
                                          
                                          
                                          
        
                                                                     
      
  
                                                                  
                                                                    
                                                                     
                                                                                 
                                                                      
                                                                    
                                                                  
                                                                
                                                             
                                                                  
                                                                     
                                                              
                                                            
 



typedef struct gl_28B0C_ListItem { struct gl_28B0C_ListItem *prev; struct gl_28B0C_ListItem *next; void *u; void *pool; } gl_28B0C_ListItem;
typedef struct { gl_28B0C_ListItem disabled; gl_28B0C_ListItem decaying; gl_28B0C_ListItem releasing; gl_28B0C_ListItem active; } gl_28B0C_NotePool;
typedef struct { char pad[0x5378]; gl_28B0C_NotePool noteFreeLists; } gl_28B0C_Ctx;
extern gl_28B0C_Ctx gAudioContext_28B0C;

void Audio_NotePoolClear(gl_28B0C_NotePool *pool) {
    s32 i;
    gl_28B0C_ListItem *source;
    gl_28B0C_ListItem *cur;
    gl_28B0C_ListItem *dest;

    for (i = 0; i < 4; i++) {
        switch (i) {
            case 0:
                source = &pool->disabled;
                dest = &gAudioContext_28B0C.noteFreeLists.disabled;
                break;
            case 1:
                source = &pool->decaying;
                dest = &gAudioContext_28B0C.noteFreeLists.decaying;
                break;
            case 2:
                source = &pool->releasing;
                dest = &gAudioContext_28B0C.noteFreeLists.releasing;
                break;
            case 3:
                source = &pool->active;
                dest = &gAudioContext_28B0C.noteFreeLists.active;
                break;
        }

        while (1) {
            cur = source->next;
            if (cur == source || cur == ((void*)0) ) {
                break;
            }
            gl_func_00000000 (cur);
            gl_func_00000000 (dest, cur);
        }
    }
}

                                                                            
                                                                             
                                                                    
                                                                            
                                                                            
                                                              
                                         
extern int gl_func_00000000();
void Audio_NotePoolFill(int a0, int n) {
    char *s5 = (char *)a0;
    char *g = (char *)&D_00000000;
    int s4;
    char *s1, *s2;
    int s0;

    gl_func_00000000 (a0);
    s4 = 0;
    s0 = 0;
    while (s0 < n) {
        if (s4 == 4) return;
        switch (s4) {
        case 0: s1 = g + 21368; s2 = s5; break;
        case 1: s1 = g + 21384; s2 = s5 + 16; break;
        case 2: s1 = g + 21400; s2 = s5 + 32; break;
        case 3: s1 = g + 21416; s2 = s5 + 48; break;
        }
        while (s0 < n) {
            int v = gl_func_00000000 (s1);
            if (v == 0) break;
            gl_func_00000000 (s2, v);
            s0++;
        }
        s4++;
    }
}

void Audio_AudioListPushFront(int *a0, int *a1) {
    if (*a1 != 0) {
        return;
    }
    *a1 = (int)a0;
    a1[1] = a0[1];
    *(int *)a0[1] = (int)a1;
    a0[1] = (int)a1;
    a0[2] = a0[2] + 1;
    a1[3] = a0[3];
}

void Audio_AudioListRemove(int **a0) {
    int *p = a0[0];
    if (p != 0) {
        p[1] = (int)a0[1];
        *(int **)a0[1] = a0[0];
        a0[0] = 0;
    }
}

 





















typedef struct PrioObj28E14 { char pad_0[0x30]; unsigned char prio; } PrioObj28E14;
typedef struct PrioNode28E14 {
    int w_0;
    struct PrioNode28E14 *next;
    PrioObj28E14 *obj;
} PrioNode28E14;

PrioObj28E14 *Audio_FindNodeWithPrioLessThan(PrioNode28E14 *head, int lim) {
    PrioNode28E14 *cur = head->next;
    PrioNode28E14 *pos;
    PrioObj28E14 *obj;
    if (cur == head) {
        return 0;
    }
    pos = cur;
    while (cur != head) {
        if (pos->obj->prio >= cur->obj->prio) {
            pos = cur;
        }
        cur = cur->next;
    }
    if (pos == 0) {
        return 0;
    }
    obj = pos->obj;
    if (obj->prio >= lim) {
        return 0;
    }
    return obj;
}

                                                                                         
                                                                                
                                                                               
                                                                        
                                                                            
                                                                              
                                                                               
                                                                                
  
                                                
                                                                     
                                                                       
                      
                                                                       
                                                                       
                                                                         
                                                                         
                                                                         
                      
                                                                        
                                                    
                                                
      
  
                                                                   
                                                                  
                                                                    
                                                                       
                                                                 
                                                               
                                                                      
                                                                  
                                                                 
                                                       
                                                                             
                                    
 





extern int gl_func_0003C36C();
extern int gl_func_0003CF18();


void Audio_NoteInitForLayer(char *obj, char *d) {
    NoteSampleState *xf;
    NotePlaybackState *b30;
    char pad[12];
    int id;
    b30 = &((Note *)obj) ->playbackState;
    xf = &((Note *)obj) ->sampleState;
    ((Note *)obj) ->playbackState.prevParentLayer = (SequenceLayer *)-1;  
    ((Note *)obj) ->playbackState.parentLayer = ((SequenceLayer *)d) ;
    b30->priority = ((SequenceLayer *)d) ->channel->notePriority;
    ((SequenceLayer *)d) ->note = ((Note *)obj) ;
    ((SequenceLayer *)d) ->notePropertiesNeedInit = 1;
    ((SequenceLayer *)d) ->bit3 = 1;
    ((SequenceLayer *)d) ->channel->noteUnused = ((Note *)obj) ;
    ((SequenceLayer *)d) ->channel->layerUnused = ((SequenceLayer *)d) ;
    ((SequenceLayer *)d) ->noteVelocity = 0.0f;
    gl_func_0003C36C(obj, d);
    id = ((SequenceLayer *)d) ->instOrWave;
    if (id == 0xFF) {
        id = ((SequenceLayer *)d) ->channel->instOrWave;
    }
    xf->tunedSample = ((SequenceLayer *)d) ->tunedSample;
    if (id >= 128 && id < 192) {
        xf->isSyntheticWave = 1;
    } else {
        xf->isSyntheticWave = 0;
    }
    if (xf->isSyntheticWave) {
        gl_func_0003CF18(obj, d, id);
    }
    b30->fontId = ((SequenceLayer *)d) ->channel->fontId;
    b30->stereoHeadsetEffects = ((SequenceLayer *)d) ->channel->stereoHeadsetEffects;
    xf->reverbIndex = ((SequenceLayer *)d) ->channel->reverbIndex & 3;
}



void Audio_NoteInterTrack(int *a0, int a1) {
    volatile int **vp0 = (volatile int **)&a0;
    volatile int *vp1 = (volatile int *)&a1;
    gl_func_00000000 (a0[0x44/4]);
    a0[0x48/4] = a1;
    (void)vp0;
    (void)vp1;
}

 






typedef struct { char pad0[5]; unsigned char b5; } Gl29000Sub;
typedef struct {
    char pad0[0x30];
    unsigned char b30;           
    char pad1[0x48 - 0x31];
    void *w48;                   
    char pad2[0x50 - 0x4C];
    Gl29000Sub *w50;             
    char pad3[0x60 - 0x54];
    unsigned int f60_0 : 3;      
    unsigned int f60_3 : 1;      
    unsigned int f60_rest : 28;
    char pad4[0x6C - 0x64];
    float f6C;                   
} Gl29000Obj;
void Audio_NoteReleaseAndTakeOwnership(Gl29000Obj *a0, Gl29000Obj *a1) {
    a0->w48 = a1;
    a0->b30 = a1->w50->b5;
    a0->f6C = (*(AudioContext *)&D_00000000 ) .ticksPerUpdateInv;
    a0->f60_3 = 1;
}

int Audio_AllocNoteFromDisabled(char *a0, int a1) {
    int r = gl_func_00000000 (a0, a1);
    if (r == 0) goto end;
    gl_func_00000000 (r, a1);
    gl_ref_0003D414(a0 + 0x30, r);
end:
    return r;
}

 



extern int gl_func_0003D66C();
int Audio_AllocNoteFromDecaying(int a0, int a1) {
    int v0 = gl_func_00000000 (a0 + 0x10, a1);
    if (v0 == 0) goto end;
    gl_func_0003D66C(v0, a1);   
    gl_func_00000000 (a0 + 0x20, v0);
end:
    return v0;
}

 












extern int gl_func_00000000();
extern int gl_ref_0003D480();
extern int gl_ref_0003D638();
 



int Audio_AllocNoteFromActive(char *a0, char *a1) {
    char *v1;
    int pad;
    int t3;
    int t2;
    char *p20;
    t2 = 16; t3 = 16;

    { int k = ((SequenceLayer *)(a1)) ->channel->notePriority;
    v1 = (char *)gl_ref_0003D480(p20 = a0 + 0x20, k); }
    if (v1 != 0) {
        t3 = ((Note *)(v1)) ->playbackState.priority;
    }
    a0 = (char *)gl_ref_0003D480(a0 + 0x30, ((SequenceLayer *)(a1)) ->channel->notePriority);
    if (a0 != 0) {
        t2 = ((Note *)(a0)) ->playbackState.priority;
    }
    if (v1 == 0 && a0 == 0) {
        return 0;
    }
    if (t2 < t3) {
        gl_func_00000000 (a0);
        gl_ref_0003D638(a0, a1);
        gl_func_00000000 (p20, a0);
        ((Note *)(a0)) ->playbackState.priority = ((SequenceLayer *)(a1)) ->channel->notePriority;
        return (int)a0;
    }
    ((Note *)(v1)) ->playbackState.wantedParentLayer = ((SequenceLayer *)(a1)) ;
    ((Note *)(v1)) ->playbackState.priority = ((SequenceLayer *)(a1)) ->channel->notePriority;
    return (int)v1;
}



                                                                     
                                                                  
                                                    
                                 
  
                                   
                          
                                                                       
                                                                    
                            
                                                                         
                                                                        
                                                                         
                                                                     
                                                                         
                                                                         
                                                                          
          
      
  
                                                               
                                                                            
                                                                   
                                                             
                                                                                
                                                                      
                                                                       
                                    
                                                                                     
                                    
                                                                
                                                                 
                                                                  
                                                 
                                       
                                                                 
                                                                         
                                                                    
                                                                           
                                                                       
                                                                             
                                                                         
                                                                          
                                                                         
                                                                         
                                                                
                                                                        
                                                                            
                                                                            
                                                        
                                                                          
                                                                             
                                                                      
                                                                   
                                                                         
                                                                     
                                                                       
                                                                         
                                                                      
                                                                     
                                                                           
extern int gl_func_00000000();
extern int gl_ref_0003D66C();
extern char *gl_ref_0003D698();
extern char *gl_ref_0003D6E4();
extern char *gl_ref_0003D734();
 








typedef struct gl_291C0_SeqPlayer { char pad[0x9C]; NotePool notePool; } gl_291C0_SeqPlayer;
typedef struct gl_291C0_Channel { u8 b0; u8 b1; u8 noteAllocPolicy; char pad3[0x4C - 3]; gl_291C0_SeqPlayer *seqPlayer; char pad50[0x94 - 0x50]; NotePool notePool; } gl_291C0_Channel;
typedef struct gl_291C0_Layer { u8 enabled : 1; u8 finished : 1; u8 stopSomething : 1; u8 continuousNotes : 1; u8 bit3 : 1; char pad1[0x2C - 1]; struct gl_291C0_Note *note; char pad30[0x50 - 0x30]; gl_291C0_Channel *channel; } gl_291C0_Layer;
typedef struct { char pad[0x30]; gl_291C0_Layer *prevParentLayer; gl_291C0_Layer *parentLayer; gl_291C0_Layer *wantedParentLayer; } gl_291C0_PlaybackState;
typedef struct gl_291C0_Note { AudioListItem listItem; gl_291C0_PlaybackState playbackState; } gl_291C0_Note;








gl_291C0_Note *Audio_AllocNote(gl_291C0_Layer *layer) {
    gl_291C0_Note *note;
    u32 policy = layer->channel->noteAllocPolicy;

    if (policy & 1) {
        note = layer->note;
        if (note != ((void*)0)  && note->playbackState.prevParentLayer == layer &&
            note->playbackState.wantedParentLayer == ((gl_291C0_Layer *)(-1)) ) {
            gl_ref_0003D66C (note, layer);
            gl_func_00000000  (&note->listItem);
            gl_func_00000000  (&note->listItem.pool->releasing, &note->listItem);
            return note;
        }
    }

    if (policy & 2) {
        if (!(note = (gl_291C0_Note *)gl_ref_0003D698 (&layer->channel->notePool, layer)) &&
            !(note = (gl_291C0_Note *)gl_ref_0003D6E4 (&layer->channel->notePool, layer)) &&
            !(note = (gl_291C0_Note *)gl_ref_0003D734 (&layer->channel->notePool, layer))) {
            goto null_return;
        }
        return note;
    }

    if (policy & 4) {
        if (!(note = (gl_291C0_Note *)gl_ref_0003D698 (&layer->channel->notePool, layer)) &&
            !(note = (gl_291C0_Note *)gl_ref_0003D698 (&layer->channel->seqPlayer->notePool, layer)) &&
            !(note = (gl_291C0_Note *)gl_ref_0003D6E4 (&layer->channel->notePool, layer)) &&
            !(note = (gl_291C0_Note *)gl_ref_0003D6E4 (&layer->channel->seqPlayer->notePool, layer)) &&
            !(note = (gl_291C0_Note *)gl_ref_0003D734 (&layer->channel->notePool, layer)) &&
            !(note = (gl_291C0_Note *)gl_ref_0003D734 (&layer->channel->seqPlayer->notePool, layer))) {
            goto null_return;
        }
        return note;
    }

    if (policy & 8) {
        if (!(note = (gl_291C0_Note *)gl_ref_0003D698 (&(*(AudioContext *)&D_00000000 ) .noteFreeLists, layer)) &&
            !(note = (gl_291C0_Note *)gl_ref_0003D6E4 (&(*(AudioContext *)&D_00000000 ) .noteFreeLists, layer)) &&
            !(note = (gl_291C0_Note *)gl_ref_0003D734 (&(*(AudioContext *)&D_00000000 ) .noteFreeLists, layer))) {
            goto null_return;
        }
        return note;
    }

    if (!(note = (gl_291C0_Note *)gl_ref_0003D698 (&layer->channel->notePool, layer)) &&
        !(note = (gl_291C0_Note *)gl_ref_0003D698 (&layer->channel->seqPlayer->notePool, layer)) &&
        !(note = (gl_291C0_Note *)gl_ref_0003D698 (&(*(AudioContext *)&D_00000000 ) .noteFreeLists, layer)) &&
        !(note = (gl_291C0_Note *)gl_ref_0003D6E4 (&layer->channel->notePool, layer)) &&
        !(note = (gl_291C0_Note *)gl_ref_0003D6E4 (&layer->channel->seqPlayer->notePool, layer)) &&
        !(note = (gl_291C0_Note *)gl_ref_0003D6E4 (&(*(AudioContext *)&D_00000000 ) .noteFreeLists, layer)) &&
        !(note = (gl_291C0_Note *)gl_ref_0003D734 (&layer->channel->notePool, layer)) &&
        !(note = (gl_291C0_Note *)gl_ref_0003D734 (&layer->channel->seqPlayer->notePool, layer)) &&
        !(note = (gl_291C0_Note *)gl_ref_0003D734 (&(*(AudioContext *)&D_00000000 ) .noteFreeLists, layer))) {
        goto null_return;
    }
    return note;

null_return:
    layer->bit3 = 1;
    return ((void*)0) ;
}









 








extern int gl_func_00000000();
extern gl_1CC98_Elem D_197a4_29494;
void Audio_NoteInitAll(void) {
    int i;
    gl_1CC98_Rec *r;
    for (i = 0; i < gAudioContext_345c0_1CC98.count; i++) {
        r = &gAudioContext_345c0_1CC98.recs[i];
        r->e = D_197a4_29494;
        r->b30 = 0;
        r->b34 = 0;
        *(int *)&r->elem = -1;
        r->w48 = -1;
        r->w40 = -1;
        r->b31 = 0;
        r->f58 = 0.0f;
        r->h36 = 0;
        r->b60 = 0;
        r->bA0 = 0;
        r->h82 = 0;
        r->h84 = 0;
        r->b35 = 0;
        r->w1C = gl_func_00000000 (gAudioContext_345c0_1CC98.tbl2198, 0x1C0);
    }
}

 






typedef char *(*GP_000295BC)();
typedef struct { unsigned b0:8; int f80:1; unsigned rest:23; } BF1_000295BC;
 















typedef struct { unsigned p0:2; unsigned b29:1; unsigned rest:29; } BF_000295BC;



 






void Audio_SequenceChannelProcessSound(char *arg0, s32 arg1, s32 arg2) {
    f32 var_f0;
    f32 var_f0_2;
    s32 b;
    char *temp_v0;
    char *temp_v1;

    if (((((*(int *)((char *)(arg0) + ( 0x0)))  << 8 << 1) < 0) ) || (arg1 != 0)) {
        temp_v0 = (char *)((SequenceChannel *)arg0) ->seqPlayer;
        var_f0 = (((SequenceChannel *)arg0) ->volume * ((SequenceChannel *)arg0) ->volumeScale) * ((SequencePlayer *)temp_v0)->appliedFadeVolume;
        if ((((BF_000295BC *)temp_v0)->b29) && (((SequenceChannel *)arg0) ->muteBehavior & 0x20)) {
            var_f0 = ((SequencePlayer *)temp_v0)->muteVolumeScale * var_f0;
        }
        ((SequenceChannel *)arg0) ->appliedVolume = var_f0 * var_f0;
    }
    if ((((*(int *)((char *)(arg0) + ( 0x0)))  << 9 << 1) < 0) ) {
        ((SequenceChannel *)arg0) ->pan = ((SequenceChannel *)arg0) ->newPan * ((SequenceChannel *)arg0) ->panChannelWeight;
    }
    var_f0_2 = ((SequenceChannel *)arg0) ->freqScale;
    if (arg2 != 0) {
        var_f0_2 *= ((SequenceChannel *)arg0) ->seqPlayer->bend;
        (*(u8 *)((char *)(arg0) + 0x1))  = ((*(u8 *)((char *)(arg0) + 0x1))  & 0xFF) | 0x80 ;
    }
    for (arg2 = 0; arg2 != 0x20; arg2 += 4) {
        temp_v1 = (char *)((SequenceChannel *)(arg0 + arg2))->layers[0];  
        if ((temp_v1 != 0) && ((SequenceLayer *)temp_v1) ->enabled && (((SequenceLayer *)temp_v1) ->note != 0)) {
            b = *(u8*)temp_v1;



            if (b & 1) {

                ((SequenceLayer *)temp_v1) ->noteFreqScale = ((SequenceLayer *)temp_v1) ->freqScale * var_f0_2;
                ((SequenceLayer *)temp_v1) ->noteVelocity = ((SequenceLayer *)temp_v1) ->velocitySquare * ((SequenceChannel *)arg0) ->appliedVolume;
                ((SequenceLayer *)temp_v1) ->notePan = (s32) ((((SequenceLayer *)temp_v1) ->pan * (0x80 - ((SequenceChannel *)arg0) ->panChannelWeight)) + *(int *)&((SequenceChannel *)arg0) ->pan) >> 7;



                *(u8*)temp_v1 = b & 0xFFFE;

            } else {
                if ((((BF1_000295BC *)(arg0))->f80) ) {
                    ((SequenceLayer *)temp_v1) ->noteFreqScale = ((SequenceLayer *)temp_v1) ->freqScale * var_f0_2;
                }
                if (((((*(int *)((char *)(arg0) + ( 0x0)))  << 8 << 1) < 0) ) || (arg1 != 0)) {
                    ((SequenceLayer *)temp_v1) ->noteVelocity = ((SequenceLayer *)temp_v1) ->velocitySquare * ((SequenceChannel *)arg0) ->appliedVolume;
                }
                if (((((*(int *)((char *)(arg0) + ( 0x0)))  << 9 << 1) < 0) )) {
                    ((SequenceLayer *)temp_v1) ->notePan = (s32) ((((SequenceLayer *)temp_v1) ->pan * (0x80 - ((SequenceChannel *)arg0) ->panChannelWeight)) + *(int *)&((SequenceChannel *)arg0) ->pan) >> 7;
                }
            }
        }
    }
    (*(u8 *)((char *)(arg0) + 0x1))  = 0;
}



                                                                                      
                                                                 
                                                                     
                                                      
  
                                                    
                                                                         
                          
                                    
                                                                         
                                                                   
                                                                      
                                                                         
                       
                         
                 
                                                                           
                                                                       
          
                                                                         
        
      
  
                                                                   
                                                                      
                                                                      
                                                                    
                                                             
                                                                 
                                                                    
                                                                 
                                                        
                                                             
                                                                   
                                                                     
                                                             
                                                                 
                                       
 













typedef struct { unsigned int pad:5; unsigned int f4:1; unsigned int p25:1; unsigned int f1:1; unsigned int rest:24; } Fl_2978C;
extern int gl_ref_0003DC30();

void Audio_SequencePlayerProcessSound(char *obj) {
    char *p;
    int s0;

    if (((SequencePlayer *)obj) ->fadeTimer != 0) {
        ((SequencePlayer *)obj) ->fadeVolume += ((SequencePlayer *)obj) ->fadeVelocity;
        ((Fl_2978C *)obj)->f4 = 1;
        if (1.0f < ((SequencePlayer *)obj) ->fadeVolume) {
            ((SequencePlayer *)obj) ->fadeVolume = 1.0f;
        }
        if (((SequencePlayer *)obj) ->fadeVolume < 0.0f) {
            ((SequencePlayer *)obj) ->fadeVolume = 0.0f;
        }
        ((SequencePlayer *)obj) ->fadeTimer = ((SequencePlayer *)obj) ->fadeTimer - 1;
        if (((SequencePlayer *)obj) ->fadeTimer == 0 && ((SequencePlayer *)obj) ->state == 2) {
            gl_func_00000000 (obj);
            return;
        }
    }
    if (((Fl_2978C *)obj)->f4) {
        ((SequencePlayer *)obj) ->appliedFadeVolume = ((SequencePlayer *)obj) ->fadeVolume * ((SequencePlayer *)obj) ->fadeVolumeScale;
    }
    for (s0 = 0, p = obj; s0 != 64; s0 += 4) {
        char *e = (char *)((SequencePlayer *)p)->channels[0];  



        if (((unsigned)*(int *)e >> 31) == 1) {

            gl_ref_0003DC30(e, ((Fl_2978C *)obj)->f4, ((Fl_2978C *)obj)->f1);
        }
        p += 4;
    }
    ((Fl_2978C *)obj)->f4 = 0;
}


 


















float Audio_GetPortamentoFreqScale(void *a0) {
    unsigned short *h = (unsigned short *)a0;
    int v = h[2] + h[1];
    h[1] = (unsigned short)v;
    v = (v >> 8) & 0xFF;
    if ((unsigned int)v >= 127) {
        v = 127;
        *(char *)a0 = 0;
    }
    {
        float r = ((Portamento *)a0)->extent
                  * (*(float *)((short *)&D_00000000 + 0x100 + (v << 1)) - 1.0f) + 1.0f;
        return r;
    }
}

 



int Audio_GetVibratoPitchChange(int *a0) {
  int idx = (((unsigned int)(a0[1] += (int)((VibratoState *)a0)->rate)) >> 10) & 0x3F;
  return (short)(((short *)a0[2])[idx] >> 8);
}


                                                                               
                                                                  
                                                           
  
                                             
                                                                       
                        
                                                                      
             
                                                                       
                              
                                          
                                                                        
                                                                     
                                                                      
                              
                                                                      
                                             
        
      
  
                                                                 
                                                                    
                                                                  
                                                                     
                                                                      
                                                              
                                                             
                                                                    
                                                             
                                                                      
                                                                     
                                                               
                                                              
                                                 
 




typedef struct {
    char pad0[0x14]; u16 vibratoRateTarget; u16 vibratoExtentTarget; u16 vibratoRateChangeDelay;
    u16 vibratoExtentChangeDelay;
} gl_29978_SequenceChannel;
typedef struct {
    gl_29978_SequenceChannel *seqChannel; u32 time; s16 *curve; f32 extent; f32 rate; u8 active; char pad15;
    u16 rateChangeTimer; u16 extentChangeTimer; u16 delay;
} gl_29978_VibratoState;
extern s32 gl_ref_0003DFA0(gl_29978_VibratoState *);
extern f32 gl_29978_gPitchBendFrequencyScale[];




f32 Audio_GetVibratoFreqScale(gl_29978_VibratoState *vib) {
    s32 pitchChange;
    f32 extent;
    f32 result;
    gl_29978_SequenceChannel *channel = vib->seqChannel;

    if (vib->delay != 0) {
        vib->delay--;
        return 1;
    }

    if (channel != ((gl_29978_SequenceChannel *)-1) ) {
        if (vib->extentChangeTimer) {
            if (vib->extentChangeTimer == 1) {
                vib->extent = (s32)channel->vibratoExtentTarget;
            } else {
                vib->extent +=
                    ((s32)channel->vibratoExtentTarget - vib->extent) / (s32)vib->extentChangeTimer;
            }

            vib->extentChangeTimer--;
        } else if (channel->vibratoExtentTarget != (s32)vib->extent) {
            if ((vib->extentChangeTimer = channel->vibratoExtentChangeDelay) == 0) {
                vib->extent = (s32)channel->vibratoExtentTarget;
            }
        }

        if (vib->rateChangeTimer) {
            if (vib->rateChangeTimer == 1) {
                vib->rate = (s32)channel->vibratoRateTarget;
            } else {
                vib->rate += ((s32)channel->vibratoRateTarget - vib->rate) / (s32)vib->rateChangeTimer;
            }

            vib->rateChangeTimer--;
        } else if (channel->vibratoRateTarget != (s32)vib->rate) {
            if ((vib->rateChangeTimer = channel->vibratoRateChangeDelay) == 0) {
                vib->rate = (s32)channel->vibratoRateTarget;
            }
        }
    }

    if (vib->extent == 0) {
        return 1.0f;
    }

    pitchChange = gl_ref_0003DFA0 (vib);
    extent = (f32)vib->extent / 4096.0f;

    result = 1.0f + extent * (gl_29978_gPitchBendFrequencyScale [pitchChange + 128] - 1.0f);
    return result;
}

                                                                           
                                                                 
                                                                     
                                                 
                                                                  
                                                                
                          
  
                                           
                           
                                                                      
                                                                         
                           
                                                                       
                                                                         
      
  
                                                                   
                                                                 
                                                                   
                                                           
                                                                   
                                                             
                                                              
                                                           
                                                                   
                                                            
                                                                       
                                                                       
                                                              
                                                                 
                                                            
                                                                  
                                                                
                  
                                                                          
                                                                                
                                                                                
                                                                               
                                                                               
                                                                               
                                                                           
                                               
extern float gl_ref_00029B6C_3DF44();
extern float gl_ref_00029B6C_3DFE4();
void Audio_NoteVibratoUpdate(Note *note) {
    if (note->playbackState.portamento.mode != 0) {
        note->playbackState.portamentoFreqScale = gl_ref_00029B6C_3DF44(&note->playbackState.portamento);
    }
    if (note->playbackState.vibratoState.active != 0) {
        note->playbackState.vibratoFreqScale = gl_ref_00029B6C_3DFE4(&note->playbackState.vibratoState);
    }
}





typedef char *(*GP_00029BC8)();
void Audio_NoteVibratoInit(char *arg0) {
    u16 temp_a1;
    u16 temp_a1_2;
    char *temp_t9;
    char *var_v0;

    *(u8*)((char*)arg0 + 0xA0) = 1;
    (*(int *)((char *)(arg0) + ( 0x90)))  = 0;
    *(f32*)((char*)arg0 + 0x3C) = 1.0f;
    (*(int *)((char *)(arg0) + ( 0x94)))  = *(s32*)((char*)&D_00000000 + 8);
    temp_t9 = (*(int *)((char *)((*(int *)((char *)(arg0) + ( 0x44)))) + ( 0x50))) ;
    (*(int *)((char *)(arg0) + ( 0x8C)))  = temp_t9;
    temp_a1 = *(u16*)((char*)temp_t9 + 0x1A);
    *(s16*)((char*)arg0 + 0xA4) = temp_a1;
    if (temp_a1 == 0) {
        var_v0 = (int)arg0 + 0x8C;
        *(f32*)((char*)var_v0 + 0xC) = (f32)(s32)*(u16*)((char*)temp_t9 + 0x16);
    } else {
        var_v0 = (int)arg0 + 0x8C;
        *(f32*)((char*)var_v0 + 0xC) = (f32)(s32)*(u16*)((char*)temp_t9 + 0x12);
    }
    temp_a1_2 = *(u16*)((char*)temp_t9 + 0x18);
    *(s16*)((char*)var_v0 + 0x16) = temp_a1_2;
    if (temp_a1_2 == 0) {
        *(f32*)((char*)var_v0 + 0x10) = (f32)(s32)*(u16*)((char*)temp_t9 + 0x14);
    } else {
        *(f32*)((char*)var_v0 + 0x10) = (f32)(s32)*(u16*)((char*)temp_t9 + 0x10);
    }
    *(s16*)((char*)var_v0 + 0x1A) = *(u16*)((char*)temp_t9 + 0x1C);
}




 












 






void Audio_NotePortamentoInit(Note *note) {
    note->playbackState.portamentoFreqScale = 1.0f;
    note->playbackState.portamento = note->playbackState.parentLayer->portamento;
}

void Audio_AdsrInit(AdsrState *adsr, AdsrEnvelope *envelope, s16 *volOut) {
    adsr->action.asByte = 0;
    adsr->delay = 0;
    adsr->envelope = envelope;
    adsr->sustain = 0.0f;
    adsr->current = 0.0f;
}

 












float Audio_AdsrUpdate(void *p) {
    volatile float ret = 0.0f;
    if (p != 0) {
        ret = 1.0f;
    }
    return ret;
}


 








extern int gl_ref_0003F010();
extern int gl_ref_0003F024();
extern unsigned char D_2A014_table[];
int AudioSeq_GetScriptControlFlowArgument(int a0, unsigned char a1) {
    int v1 = 0;
    int v;
    v = (D_2A014_table - 0xB0)[a1];
    if (((unsigned short)v & 3) == 1) {
        if ((v & 0x80) == 0) {
            v1 = gl_ref_0003F010(a0) & 0xFFFF;
        } else {
            v1 = gl_ref_0003F024(a0) & 0xFFFF;
        }
    }
    return v1;
}

                                                                                     
                                                                                           
                                                                          
                                                                        
                                                                          
                                                                         
                                                                         
                                                                       
                                                                         
                                                                         
                                                                   
                                                                          
                                                                      
                                                                        
                                                                         
                                                                              
 






s32 AudioSeq_HandleScriptFlowControl(void *seqPlayer, void *state, s32 cmd, s32 cmdArg) {
    volatile int x = 0;
    return 0;
}


                                                                                 
                                                                         
                                                                       
                                                  
                                                                  
                                                
  
                                    
                                                                         
                         
                                                                        
                                                                         
                    
                                                                      
                                                                      
                                                                          
                       
                                                           
      
  
                                                                 
                                                           
                                                                  
                                                                    
                                                                 
                                                                     
                                                      
                                                        
                                                                 
                                                                   
                                                                            
                                                                   
                                                                 
                                                                  
                                           
                                       
 




extern int D_00000000;
extern int D_2A260_deflt;  


 












void AudioSeq_InitSequenceChannel(char *obj) {
    unsigned char *p;
    int c, i;
    char *v1;

    if (obj == (char *)&(*(AudioContext *)&D_00000000 ) .sequenceChannelNone) {
        return;
    }
    p = (unsigned char *)obj;
    *p &= ~0x80;
    *p &= 0xBF;
    *p &= 0xDF;
    *p &= 0xEF;
    *p &= 0xF7;
    *p &= 0xFB;
    ((SequenceChannel *)obj) ->transposition = 0;
    *p &= 0xFD;
    ((SequenceChannel *)obj) ->bookOffset = 0;
    ((SequenceChannel *)obj) ->stereo.asByte = 0;
    *(unsigned char *)(obj + 1) = 255;    

    ((SequenceChannel *)obj) ->scriptState.depth = 0;
    ((SequenceChannel *)obj) ->newPan = 64;
    ((SequenceChannel *)obj) ->panChannelWeight = 128;
    ((SequenceChannel *)obj) ->velocityRandomVariance = 0;
    ((SequenceChannel *)obj) ->gateTimeRandomVariance = 0;
    ((SequenceChannel *)obj) ->noteUnused = 0;
    ((SequenceChannel *)obj) ->reverbIndex = 0;
    ((SequenceChannel *)obj) ->targetReverbVol = 0;
    ((SequenceChannel *)obj) ->gain = 0;
    ((SequenceChannel *)obj) ->notePriority = 3;
    ((SequenceChannel *)obj) ->someOtherPriority = 1;
    ((SequenceChannel *)obj) ->delay = 0;
    ((SequenceChannel *)obj) ->adsr.envelope = (AdsrEnvelope *)&D_2A260_deflt;
    ((SequenceChannel *)obj) ->adsr.decayIndex = 240;
    ((SequenceChannel *)obj) ->adsr.sustain = 0;
    ((SequenceChannel *)obj) ->vibratoRateTarget = 2048;
    ((SequenceChannel *)obj) ->vibratoRateStart = 2048;
    ((SequenceChannel *)obj) ->vibratoDepthTarget = 0;
    ((SequenceChannel *)obj) ->vibratoDepthStart = 0;
    ((SequenceChannel *)obj) ->vibratoRateChangeDelay = 0;
    ((SequenceChannel *)obj) ->vibratoDepthChangeDelay = 0;
    ((SequenceChannel *)obj) ->vibratoDelay = 0;
    ((SequenceChannel *)obj) ->filter = 0;
    ((SequenceChannel *)obj) ->combFilterGain = 0;
    ((SequenceChannel *)obj) ->combFilterSize = 0;
    ((SequenceChannel *)obj) ->volume = 1.0f;
    ((SequenceChannel *)obj) ->volumeScale = 1.0f;
    ((SequenceChannel *)obj) ->freqScale = 1.0f;
    for (i = 0; i < 8; i++) {
        ((SequenceChannel *)obj) ->seqScriptIO[i] = -1;
    }
    *(unsigned char *)obj = *(unsigned char *)obj & ~1;
    gl_func_00000000 (obj + 0x94);
}


                                                                                
                                                                  
                                                             
  
                                                        
                                                                      
                                                  
                                                                      
                                                                        
                   
                                                                       
                       
                         
                                                                         
                                                                         
          
      
  
                                                                      
                                                                     
                                                                 
                                                              
                                                        
                                                                      
                                                                      
                                                                     
                                                              
                                                                      
                                                                       
                                        
                                                               
                                                                
                                                              
                                                 

extern int gl_func_0001CA10();
extern int D_00000000;
 







int AudioSeq_SeqChannelSetLayer(char *base, int idx) {
    char *slot = base + idx * 4;
    char *s = *(char **)(slot + 0x50);
    char *no;
    volatile unsigned char *p;
    int c;

    if (s != 0) {
        gl_func_0001CA10(s);
    } else {
        no = (char *)gl_func_0001CA10((char *)&(*(AudioContext *)&D_00000000 ) .layerFreeList);
        if (no == 0) {
            *(int *)(slot + 0x50) = 0;
            return -1;
        }
        *(int *)(slot + 0x50) = (int)no;
    }
    no = *(char **)(slot + 0x50);
    *(int *)(no + 0x50) = (int)base;
    p = (volatile unsigned char *)no;
    c = *p;
    c |= 0x80;  *p = c;
    c &= ~0x40; *p = c;
    *(int *)(no + 0x18) = *(int *)(base + 0x8C);
    c &= ~0x20; *p = c;
    c &= ~0x10; *p = c;
    c &= ~0x08; *p = c;
    c &= ~0x04; *p = c;
    c &= ~0x02; *p = c;
    *(int *)(no + 0x1C) = *(int *)(base + 0x90);
    c &= ~0x01; *p = c;
    *(unsigned char *)(no + 0x18) = 0;
    *(unsigned char *)(no + 1) = 0;
    *(unsigned char *)(no + 0x20) = 0;
    *(unsigned char *)(no + 0x6C) = 0;
    *(unsigned char *)(no + 3) = 128;
    *(unsigned char *)(no + 5) = 64;
    *(short *)(no + 0x10) = 0;
    *(short *)(no + 8) = 0;
    *(short *)(no + 0xA) = 0;
    *(short *)(no + 0xC) = 0;
    *(int *)(no + 0x2C) = 0;
    *(int *)(no + 0x48) = 0;
    *(unsigned char *)(no + 2) = 255;
    *(float *)(no + 0x30) = 1.0f;
    *(float *)(no + 0x34) = 1.0f;
    *(float *)(no + 0x38) = 0.0f;
    return 0;
}




 






extern int gl_func_00000000();

void AudioSeq_SeqLayerDisable(unsigned char *a0) {
  if (a0 == 0)
  {
    return;
  }
  gl_func_00000000 ((void *) a0);




  *a0 = (unsigned short)(*a0 & 0xFF7F);
  *a0 |= 0x40;

}

 






void AudioSeq_SeqLayerFree(SequenceChannel *channel, int layerIndex) {
    SequenceLayer *layer = channel->layers[layerIndex];
    if (layer != 0) {
        gl_func_00000000 (&(*(AudioContext *)&D_00000000 ) .layerFreeList, &layer->listItem);
        gl_func_00000000 (layer);
        channel->layers[layerIndex] = 0;
    }
}

                                                                                    
                                                                 
                                                                    
                                                     
  
                                                   
                                  
                                                                      
                                                                      
                         
                                                                        
                    
                                                                      
      
  
                                                                    
                                                               
                                                                   
                                                                     
                                                                    
                                                                     
                                                                            
                                                              
                                                                
                                                              
                                                          
                                                                    
                                                                    
                                                                   
                                                             
                                                                      
 













extern int gl_func_00000000();
extern int gl_ref_0003EB78();   

void AudioSeq_SequenceChannelDisable(unsigned char *obj) {
    int i;
    for (i = 0; i != 8; i++) {
        gl_ref_0003EB78(obj, i);
    }
    gl_func_00000000 (obj + 0x94);   




    obj[0] = (obj[0] & 0xFF7F) & 0xFFFF;
    obj[0] = obj[0] | 0x40;

}

 



 















void AudioSeq_SequencePlayerSetupChannels(a0, a1)
unsigned char *a0;
unsigned short a1;
{
    unsigned char *base;
    int i;
    int s;
    while (0) { i = 0; }
    while (0) { s = a1; }
    base = a0;
    i = 0;
    for (; i != 16; i++) {
        s = a1;
        if (s & 1) {
            a0 = *(unsigned char **)&((SequencePlayer *)base)->channels[i];
            a0[7] = base[5];
            a0[3] = base[3];
            a0[2] = base[2];
        }
        a1 = s >> 1;
    }
}

                                                                                          
                                                                  
                                                           
  
                                                                   
                                                                       
                                                                      
                                                                        
                                                                         
                                                                        
          
                                                                          
        
      
  
                                                                      
                                                                   
                                                                   
                                                                                  
                                                                     
                                                                     
                                                                    
                                                                
                                                                       
                  
                                                                     
                                                                
                                                              
                                                 
                                                                                                 
                                                                               
                                                                                
                                                                         
                                                                            
                                                                            
                                                                           
                                                                            
                                                                          
                                                                               
                                                                              
                                                                            
extern int gl_func_00000000();
void AudioSeq_SequencePlayerDisableChannels(char *arg0, s32 arg1) {
    s32 dflt = (s32)&(*(AudioContext *)&D_00000000 ) .sequenceChannelNone;
    s32 var_s0;
    char *var_s1;

    for (var_s0 = 0, var_s1 = arg0; var_s0 != 0x40; var_s0 += 4, var_s1 += 4) {
        s32 temp_a0 = *(s32 *)&((SequencePlayer *)var_s1)->channels[0];  
        if ((temp_a0 != dflt) == 1) {
            gl_func_00000000 (temp_a0);
        }
    }
}

                                                                                  
                                                                  
                                                        
                                                         
  
                                                                    
                   
                                                                        
                       
                   
                                                                       
                                                                         
                   
                                  
                                                                        
      
  
                                                                 
                                                        
                                                                                                  
                                                                    
                                                                   
                                                                              
                                                                                 
                                                      
                                                                            
                          
                                                                               
                                                                                
                                                                                 
                                                                           
                   
                                                                                 
                                                                          
                                                                                
                                                                                  
                                                                                
                                                                               
                                                                                 
                                                                          
                           
 













extern int gl_func_00000000();
extern int gl_ref_0003EB78();   

void AudioSeq_SequenceChannelEnable(SequencePlayer *seqPlayer, unsigned char idx, u8 *script) {
    SequenceChannel *o;
    char *p;
    int i;
    o = seqPlayer->channels[idx];
    o->scriptState.depth = 0;
    o->scriptState.pc = script;




    *(unsigned char *)o = (*(unsigned char *)o & 0xFFFF) | 0x80;  
    *(unsigned char *)o &= 0xBF;                                   

    o->delay = 0;
    p = (char *)o;  
    for (i = 0; i < 8; i++) {
        if (((SequenceChannel *)p)->layers[0] != ((void*)0) ) {
            gl_ref_0003EB78(o, i);
        }
        p += 4;
    }
}

 



                                                                                   
                                                                 
                                                                     
                                                    
  
                                                
                                                                      
                                                                      
                       
                                                                      
                             
                                                                         
                                                                        
                                                                     
                                                                     
                                                                         
                                                       
                                                                      
      
  
                                                                  
                                                                 
                                                                 
                                                              
                                                                     
                                                               
                                                                  
                                                            
                                                                   
                                                                    
                                                
                                                                         
                                                                        
                                                                          
                                                                            
                                                                      
                                                                         
                                                                             
                                                                     
                                                                      
                                                                       
                                                                                
                                                                      
                                                                            
                                                                              
                                                                     
                                                                              
                                                                          
                                                        
extern int gl_func_00000000();
extern int gl_func_0003ED2C();
extern int D_00000000;
typedef struct { unsigned char b7 : 1; unsigned char b6 : 1; unsigned char rest : 6; } BF2A7D8;
 


void AudioSeq_SequencePlayerDisable(SequencePlayer *seqPlayer) {
    int r;
    gl_func_0003ED2C(seqPlayer, 0xFFFF);
    gl_func_00000000 (&seqPlayer->notePool);
    ((BF2A7D8 *)seqPlayer)->b6 = 1;
    ((BF2A7D8 *)seqPlayer)->b7 = 0;
    r = gl_func_00000000 (seqPlayer->seqId);
    if (r != 0) {
        gl_func_00000000 (seqPlayer->seqId, 3);
    }
    if (gl_func_00000000 (seqPlayer->defaultFont) != 0) {
        gl_func_00000000 (seqPlayer->defaultFont, 4);
    }
    if (seqPlayer->defaultFont == (*(AudioContext *)&D_00000000 ) .fontCache.temporary.entries[0].id) {
        (*(AudioContext *)&D_00000000 ) .fontCache.temporary.nextSide = 1;
    } else if (seqPlayer->defaultFont == (*(AudioContext *)&D_00000000 ) .fontCache.temporary.entries[1].id) {
        (*(AudioContext *)&D_00000000 ) .fontCache.temporary.nextSide = 0;
    }
}

                                                                       
void AudioSeq_AudioListPushBack(int *a0, int *a1) {
    if (*a1 != 0) {
        return;
    }
    ((AudioListItem *)*a0)->next = (AudioListItem *)a1;
    *a1 = *a0;
    a1[1] = (int)a0;
    *a0 = (int)a1;
    a0[2] = a0[2] + 1;
    a1[3] = a0[3];
}

 




int AudioSeq_AudioListPopBack(AudioListItem *list) {
    AudioListItem *item = list->prev;
    if (item == list) {
        return 0;
    }
    item->prev->next = list;
    list->prev = item->prev;
    item->prev = 0;
    list->u.count = list->u.count - 1;
    return (int)item->u.value;
}

 











 


void AudioSeq_InitLayerFreelist(void) {
    int i;
    (*(AudioContext *)&gAudioContext_345c0) .layerFreeList.prev = &(*(AudioContext *)&gAudioContext_345c0) .layerFreeList;
    (*(AudioContext *)&gAudioContext_345c0) .layerFreeList.next = &(*(AudioContext *)&gAudioContext_345c0) .layerFreeList;
    (*(AudioContext *)&gAudioContext_345c0) .layerFreeList.u.count = 0;
    (*(AudioContext *)&gAudioContext_345c0) .layerFreeList.pool = ((void*)0) ;
    for (i = 0; i < 64; i++) {
        (*(AudioContext *)&gAudioContext_345c0) .sequenceLayers[i].listItem.u.value = &(*(AudioContext *)&gAudioContext_345c0) .sequenceLayers[i];
        (*(AudioContext *)&gAudioContext_345c0) .sequenceLayers[i].listItem.prev = ((void*)0) ;
        gl_func_00000000 (&(*(AudioContext *)&gAudioContext_345c0) .layerFreeList, &(*(AudioContext *)&gAudioContext_345c0) .sequenceLayers[i].listItem);
    }
}


unsigned char AudioSeq_ScriptReadU8(unsigned char **a0) {
    unsigned char v = **a0;
    *a0 = *a0 + 1;
    return v;
}

 




short AudioSeq_ScriptReadS16(unsigned char **a0) {
    short v;
    v = *(*a0)++ << 8;
    v = *(*a0)++ | v;
    return v;
}

 













int AudioSeq_ScriptReadCompressedU16(unsigned char **a0) {
    unsigned char *p = *a0;
    int v = *p;
    int r = v;
    *a0 = p + 1;
    if (v & 0x80) {
        v = r << 8;
        while (0) { v += 1; }
        v &= 0x7F00;
        while (0) { v += 1; }
        v = *(*a0) | v;
        v &= 0xFFFF;
        (*a0)++;
    }
    return v;
}

                                                                                   
                                                                  
                                                                
         
  
                                                
                      
                                                                         
                                                                          
                    
                                                                       
                                                                      
        
                                                                       
                                                                          
                                                                        
                                                                        
                   
                           
                                                                        
      
  
                                                                   
                                                                      
                                                                     
                                                                     
                                                                      
                                                                      
                                                                 
                                                                  
                                                                   
                                                                                            
               
                                                             
                                                                  
                                                                   
                                                                   
           
                                                                  
                                                                           
                                                                       
                                                                         
                                                                            
                                                                           
                                                                      
                                                                           
                                                        
extern int gl_ref_0003F1A0();
extern int gl_ref_0003F388();
extern int gl_ref_0003FC60();
extern int gl_ref_0003F708();
extern int gl_ref_0003F22C();
typedef struct {
    unsigned b31 : 1;
    unsigned b30 : 1;
    unsigned b29 : 1;
    unsigned b28 : 1;
    unsigned rest : 28;
    int w4;
    short h8;
    short hA;
    char pad[0x2C - 0xC];
    int w2C;
} AA30;
void AudioSeq_SeqLayerProcessScript(AA30 *o) {
    int r;
    if (!o->b31) return;
    if (o->h8 >= 2) {
        o->h8--;
        if (o->b29) return;
        if (o->hA < o->h8) return;
        gl_func_00000000 ( );
        o->b29 = 1;
        return;
    }
    gl_ref_0003F1A0(o);
    r = gl_ref_0003F388(o);
    if (r == -1) return;
    r = gl_ref_0003FC60(o, r);
    if (r != -1) {
        r = gl_ref_0003F708(o, r);
    }
    if (r != -1) {
        gl_ref_0003F22C(o, r);
    }
    if (o->b29 != 1) return;
    if (o->w2C != 0 || o->b28) {
        gl_func_00000000 (o);
    }
}

                                                                                       
                                                                  
                                                    
  
                                                     
                      
                                                                         
                                                                      
        
                                            
                                                                        
                                  
                                                                          
                                                                       
          
        
      
  
                                                                     
                                                                    
                                                             
                                                                      
                                                                    
                                                                
                                                                      
                                                                     
                                                                     
                                                                                    
                                                                 
                                                                  
                                                                 
                                       
                                                                                       
                                                                  
                                                    
  
                                                     
                      
                                                                         
                                                                      
        
                                                                           
                                                                             
                                                                       
                                  
                                                                         
                                                                      
          
        
      
  
                                                                     
                                                                    
                                                             
                                                                     
                                                                 
                                                                    
                                                                
                                                                      
                                                                     
                                                                     
                                                                                    
                                                                        
                                                                           
                                                                          
                                                                           
                                                                            
                                                                     
                                                                
                                                                       
                                    
                                                                      
                                                                        
                                                                          
                                                                      
                                                                  
                                                                       
                                                                          
                                                                             
                                                                               
                                                                       
                                                                        
typedef struct {
    unsigned int b0 : 1, b1 : 1, b2 : 1, b3 : 1, b4 : 1, b5 : 1, b6 : 1, b7 : 1;
    unsigned int rest : 24;
} ObjFlags2AB34;
extern int gl_func_00000000();
 

void AudioSeq_SeqLayerProcessScriptStep1(char *o) {
    int st;
    if (!((SequenceLayer *)o)->continuousNotes) {
        gl_func_00000000 ( );
    } else {
        Note *p = ((SequenceLayer *)o)->note;
        if ((p != ((void*)0) ) && (p->playbackState.wantedParentLayer == (SequenceLayer *)o)) {
            gl_func_00000000 ( );
        }
    }
    st = ((SequenceLayer *)o)->portamento.mode & ~0x80;
    if (st == 1 || st == 2) {
        ((SequenceLayer *)o)->portamento.mode = 0;
    }
    ((SequenceLayer *)o)->notePropertiesNeedInit = 1;
}

                                                                                        
                                                                  
                                                            
  
                                                     
                      
                                               
                         
                       
                             
                                                                        
                                                                        
                                    
                                                                        
          
        
                                                    
      
  
                                                                      
                                                                      
                                                                     
                                                                            
                                                                      
                                                                     
                                                                   
                                                                      
                                                
                                                                   
                                                                           
                                                                    
                                                            
 




typedef struct gl_2ABC0_Layer {
    u32 enabled : 1; u32 finished : 1; u32 muted : 1; u32 continuousNotes : 1; u32 bit3 : 1; u32 ignoreDrumPan : 1; u32 bit1 : 1; u32 notePropertiesNeedInit : 1;
    char pad1[0x2C - 4]; struct gl_2ABC0_Note *note; char pad30[0x4C - 0x30]; TunedSample *tunedSample;
} gl_2ABC0_Layer;
typedef struct { char pad[0x30]; gl_2ABC0_Layer *prevParentLayer; gl_2ABC0_Layer *parentLayer; gl_2ABC0_Layer *wantedParentLayer; } gl_2ABC0_PlaybackState;
typedef struct gl_2ABC0_Note { char listItem[0x10]; gl_2ABC0_PlaybackState playbackState; } gl_2ABC0_Note;






s32 AudioSeq_SeqLayerProcessScriptStep5(gl_2ABC0_Layer *layer, u32 sameTunedSample) {
    gl_2ABC0_Note *note;

    if (!layer->muted && (layer->tunedSample != ((void*)0) ) && (layer->tunedSample->sample->codec == 2) &&
        (layer->tunedSample->sample->medium != 0)) {
        layer->muted = 1;
        return -1;
    }

    if (layer->continuousNotes == 1 && layer->bit1 == 1) {
        return 0;
    }

    if (layer->continuousNotes == 1 && layer->note != ((void*)0)  && layer->bit3 && sameTunedSample == 1 &&
        layer->note->playbackState.parentLayer == layer) {
        if (layer->tunedSample == ((void*)0) ) {
            gl_func_00000000  (layer->note, layer);
        }
    } else {
        if (!sameTunedSample) {
            gl_func_00000000  (layer);
        }

        layer->note = (gl_2ABC0_Note *)gl_func_00000000  (layer);
        if (layer->note != ((void*)0)  && layer->note->playbackState.parentLayer == layer) {
            gl_func_00000000  (layer->note);
        }
    }

    if (layer->note != ((void*)0)  && layer->note->playbackState.parentLayer == layer) {
        note = layer->note;

        gl_func_00000000  (note);
    }

    return 0;
}






                                                                                       
                                                                  
                                                          
                                                                                
                 
  
                                                     
                                                                      
                                                                   
                 
                                                                        
                                                                       
                                                                         
                                                                         
                                                                          
                 
                                                                          
          
        
      
  
                                                                     
                                                               
                                                                   
                                                                      
                                                                     
                                                                   
                                                             
                                                           
                                                                     
                                                                                
                                                 
                                                                 
                                                                 
                                                            
                                                                 
                                       
 






s32 AudioSeq_SeqLayerProcessScriptStep2(void *o) {
    volatile s32 ret = 0;
    return ret;
}

                                                                                       
                                                                  
                                                                    
                                                                                
  
                                                            
                                                                      
                                                                   
                            
                        
                                                            
        
                                                                        
                     
                                  
                 
                              
                                
                               
                                                                     
                                                                        
        
          
      
  
                                                                    
                                                            
                                                                    
                                                              
                                                                    
                                                                      
                                                               
                                                                   
                                                                                        
                                                                      
                                                                              
                                                                 
                                                                    
                                                                
                                                                      
 


























 














 






int AudioSeq_SeqLayerProcessScriptStep4(char *arg0, int arg1) {
    volatile int ret = arg1;
    return ret;
}

                                                                                       
                                                                    
                                                                     
                                                                     
                                                                  
  
                                                            
                                                                      
                                                                   
                                               
                                                                       
                  
                                                                         
                       
                      
                                                                         
                                                                          
                                        
        
      
  
                                                                     
                                                                                    
                                                                     
                                                                     
                                                                     
                                                                                  
                                                                   
                                                                     
                                                                  
                                                                   
                                                                                                          
                                                               
                           
                                                                    
                                                                    
                                                            
                                                                  
                                                                
                  
                                                                                   
                                                                   
                                                                                       
                                                                  
                                                                     
                                                                   
                                                                      
                                                                  
                                                                      
                                                                     
                                                                        
                                           
                                                          
                                                                        
                                              
                                                                         
                                                                        
                                                                     
                                                           
                                                                      
                                                                      
                                                                       
                                                                  
                                                         
                                                                
                                                                       
                                                                   
                                                                      
                                                                       
                          
                                                                   
                                                                        
                                                              
                                                                    
                                                                      
                                                                    
                                                                              
                                                                             
                                                                       
                                                                            
                                                                             
                                                                           
                                                                           
                   
 





s32 AudioSeq_SeqLayerProcessScriptStep3(char *arg0, s32 arg1) {
    volatile s32 ret = arg1;
    return ret;
}

 





void AudioSeq_SetChannelPriorities(void *arg0, int arg1) {
    int *p = &arg1;
    int v0 = *p & 0xFF;
    int hi;
    int new_var;
    if ((v0 & 0xF) != 0) {
        *((char *)arg0 + 5) = v0 & 0xF;
    }
    hi = (v0 >> 4) & 0xFF;
    if (hi != 0) {
        v0++;
        v0--;
        new_var = hi;
        *((char *)arg0 + 6) = new_var;
    }
}

 




extern int gl_func_00000000();
int AudioSeq_GetInstrument(char *a0, unsigned char a1, int **a2, char *a3)
{
  char *rv;
  rv = (char *) gl_func_00000000 (*((unsigned char *) (a0 + 7)), a1);
  if (rv == 0) {
    *a2 = 0;
    return 0;
  }
  *((int *) (a3 + 4)) = *((int *) (rv + 4));
  *((unsigned char *) a3) = *((unsigned char *) (rv + 3));
  *a2 = (int *) rv;
  a1 += 2;
  return a1;
}

 












extern int gl_ref_000400A4(char *, unsigned char, char *, char *);
void AudioSeq_SetInstrument(char *o, unsigned char op) {
    int a;
    if (op >= 0x80) {
        ((SequenceChannel *)o)->instOrWave = op;
        *(int *)&((SequenceChannel *)o)->instrument = 0;
    } else if (op == 0x7F) {
        ((SequenceChannel *)o)->instOrWave = 0;
        *(int *)&((SequenceChannel *)o)->instrument = 1;
    } else if (op == 0x7E) {
        ((SequenceChannel *)o)->instOrWave = 1;
        *(int *)&((SequenceChannel *)o)->instrument = 2;
    } else {
        a = gl_ref_000400A4(o, op, (char *)&((SequenceChannel *)o)->instrument, (char *)&((SequenceChannel *)o)->adsr);
        ((SequenceChannel *)o)->instOrWave = a;
        if ((short)a == 0) {
            ((SequenceChannel *)o)->hasInstrument = 0;
            return;
        }
    }
    ((SequenceChannel *)o)->hasInstrument = 1;
}

 





void AudioSeq_SequenceChannelSetVolume(int *a0, unsigned char a1) {
    ((SequenceChannel *)a0)->volume = (int)a1 / 127.0f;

}

 






void AudioSeq_SequenceChannelProcessScript(void *o) {
    volatile int x = 0;
}

                                                                                        
                                                                  
                                                             
                                                                                        
  
                                                        
                      
                                                                         
                                                                      
                                                                      
                                    
                        
                                                       
        
                                                                        
                                                                         
          
                                                                         
                                        
                             
      
  
                                                                     
                                                                  
                                                                                                           
                                                                    
                                                                    
                                                                      
                                                                   
                                                                 
                                                                          
                                                                              
                                                                                     
                                                            
                                                                 
                                                                 
                                                                   
                                                                     
 





 






void AudioSeq_SequencePlayerProcessSequence(void *o) {
    volatile int x = 0;
}


 

























extern int gAudioContext_345c0;
extern int gl_func_00000000();
extern int gl_ref_00040E10();     

void AudioSeq_ProcessSequences(int a0) {
    unsigned int i;

    (*(AudioContext *)&gAudioContext_345c0) .noteSubEuOffset = (*(AudioContext *)&gAudioContext_345c0) .numNotes * ((*(AudioContext *)&gAudioContext_345c0) .ticksPerUpdate - a0 - 1);
    for (i = 0; i < (*(AudioContext *)&gAudioContext_345c0) .numSequencePlayers; i++) {
        if ((*(AudioContext *)&gAudioContext_345c0) .seqPlayers[i].enabled == 1) {
            gl_ref_00040E10(&(*(AudioContext *)&gAudioContext_345c0) .seqPlayers[i]);
            gl_func_00000000 (&(*(AudioContext *)&gAudioContext_345c0) .seqPlayers[i]);
        }
    }
    gl_func_00000000 ();
}


 













extern int gl_func_00000000();
extern int gl_ref_00040E10();     

void AudioSeq_SkipForwardSequence(SequencePlayer *a0) {
    register SequencePlayer *s0 = a0;
    if (s0->skipTicks > 0) {
        do {
            gl_ref_00040E10(s0);
            gl_func_00000000 (s0);    
            s0->skipTicks = s0->skipTicks - 1;
        } while (s0->skipTicks > 0);
    }
}

 




extern char D_2D064_148;
extern char D_2D064_152;
extern int gl_ref_0003E8C4();

void AudioSeq_ResetSequencePlayer(char *a0) {
    char *p;
    int i;
    gl_func_00000000 ( );  
    i = 0;
    ((SequencePlayer *)a0) ->stopScript = 0;
    ((SequencePlayer *)a0) ->delay = 0;
    ((SequencePlayer *)a0) ->state = 1;
    ((SequencePlayer *)a0) ->fadeTimer = 0;
    ((SequencePlayer *)a0) ->fadeTimerUnkEu = 0;
    ((SequencePlayer *)a0) ->tempoAcc = 0;
    ((SequencePlayer *)a0) ->tempo = 0x1680;  
    ((SequencePlayer *)a0) ->tempoChange = 0;
    ((SequencePlayer *)a0) ->transposition = 0;
    ((SequencePlayer *)a0) ->noteAllocPolicy = 0;
    ((SequencePlayer *)a0) ->shortNoteVelocityTable = (u8 *)&D_2D064_148;
    ((SequencePlayer *)a0) ->shortNoteGateTimeTable = (u8 *)&D_2D064_152;
    ((SequencePlayer *)a0) ->scriptCounter = 0;
    ((SequencePlayer *)a0) ->fadeVolume = 1.0f;
    ((SequencePlayer *)a0) ->fadeVelocity = 0.0f;
    ((SequencePlayer *)a0) ->volume = 0.0f;
    ((SequencePlayer *)a0) ->muteVolumeScale = 0.5f;
    p = a0;
    for (; i < 64; i += 4) {
        gl_ref_0003E8C4(((SequencePlayer *)p)->channels[0]);  
        p += 4;
    }
}


 




extern int gl_alloc_2D130();
void AudioSeq_InitSequencePlayerChannels(int a0) {
    char *base = (char *)&D_00000000 ;
    int *s3 = (int*)&((AudioContext *)base)->seqPlayers[a0];
    char *d5280 = (char *)&((AudioContext *)base)->sequenceChannelNone;
    int *s1;     

    int j;
    for (s1 = s3, j = 0; j < 64; j += 4) {
        int *retval = (int*)gl_alloc_2D130(&((AudioContext *)base)->miscPool, 228);
        (((SequencePlayer *)(s1))->channels[0])  = (SequenceChannel *)retval;
        if (retval == 0) {
            (((SequencePlayer *)(s1))->channels[0])  = (SequenceChannel *)d5280;
        } else {
            int *p;
            int i;
            p = (int *)(((SequencePlayer *)(s1))->channels[0]) ;
            ((SequenceChannel *)p)->seqPlayer = (SequencePlayer *)s3;



            *(unsigned char*)p &= 0xFF7F;  

            for (i = 0; i < 8; i += 4) {  
                ((SequenceChannel *)p)->layers[1] = ((void*)0) ;
                ((SequenceChannel *)p)->layers[2] = ((void*)0) ;
                ((SequenceChannel *)p)->layers[3] = ((void*)0) ;
                p = (int*)((char*)p + 16);
                ((SequenceChannel *)((char *)p - 16))->layers[0] = ((void*)0) ;  
            }
        }
        gl_ref_0003E8C4((((SequencePlayer *)(s1))->channels[0]) );
        s1 = (int*)((char*)s1 + 4);
    }
}



 
























void AudioSeq_InitSequencePlayer(char *a0) {
    char *base = &D_00000000;
    char *v1;
    int i;
    v1 = a0;
    for (i = 0; i != 16; i += 4) {
        *(int*)(v1 + 0x3C) = (int)(base + 0x5280);
        *(int*)(v1 + 0x40) = (int)(base + 0x5280);
        *(int*)(v1 + 0x44) = (int)(base + 0x5280);
        v1 += 16;
        *(int*)(v1 + 0x28) = (int)(base + 0x5280);
    }
    *(char*)a0 &= ~0x80;
    *(char*)a0 &= 0xDF;
    *(char*)a0 &= 0xF7;
    *(char*)a0 &= 0xEF;
    *(char*)a0 &= 0xFE;
    v1 = a0;
    for (i = 0; i != 8; i += 4) {
        *(char*)(v1 + 0x159) = -1;
        *(char*)(v1 + 0x15A) = -1;
        *(char*)(v1 + 0x15B) = -1;
        v1 += 4;
        *(char*)(v1 + 0x154) = -1;
    }
    *(char*)(a0 + 3) = 96;
    *(float*)(a0 + 0x2C) = 1.0f;
    *(float*)(a0 + 0x34) = 1.0f;
    gl_func_00000000(a0 + 0x9C);
    gl_func_00000000(a0);
}




 












extern void gl_ref_0003EF70();
extern void gl_ref_00041890();
void AudioSeq_InitSequencePlayers(void) {
    char *p, *s0, *end, *end2;
    gl_ref_0003EF70();
    p = (char*)&D_00000000 ; end = (char*)&D_00000000  + 0x2000;
    do {
        p += 0x80;
        ((AudioContext *)p)->sequenceLayers[-1].channel = 0;  



        *(unsigned char *)&((AudioContext *)p)->sequenceLayers[-1] &= 0xFF7F;  

    } while (p < end);
    s0 = (char*)&D_00000000  + 0x2D00; end2 = (char*)&D_00000000  + 0x3280;
    do {
        gl_ref_00041890(s0);
        s0 += 0x160;
    } while (s0 != end2);
}


 


 


                                                                        
                                                                               
                                                                                   
                                                           
                                                                         
                                                                        
                                                                        
                                                                   
                                                                         
                                                                         
                                                                      
                                                                          
                                                                              
                                                                              
  
                                                                               
                                                                
                                                                                
                                                                                
                                                                            
                                                                               
                                                                                
                                                                            
                                                   
                                                                          
                                                                              
                                                                                 
                                                                             
                                                                                
                                                                                
                                                                           
                                                                           
                                                                          
                                                                            
                                                                          
                                                                                       
                                                                                      
                                                                                         
                                                                                    
                  
extern int gl_func_00000000_f(int, float );  
extern int gl_ref_000423C4(), gl_ref_00041E9C(), gl_ref_00042490(), gl_ref_00041ED4(), gl_ref_00046324(), gl_ref_00044E14();
extern int D_2D37C_mode, D_2D37C_flag, D_2D37C_st, D_2D37C_arg, D_2D37C_g5, D_2D37C_g13, D_2D37C_gz, D_2D37C_g1, D_2D37C_g4;
extern int D_2D37C_tmr;

extern int D_2D37C_rec[];
extern u16 gAudioContext_2D37C_raw[];
extern f32 D_2D37C_f358s[], D_2D37C_f358l[], D_2D37C_f35Cs[], D_2D37C_f35Cl[], D_2D37C_f35Cw[], D_2D37C_f360s[], D_2D37C_f360l[];    
 





















void snd_UpdateTimers(void) {
    int st;
    int v;
    int i;
    int c;
    int half;
    f32 fr;
    f32 z;
    f32 d;

    if (D_2D37C_mode == 1) {
        if (gl_func_00000000 ()) {
            D_2D37C_flag = 0;
        }
        return;
    }
    if ((*(int *)((char *)&D_2D37C_tmr + (0)))  != 0) {
        (*(int *)((char *)&D_2D37C_tmr + (0))) --;
        if ((*(int *)((char *)&D_2D37C_tmr + (0)))  == 0) {
            st = D_2D37C_st;
            if (st == 15) {
                gl_ref_000423C4((u8)st);
                gl_ref_00041E9C();
            } else {
                gl_ref_00042490((u8)st, D_2D37C_arg);
                gl_ref_00041ED4();
                if (D_2D37C_g5 == 5 && D_2D37C_g13 == 13 && D_2D37C_gz == 0) {
                    gl_func_00000000 (51);
                }
                if (D_2D37C_g1 == 1) {
                    v = D_2D37C_g4;
                    if (v == 4 || v == 10) {
                        gl_func_00000000_f (0x1010300, 0.0f);
                    }
                }
            }
        }
    }
    if ((*(int *)((char *)&D_2D37C_tmr + (4)))  != 0) {
        (*(int *)((char *)&D_2D37C_tmr + (4))) --;
    }
    if ((*(int *)((char *)&D_2D37C_tmr + (8)))  != 0) {
        (*(int *)((char *)&D_2D37C_tmr + (8))) --;
    }
    if ((*(int *)((char *)&D_2D37C_tmr + (0x10)))  != 0) {
        (*(int *)((char *)&D_2D37C_tmr + (0x10))) --;
    }
    if ((*(int *)((char *)&D_2D37C_tmr + (0x18)))  != 0) {
        (*(int *)((char *)&D_2D37C_tmr + (0x18))) --;
        gl_func_00000000_f (0x1010300, (f32)(127 - (*(int *)((char *)&D_2D37C_tmr + (0x18))) ) / 127.0f);
    }
    c = (*(int *)((char *)&D_2D37C_tmr + (0xC))) ;
    if (c != 0) {
        if (c == 256) {

            z = 0;  
            fr = (f32)(gAudioContext_2D37C_raw[0x2E68 / 2]) ;
            half = (int)(gAudioContext_2D37C_raw[0x2E68 / 2])  >> 1;
            if (z) {}
            (*(SndCueQueues *)((char *)&(D_2D37C_f360s) + 0x338)) .rampStep = (f32)half * (1.0f / 256.0f);
            (*(SndCueQueues *)((char *)&(D_2D37C_f35Cs) + 0x338)) .rampValue = z;
            if (fr) {}  
            (*(SndCueQueues *)((char *)&(D_2D37C_f358s) + 0x338)) .rampBase = fr;
            if (z) {}  
        }
        d = (*(SndCueQueues *)((char *)&(D_2D37C_f35Cl) + 0x338)) .rampValue;
        (*(int *)((char *)&D_2D37C_tmr + (0xC)))  = c - 1;
        d -= (*(SndCueQueues *)((char *)&(D_2D37C_f360l) + 0x338)) .rampStep;
        (*(SndCueQueues *)((char *)&(D_2D37C_f35Cw) + 0x338)) .rampValue = d;
        i = (int)d;
        if (0) { gl_func_00000000(&i); }  
        gl_func_00000000 (0x4E010000, i);
        fr = (*(SndCueQueues *)((char *)&(D_2D37C_f358l) + 0x338)) .rampBase;  
        gl_func_00000000_f (0x4D010000, ((f32)i + fr) / fr);
        if (i) {}  
    }
    if (D_2D37C_rec[2] != 0) {
        gl_ref_00046324(D_2D37C_rec);
    }
    gl_ref_00044E14();
    gl_func_00000000 ();
}













 




void snd_MuteAll(void) {
    if (*(int*)&D_00000000 == 1) {
        gl_func_00000000 ();
    } else {
        gl_func_00000000 (0x95);
        gl_func_00000000 (0xF1000000, 0);
        *(int*)&D_00000000 = 1;
    }
}

extern int gl_func_00000000();
extern int D_00000000;
void snd_UnmuteAll() {
    gl_func_00000000 ((void*)0xF2000000, 0);
    gl_func_00000000 (0x91);
    D_00000000 = 0;
}

extern int gl_func_00000000();
extern int D_00000000;
void snd_Unmute() {
    gl_func_00000000 ((void*)0xF2000000, 0);
    D_00000000 = 0;
}

 









void snd_SetSoundOutputMode(int a0) {
    gl_func_00000000 (0xF0000000, a0);
    if (a0 >= 2) {
        a0 = 3;
    }
    gl_func_00000000 (0xF0000000, a0);
}

 
















































extern int D_2D710_store;
extern int D_2D710_load;
void snd_SetPlayer1VolumeLevel(int a0) {
    D_2D710_store = a0;
    gl_func_00000000 (0x41010000, ((int*)&D_2D710_load)[a0], a0);
}

 






















extern int D_2D74C_store;
extern int D_2D74C_load;
void snd_SetPlayer0VolumeLevel(int a0) {
    D_2D74C_store = a0;
    gl_func_00000000 (0x41000000, ((int*)&D_2D74C_load)[a0], a0);
}

 















extern int D_2D788_a;
extern int D_2D788_b;
 
































void snd_SetPlayer2VolumeLevel(int a0) {
    D_2D788_a = a0;
    gl_func_00000000 (0x41020000, (&D_2D788_b)[a0], a0);
}

 












































































































extern int D_2D7D0_arr;
 
void snd_ResetVolumeLevels(void) {
    extern int D_2D7D0_a, D_2D7D0_b, D_2D7D0_c;
    D_2D7D0_a = 8;
    D_2D7D0_b = 8;
    D_2D7D0_c = 8;
    gl_func_00000000 (0x41010000, ((int*)&D_2D7D0_arr)[8]);
    gl_func_00000000 (0x41000000, ((int*)&D_2D7D0_arr)[8]);
    gl_func_00000000 (0x41020000, ((int*)&D_2D7D0_arr)[8]);
    gl_func_00000000 (0xF0000000, 0);
}

 









extern int D_2D838_X;
extern int D_2D838_Y[];
void snd_ApplyPlayer3VolumeLevel(void) {
    gl_func_00000000 (0x41030000, D_2D838_Y[D_2D838_X]);
}

 







extern int D_2D870_X;
extern int D_2D870_Y[];
void snd_ApplyPlayer1VolumeLevel(void) {
    gl_func_00000000 (0x41010000, D_2D870_Y[D_2D870_X]);
}

 





void snd_ApplyPlayer0VolumeLevel(void) {
    gl_func_00000000 (0x41000000, D_2D870_Y[D_2D870_X]);
}

 





extern int *D_2D8D8_X;
extern int D_2D8D8_Y[];
void snd_ApplyPlayer2VolumeLevel(void) {
    gl_func_00000000 (0x41020000, D_2D8D8_Y[(int)D_2D8D8_X]);
}


 
























































































 




 





extern int D_00000004;
extern int D_0001C1BC, D_0001C1BC_b;
extern int D_0001C1C0, D_0001C1C0_b;
extern int D_0001C1C4, D_0001C1C4_b, D_0001C1C4_c, D_0001C1C4_d, D_0001C1C4_e,
    D_0001C1C4_f, D_0001C1C4_g, D_0001C1C4_h, D_0001C1C4_i, D_0001C1C4_j;
extern int D_0001C1C8, D_0001C1C8_b, D_0001C1C8_c;
extern int D_0001C1CC, D_0001C1CC_b, D_0001C1CC_c, D_0001C1CC_d, D_0001C1CC_e,
    D_0001C1CC_f, D_0001C1CC_g, D_0001C1CC_h, D_0001C1CC_i, D_0001C1CC_j, D_0001C1CC_k;
extern int D_0001C1D0, D_0001C1D0_b, D_0001C1D0_c, D_0001C1D0_d, D_0001C1D0_e,
    D_0001C1D0_f, D_0001C1D0_g, D_0001C1D0_h;
extern int D_0001C1D4, D_0001C1D4_b, D_0001C1D4_c, D_0001C1D4_d, D_0001C1D4_e,
    D_0001C1D4_f, D_0001C1D4_g;

void snd_SetPlayer1Channel15IO_2D910(int a0, int a1, int a2, int a3) {
    int v0;
    if (D_00000000 != 10) {
        return;
    }
    if (D_00000004 != 1) {
        return;
    }
    if (a0 != D_0001C1BC) {
        if (D_0001C1CC == 0 && a0 == 0) {
            gl_func_0001CA10(0x06010F00, 2);
            D_0001C1CC_b = -1;
        } else if (a0 == 1) {
            gl_func_0001CA10(0x06010F00, 0);
            D_0001C1CC_c = 0;
        }
    } else if (a1 != D_0001C1C0) {
        if (1 == D_0001C1CC_d && a1 == 0) {
            gl_func_0001CA10(0x06010F00, 2);
            D_0001C1CC_e = -1;
        } else if (a1 == 1) {
            gl_func_0001CA10(0x06010F00, 1);
            D_0001C1CC_f = 1;
        }
    }
    D_0001C1BC_b = a0;
    D_0001C1C0_b = a1;
    v0 = (D_0001C1C4 + a2) / 2;
    D_0001C1C8_b = (D_0001C1C8 + a3) / 2;
    if (D_0001C1D4 == 0) {
        D_0001C1CC_g = -1;
        if (v0 < -8) {
            D_0001C1D4_b = -1;
            D_0001C1D0 = v0;
        }
        D_0001C1C4_b = v0;
        if (v0 >= 9) {
            D_0001C1D4_c = 1;
            D_0001C1D0_b = v0;
            D_0001C1C4_c = v0;
        }
        {
            int c8 = D_0001C1C8_c;
            gl_func_0001CA10(0x06010F02, (signed char)c8);
        }
        v0 = D_0001C1C4_d;
    }
    if (1 == D_0001C1D4_d) {
        if (v0 < D_0001C1D0_c) {
            if (D_0001C1CC_h == -1) {
                D_0001C1C4_e = v0;
                gl_func_0001CA10(0x06010F00, 1);
                gl_func_0001CA10(0x06010F02, (signed char)((D_0001C1D0_d * 4) - 0x40));
                D_0001C1CC_i = 1;
                v0 = D_0001C1C4_f;
            }
            if (v0 < 0x10) {
                D_0001C1D4_e = 0;
            }
        } else {
            D_0001C1D0_e = v0;
        }
    }
    D_0001C1C4_g = v0;
    if (D_0001C1D4_f == -1) {
        if (D_0001C1D0_f < v0) {
            D_0001C1C4_h = v0;
            if (D_0001C1CC_j == -1) {
                gl_func_0001CA10(0x06010F00, 0);
                gl_func_0001CA10(0x06010F02, (signed char)(-D_0001C1D0_g * 4 - 0x40));
                D_0001C1CC_k = 0;
            }
            if (D_0001C1C4_i >= -0xF) {
                D_0001C1D4_g = 0;
            }
        } else {
            D_0001C1D0_h = v0;
            D_0001C1C4_j = v0;
        }
    }
}





 

















extern int D_00000000_1c0ac;
extern int gl_func_00000000_f(int, float );  
void snd_SetPlayer3FreqScaleFromStick(int a0, int a1) {
     





    volatile float *tbl = (volatile float *)(((char *)&D_00000000 + (0x1C1D8)) );
    float f;
    if (D_00000000_1c0ac == 15) {
        f = 1.0f;
        if (a0 >= 17) f = tbl[0];
        if (a1 >= 17) f = tbl[1];
        if (a0 < -16) f = tbl[2];
        if (a1 < -16) f = tbl[3];
        gl_func_00000000_f (0x04030F00, f);
    }
}

 
extern int D_2DCF8_flag;
void snd_StopAudioCmds(void ) {
    gl_func_00000000 ( );
    D_2DCF8_flag = 1;
    gl_func_00000000 (0xF8000000, 0);
}

 
void snd_Stub_2DD30(void) { }

 






extern int D_2DD38_byte;
extern int D_2DD38_const;
void snd_ScheduleSeqDefault(unsigned char a0) {
    D_2DD38_byte = a0;
    D_2DD38_const = 0xD2;
}

 







extern int gl_func_00000000();
void snd_PlayPlayer3Seq(char a0) {
    gl_func_00000000 (0x82030000 | ((a0 & 0xFF) << 8), 1000);
}

 


extern int gl_func_00042428();
int snd_ScheduleSeqAfter(int a0, int a1) {
    return gl_func_00042428(a0 & 0xFF, a1, 0, 0x3F800000);
}
 








extern char D_2DDBC_a, D_2DDBC_b, D_2DDBC_c, D_2DDBC_d;
 


void snd_ScheduleSeq(int a0, int a1, int a2, float  a3) {
    int *p = &a0;
    a0 &= 0xFF;
    *(int*)&D_2DDBC_a = a0;
    *(int*)&D_2DDBC_b = a1;
    *(int*)&D_2DDBC_c = a2;
    *(float*)&D_2DDBC_d = (a3) ;
    (void)p;
}

 
















extern int gl_ref_00042490();
extern float D_00000000_324;
void snd_PlayPlayer1SeqDefault(int a0) {
    int *p = &a0;
    D_00000000_324 = 1.0f;
    gl_ref_00042490(a0 & 0xFF, 0);
    (void)p;
}

 










extern int D_2DE24_a, D_2DE24_b, D_2DE24_c;
void snd_PlayPlayer1Seq(unsigned char a0, int a1) {
    unsigned char *p = &a0;
    D_2DE24_a = a0;
    (*(SndTimers *)&(D_2DE24_b)) .ramp = 0;  
    gl_func_00000000 (0x4D010000, 0x3F800000);
    gl_func_00000000 ((a0 << 8) | 0x82010000, a1);
    gl_func_00000000 (0x90010000, 0xFFFF);
    gl_func_00000000 (0x0101FF00, D_2DE24_c);
    (void)p;
}


 






extern int gl_func_00000000();
extern int D_00000000;
void snd_StopPlayer1Seq(void) {
    if ((*(AudioContext *)&D_00000000 ) .seqPlayers[1].enabled) {
        gl_func_00000000 (0x83010000, 0);
    }
}

 





void snd_PlayPlayer0Seq0(void) {
    gl_func_00000000 ((void*)0x82000000, 0);
}

 









void snd_PlayPlayer2Seq(int a0, int a1) {
    gl_func_00000000 (0x82020000 | (((a0 * 8 + a1 + 0x1A) & 0xFF) << 8), 0);
}

 














void snd_StopPlayer0Seq(void) {
    if ((*(AudioContext *)&D_00000000 ) .seqPlayers[0].enabled) {
        gl_func_00000000 (0x83000000, 0);
    }
}

 






extern int gl_func_00000000_f(int, float );  
void snd_SetPlayer0ChannelFreqScale(int a0, float a2) {
    gl_func_00000000_f (0x04000000 | ((a0 & 0xFF) << 8), a2);
}

 



















extern int gl_func_00000000();
void snd_SoundObjInit(SoundObj *o, int a1) {
    o->kind = a1;
    o->unk14 = 1;
    o->unk15 = 1;
    o->flags = 0;
    o->unk1A = 0;
    o->unk17 = 0;
    o->reverbOn = 0;
    o->reverbOnSent = 0;
    o->unk1E = 0;
    o->fired = 1;
    o->unk26 = 0;
    o->unk23 = 1;
    o->unk2C = 1;
    o->unk48 = 0;
    o->unk38 = 0;
    o->lastLevel = 0;
    o->level = 0;
    o->unk18 = 0;
    o->unk28 = 0x40;
    o->scaleIdx = 0;
    o->unk33 = 0;
    o->unk1F = 0;
    o->voice.pan[0] = 0;
    o->voice.pan[1] = 0;
    o->voice.pan[2] = 0;
    o->speed = 0.0f;
    o->unk50 = 0.0f;
    o->unk04 = 0.0f;
    o->unk08 = 0.0f;
    o->unk0C = 0.0f;
    o->unk44 = 0.0f;
    o->unk10 = 0.0f;
    o->voice.volScale = 1.0f;
    o->voice.turnAtten = 1.0f;
    o->voice.angle = (float)1;
    if (*(int*)&D_00000000 != 0) {
        gl_func_00000000 (a1 & 0xFF);
    }
}

                                                                      
                                                                 
                                                               
                                                                     
  
                                   
                                                                       
                   
                                                                        
                      
                                                                      
      
  
                                                                     
                                                                     
                                                             
                                                                  
                                                                     
                                                                      
                                                                 
                                                                    
                                                             
                                                             
                                                                
                                                                   
                                                                   
                                                 
extern int gl_func_00000000();
void snd_SoundObjReset(SoundObj *o) {
    o->fired = 0;
    o->unk23 = 0;
    o->speed = 0.0f;
    o->unk04 = 0.0f;
    gl_func_00000000 (o->kind);
}

void snd_SoundObjSetScaleIdx15(SoundObj *o) {
    o->scaleIdx = 0xF;
}

void snd_SoundObjSetScaleIdx31(SoundObj *o) {
    o->scaleIdx = 0x1F;
}

void snd_SoundObjSetFlag1A(SoundObj *o) {
    o->unk1A = 1;
}





typedef char *(*GP_0002E0C4)();
void snd_SoundObjTriggerEvent(SoundObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 temp_f0;

    if (((arg0->unk48 == 0) && !(arg0->flags & 4)) || (((arg0->eventType != 1) || (arg0->level != 3)) && ((s32) arg0->level >= (s32) arg0->lastLevel))) {
        arg0->eventType = arg1;
        arg0->flags = arg0->flags | 4;
        if (arg1 != 1) {
            temp_f0 = arg0->speed;
            if (temp_f0 >= 50.0f) {
                arg2 = 3;
            } else if (temp_f0 >= 38.0f) {
                arg2 = 2;
            } else {
                arg2 = 0;
                if (temp_f0 >= 25.0f) {
                    arg2 = 1;
                }
            }
        }
        arg0->level = arg2;
        arg0->eventArg = arg3;
        arg0->lastLevel = arg2;
    }
}




void snd_SoundObjDisable(SoundObj *o) {
    o->flags |= 1;
    o->flags &= ~0x20;
}

                                                                  
                                                                       
                                                                  
                                                                         
                                                                          
                                                                           
                                                                         
                                                                        
                                                                    
                                                              
                                                                          
                                                                               
                                                                              
                                                                                
extern void gl_func_00043BE4(SoundObj *o, int event, int zero, float vol, int idx);
void snd_SoundObjStart(SoundObj *o) {
    unsigned char f = o->flags;
    if (f & 0x01) return;
    if (f & 0x20) return;
    o->flags = f | 0x20;
    if (o->flags1C & 0x01) return;
    if (o->unk14 == 1) {
        gl_func_00043BE4(o, 0x29, 0, 80.0f, o->unk28);
    } else {
        gl_func_00043BE4(o, 0x2A, 0, 80.0f, o->unk28);
    }
}

                                                                     
                                                                  
                                                                   
                                                              
                                    
  
                                  
                        
                                                                     
                        
                                                                        
                          
                                                                      
      
  
                                                          
                                                                      
                                                               
                                                                 
                                                               
                                                                     
                                                               
                                                                    
                                                               
                                                                   
                                                              
                           
                                                                       
                                                                           
                                                                            
                                                                        
                                                                               
                                                                      
extern int gl_func_00000000();
void snd_SoundObjStop(SoundObj *o) {
    unsigned char f = o->flags;
    unsigned char nf;
    if (!(f & 0x20)) return;
    nf = f & ~0x20;
    o->flags = nf;
    if (o->kind == 2) return;
    gl_func_00000000 (o, 0x3D);
}


 

















int snd_SoundObjEventIndex(unsigned char *o) {
    volatile int ret = 0;
    if (o[0x31] != 0) {
        ret = 16;
    }
    return ret;
}

                                                                      
                                                                    
                                                                  
                                                                 
                                                                  
  
                                            
                                                                       
                                                          
                            
                                                                       
                                                  
                          
                                                                       
        
                                                                 
                                                                      
                                                                   
                                         
      
  
                                                                     
                                                                     
                                                                                                             
                                                                                     
                                                                           
                                                                       
                                                                     
                                                                
                                                                     
                                                                    
                                                                  
                                
                                                                   
                                                                    
                                                                   
                                                                  
                                                               
                                                                
                                                               
                                                                    
                                                                             
                                                                               
                                                                                
                                                                               
                                                                          

 



































 














 










 








 



 





extern int gl_func_000428FC();
extern void gl_E354_emitf(s32, s32, s32, f32 , s32, s32);   
extern int gl_func_00043824(float, ...);
extern int gl_func_000438F4();
extern int gl_func_00044C38();
 



extern s32 D_cfg_E354;       
extern s32 D_stateB_E354;    
extern s32 D_stateC_E354;    
extern s32 D_stateD_E354;    
extern s32 D_stateF_E354;    
extern s32 D_stateE_E354;    
extern s32 D_raceA_E354;     
extern s32 D_raceB_E354;     
extern s32 D_raceC_E354;     
extern s32 D_raceD_E354;     
extern f32 D_E354_1C330[], D_E354_1C3B0[], D_E354_1C310[];   
extern s32 gl_E354_setf(s32, f32 );   
extern f32 D_E354_1C738_a, D_E354_1C738_b, D_E354_1C738_c, D_E354_1C73C_a, D_E354_1C73C_b, D_E354_1C73C_c;   
extern char D_E354_G[];   
 



extern void D_E354_GA(void);
 



extern s32 D_E354_GB[];
 


extern void gl_E354_v(s32, s32);
void snd_SoundObjUpdate(SoundObj *arg0, s32 arg1) {
     





    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 sp7D;
    u8 temp_v1_32;  
    f32 sp78;  
    f32 temp_f0;
    f32 temp_f10_2;
    f32 var_f4;
    u8 sp6B;
    u8 temp_v1_4;
    u8 temp_v1_5;
    u8 var_v0_2;
    f32 sp64;
    f32 sp60;
    f32 temp_f16;
    s32 var_v0;
    f32 temp_f18;
    u32 sp50;
    s32 temp_v0;
    s32 temp_v0_2;
    u32 temp_v0_7;
    s32 temp_v1;
    s32 var_t9;
    s32 var_v0_3;

    sp64 = 1.0f;
    temp_v0 = D_cfg_E354;
    sp60 = 1.0f;
    if (temp_v0 != 0) {
        if (temp_v0 == 4) {
            temp_v0_7 = D_stateC_E354;   if (1) {}  
            if ((((u32)temp_v0_7 == 1) || ((u32)temp_v0_7 == 2) || ((u32)temp_v0_7 == 3)) && (arg0->flags1C == 1U) && (arg0->kind == 0)) {
                arg0->kind = 2U;
                arg0->voice.volScale = 0.0f;
            }
        }
        if (D_stateB_E354 == 1) {
            arg0->unk23 = 0U;
            return;
        }
        if ((D_stateD_E354 != 1) && (arg0->unk23 != 0)) {
            if (arg0->fired == 0) {
                func_00000000(arg0);
                return;
            }
             





            temp_f18 = arg0->unk04 * arg0->speed * 100.0f;
            temp_v1_32 = arg0->scaleIdx;
            arg0->fired = 0U; if (1) {}  
            if (temp_v1_32) {  
                sp64 = D_E354_1C330[temp_v1_32];
                temp_f0 = D_E354_1C3B0[temp_v1_32];
                sp60 *= temp_f0;
                arg0->unk04 = (f32) (arg0->unk04 * temp_f0);
                 


                arg0->scaleIdx = (u8) (temp_v1_32 - 1);
            }
            temp_f0 = arg0->unk50 - arg0->speed;
            if (0.5f <= temp_f0) {
                temp_f0 = temp_f0 + 0.5f;
                if (2.0f <= temp_f0) {
                    temp_f0 = 2.0f;
                }
                sp60 *= temp_f0;
            }
            arg0->unk50 = (f32) ((arg0->speed + arg0->unk50) * 0.5f);
            arg0->unk44 = (f32) ((arg0->unk44 + temp_f18) * 0.5f);
            sp7D = gl_func_00043824(arg0->unk04 * 120.0f, (s32)((char *)&D_00000000 + 0x1C250), 0x10);
             
            temp_v1 = (u8)((gl_func_00043824(arg0->unk44, (s32)((char *)&D_00000000 + 0x1C290), 0x20) * 4) & 0xFF);  
             







            sp78 = *(f32 *)((char *)&D_00000000 + 0x16E0) + arg0->speed / 200.0f;
            temp_v0_2 = temp_v1;
            var_f4 = (f32) (u32) temp_v0_2;
            sp78 = sp78 * sp64;
            temp_f10_2 = var_f4 * sp60;
            var_t9 = (u32) temp_f10_2;  
            arg0->unk26 = (u8) (((s32) arg0->unk26 / 2) + ((s32) (var_t9 & 0xFF) / 2));
            if (arg0->speed == 0.0f) {
                arg0->unk26 = 0U;
            }
            if (arg0->reverbOnSent != arg0->reverbOn) {
                if (arg0->reverbOn == 1) {
                    var_v0 = 0x40;
                } else {
                    var_v0 = 8;
                }
                 


                arg1 = arg0->kind; if (var_v0 != arg1) {}  
                switch (arg1) {                      
                case 0:                              
                     

                    gl_E354_v(0x90000000, 6 + 0 * (int)(var_v0 + var_v0 + var_v0));
                    func_00000000(0x0500FF00, (s8) var_v0);
                    func_00000000(0x05020000, (s8) var_v0);
                    break;
                case 1:                              
                case 2:                              
                    gl_E354_v(0x90000000, 0x60 + 0 * (int)(var_v0 + var_v0 + var_v0));
                    func_00000000(0x0500FF00, (s8) var_v0);
                    func_00000000(0x05020100, (s8) var_v0);
                    break;
                }
                arg0->reverbOnSent = arg0->reverbOn;
            }
            if (arg0->flags1C & 1) {
                temp_f0 = arg0->voice.volScale;
                 


                arg0->unk26 = (u32) ((f32) (u32) arg0->unk26 * temp_f0);
                sp78 *= arg0->voice.turnAtten;  
                temp_v0 = arg0->voice.pan[0];  
                arg0->unk28 = (u8) ((s32) (temp_v0 + arg0->unk28) >> 1);
                if (arg0->kind == 0) {
                    gl_E354_setf(0x01020000, temp_f0);
                    func_00000000(0x03020000, (s8) arg0->unk28);
                    func_00000000(0x90000000, 0x806);
                    func_00000000(0x0C00FF00, *(s8 *)((char *)(arg0) + 0x63));
                    temp_f10_2 = func_00000000(0x0D00FF00, 0x3000);
                } else {
                    gl_E354_setf(0x01020100, temp_f0);
                    func_00000000(0x03020100, (s8) arg0->unk28);
                    func_00000000(0x90000000, 0x1060);
                    func_00000000(0x0C00FF00, *(s8 *)((char *)(arg0) + 0x63));
                    temp_f10_2 = func_00000000(0x0D00FF00, 0x3000);
                }
            } else {
                if (D_stateF_E354 == 4) {
                    switch (arg0->kind) {             
                    case 0:                          
                        arg0->unk28 = 0x10U;
                        break;
                    case 1:                          
                        arg0->unk28 = 0x70U;
                        break;
                    }
                } else {
                    arg0->unk28 = 0x40U;
                }
                if (arg0->kind == 0) {
                    func_00000000(0x01020000, 0x3F800000);
                    temp_f10_2 = func_00000000(0x03020000, (s8) arg0->unk28);
                } else {
                    func_00000000(0x01020100, 0x3F800000);
                    temp_f10_2 = func_00000000(0x03020100, (s8) arg0->unk28);
                }
            }
            if (arg0->flags & 1) {
                arg0->unk08 = (f32) (arg0->unk08 + 50.0f);
                gl_func_00043BE4(arg0, 0, arg0->unk2C - 1, arg0->unk08, (s32) arg0->unk28);
                temp_f10_2 = func_00000000(arg0, (*(u32 *)((char *)&D_00000000 + 0x2154) & 7) + 0x20);
                arg0->flags = (u8) (arg0->flags & ~1);
            }
            var_v0_2 = arg0->unk14;
             




            temp_v0_2 = var_v0_2; if (1) {}
             

            if (var_v0_2 != arg0->unk2C) {
                if (arg0->unk2C == 0) {
                    temp_v0 = arg0->unk38;
                    arg0->unk08 = (f32) ((f32) temp_v0 * 3.0f);
                    if (temp_v0 < 0xA) {
                        arg0->unk08 = 0.0f;
                    }
                    var_v0_2 = 1;
                    if (arg0->unk14 == 1) {
                         




                         

                        arg1 = arg0->unk15;
                        switch (arg1) {  
                         

                        case 1: var_t9 = 0; break;
                        case 2: var_t9 = 1; break;
                        default: var_t9 = 2; break;
                        }
                    } else {
                         

                        var_t9 = 3;
                    }
                    switch (arg0->surface) {
                    case 3: case 4:
                        gl_func_00043BE4(arg0, 8, var_t9, arg0->unk08, (s32) arg0->unk28);
                        break;
                    case 1: case 2: case 5:
                    default:
                        gl_func_00043BE4(arg0, 0xC, var_t9, arg0->unk08, (s32) arg0->unk28);
                        break;
                    }
                     

                    var_v0_2 = arg0->unk14;
                    goto block_2C;
                } else {
                 
                    var_v0_2 = arg0->unk14; if (temp_v0_2 == 0) {
                        arg0->unk38 = 0;
                        arg0->unk33 = 0U;
                        goto block_81;
                    }
                    goto block_2C;
block_81:
                        var_v0_2 = arg0->unk14;
block_2C:
                    arg0->unk2C = var_v0_2;
                    goto block_83;
                }
            } else {
block_83:
                if (*(u16 *)((char *)(arg0) + 0x1A) != 0) {
                     






                    if (arg0->unk48 == 0) {
                        temp_f16 = arg0->speed;
                        sp6B = 0x11;
                        if (75.0f <= temp_f16) {
                            sp6B = 0x13;
                        } else if (50.0f <= temp_f16) {
                            sp6B = 0x12;
                        }
                        if (25.0f <= temp_f16) {
                            gl_func_00043BE4(arg0, 0x10, sp6B, 127.0f, (s32) arg0->unk28);
                        }
                    }
                    arg0->unk2A = sp6B;
                    *(u16 *)((char *)(arg0) + 0x1A) = 0U;
                    arg0->unk48 = 5;
                }
                if (arg0->flags & 4) {
                    sp50 = 4;
                    { int rv = gl_func_000428FC(arg0); var_v0_2 = rv;  
                    sp6B = rv;
                    temp_v1_2 = arg0->level;
                    temp_f10_2 = D_E354_1C310[temp_v1_2];
                    if (rv < 0xB) {
                         



                        switch (temp_v1_2) {         
                        default:                     
                            var_t9 = var_v0_2;
                            break;
                        case 0:                      
                        case 1:                      
                            var_t9 = var_v0_2 + 1;
                            break;
                        case 2:                      
                        case 3:                      
                            var_t9 = var_v0_2;
                            break;
                        }
                    } else {
                         


                        var_t9 = var_v0_2;
                    } }
                    if ((arg0->eventType != 1) || (temp_v1_2 != 3)) {
                        temp_v1_5 = arg0->surface;  
                        if ((s32) temp_v1_5 >= 6) {
                            var_t9 = temp_v1_5 + 0xE;
                        }
                        if ((*(s32 *)(D_E354_G + 0)   == 4) || (arg0->flags1C & 1)) {
                            gl_func_00043BE4(arg0, 0x10, var_t9, temp_f10_2, (s32) arg0->unk28); var_v0_2 = 0;  
                        } else {
                            var_v0_3 = arg0->eventArg;  
                            if (var_v0_3 == 1) {
                                var_v0_3 = 0x7F;
                            } else if (var_v0_3 == 3) {
                                var_v0_3 = 0;
                            } else {
                                var_v0_3 = 0x40;
                            }
                            if (arg0->unk1E != 0) {
                                var_v0_3 = (0x7F - var_v0_3) & 0xFF;
                            }
                            gl_func_00043BE4(arg0, 0x10, var_t9, temp_f10_2, var_v0_3); var_v0_2 = 0;  
                        }
                    }
                     
                    switch ((u8) sp6B) {             
                    case 0:
                    case 2:
                        temp_v1 = 8;
                        break;
                    case 4:
                    case 6:
                        temp_v1 = 0xC;
                        break;
                    case 8:
                        temp_v1 = 0x10;
                        break;
                    case 10:
                        temp_v1 = 0x38;
                        break;
                    default:                         
                        temp_v1 = 0x10;
                        temp_v0_7 = arg0->level;  
                        switch ((unsigned)temp_v0_7) {
                        case 0:
                            sp50 = 6;
                            break;
                        case 1:
                            temp_v1 = 0x18;
                            break;
                        case 2:
                            temp_v1 = 0x1C;
                            break;
                        default:
                            temp_v1 = 8;
                            break;
                        }
                        break;
                    }
                     


                    func_00000000(arg0, ((u32) *(s32 *)((char *)&D_00000000 + 0x2154) % sp50) + (0, temp_v1));
                    arg0->unk48 = 0xA;
                    arg0->level = 0U;
                    arg0->unk2B = sp6B;
                    arg0->flags = (u8) (arg0->flags & 0xFFFB);
                }
            }
             

            if (arg0->unk48 != 0) {
                if (--arg0->unk48 == 0) {
                    arg0->lastLevel = 0;
                }
            }
            if (arg0->unk23 != 0) {
                 














                 

                temp_v0_2 = arg0->unk14;
                if ((D_raceA_E354 == 1) && (((u32)D_raceB_E354 == 4) || ((u32)D_raceB_E354 == 0xA)) && (((u32)D_raceB_E354 != 4) || (arg0->kind != 2))) {
                    if (temp_v0_2 == 0) {
                        var_v0_3 = arg0->unk38;  
                        if (var_v0_3 == 0) {
                            temp_f16 = arg0->speed;
                            D_E354_1C738_a = temp_f16;
                            if (temp_f16 == 0.0f) {
                                temp_f16 = 1.0;  
                                D_E354_1C738_b = temp_f16;
                            }
                        } else if (var_v0_3 >= 7) {
                            temp_f16 = D_E354_1C738_c; temp_f10_2 = arg0->speed / temp_f16; if (1) {}  
                            if (temp_f10_2 <= 0.5f) {  
                                temp_f10_2 = 0.5f;
                            }
                            temp_f16 = 1.0;  
                            if (temp_f16 <= temp_f10_2) {
                                temp_f10_2 = temp_f16;
                            }
                            temp_v0 = *(s32 *)((char *)D_E354_GA + 0);  
                            if (temp_v0 != 0) {
                                temp_f16 = *(f32 *)((char *)(((temp_v0 & 0x1F) * 4)) + 0x1C430);  
                                temp_f10_2 *= temp_f16;
                                *(s32 *)((char *)D_E354_GA + 0) = (s32) (temp_v0 - 1);
                            }
                            temp_f16 = *(f32 *)((char *)&D_00000000 + 0x1724);
                            if (temp_f16 <= temp_f10_2) {
                                temp_f10_2 = temp_f16;
                            }
                             


                            D_E354_GB[5] = 0x20;
                            D_E354_1C73C_a = temp_f10_2; if (temp_v0_2) {}  
                            gl_E354_setf(0x04010900, temp_f10_2); temp_v0_2 = arg0->unk14;
                        }
                    } else {
                        temp_v0 = D_E354_GB[5];
                        if (temp_v0 != 0) {
                            temp_f0 = D_E354_1C73C_b;
                            temp_f16 = *(f32 *)((char *)&D_00000000 + 0x1728);
                            temp_f0 = ((1.0f - temp_f0) / (f32) temp_v0) + temp_f0;
                            if (temp_f16 <= temp_f0) {
                                temp_f0 = temp_f16;
                            }
                            temp_f16 = 0.5;  
                            if (temp_f0 <= temp_f16) {  
                                temp_f0 = temp_f16;
                            }
                            D_E354_GB[5] = (s32) (temp_v0 - 1);
                            D_E354_1C73C_c = temp_f0;
                            gl_E354_setf(0x04010900, temp_f0); temp_v0_2 = arg0->unk14;
                        } else {
                            gl_E354_setf(0x04010900, 1.0f); temp_v0_2 = arg0->unk14;
                        }
                    }
                }
                switch ((unsigned)temp_v0_2) {               
                case 0:                              
                    if (D_raceC_E354 == 0) {
                        arg0->unk38 = (s32) (arg0->unk38 + 1);
                    } if (1) {}  
                     


                    if ((*(volatile u8 *)((char *)(arg0) + 0x21) == 0) && (arg0->unk38 == 0x1E)) {
                        func_00000000(0x20, 0x12, 0);
                    }
                    if (D_raceD_E354) {}  
                    var_v0_3 = D_raceD_E354;  
                    if ((var_v0_3 != 0) && (var_v0_3 != 1) && (var_v0_3 != 8)) {
                        temp_v1 = arg0->unk48;
                        if (temp_v1 != 0) {
                            arg0->unk33 = 0x1AU;
                        }
                         
                        if (*(f32 *)((char *)&D_00000000 + 0x172C) < arg0->unk0C) {
                            if (++arg0->unk33 == 0x19) {    
                                func_00000000(arg0, 0x3C);
                            }
                        }
                    }
                    arg0->unk26 = 0U;
                    arg0->unk04 = 0.0f;
                     
                case 1:                              
                    if (arg0->unk04 > 0.5f) {
                        var_t9 = arg0->unk18;
                        if (arg0->unk1E == 0) {
                            var_t9 = -var_t9;
                        }
                        func_00000000(arg0->kind, arg0->unk15, var_t9);
                    } else {
                        func_00000000(arg0->kind);
                    }
                    gl_E354_emitf(arg0->kind, sp7D * 0x10, arg0->unk26, sp78, (s32) arg0->unk15, (s32) arg0->unk28);
                    break;
                default:                             
                    gl_E354_emitf(arg0->kind, sp7D * 0x10, arg0->unk26, sp78, temp_v0_2 + 2, (s32) arg0->unk28);
                    func_00000000(arg0->kind);
                    break;
                }
                gl_func_000438F4(arg0);
            }
            if ((D_stateE_E354 == 1) && (arg0->kind == 0)) {
                 
                temp_f0 = arg0->unk10 + 1.0f;
                gl_func_00044C38((s32) (temp_f0 * 63.5f));
            }
        }
    }
}




 























s32 snd_FindNearestF32_2F1B8(f32 key, f32 *arr, s32 n) {
    s32 mid = n >> 1;
    s32 step = mid + 1;
    s32 nxt;
    f32 d, d2, d3;
    f32 *p;
    step = step >> 1;
loop:
    p = &arr[mid];
    nxt = mid + 1;
    d = key - p[0];
    if (0.0f < d) {
        if (n == nxt) {
            goto retmid;
        }
        d2 = p[1] - key;
        if (0.0f < d2) {
            if (!(d2 < d)) {
                goto retmid;
            }
            return nxt;
        }
        mid += step;
        step = step + 1;
        step = step >> 1;
        goto loop;
    }
    if (mid == 0) {
        goto retmid;
    }
    d = -d;
    d3 = key - p[-1];
    if (0.0f < d3) {
        if (!(d3 < d)) {
            goto retmid;
        }
        return mid - 1;
    }
    mid -= step;
    step = step + 1;
    step = step >> 1;
    goto loop;
retmid:
    return mid;
}




                                                                               
                                                                  
                                                                
  
                                           
                          
                          
                                                                     
                        
                                                                  
                   
                        
                                                                        
                              
                                                                         
                         
                            
                                                             
                    
      
  
                                                                 
                                                                     
                                                                      
                                                                     
                                                                       
                                                                    
                                                                   
                                                                   
                                                                                          
                                                    
                                                                  
                                                               
                                                                 
                                       




extern void gl_seti_2F288(int, int);
extern void gl_setf_2F288(int, float);
extern int D_2F288_g[];
extern char D_2F288_a[], D_2F288_b[], D_2F288_c[], D_2F288_d[], D_2F288_n[], D_2F288_m[], D_2F288_r[], D_2F288_e[];
extern float D_2F288_ta[], D_2F288_tb[];  
void snd_SoundObjUpdateChannel(SoundObj *o) {
    u8 mode = o->kind;
    float f = o->speed;
    int k = o->unk14;
    u8 c;
    u8 idx;
    u8 v;
    int t0;
    int t;
    float sc;
    float ff;
    int hi;
    int cmd;
    int n;

    if (mode != 2 && o->flags1C == 0) {
    if (mode == 0) t0 = 3; else t0 = 7;
    t = ((SndLevelRamp *)D_2F288_g)->current;
    f = *(float *)(D_2F288_a + 0x1730) * (float)t + f;
    if (k == 0 && o->unk38 >= 21) {
        switch (((SndLevelRamp *)D_2F288_g)->mode) {
        case 0:
        default:
            v = (int)(f * 0.5f);
            sc = 1.0f;
            break;
        case 1:
        case 2:
            v = (int)(f / 3.5f);
            sc = *(float *)(D_2F288_b + 0x1734);
            break;
        }
    } else {
        v = (int)(f * 0.25f);
        sc = *(float *)(D_2F288_c + 0x1738);
    }
    v += t;
    c = o->unk1F;
    if (c != 0) {
        n = *(int *)(D_2F288_n + 0x1C740) - 1;
        *(int *)(D_2F288_m + 0x1C740) = n;
        if (n == 0) {
            if (k == 0) {
                n = (int)c / 2;
                if (v >= n) v -= n;
            } else {
                v += c;
            }
            *(int *)(D_2F288_r + 0x1C740) = 3 - (*(int *)(D_2F288_e + 0x2154) & 1);
        } else if (k != 0 && v >= 10) {
            v -= 10;
        }
    }
    ff = f / 80.0f + *(float *)(D_2F288_d + 0x173C); if (1) {}
    idx = o->scaleIdx;
    if (idx != 0) {
        ff *= D_2F288_ta[idx];
        sc *= D_2F288_tb[idx];
    }
    if (k == 255) {
        hi = (t0 & 0xFF) << 8;
        cmd = hi | 0x06000000;
        gl_seti_2F288(cmd | 6, 1);
        ff = 1.0f;
    } else {
        hi = (t0 & 0xFF) << 8;
        cmd = hi | 0x06000000;
        gl_seti_2F288(cmd | 6, 0);
    }
    if (o->flags1C & 1) sc = 0.0f;
    gl_seti_2F288(cmd | 5, (s8)v);
    gl_setf_2F288(hi | 0x04000000, ff);
    gl_setf_2F288(hi | 0x01000000, sc);
    }
}





 












 






void snd_SoundObjPlay(SoundObj *o, int a1, int a2, f32 v, unsigned char b) {
    int iv;
    float w;

    if (v < 0.0f) {
        v = -v;
    }
    w = v + 15.0f;
    if (127.0f < w) {
        w = 127.0f;
    }
    if (o->flags1C & 1) {
        w = o->voice.volScale * w;
        b = o->voice.pan[0];
    }
    iv = (int)w;
    if (iv >= 0x80) {
        iv = 0x7F;
    }
    if (iv < 0) {
        iv = 0;
    }
    gl_func_00000000 (o->kind, a1, a2, iv, b);
}

void snd_Stub_2F630(void) {
}

                                                                        
                                                                  
                                                          
  
                                                                   
                                                     
                                                                       
                           
                                                                 
                                                                   
                            
                                 
                             
                                     
                                                                       
                                                       
                                                        
        
      
  
                                                                     
                                                                   
                                                                
                                                                   
                                                                     
                                                                     
                                                                     
                                                                  
                                                                      
                                                                
                                                              
                                                                   
                                                                
                                                                      
extern int gl_func_00000000();
 




void snd_soundObjSendPlay(int a0, int sel, int arg3, int arg4, int stk_43) {
    int v1 = (((a0 == 0) ? 2 : 6) & 0xFF) << 8;
    gl_func_00000000 (0x03000000 | v1, (signed char)stk_43);
    if (sel == 0 || sel == 8 || sel == 12) {
        gl_func_00000000 ((0x06000000 | v1) | 6, (signed char)arg4);
        gl_func_00000000 ((0x06000000 | v1) | 1, (signed char)(sel + arg3));
    } else {
        gl_func_00000000 ((0x06000000 | v1) | 5, (signed char)arg4);
        gl_func_00000000 ((0x06000000 | v1), (signed char)(sel + arg3));
    }
}


 

void snd_SoundObjSetAngle(char *o, f32 in, signed char idxb) {
}


                                                                          
                                                                  
                                                      
  
                                            
                      
                
                                                                    
                               
                 
                
                               
                               
                 
                
                               
                 
                                                     
                 
        
      
  
                                                                     
                                                                   
                                                                     
                                                                    
                                                                      
                                                                      
                                                                      
                                                                        
                                                              
                                                                  
                                                                
                                                                      
extern int gl_func_00000000();
void snd_soundObjChannelsOn(int mode) {
    switch (mode) {
        case 0:
            gl_func_00000000 (0x06000100, 1);
            gl_func_00000000 (0x06000300, 1);
            break;
        case 1:
            gl_func_00000000 (0x06000500, 1);
            gl_func_00000000 (0x06000700, 1);
            break;
        case 2:
            gl_func_00000000 (0x06000500, 1);
            break;
        default:
            break;
    }
}

 







extern int gl_func_00000000();
void snd_soundObjChannelsOff(int mode) {
    switch (mode) {
        case 0:
            gl_func_00000000 (0x06000100, -1);
            gl_func_00000000 (0x06000101, -1);
            gl_func_00000000 (0x06000300, 0);
            break;
        case 1:
        case 2:
            gl_func_00000000 (0x06000700, 0);
            gl_func_00000000 (0x06000500, -1);
            gl_func_00000000 (0x06000501, -1);
            break;
    }
}

                                                                                     
                                                                  
                                                   
  
                                                                              
                                                               
                                                             
                                  
                                                             
                                                                   
                                 
                                    
                                                   
                                                   
      
  
                                                                    
                                                                      
                                                                
                                                                
                                                                    
                                                                 
                                                                    
                                                                     
                                                                
                                                              
                                                                        
                                                               
                                                                             
                                                                              
                                                                                              
                                                                                
                                                                            
                                                                                 
                                                                            
                                                                              
                                                                          
                                                                               

 









extern int gl_func_00000000();
void snd_SetPlayer0ChannelParams_2F9D4(int a0, int b, int arg3, ...) {
    int sub = (((a0 == 0) ? 1 : 5) & 0xFF) << 8;
    gl_func_00000000(0x06000000 | sub | 5, (signed char)b, arg3, b);
    gl_func_00000000_f(0x01000000 | sub, (float)arg3 / 127.0f);
    gl_func_00000000(0x04000000 | sub, (&arg3)[1]);
    gl_func_00000000(0x06000000 | sub, ((signed char *)&arg3)[11]);
    gl_func_00000000(0x03000000 | sub, ((signed char *)&arg3)[15]);
}




                                                                                   
                                                                  
                                               
  
                                                                       
                                                             
                                                    
                                                           
                                                 
                                                                    
                                              
      
  
                                                                     
                                                                       
                                                                     
                                                                 
                                                                  
                                                             
                                                                  
                                                                      
                                                                     
                                                              
                                        
                                                              
                                                              
                                                              
                                                                      
 









extern int gl_func_00000000();
void snd_SetPlayer0ChannelIO12_2FA90(int a0, int arg1, int arg2) {
    int op = (a0 == 0) ? 1 : 5;
    int idx = arg2 + 0x40;
    if (idx >= 0x80) idx = 0x7F;
    gl_func_00000000 ((0x06000000 | ((op & 0xFF) << 8)) | 2, (signed char)idx);
    gl_func_00000000 ((0x06000000 | ((op & 0xFF) << 8)) | 1, (signed char)(arg1 + 8));
}

extern int gl_func_00000000();
void snd_ResetPlayer0ChannelIO1_2FB10(int a0) {
    int v = a0 == 0 ? 1 : 5;
    int x = (v & 0xFF) << 8;
    x |= 0x06000000;
    x |= 1;
    gl_func_00000000 (x, -1);
}

extern int gl_func_00000000();
int snd_PostEvent(int a0) {
    return gl_func_00000000 (a0, 0);
}

 









void snd_dispatchEvent(s32 sel, s32 v) {
    volatile int ret = sel;
}

extern int gl_func_00000000();

 




void snd_SetPlayer0Channel0IO_30504(int a0) {
    if (a0 >= 0x101) {
        a0 = a0 & 0xFF;
    }
    if (a0 >= 0x80) {
        gl_func_00000000 (0x06000001, (signed char)(a0 - 0x80));
    } else {
        gl_func_00000000 (0x06000000, (signed char)a0);
    }
}

 




void snd_SetPlayer0Channel8IO1_30564(void) {
    gl_func_00000000 (0x06000801, 1);
}

 




void snd_TriggerChannel8CueIfIdle(void     ) {
    if ((*(SndCueQueues *)&(D_00000000)) .fadeInFrames != 0) goto end;
    if ((*(SndCueQueues *)&(D_00000000)) .holdFrames != 0) goto end;
    gl_func_00000000 (     );
end:
    return;
}

 


















extern int gl_func_00000000();
 


void snd_SetPlayer0Channel8Pan_305CC(int a0) {
    if (a0 < 0) a0 = 0;
    if (a0 >= 0x80) a0 = 0x7F;
    gl_func_00000000 (0x03000800, (s8)a0);
}

                                                                            
                                                                  
                                                                     
  
                                                                     
                                                          
                                                                  
                                            
                                                    
                         
                                
                                
                                                                   
                            
                                                            
                                                                       
                                       
                                             
      
  
                                                                  
                                                                    
                                                                
                                                                  
                                                                     
                                                                     
                                                                   
                                                                
                                                                   
                                                                    
                                                                     
                                           
                                                                  
                                                                
                                                              
                                                                      
                                                                            
                                                                           
                                                                            
                                                                             
                                                                          
                                                                          
                                                                         
                                                                          
                                                                      
                                                                         
                                                                        
                               

extern int gl_func_00000000();
void snd_TriggerChannel8Cue(s32 arg0, s32 arg1, s32 arg2) {
    SndCueQueues *g = &(*(SndCueQueues *)&(D_00000000)) ;
    f32 temp_f8;
    s32 temp_v0;
    s32 var_v1;

    var_v1 = g->fadeInFrames;
    if (g->mode != 4) {
        temp_v0 = g->mode;
        if (temp_v0 == 2) {
            if (arg2 == 0) {
                arg2 = 8;
            }
            if (arg2 == 1) {
                arg2 = 0xA;
            }
            if (arg2 == 3) {
                arg2 = 0xB;
            }
            if (arg2 == 4) {
                arg2 = 0xB;
            }
            if (arg2 == 5) {
                arg2 = 0xB;
            }
        }
        if ((var_v1 != 0) && (var_v1 < arg0)) {
            if (arg2 == g->cue) {
                g->holdFrames = arg1;
            } else {
                temp_f8 = g->level / 1.5f;
                var_v1 = 0;
                g->level = temp_f8;
                g->fadeInFrames = arg0;
                if (arg0 != 0) {
                    f32 num = 1.0f - temp_f8;
                    g->upStep = num / (f32) g->fadeInFrames;
                }
                g->holdFrames = arg1;
            }
        } else {
            g->fadeInFrames = arg0;
            if (arg0 != 0) {
                f32 num = 1.0f - g->level;
                g->upStep = num / (f32) g->fadeInFrames;
            }
            g->holdFrames = arg1;
        }
        if ((temp_v0 != 0) && ((arg2 != g->cue) || (var_v1 == 0)) && (g->fadeInFrames != 0)) {
            g->cue = arg2;
            gl_func_00000000(0x06000800, (s8) arg2, arg2, 4);
        }
    }
}





 





















































void snd_TickChannel8Fade(void) {
}


 




void snd_SetChannel8Mode(int mode) {
}

void snd_Stub_309A4(void) {
}

 


























extern int D_00000000_1c0c0;
extern int D_309AC_a;
extern int gl_ref_00046314();





void snd_SetLevelRampTarget(int sel) {
    int p;
    if (sel != ((SndLevelRamp *)&D_309AC_a)->mode) {
        switch (sel) {
            case 2:  p = 70; break;
            case 1:  p = 30; break;
            case 0:
            default: p = 0;  break;
        }
        gl_ref_00046314(&D_00000000_1c0c0, p, 30);
        ((SndLevelRamp *)&D_00000000_1c0c0)->mode = sel;
    }
}





                                                                       
                                                                  
                                                                 
  
                                             
                                                                      
                                                                    
                     
                             
                                                                   
                   
                               
               
                               
                       
        
                                                     
          
      
  
                                                                   
                                                                   
                                                                    
                                                                    
                                                                    
                                                                   
                                                                 
                                                                 
                                                                    
                                                                
                                                                    
                                                                   
                                                              
                                                            
                                                                 
                                       
                                                                         
                                                                         
                                                                        
                                                                       
                                                                           
                                                                            
                                                                             
                                                                           
                                                                          
                                                                         

extern int gl_func_00000000();
void snd_StartPlayer2Seq(s32 arg0, s32 arg1) {
    char *g = (char *)&D_00000000;
    s32 temp_v0;

    gl_func_00000000();
    *(s32 *)(g + 0) = arg0;
    gl_func_00000000(0xF);
    *(s32 *)(g + 0) = arg1;
    temp_v0 = *(s32 *)(g + 0);
    if ((temp_v0 == 0) || (temp_v0 == 4)) {
        if (arg0 >= 5) {
            gl_func_00000000(*(s32 *)(g + 0) + 0x29);
        } else {
            gl_func_00000000(*(s32 *)(g + 0) + 4);
        }
        gl_func_00000000(0xE);
        if (arg1 >= 5) {
            gl_func_00000000(*(s32 *)(g + 0) + 0x29);
            return;
        }
        gl_func_00000000(*(s32 *)(g + 0) + 4);
    }
}




                                                                              
                                                                   
                                                                   
                                                                 
  
                                                               
                                                                 
                                                              
                                                                    
                                 
                                                            
                                                            
                                                              
                                                             
                                                           
                                                            
                                                           
                                                             
      
  
                                                                    
                                                               
                                                           
                                                             
                                                                
                                                                
                                                              
                                                      
                                                         
                                                               
                                                             
                                                            
                                                         
                                  
                                                              
                                                    
                                                                
                                                         
                                                                
                                                     
                                                                
                                          
                                                                      
                                                                       
                                                                       
                                                                    
                                                                         
                                                                          
                                                                     
                                                       
                                                              
                                                                      
                                                                       
                                                                        
                                                                     
                                                                
                                                                    
                                  
                                                                       
                                                                     
                                                                         
                                                                     
                                                                          
                                                                          
                                                                      
                                                                
                                       

 






































 
















 














extern int gl_func_00041D0C();
extern int gl_func_00042364();
extern int gl_func_000460D0();
extern int gl_func_00041ED4();
extern int gl_func_00041F0C();
extern int gl_func_00041F44();
extern int gl_func_00044F18();
extern int gl_func_emit();      

typedef struct {
    s32 f0, f4, f8, fC, f10, f14, f18;
} GlState30AF4;

extern GlState30AF4 gl_state_30AF4;
 


extern u32 gl_cmd_30AF4;
extern s32 D_30AF4_b, D_30AF4_c, D_30AF4_d, D_30AF4_e;
extern s32 D_30AF4_f, D_30AF4_g, D_30AF4_h, D_30AF4_i, D_30AF4_j, D_30AF4_k;
extern u32 D_30AF4_l;
extern s32 D_30AF4_m, D_30AF4_n, D_30AF4_o, D_30AF4_p, D_30AF4_q;
extern u32 D_30AF4_r;
extern s32 D_30AF4_s, D_30AF4_t, D_30AF4_v, D_30AF4_w, D_30AF4_x;
extern f32 D_30AF4_flt;
extern char gl_data_30AF4_45010, gl_data_30AF4_45F78;   









extern void gl_func_emit_30AF4v();
extern void gl_func_00030AF4_44F18v();  
extern void gl_func_00030AF4_42364v();  
extern void gl_func_00030AF4_460D0v();  
void snd_HandleSeqEvent_30AF4(mode, sub, arg2)
s32 mode;  

u32 sub;
s32 arg2;
{
    s32 flag;         
    s32 wv;           
    s32 prev;         
    s32 w;            
    s32 sv;           
     





    flag = 0;
    if (gl_state_30AF4.f0 == 1) {
        gl_func_00041D0C();
    }
    gl_func_emit_30AF4v(0xFB000000, &gl_data_30AF4_45010);
    prev = gl_state_30AF4.f0;
    gl_state_30AF4.f0 = mode;
    gl_func_emit(0);
    gl_func_emit_30AF4v(1);
    D_30AF4_b = 0;
    D_30AF4_c = 0;
    D_30AF4_d = 0;
    D_30AF4_e = 0;
    gl_state_30AF4.f4 = 0;
    gl_state_30AF4.f8 = 0;
    gl_state_30AF4.f14 = 0;
    gl_state_30AF4.f0 = 0;
    gl_state_30AF4.f18 = 0;
    gl_func_emit();
    gl_func_00030AF4_460D0v();  

    sv = (s32)&gl_state_30AF4 + 0 * (int)(flag);  


    if (sv) {}  
    switch (mode) {                      
    case 1:                              
        gl_func_00042364(1);
        flag = 1;
        break;
    case 0:                              
        D_30AF4_f = 0;
        gl_func_00042364(0);
        gl_func_emit(2);
        flag = 1;
        break;
    case 2:                              
        gl_func_00042364(2);
        gl_cmd_30AF4 = 16;  

        gl_func_emit((((u8 *)&gl_cmd_30AF4)[3]) );
        flag = 1;
        break;
    case 3:                              
        if (prev != 0) {
            gl_func_00042364(5);
            flag = 1;
        }
        gl_func_emit(3);
        break;
    case 4:                              
        if (prev == 0) {
            D_30AF4_g = 12;
            break;
        }
        if (prev == 3) {
            for (;;) {
                if (gl_func_emit(2, 14, 0) < 100) {
                    break;
                }
                gl_func_emit();
            }
        }
         



        D_30AF4_h = sub + 0 * (int)(flag);
        sv = D_30AF4_h;  
        gl_cmd_30AF4 = D_30AF4_h + 4; if (1) {}
        if (D_30AF4_i != 0 && D_30AF4_h == 6) {
            gl_cmd_30AF4 = 7 + 0 * (int)(D_30AF4_i + D_30AF4_i);
        }
        if (D_30AF4_i == 4) {
            gl_func_00042364(4);
            gl_cmd_30AF4 = D_30AF4_j + 18; if (1) {}
        } else if (sv + 0 * (int)(sv + sv + sv + sv + sv + sv) == 0) {
            gl_func_00042364(6);
        } else {
            gl_func_00042364(3);
        }
        flag = 1;
        D_30AF4_k = 14;
        break;
    case 7:                              
        if (gl_cmd_30AF4 == 13) {
            break;
        }
        if (gl_cmd_30AF4 == 15) {
            break;
        }
        if (gl_cmd_30AF4 == 14) {
            break;
        }
        if (prev == 8) {
            break;
        }
        if (D_30AF4_l == 14) {
            gl_cmd_30AF4 = 14;
        } else if (D_30AF4_l == 16) {  
            gl_cmd_30AF4 = 16;
        } else {
            gl_cmd_30AF4 = 13;
        }
        gl_func_emit((((u8 *)&gl_cmd_30AF4)[3]) );
        break;
    case 5:                              
        {
        w = 35;
        if (sv) {}  
        if (D_30AF4_m == 4) {
            gl_cmd_30AF4 = 13;  
            wv = 523 + 0 * (int)(sub);  
        } else {
            switch (sub) {
            case 0:
                wv = 21;
                if (D_30AF4_m != 0) {
                    *(s32 *)&gl_cmd_30AF4 = 14;
                }
                break;
            case 1:
                gl_cmd_30AF4 = 13;
                wv = 20;
                break;
            case 2:
                gl_cmd_30AF4 = 13;
                wv = 22;
                w = 60;
                break;
            case 3:
            default:
                *(s32 *)&gl_cmd_30AF4 = 14;  
                wv = 256;
                break;
            }
        }
        D_30AF4_n = gl_cmd_30AF4 + 0 * (int)(sv);  
        if (sv) {}
        if (D_30AF4_m == 0 && sub == 0) {
            ((GlState30AF4 *)sv)->fC = 256;  


            gl_func_emit(0x83010000, 2000);
            D_30AF4_o = 14;
        } else if (D_30AF4_p == 1) {
            gl_func_emit(0x46010000, 0);
            gl_func_emit((((u8 *)&gl_cmd_30AF4)[3]) , w + 10);
        } else {
            gl_func_emit(0x83010000, 80);
            gl_func_emit((((u8 *)&gl_cmd_30AF4)[3]) , w);
        }
        gl_func_emit(wv);
        }
        break;
    case 6:                              
        D_30AF4_q = 14;
        break;
    case 8:                              
        if (gl_cmd_30AF4 != 15) {
            gl_cmd_30AF4 = 16;
            D_30AF4_r = 16;
            gl_func_emit((((u8 *)&gl_cmd_30AF4)[3]) );
        }
        break;
    case 10:                              
        gl_func_00030AF4_42364v(3);  
         


        sv = (u32)&gl_state_30AF4;
        if (sv) {}
        *(s32 *)sv = sub;  

        if (*(u32 *)sv == 1) {  


            gl_cmd_30AF4 = 5;
        } else {
            gl_cmd_30AF4 = 17;
        }
        gl_func_emit((((u8 *)&gl_cmd_30AF4)[3]) , 35);
        flag = 1;
        break;
    case 11:                             
        gl_func_00042364(7);
        gl_cmd_30AF4 = 18;
        gl_func_emit(0x81000F00, 0);
        sv = sub;  
        D_30AF4_s = sv;
        if (sv == 2) {
            gl_func_emit(0x81001300, 0);
        }
        gl_func_emit((((u8 *)&gl_cmd_30AF4)[3]) );
        flag = 1;
        break;
    case 13:                             
        gl_cmd_30AF4 = 19;
        gl_func_emit((((u8 *)&gl_cmd_30AF4)[3]) , 80);
        break;
    case 9:
    case 12:
        break;
    }

    if (flag == 1) {
        gl_func_00041ED4();
        gl_func_emit();
        gl_func_00041F0C();
        gl_func_00041F44();
        if (mode != 4) {
            gl_func_emit(0, 0);
        }
    }

    sv = (u32)&gl_state_30AF4;  
    if (D_30AF4_t != 5) {
        gl_func_00030AF4_44F18v(0);  
    } else {
        *(f32 *)&((GlState30AF4 *)sv)->f14 = 0.1f;  



        gl_func_emit(0, 100, ((GlState30AF4 *)sv)->f4);
        D_30AF4_v = 4;
    }

    switch (mode) {                   
    case 4:                              
        if (prev == 0) {
            break;
        }
        if (D_30AF4_w == 1) {
            gl_func_00030AF4_44F18v(1);
        } else if (D_30AF4_w == 0) {  
            gl_func_00030AF4_44F18v(2);
        }
        if (D_30AF4_x == 1 || D_30AF4_x == 3) {
             


            switch (D_30AF4_w) {                 
            case 0:
                gl_func_emit_30AF4v(0x1F);
                break;
            case 1:
                gl_func_emit_30AF4v(0x1B);
                break;
            case 2:
                gl_func_emit_30AF4v(0x1D);
                break;
            case 3:
                gl_func_emit_30AF4v(0x19);
                break;
            case 4:
                gl_func_emit_30AF4v(0x1E);
                break;
            case 5:
                gl_func_emit_30AF4v(0x1C);
                break;
            case 6:
                gl_func_emit_30AF4v(0x1A);
                break;
            case 7:
                gl_func_emit_30AF4v(0x18);
                break;
            }
        }
        if (D_30AF4_w == 8) {
            gl_func_emit(0xBC);
        }
        break;
    case 0: case 2: case 5: case 7: case 8: case 9: case 10: case 11:
        break;
    case 1:                              
        gl_func_emit(0xF8000000, 0);
        gl_func_emit(0xA3);
        break;
    case 3:                             
        gl_func_emit(0xF8000000, 0);
        gl_func_emit(0, 0x3E99999A, 0);
        break;
    case 6:                             
        switch (sub) {
        case 0:
            gl_func_emit(14);
            break;
        case 1:
            gl_func_emit(15);
            break;
        }
        break;
    }

    gl_func_emit(0xFB000000, 0);
    gl_func_emit(0);
    gl_func_emit(0xFB000000, &gl_data_30AF4_45F78);
}





 









void snd_HandleSeqEnd(int a, int b, int c) {
    volatile int ret = a;
}

extern int gl_func_00000000();



int snd_AddSoundHeap() {

    return gl_func_00000000 (   );
}

extern int gl_func_00000000();
int snd_RemoveSoundHeap() {
    return gl_func_00000000 ();
}

 



void snd_PreNMI(void) {
    gl_func_00000000 ();
}

 






void snd_InitCueQueues(void) {
    int i;
    SndCueQueue *base = (*(SndCueQueues *)((char *)&(D_00000000) + 0x338)) .queue;
    for (i = 0; i != 2; i++) {
        SndCueQueue *q = &base[i];
        q->cue = i;
        q->wr = 0;
        q->rd = 0;
        q->timer = 0;
        q->unk4C = 0;
        q->pending = 0;
    }
}

 

extern int gl_ref_00045DC0();
extern char gl_ref_00000368;

 





void snd_RequestCue(int a0, int a1) {
    gl_ref_00045DC0((SndCueQueue *)&gl_ref_00000368 + a0, 1, a1, 0x7F);  
}

 





 





extern char gl_ref_00000368;
extern int D_31608_g0, D_31608_g1;
void snd_SoundObjRequestCue(char *a0, int a1) {
    unsigned char b22 = *(unsigned char *)(a0 + 0x22);
    unsigned char b21 = *(unsigned char *)(a0 + 0x21);
    int idx;
    int val;
    if (D_31608_g0 != 4) {
        return;
    }
    val = b22 - 1;
    if (b22 >= 6) {
        if (b22 != 8) {
            return;
        }
        val = 5;
    }
    if (b21 == 2) {
        int g = D_31608_g1;
        if (g == 1) return;
        if (g == 2) return;
        if (g == 3) return;
        if (g == 5) return;
    }
    if (b21 == 2) {
        b21 = 1;
    }
    idx = b21;
    *(short *)(&gl_ref_00000368 + idx * 100 + 0x62) = val;
    gl_ref_00045DC0(&gl_ref_00000368 + idx * 100, 1, (val << 6) + a1, 0x7F);
}




extern int gl_ref_00045DC0();
extern int gl_ref_00045DF0();
void snd_RequestCue2Prio(int a0) {
    gl_ref_00045DC0(&(*(SndCueQueues *)((char *)&(D_00000000) + 0x338)) .queue[2], 1, a0 + 0x17F, 0x7F);
    gl_ref_00045DF0(&(*(SndCueQueues *)((char *)&(D_00000000) + 0x338)) .queue[2]);
}

                                                           
                                                                  
  
                                                                  
                                                                     
                                                                    
                                                                 
                                                                    
                                                                     
                                                               
                                          
  
                                                            
                                    
                                                            
                                      
      
                                                                  
                                                                    
                                                                 
                                                                  
                                                                     
                                                                     
                                                                    
                                                 
  
                                                            
                                                                    
                                                                
                                                                   
                                                                 
                                                               
                                                                   
                                         
                                                                     
                                                                 
                                                                    
                                                                    
                                                                   
                     
extern int gl_ref_00045DC0();
extern int gl_ref_00045DF0();
void snd_RequestCue2(int arg) {
    gl_ref_00045DC0(&(*(SndCueQueues *)((char *)&(D_00000000) + 0x338)) .queue[2], 0, arg + 0x17F, 0x7F);
    gl_ref_00045DF0(&(*(SndCueQueues *)((char *)&(D_00000000) + 0x338)) .queue[2]);
}

                                                                               
                                                                           
                                                                          
                                                                         
void snd_CueQueueSet(int *a0, int a1, int a2, int a3) {
    unsigned short v = *(unsigned short *)((char *)&D_00000000 + a2 * 2);
    a0[0x58 / 4] = a3;
    a0[0x54 / 4] = a1;
    a0[0x5C / 4] = (int)((char *)&D_00000000 + (((int)v >> 1) << 1));
}

 



















 
void snd_CueQueuePush(int *a0) {
    int v0 = a0[0x54 / 4];

    if (v0 != 0) {
        if (v0 != 1) {
            goto end;
        }
        if (a0[0x58 / 4] < a0[0x4C / 4]) {
            goto end;
        }
        a0[0x4C / 4] = a0[0x58 / 4];
        a0[0x48 / 4] = 0;
        a0[0x40 / 4] = a0[0x44 / 4];
    }
    a0[a0[0x40 / 4]] = a0[0x5C / 4];
    a0[0x40 / 4] = a0[0x40 / 4] + 1;
    a0[0x40 / 4] = a0[0x40 / 4] & 0xF;
end:
    a0[0x5C / 4] = 0;
}

 












int snd_CueQueueStep(int *a0) {
    int ret = 0;
    unsigned short *p;
    unsigned short *q;
    int cmd;

    a0[0x48 / 4] -= 1;
    if (a0[0x48 / 4] == 0) {
        p = *(unsigned short **)&a0[0x50 / 4];
        cmd = *p;
        *(unsigned short **)&a0[0x50 / 4] = p + 1;
        ret = 1;
        if (cmd != 0) {
            q = *(unsigned short **)&a0[0x50 / 4];
            a0[0x48 / 4] = *q;
            *(unsigned short **)&a0[0x50 / 4] = q + 1;
        }
        ((SndCueQueue *)a0)->cmd = cmd;  
        return ret;
    }
    return ret;
}

 














typedef struct {
    int buf[16];    
    int wr;         
    int rd;         
    int flag;       
    int f4c;        
    int out;        
} Ring3183C;

void snd_CueQueuePop(Ring3183C *r) {
    while (r->wr != r->rd) {
        r->f4c = 0;
        r->out = r->buf[r->rd];
        r->rd++;
        r->rd &= 0xF;
        if (r->out != 0) {
            r->flag = 1;
            return;
        }
    }
}

extern int gl_ref_00045DF0();
extern int gl_ref_00045E5C();
extern int gl_ref_00045EA8();

 







int snd_CueQueueUpdate(int *a0) {
    int ret_val = 0;
    if (a0[23] != 0) {
        gl_ref_00045DF0(a0);
    }
    if (a0[18] != 0) {
        ret_val = gl_ref_00045E5C(a0);
    }
    if (a0[18] == 0) {
        gl_ref_00045EA8(a0);
    }
    return ret_val;
}

                                                                                  
                                                                               
                                                                  
                                                           
  
                                               
                                               
                                        
                                       
                      
                                                                     
                               
                 
                                                        
                                 
          
        
                                                                    
                                        
                                       
                                                  
                                               
        
      
  
                                                                  
                                                                   
                                                               
                                                                    
                                                                   
                                                                    
                                                            
                                                                    
                                                                  
                                                             
                                                               
                                                                 
                                                                      
                                                                  
                                    
                                                                         
                                                                     
                                                                           
                                                                          
                                                                         
                                                                         
                                                                      
                                                                     
                                                                      
                                                                         
                                                                           
 
extern int gl_ref_00045F04();
int snd_SetPlayer2ChannelIO_3190C(void) {
    if (gl_ref_00045F04(((char *)&D_00000000 + (0x368)) )) {
        int s = *(unsigned short *)(((char *)&D_00000000 + (0x3C8)) );
        if (s == 0) {
            gl_func_00000000 (0x06020004, -1);
            gl_func_00000000 (0x06020000, 0);
        } else {
            gl_func_00000000 (0x06020004, (signed char)s);
            gl_func_00000000 (0x06020000,
                             *(signed char *)(((char *)&D_00000000 + (0x3CB)) ));
        }
    }
    if (gl_ref_00045F04(((char *)&D_00000000 + (0x3CC)) )) {
        int s = *(unsigned short *)(((char *)&D_00000000 + (0x42C)) );
        if (s == 0) {
            gl_func_00000000 (0x06020104, -1);
            gl_func_00000000 (0x06020100, 0);
        } else {
            gl_func_00000000 (0x06020104, (signed char)s);
            gl_func_00000000 (0x06020100,
                             *(signed char *)(((char *)&D_00000000 + (0x42F)) ));
        }
    }
    if (gl_ref_00045F04(&(*(SndCueQueues *)((char *)&(D_00000000) + 0x338)) .queue[2])) {
        int s = *(unsigned short *)(((char *)&D_00000000 + (0x490)) );
        if (s == 0) {
            gl_func_00000000 (0x06020204, -1);
            gl_func_00000000 (0x06020200, 0);
        } else {
            gl_func_00000000 (0x06020204, (signed char)s);
            gl_func_00000000 (0x06020200,
                             *(signed char *)(((char *)&D_00000000 + (0x493)) ));
        }
    }
}

 

void snd_ResetChannel10Mode(void) {
    *(int*)(((char *)&D_00000000 + (0x1CAA8)) ) = -1;
}

                                                                                     
                                                                            
                                               
                                                                                 
                                                                                     
                                                                            
                                                                           
                                                                          
                                                                         
                                                                    
                                                                             
                                                                                
                                                                     
                                                       
                                                                            
                                                                             
                                                                             
                                                                           
                                                                            
                                                                             
                                                                           
                                                                                 
                                                                                    
                                                                                     
                                                                                    
                                                                                   
                                                              
extern int gl_func_00000000_f(int, float );  
extern int gl_func_00000000_c(int, s8);
extern int D_31A74_st, D_31A74_g2, D_31A74_g3, D_31A74_accl, D_31A74_accs1, D_31A74_accs2, D_31A74_cur;
extern f32 kRo_snd_UpdateChannel10Emitter_1968[], kRo_snd_UpdateChannel10Emitter_196C[], kRo_snd_UpdateChannel10Emitter_1970[], kRo_snd_UpdateChannel10Emitter_1974[];    
extern f32 D_31A74_tbl[];    



extern int D_31A74_curv;    







void snd_UpdateChannel10Emitter(int mode, f32 v, s8 sel) {
    f32 acc;
    f32 r;
    f32 lim;
    f32 *lp;

    if (mode == 1) {
        if (D_31A74_st != 4 && D_31A74_st != 11) {
            acc = (*(f32 *)((char *)&D_31A74_accl + 0x1CAC0)) ;
            if (kRo_snd_UpdateChannel10Emitter_1968[0x1968 / 4] < acc) {
                acc *= kRo_snd_UpdateChannel10Emitter_196C[0x196C / 4];
            } else {
                acc = 0.0f;
            }
            for (mode = 1; mode; gl_func_00000000_f (0x1000A00, acc), mode = 0) {
            (*(f32 *)((char *)&D_31A74_accs1 + 0x1CAC0))  = acc;
            }
            return;
        }
        if (D_31A74_st == 4) {
            if (D_31A74_g2 != 0) {
                return;
            }
        }
    }
    if (D_31A74_g3 != 4 && mode == 3) {
        return;
    }
    if (mode != D_31A74_curv ) {
        D_31A74_curv  = mode;
        gl_func_00000000 (0x6000A00, (s8)mode);
    }
    if (mode == 255) {
        gl_func_00000000 (0x6000A02, (s8)mode);
        return;
    }
    v = v - kRo_snd_UpdateChannel10Emitter_1970[0x1970 / 4];
    lp = &D_31A74_tbl[mode];
    if (v < 0.0f) {
        r = 1.0f;
    } else {
        lim = *lp;
        if (v < lim) {
            r = (lim - v) / lim;
        } else {
            r = 0.0f;
        }
    }
    r *= kRo_snd_UpdateChannel10Emitter_1974[0x1974 / 4];
    if (r < 0.0f) {
        r = 0.0f;
    }
    if (1.0f < r) {
        r = 1.0f;
    }
    sel += 63;  
    if (sel >= 127) {
        sel = 127;
    }
    if (sel < 0) {
        sel = 0;
    }
     






    goto z31t;
c31t:
    gl_func_00000000_f (0x1000A00, r), gl_func_00000000_c (0x3000A00, sel);
    return;
z31t:
    if (1) {} (*(f32 *)((char *)&D_31A74_accs2 + 0x1CAC0))  = r; goto c31t;
}






void snd_RampInit(SndLevelRamp *a0, int a1, int a2) { a0->target = a1; a0->count = a2; a0->frac = 0; }

 









void snd_RampTick(s32 *arg0) {
    s32 diff;
    s32 step;
    s32 dir;

    if (arg0[2] != 0) {
        diff = arg0[0] - arg0[1];
        step = (diff << 8) / arg0[2];
        arg0[3] += (step >= 0) ? step : -step;
    loop:
        if (arg0[3] >= 0x100) {
            dir = ((diff << 8) >= 0) ? 1 : -1;
            arg0[1] += dir;
            arg0[3] -= 0x100;
            goto loop;
        }
        arg0[2]--;
    }
}

 









extern int gl_data_00000000;
extern int D_00000000_c;

void snd_Init(int a0, int a1, int a2) {
    D_00000000 = a0;
    gl_data_00000000 = a1;
    D_00000000_c = a2;
    gl_func_00000000 ();
}

int snd_AudioUpdate(void) {
    int v = gl_func_00000000 ();
    if (v == 0) return 0;
    return v;
}

                                                                 
                                                                   
  
                                                             
                                      
                                 
                                                                      
      
                                                              
                                                    
  
                                                                    
                                                            
                                                           
                                                             
                            
                                                                  
                                                                   
                                                                  
                                                                 
                                                                    
                                                                    
                                                                    
                                                                  
                                                               
  
                                                                    
                                                                  
                                                                    
                                                                    
                                                                  
                                                                 
           
void snd_FrameUpdate(void) {
    gl_func_00000000 ();
}

 


















extern int gl_func_00000000();
void fs_gdlReadInt_00032D84(int *dst) {
    int pad, scratch;
    gl_func_00000000 (&D_00000000 , &scratch, 4);  



    *dst = scratch;
}

extern int gl_func_00000000();
void fs_gdlReadQuad_00032DC0(Quad4 *dst) {
    Quad4 scratch;
    gl_func_00000000 (&D_00000000 , &scratch, 16);  



    *dst = scratch;
}

                                                                  
                                                                   
                                                       
  
                                                  
                                                                
                     
                                                                  
                                                            
                            
                                                                  
                                                                  
                                                                 
                                           
                
      
  
                                                                    
                                                              
                                                                   
                                                                    
                                                                    
                                                                  
                                                                   
                                                                
                                                            
                                                                
                                                                 
                                                                   
                                                                  
                                                                     
                                                                    
                                                    
                                                                  
                                                                 
                                                                    
                                                                 
                                                                   
           
                                                                                    
                                                                                         
                                                                                    
                                                                     
 






 



typedef char *(*GP_00032E18)();
extern int gl_32e18_blank();   


char *MCamera_ctor(char *self, int arg1, float x, float y, float z) {
    char *o;
    char *b;
    int *p;
    int *q;
    Vec3 zv;  
    int *r;
    int pad[5];
    Vec3 v;

    if (self == 0 && (self = (char *)gl_32e18_blank (0x150)) == 0) {
        goto end;
    }
    o = self;
    if (o != 0 || (o = (char *)gl_32e18_blank (0xB4)) != 0) {
        gl_32e18_blank (o, ((char *)&D_00000000 + (0x1E178))  );
        ((Node *)(o)) ->vptr = (char *)&D_00000000 ;  
        r = (int *)(o + 0x2C);
        if (r != 0 || (r = (int *)gl_32e18_blank (4)) != 0) {
            q = r;
            if (q != 0 || (q = (int *)gl_32e18_blank (4)) != 0) {
                *q = 0;
            }
        }
        gl_32e18_blank (o);
        zv.x = 0.0f;
        o += 0x30;
        zv.y = 0.0f;
        zv.z = 0.0f;
        gl_32e18_blank (o, &zv);
    }
    ((Node *)(self)) ->vptr = (char *)&D_00000000 ;
    o = self + 0x110;
    if (o != 0 || (o = (char *)gl_32e18_blank (0x20)) != 0) {
        b = o;
        if (b != 0 || (b = (char *)gl_32e18_blank (0x18)) != 0) {
            p = (int *)b;
            if (p != 0 || (p = (int *)gl_32e18_blank (0x10)) != 0) {
                 
                p[0] = (p[2] = 0x8000, -1);
                p[1] = 0;
            }
            q = (int *)(b + 0x10);
            if (q != 0 || (q = (int *)gl_32e18_blank (4)) != 0) {
                *q = 0;
            }
            ((Node *)(b)) ->name = ((char *)&D_00000000 + (0x1E180))  ;
            ((Node *)(b)) ->parent = 0;
        }
        q = (int *)(o + 0x18);
        if (q != 0 || (q = (int *)gl_32e18_blank (8)) != 0) {
            q[0] = 0;
            q[1] = 0;
        }
    }
    v.x = x;
    v.y = y;
    v.z = z;
    gl_32e18_blank (self + 0x30, &v);
    ((Node *)(self)) ->name = (const char *)((char *)&D_00000000 + (0x1E18C))  ;
    ((Node *)(self)) ->flags |= 0x40;
    ((MCamera *)self) ->target = (CamMNode *)arg1; if (1) {}
    ((MCamera *)self) ->lookDir.x = 0.0f;
    ((MCamera *)self) ->lookDir.y = 0.0f;
    ((MCamera *)self) ->unkFC = 0;  
    ((MCamera *)self) ->lookDir.z = 1.0f;
    gl_32e18_blank (((MCamera *)self) ->view);
    ((MCamera *)self) ->rotEnable = 0;
    ((MCamera *)self) ->pitch = 0.0f;
    ((MCamera *)self) ->yaw = 0.0f;
    ((MCamera *)self) ->unk13C = 0.0f;
    ((MCamera *)self) ->up.x = 0.0f;
    ((MCamera *)self) ->up.z = 0.0f;
    ((MCamera *)self) ->up.y = 1.0f;
    ((MCamera *)self) ->fov = 85.0f;
end:
    return self;
}



                                                                          
                                                                   
                                                                  
                       
  
                                      
                                                                   
                          
                
                        
                                                               
               
                                                                    
                                                      
        
                                                                  
                                                         
                                     
                                     
                                     
                                                        
      
  
                                                                
                                                                    
                                                                   
                                                                   
                                                                
                                                                   
                                                                
                                                                 
                                                                
                                                                
                                                                
                                                                 
                                                                 
                                                                
                                                                
                                                                  
                                                                  
                                                                      
 



int MCamera_updateLookAt(char *o) {
    return 0;
}

                                                                              
                                                                   
                                                   
  
                                            
                                                                     
                                                                  
                                                                  
                   
                   
                   
                      
                                 
                                                                  
                                         
                                                                      
        
                                                                   
      
  
                                                                
                                                               
                                                                   
                                                                
                                                                    
                                                                  
                                                                 
                                                                 
                                                                   
                                                               
                                                                 
                                                                
                                                                   
                                                                 
                           
                                                                 
                                                             
                                                                   
                                                                
                              
 







































extern void *gl_func_00000000_f228(int, int, float, float, float);
void cam_createDefault_00033228(NodeListState *o) {
    char pad[16];
    char *n;
    char *lst;
    gl_func_00000000 (o);
    n = (char *)gl_func_00000000_f228 (0, 0, 0.0f, 0.0f, 0.0f);
    o->obj = n;
    o->mnode = n;
    o->node = n;
    lst = o->parent->node;  
     
    gl_func_00000000 (&((Node *)(lst)) ->children, n);
    if (((Node *)(n)) ->parent != 0) {
        ((Node *)(n)) ->unk04 = 1;
    }
    ((Node *)(n)) ->parent = (Node *)lst;
}

                                                                     
                                              
  
                                                                       
                                                                       
                                                                          
                                                                         
                          
  
                                           
                              
                                  
                                                                    
                                                               
                                                                      
                                                                 
                                                                       
                
        
                                                                             
      
  
                                                                        
                                                                        
                                                                           
                                                                          
                                                                     
                                                                           
                                                                            
                                                                     
                                                                           
                                                                            
void MCamera_doCommand(char *o, char *c) {
    int *sp;
    int idx;
    int val;
    val = *(int *)c;
    if (val == 0x69) {
        sp = (int *)((NodeMsg *)c)->arg.payload;  
        ((NodeMsg *)c)->arg.payload = (char *)(sp + 1);
        idx = *sp;
        if (c) { }
        if ((u32)idx >= 0x28) {
            gl_func_00000000 (((char *)&D_00000000 + (0x1E194))  , idx);
        }
        val = *(int *)((char *)&D_00000000  + idx * 4);
        *(int *)&((MCamera *)o)->target = val;
        return;
    }
    gl_func_00000000 (o  );  
}

 





extern int gl_func_00000000_33338(void *, const char *, f32 *, float, float, int);
void MCamera_hostioParms(MCamera *a0) {
    const char *arg1 = ((Node *)(a0)) ->name;
    gl_func_00000000 (&D_00000000 , arg1, 0);
    gl_func_00000000_33338 (&D_00000000 , ((char *)&D_00000000 + (0x1E1AC))  , &a0->fov, 0.0f, 180.0f, 0);
    gl_func_00000000 (&D_00000000 );
}

void MCamera_command(int a0, int a1, int a2) {
}

extern int gl_ref_000473F0();
extern int gl_ref_0004742C();
void hostio_readQuadParm_000333B4(char *a0) {
    int scratch;
    gl_ref_000473F0(&scratch);
    gl_ref_0004742C(a0 + 0x10);
}


 






int heap_tempAllocDefault_000333F4(int a0) { return gl_func_00000000 (&D_00000000 , a0); }

 




void heap_tempFreeDefault_0003341C(int a0) { gl_func_00000000 (&D_00000000 , a0); }

 






















extern int gGfxLib_33444_a;
float sys_timeInFrames_00033444(void) {
    float a = (float)((GfxLib *)&gGfxLib_33444_a)->frameTime;
    return (float)(unsigned int)gl_func_00000000 (&D_00000000 ) / a;
}

extern int gl_func_00000000();
void sys_assertFail(int a0, int a1, int a2) {
    gl_func_00000000 (((char *)&D_00000000 + (0x1E250))  , a0, a1, a2);
}

                                                                       
                                                                   
                                                              
                                
  
                                      
                                                                  
                                                                
                           
                                                             
                                                                 
                    
                                                           
                               
                                                                    
                                                        
                                                       
      
  
                                                                    
                                                           
                                                                    
                                                                   
                                                                   
                                                                 
                                                                  
                                                                
                                                                   
                                                                
                                                                    
                                                                     
                                                                    
                                                                   
                                               
                                                                     
                                                               
                                                                    
                                                              
                                                 
                                                                                                                               
                                                                             
                                                                            
                                                                             
                                                                               
                                                                            
                                                                              
                                                                                  
 






















extern int gl_func_00000000();
extern u8 gFsStream0_334e8_dst;
extern u8 sStr_arse_1E280;
extern u8 sStr_Write_not_at_end_1E29C;
extern u8 sStr_Write_ve_len_1E2B0;

 


void fs_bufWrite_334E8(void) {
    u8 buf[8];
    s32 src;
    u32 chunk;
    s32 rem;
    s32 mis;
    u32 avail;
    s32 cur;
    u32 cnt;
    s32 cpsrc;
    u8 *cpdst;
    FsStream *g = (FsStream *)&gFsStream0_334e8_dst;
    u8 *p;

    p = buf;
    gl_func_00000000 (p, &sStr_arse_1E280);
    src = (s32)p; rem = 8; gl_func_00000000 (((u8 *)&D_00000000) );
    do {
        chunk = rem;
        avail = g->end - g->wrPos;
        if (avail < (u32)rem) {
            chunk = avail;
        } else {
            chunk = rem;
        }
        if (chunk != 0) {
            mis = src & 7;
            if (mis != 0) {
                mis = 8 - mis;
                if ((u32)mis < chunk) {
                    chunk = mis;
                }
                cnt = 0;
                if (chunk != 0) {
                    cpsrc = src; cpdst = &gFsStream0_334e8_dst;
                    do {
                        *cpdst = *(u8 *)cpsrc;
                        cnt += 1;
                        cpsrc += 1;
                        cpdst += 1;
                    } while (cnt < chunk);
                }
                gl_func_00000000 (((u8 *)&D_00000000) , g->wrPos, ((u8 *)&D_00000000) , chunk);
            } else {
                gl_func_00000000 (((u8 *)&D_00000000) , g->wrPos, src, chunk);
            }
            g->wrPos += chunk;
            p = (u8 *)g->hdr, gl_func_00000000 (((u8 *)&D_00000000) , p, g->wrPos);
        }
        if (g->wrPos == g->end) {     
            cur = g->wrPos;
            g->committed = cur;
            gl_func_00000000 (((u8 *)&D_00000000) , g->hdr + 12, cur);
            if (g->wrPos != g->end) {
                gl_func_00000000 (((u8 *)&D_00000000) , &sStr_Write_not_at_end_1E29C);
            }
            p = (u8 *)g->hdr, gl_func_00000000 (((u8 *)&D_00000000) , p + 8, 0x12340001);    
            if (p = (u8 *)g->hdr, gl_func_00000000 (((u8 *)&D_00000000) , p + 8) == 0x12340002) {
                goto spun1;
            }
        spin1:
            gl_func_00000000 (((u8 *)&D_00000000) );
            if (p = (u8 *)g->hdr, gl_func_00000000 (((u8 *)&D_00000000) , p + 8) != 0x12340002) {
                goto spin1;
            }
        spun1:
            cur = g->data;                  
            g->wrPos = cur;
            p = (u8 *)g->hdr, gl_func_00000000 (((u8 *)&D_00000000) , p, cur);
            p = (u8 *)g->hdr, gl_func_00000000 (((u8 *)&D_00000000) , p + 8, 0x12340003);    
            if (p = (u8 *)g->hdr, gl_func_00000000 (((u8 *)&D_00000000) , p + 8) == 0x12340002) {
                goto spun2;
            }
        spin2:
            gl_func_00000000 (((u8 *)&D_00000000) );
            if (p = (u8 *)g->hdr, gl_func_00000000 (((u8 *)&D_00000000) , p + 8) != 0x12340002) {
                goto spin2;
            }
        spun2:;
        }
        rem -= chunk;
        src += chunk;
        if (rem < 0) {
            gl_func_00000000 (((u8 *)&D_00000000) , &sStr_Write_ve_len_1E2B0);    
        }
        if (rem != 0) {
            gl_func_00000000 (((u8 *)&D_00000000) );
        }
    } while (rem != 0);
    gl_func_00000000 (((u8 *)&D_00000000) );
}


                                                                 
                                                                   
                                                            
  
                                                               
                       
                                                                
        
                       
                                                            
        
                                                                 
                                                               
                                                              
                                                                  
      
  
                                                                  
                                                                   
                                                                  
                                                                  
                                                               
                                                               
                                                                
                                                                 
                                                                   
                                                                
                                                                  
                                                                 
                                                             
                                                         
                                                                   
                                                          
                                          
                                                                                   
                                                                               
                                                                                     
                                                                            
                                                                                    
                                                                             
                                                                              
                                                                         
                                                                            
                                                                       
 



void dma_startRead(int id, unsigned dram, int devAddr, int len) {
    DmaSlot *rec;
    if (dram & 7) {
        gl_func_00000000 (((char *)&D_00000000 + (0x1E2C0))  , id, dram);
    }
    if (len & 1) {
        gl_func_00000000 (((char *)&D_00000000 + (0x1E2D8))  , len);
    }
    rec = &((DmaSlot *)&D_00000000) [id];
    rec->busy = 1;
    gl_func_00000000 (dram, len);
    gl_func_00000000 (rec, 0, 0, devAddr, dram, len, rec->mq);
    rec->dram = dram;
    rec->len = len;
    rec->invalidate = 1;
}

                                                                  
                                                                   
                                                           
                                                                 
                                             
  
                                                                 
                       
                                                                
        
                   
                                                            
        
                                                                 
                                                               
                                                              
                                                                  
      
  
                                                                  
                                                             
                                                              
                                                           
                                                            
                                                              
                                                             
                                                                
                                                                  
                                                                   
                                                               
                                                                  
                                                                 
                                                                 
                                                                 
                                                                
            
                                                                       
                                                                     
                                                                  
                                                               
                                                                     
                                                                 
                                                                         
 

void dma_startWrite(int id, int devAddr, unsigned dram, int len) {
    DmaSlot *rec;
    if (dram & 7) {
        gl_func_00000000 (((char *)&D_00000000 + (0x1E2EC))  , len);
    }
    if (len & 1) {
        gl_func_00000000 (((char *)&D_00000000 + (0x1E308))  , len);
    }
    rec = &((DmaSlot *)&D_00000000) [id];
    rec->busy = 1;
    gl_func_00000000 (dram, len);
    gl_func_00000000 (rec, 0, 1, devAddr, dram, len, rec->mq);
    rec->invalidate = 0;
}


 














void dma_wait(int idx) {
    int local;
    DmaSlot *rec;
    rec = &((DmaSlot *)&D_00000000) [idx];
    if (rec->busy != 0) {
        gl_func_00000000 (rec->mq, &local, 1);
        if (rec->invalidate != 0) {
            gl_func_00000000 (rec->dram, rec->len);
        }
        rec->busy = 0;
    }
}

 
void dma_read(int a0, int a1, int a2) {
    while (((DmaSlot *)&D_00000000) [0].busy != 0) {
        func_00000000 ();
    }
    func_00000000 (0, a0, a1, a2);
    func_00000000 (0);
}

 
void dma_write(int a0, int a1, int a2) {
    while (((DmaSlot *)&D_00000000) [0].busy != 0) {
        func_00000000 ();
    }
    func_00000000 (0, a0, a1, a2);
    func_00000000 (0);
}

 


int dma_allocSlot(void) {
    DmaSlot *p = ((DmaSlot *)&D_00000000)  + 1;
    int i;
    for (i = 1; i != 10 ; i++) {
        if (p->busy == 0) return i;
        p++;
    }
    gl_func_00000000 (((char *)&D_00000000 + (0x1E31C))  );
    return 0;
}

extern int gl_func_00000000();
int dma_readAsync(int a0, int a1, int a2) {{
    int r = gl_func_00000000 (a0, a1, a2);
    gl_func_00000000 (r, a0, a1, a2);
    return r;
}}

extern int gl_func_00000000();
int dma_writeAsync(int a0, int a1, int a2) {{
    int r = gl_func_00000000 (a0, a1, a2);
    gl_func_00000000 (r, a0, a1, a2);
    return r;
}}

                                                            
                                                                          
                                                                     
                                                                         
                                                                            
                                                                          
                                                                         
                                                                             
                                                                             
                                                                             
                                                                         
                                                                           
                                                     
                                                                   
                                                                
                                                              
  
                          
                                    
                                     
                                     
                                                             
           
                                                                     
                                                                    
                                         
                                   
                                                                
      
  
                                                                  
                                                        
                                                               
                                                                 
                                                                  
                                                                   
                                                              
                                                                
                                                               
                                                                  
                                                          
                                                              
                                                                 
                                                 
                                                                              
                                                                               
                                                                                  
                                                                              
                                                                                  
                                                                                 
                                                                               
                                                                              
                                                                               
                                                                               
                                                                          
                                                                           
void dma_init(void) {
    int k;

    for (k = 0; k < 10; k++) {
        ((DmaSlot *)&D_00000000) [k].busy = 0;
        gl_func_00000000 ((char *)((DmaSlot *)&D_00000000)  + 0x18 + k * 0x44, (char *)((DmaSlot *)&D_00000000)  + 0x30 + k * 0x44, 1);
    }
}

                                                                       
                                                                   
                                                                   
                                                                
                                   
  
                                                      
                       
                                                                
        
                           
                                                             
                                                       
                                                                 
                                                              
                                                                
                                
                                                                   
      
  
                                                                   
                                                                 
                                                                 
                                                                     
                                                                  
                                                                     
                                                               
                                                                    
                                                            
                                                                    
                                                                
                                                                  
                                                                   
                                                           
                                                                     
                                                             
                                                               
                                                                     
                                                                    
                                                                    
                                                                  
                                                                  
                     
                                                                                              
  
                                                  
                                                                            
                                                                             
                                                                               
                                                                                
                                                                              
                                                                                
                                                                                
                                                                                 
                                                                              
                                                                           
                                                                                
  
                                                                         
                                                                               
                                                                          
                                                                               
                                                                            
                                                                          
                                                                               
                                                                            
                                                          
                                                                           
                                                    
                                                                              
                                                                            
                                                                  
                                                                                
                                                                              
                                                                              
                                                                         
                                                                                
                                                                             
                             
                                                                             
                                                                             
                                                                           
                                                                             
                                                                             
                                                 
                                                                                       
                              
                                                                                
                                                                                   
                                                                                 
                                                                              
                                                                               
                                                                                 
                                                               
                                                                                
                                                                              
                                                                                     
extern int gl_func_00000000();           
 

extern u8 gFsStream1_33be4_dst;                
extern u8 sStr_Write_bad_length_1E330;               
extern u8 sStr_Write_not_at_end_1E344;               
extern u8 sStr_Write_ve_len_1E358;               
void fs_bufWrite_33BE4(s32 src0, u32 flags) {
    s32 src;
    u8 *base;
    u32 chunk;
    s32 rem;
    s32 mis;
    u32 avail;
    s32 cur;
    u32 cnt;
    s32 cpsrc;
    u8 *cpdst;
    s32 sent;
    FsStream *g = (FsStream *)&gFsStream1_33be4_dst;

    rem = flags; src = src0;
    if (flags & 1) { base = (u8 *)&D_00000000 ; gl_func_00000000 (base, &sStr_Write_bad_length_1E330);
    }
    base = (u8 *)&D_00000000 ;
    gl_func_00000000 (base);
    if (flags != 0) {
        sent = 0x12340002;
        do {
        chunk = rem;
        avail = g->end - g->wrPos;
        if (avail < (u32)rem) {
            chunk = avail;
        } else {
            chunk = rem;
        }
        if (chunk != 0) {
            mis = src & 7;
            if (mis != 0) {
                mis = 8 - mis;
                if ((u32)mis < chunk) {
                    chunk = mis;
                }
                cnt = 0;
                if (chunk != 0) {
                    cpsrc = src; cpdst = &gFsStream1_33be4_dst;
                    do {
                        *cpdst = *(u8 *)cpsrc;
                        cnt += 1;
                        cpsrc += 1;
                        cpdst += 1;
                    } while (cnt < chunk);
                }
                gl_func_00000000 (base, g->wrPos, base, chunk);
            } else {
                gl_func_00000000 (base, g->wrPos, src, chunk);
            }
            g->wrPos += chunk;
            flags = g->hdr, gl_func_00000000 (base, flags, g->wrPos);
        }
        if (g->wrPos == g->end) {     
            cur = g->wrPos;
            g->committed = cur;
            gl_func_00000000 (base, g->hdr + 12, cur);
            if (g->wrPos != g->end) {
                gl_func_00000000 (base, &sStr_Write_not_at_end_1E344);
            }
            flags = g->hdr, gl_func_00000000 (base, flags + 8, 0x12340001);    
            if (flags = g->hdr, gl_func_00000000 (base, flags + 8) == sent) {
                goto spun1;
            }
        spin1:
            gl_func_00000000 (base);
            if (flags = g->hdr, gl_func_00000000 (base, flags + 8) != sent) {
                goto spin1;
            }
        spun1:
            cur = g->data;                  
            g->wrPos = cur;
            flags = g->hdr, gl_func_00000000 (base, flags, cur);
            flags = g->hdr, gl_func_00000000 (base, flags + 8, 0x12340003);    
            if (flags = g->hdr, gl_func_00000000 (base, flags + 8) == sent) {
                goto spun2;
            }
        spin2:
            gl_func_00000000 (base);
            if (flags = g->hdr, gl_func_00000000 (base, flags + 8) != sent) {
                goto spin2;
            }
        spun2:;
        }
        rem -= chunk;
        src += chunk;
        if (rem < 0) {
            gl_func_00000000 (base, &sStr_Write_ve_len_1E358);    
        }
        if (rem != 0) {
            gl_func_00000000 (base);
        }
        } while (rem != 0);
    }
    gl_func_00000000 (base);
}

                                                                      
                                                                   
                                                         
                                                                       
  
                                                     
                       
                                                                
        
                           
                                                             
                                                       
                                                                   
                                       
                                                             
                                                                       
                                                                
                                                         
      
  
                                                               
                                                           
                                                              
                                                                 
                                                                
                                                                   
                                                                
                                                                  
                                                               
                                                          
                                                             
                                                              
                                                                  
                                                                      
                                                                     
                                                                  
                                                               
                                                                     
                                                                
                                                                    
                                                                 
                                                                 
                                                               
                  
                                                                                 
                                                                                            
                                                                                  
                                                                              
                                                                                   
                                                                                
                                                                                 
                                                                                   
                                                                             
                               
                                                                                   
                                                                                    
                                                                                  
                                                                                 
                                                                                 
                                                                             
                                                                                  
                                                                                  
                                                                                    
                                                                                 
                                                                          
                                                                              
                                                                             
                                                                              
                                                                               
                                                                                
                                                                               
                                                                           
                                                                           
                                                                              
                                                                                
                                                                                 
                                                                                
                                                                             
                                   


extern int gl_func_00000000();           
 

extern u8 gFsStream2_33eb8_src;                
extern u8 sStr_Read_bad_length_1E368;               
extern u8 sStr_Read_read_not_at_end_1E37C;               
extern u8 sStr_Read_write_not_at_end_1E394;               
extern u8 sStr_Read_ve_len_1E3AC;               
void fs_bufRead_33EB8(s32 dst0, u32 flags) {
    s32 pad[3];
    s32 dst;
    u8 *base;
    s32 rem;
    s32 tmp;
    u32 cnt;
    u8 *src;
    s32 cpdst;
    FsStream *g = (FsStream *)&gFsStream2_33eb8_src;

    rem = flags; dst = dst0;
    if (flags & 1) { base = (u8 *)&D_00000000 ; gl_func_00000000 (base, &sStr_Read_bad_length_1E368);
    }
    base = (u8 *)&D_00000000 ;
    gl_func_00000000 (base);
    if (flags != 0) {
        do {
            g->wrPos = gl_func_00000000 (base, g->hdr);
            if (g->rdPos == g->end) {
                tmp = gl_func_00000000 (base, g->hdr + 8);
                g->handshake = tmp;
                if (tmp == 0x12340001) {
                    if (g->rdPos != g->end) {
                        gl_func_00000000 (base, &sStr_Read_read_not_at_end_1E37C);
                    }
                    if (g->wrPos != g->end) {
                        gl_func_00000000 (base, &sStr_Read_write_not_at_end_1E394);
                    }
                    gl_func_00000000 (base, g->hdr + 8, 0x12340002); if (1) {}
                    tmp = g->data;
                    g->rdPos = tmp;
                    g->wrPos = tmp;
                    if (gl_func_00000000 (base, g->hdr + 8) == 0x12340003) {
                        goto flushed;
                    }
                flush:
                    gl_func_00000000 (base);
                    if (gl_func_00000000 (base, g->hdr + 8) != 0x12340003) {
                        goto flush;
                    }
                flushed:
                    gl_func_00000000 (base, g->hdr + 8, 0x12340002);
                }
            }
            flags = g->wrPos - g->rdPos;
            if ((u32)rem < flags) {
                flags = rem;
            }
            if (flags != 0) {
                if ((dst & 7) != 0) {
                    if ((u32)(8 - (dst & 7)) < flags) {
                        flags = 8 - (dst & 7); if (flags) {}
                    }
                    cnt = 0;
                    gl_func_00000000 (base, g->rdPos, base, flags);
                    if (flags != 0) {
                        src = (cpdst = dst, &gFsStream2_33eb8_src);
                        do {
                            *(u8 *)cpdst = *src;
                            cnt += 1;
                            cpdst += 1;
                            src += 1;
                        } while (cnt < flags);
                    }
                } else {
                    gl_func_00000000 (base, g->rdPos, dst, flags);
                }
                g->rdPos = g->rdPos + flags;
            }
            rem -= flags;
            dst += flags;
            if (rem < 0) {
                gl_func_00000000 (base, &sStr_Read_ve_len_1E3AC);
            }
            if (rem != 0) {
                gl_func_00000000 (base);
            }
        } while (rem != 0);
    }
    gl_func_00000000 (base);
}


 





























extern char *gConsoleNode_3EF04_34180_dev;
void sys_fatalSwapBuffer_00034180(void) {
    char *vt;
    int i;

    vt = ((Node *)(gConsoleNode_3EF04_34180_dev)) ->vptr;
    (((GdlVtEnt *)((char *)(vt) + 8))[ 2]) .fn(gConsoleNode_3EF04_34180_dev + (((GdlVtEnt *)((char *)(vt) + 8))[ 2]) .delta);
    gl_func_00000000 ();
    while ((u32)gl_func_00000000 () < 0x1E0) {}
    vt = ((Node *)(*(char **)((char *)&D_00000000 + 0x240))) ->vptr;
    gl_func_00000000 ((((GdlVtEnt *)((char *)(vt) + 8))[ 11]) .fn(*(char **)((char *)&D_00000000 + 0x240) + (((GdlVtEnt *)((char *)(vt) + 8))[ 11]) .delta, &D_00000000 ));
    *(int *)(*(char **)((char *)&D_00000000 + 0x240) + 0x144) = (*(int *)((char *)&D_00000000 + 0x204) ^= 1);
    if (1) {}
    for (i = 0; i < 2000000; i++) {}
}

                                                             
                                                                   
  
                                                                  
                                                                 
                                                                    
                                                              
                                                                   
                                                                   
                                                                   
                                                                   
                                                              
                                                              
                                                             
                                                                 
                                                        
                             
  
                                                    
                                     
                         
                                                                   
                                                                  
                                                                    
                                                              
                                                                     
                                          
        
      
                                                                   
                                                             
                                                                  
                                                                  
                                                                  
                                                                
                               
  
                                                             
                                                                  
                                                                    
                                                            
                                                              
                                                               
                                                           
                                                                    
                                                                 
                                                            
                                                                            
                                                                              
                                                                                          
                                                                                                        
                                                                                         
                                                                    
                                                                           
                                                                             
                                                                       
                                                                                              
                                            
extern int D_00000000;
extern char *gConsoleNode_3EF04_34240_G;
extern char gl_fatalHaltExitCombo, gGfxLib_34240_X, gSysDevBlock_3A4E8_34240_P, gGfxLib_34240_Y;

void sys_fatalHaltLoop(void) {
    char d[0x80];
    int saved34;
    char *cfg;
    char *s0;
    char *dp;

    ((ConsoleMgr *)gConsoleNode_3EF04_34240_G) ->unk38 = 1;
    if (gConsoleNode_3EF04_34240_G) {}
    gl_func_00000000 (dp = d, -1);
    saved34 = ((ConsoleMgr *)gConsoleNode_3EF04_34240_G) ->input;
    gl_func_00000000 (&gGfxLib_34240_X, 1);

    cfg = &gl_fatalHaltExitCombo;
    s0 = cfg;
    if (*(int *)s0 != 0) {
        do {
            gl_func_00000000 (&gSysDevBlock_3A4E8_34240_P);
            gl_func_00000000 (dp);
            if (((PadCtl *)(dp)) ->pressed != 0) {
                if (((PadCtl *)(dp)) ->pressed == *(int *)s0) {
                    s0 += 4;
                } else {
                    s0 = cfg;
                }
            }
        } while (*(int *)s0 != 0);
    }

    gl_func_00000000 (0);
    gl_func_00000000 (&gGfxLib_34240_Y, 0);

    (((GdlVtEnt *)((char *)(((ConsoleMgr *)gConsoleNode_3EF04_34240_G)->node.vptr) + 8))[ 2]) .fn(gConsoleNode_3EF04_34240_G + (((GdlVtEnt *)((char *)(((ConsoleMgr *)gConsoleNode_3EF04_34240_G)->node.vptr) + 8))[ 2]) .delta);
    gl_func_00000000 ();
    gl_func_00000000 ();

    for (;;) {
        ((ConsoleMgr *)gConsoleNode_3EF04_34240_G) ->input = (int)dp;
        if (((PadCtl *)(dp)) ->held != 0) {
            gl_func_00000000 ();
        }
        if (((PadCtl *)(dp)) ->released & 0x40000) {
            break;
        }
        if (((PadCtl *)(dp)) ->pressed & 0x100) {
            gl_func_00000000 ();
            gl_func_00000000 ();
        }
        gl_func_00000000 (&gSysDevBlock_3A4E8_34240_P);
        gl_func_00000000 (dp);
    }
    gl_func_00000000 (0x202);
    ((ConsoleMgr *)gConsoleNode_3EF04_34240_G) ->unk38 = 0;
    ((ConsoleMgr *)gConsoleNode_3EF04_34240_G) ->input = saved34;
}


                                                                                
                                                                           
                                                                         
int dbg_threadName(int a0) {
    return *(int *)((char *)&D_00000000 + a0 * 4);
}

 




















int dbg_threadStateName(int a0) {
    volatile int ret = 0x1E3EC;
    if (a0 == 2) {
        ret = 0x1E3BC;
    }
    return ret;
}
