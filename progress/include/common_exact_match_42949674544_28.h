/* decompdecomp donor translation unit v1 */












typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef float f32;
typedef double f64;










 
























 


 
















 







 




























 






























 




 




















































































 











 







 









 







 





















 






































































 

















 













typedef struct DmaSlot {
      char ioMesg[0x18];   
      char mq[0x18];       
      s32 msg;             
      s32 dram;            
      s32 len;             
      s32 busy;            
      s32 invalidate;      
} DmaSlot;



 








 






 








typedef struct FsStream {
      u8 stage[8];    
      s32 wrPos;      
      s32 rdPos;      
      s32 handshake;  
      s32 committed;  
      char pad18[0x24 - 0x18];
      s32 data;       
      s32 hdr;        
      s32 end;        
      s32 size;
      s32 unk34;      
      char pad38[0x40 - 0x38];
} FsStream;  

typedef char DmaSlot_size_check[sizeof(DmaSlot) == 0x44 ? 1 : -1];
typedef char DmaSlot_mq_check[(int)&((DmaSlot *)0)->mq == 0x18 ? 1 : -1];
typedef char DmaSlot_msg_check[(int)&((DmaSlot *)0)->msg == 0x30 ? 1 : -1];
typedef char DmaSlot_busy_check[(int)&((DmaSlot *)0)->busy == 0x3C ? 1 : -1];
typedef char DmaSlot_invalidate_check[(int)&((DmaSlot *)0)->invalidate == 0x40 ? 1 : -1];

typedef char FsStream_size_check[sizeof(FsStream) == 0x40 ? 1 : -1];
typedef char FsStream_handshake_check[(int)&((FsStream *)0)->handshake == 0x10 ? 1 : -1];
typedef char FsStream_data_check[(int)&((FsStream *)0)->data == 0x24 ? 1 : -1];
typedef char FsStream_end_check[(int)&((FsStream *)0)->end == 0x2C ? 1 : -1];
typedef char FsStream_unk34_check[(int)&((FsStream *)0)->unk34 == 0x34 ? 1 : -1];






 











 

typedef struct NodeLink {
      void *item;
      struct NodeLink *next;
} NodeLink;

typedef struct Node {
      s32 unk00;           
      s32 unk04;           
      s32 flags;           
      const char *name;    
      NodeLink *children;  
      struct Node *parent;  
      s32 doFlags;         


      s32 serial;          
      s32 handle;          
      s32 unk24;
      char *vptr;          
} Node;


typedef char Node_size_check[sizeof(Node) == 0x2C ? 1 : -1];
typedef char Node_name_check[(int)&((Node *)0)->name == 0x0C ? 1 : -1];
typedef char Node_serial_check[(int)&((Node *)0)->serial == 0x1C ? 1 : -1];
typedef char Node_vptr_check[(int)&((Node *)0)->vptr == 0x28 ? 1 : -1];


 


typedef struct GdlVtEnt {
      s16 delta;
      s16 pad;
      s32 (*fn)();
} GdlVtEnt;



 




 




typedef struct NodeMsg {
      s32 tag;
      union {
        s32 value;                  
        char *payload;              
        s32 *cursor;                

    } arg;
      Node *reply;          
} NodeMsg;







 






typedef struct NodeMsgTransPayload {
      char unk00[0xEC];
      f32 trans[3];
} NodeMsgTransPayload;


typedef char NodeMsg_reply_check[(int)&((NodeMsg *)0)->reply == 0x8 ? 1 : -1];
typedef char NodeMsgTransPayload_trans_check[(int)&((NodeMsgTransPayload *)0)->trans == 0xEC ? 1 : -1];


 

 

typedef struct AppVersion {
    s32 w[17];
} AppVersion;

typedef struct App {
      Node node;
      s32 unk2C;
      s32 unk30;           
      s32 unk34[2];
      AppVersion version;  
} App;


typedef char App_unk30_check[(int)&((App *)0)->unk30 == 0x30 ? 1 : -1];
typedef char App_version_check[(int)&((App *)0)->version == 0x3C ? 1 : -1];







 








typedef struct NodeListState {
      int **cursor;      
      int cmd;           
      int unk08;
      char *mnode;       
      char *node;        
      char *animMgr;     
      char *skinMgr;     

      int unk1C[3];
      char *obj;         
      char *light;       
      int unk30;
      int op113;         
      int linkNodes;     

      struct NodeListState *parent;  

      int character;     
      int boardIdx;      
      int mask;          
} NodeListState;

typedef char NodeListState_size_check[sizeof(NodeListState) == 0x4C ? 1 : -1];

typedef char NodeListState_obj_check[(int)&((NodeListState *)0)->obj == 0x28 ? 1 : -1];
typedef char NodeListState_parent_check[(int)&((NodeListState *)0)->parent == 0x3C ? 1 : -1];







struct SnowBoarder;

 



















 
typedef struct CamVec3 {
    f32 x, y, z;
} CamVec3;

 


typedef struct CamMNode {
    char node[0x2C];         
    char pad2C[0x30 - 0x2C];
    f32 local[4][4];         
    f32 world[4][4];         
    s32 unkB0;               
} CamMNode;                  

 



typedef struct MCamera {
    CamMNode mnode;          
    f32 view[4][4];          
    CamMNode *target;        
    s32 unkF8;
    f32 unkFC;               
    s32 unk100;
    CamVec3 lookDir;         
    char unk110[0x20];       
    s32 rotEnable;           
    f32 pitch;               
    f32 yaw;                 
    f32 unk13C;              
    CamVec3 up;              
    f32 fov;                 

} MCamera;

 
typedef struct CamWindow {
    char pad00[0x70];
    MCamera *cam;            
} CamWindow;

 


typedef struct RiderCam {
    MCamera cam;             
    f32 baseFov;             
    struct SnowBoarder *rider;  
    s32 mode;                
} RiderCam;

struct RiderInput;

 



typedef struct CamDirector {
    char node[0x2C];         
    CamWindow *window;       
    MCamera *cams[2];        
    struct RiderInput *pad;  
    s32 activeCam;           
    struct SnowBoarder *rider;  
    void *lastCamNode;       
    s32 pollTimer;           
    s32 manual;              
} CamDirector;

 

typedef struct FreeCam {
    char node[0x14];
    MCamera *cam;            
    char pad18[0x2C - 0x18];
    f32 dist;                
    f32 pitch;               
    f32 yaw;                 
    f32 unk38;
    s32 accel;               
    CamVec3 pos;             
    void *ctl;               
} FreeCam;

 


typedef struct CamFollow {
    char node[0x14];
    MCamera *cam;            
    char pad18[0x2C - 0x18];
    CamVec3 unk2C;           
    struct GdlInput *owner;  
} CamFollow;

 
typedef struct CamParm {
    char pad00[0xC];         
    void *vptr;              
    f32 value;               
    s32 unk14;               
} CamParm;

 
typedef struct CamVec3Parm {
    char pad00[0xC];
    void *vptr;              
    CamVec3 value;           
    s32 unk1C;               
} CamVec3Parm;

 
typedef struct SnowChaseActorCamParms {
    const char *name;        
    s32 unk04;               
    CamVec3Parm cof;         

    CamParm mxz;             
    CamParm txz;             
    CamParm cxz;             
    CamParm miy;             
    CamParm toy;             
    CamParm ty2;             
    CamParm chy;             
} SnowChaseActorCamParms;

 

typedef struct SnowChaseActorCam {
    char node[0x14];
    CamMNode *body;          
    char pad18[0x2C - 0x18];
    CamVec3 eyeOffset;       

    CamMNode *target;        
    CamMNode *source;        
    s32 mode;                
    SnowChaseActorCamParms parms;  
    char pad114[0x124 - 0x114];
} SnowChaseActorCam;

 
typedef struct SnowChaseActorLookParms {
    const char *name;        
    s32 unk04;               
    CamParm ch0;             

} SnowChaseActorLookParms;

 
typedef struct SnowChaseActorLook {
    char node[0x14];
    CamMNode *body;          
    char pad18[0x2C - 0x18];
    CamVec3 unk2C;           
    CamMNode *anchor;        

    SnowChaseActorCam *cam;  
    s32 mode;                
    SnowChaseActorLookParms parms;  
} SnowChaseActorLook;

 


typedef struct LookAtNode {
    CamMNode mnode;          
    SnowChaseActorLook *chase;  
} LookAtNode;

 
typedef struct SnowChaseActorParms {
    const char *name;        
    s32 unk04;
    CamVec3Parm off;         
    CamParm xxz;             
    CamParm mxz;             
    CamParm txz;             
    CamParm mxy, miy, toy;   
    CamParm cxz;             
    CamParm chy;             
} SnowChaseActorParms;

 
typedef struct SnowChaseActor {
    char node[0x14];
    CamMNode *body;          
    char pad18[0x2C - 0x18];
    s32 unk2C;               
    CamVec3 unk30;           
    CamVec3 toGoal;          
    CamMNode *target;        
    CamMNode *lookBody;      
    SnowChaseActorParms parms;  
} SnowChaseActor;

 






typedef struct CamKey {      
    CamVec3 look;            
    CamVec3 eye;             
    CamVec3 up;              
    f32 fov;                 
    s32 frames;              
    CamVec3 rot;             
} CamKey;

typedef struct CamPath {     
     

    s32 lookMode;            
    s32 lookSpline;          
    s32 unk08;               
    s32 unk0C;
    s32 eyeMode;             
    s32 eyeSpline;           
    s32 unk18;               
    s32 unk1C;
    s32 upSpline;            
    s32 unk24;
    s32 fovMode;             
    s32 unk2C;
    s32 rotMode;             
    s32 numKeys;             
    CamKey *keys[17];        



} CamPath;

typedef struct CamList {
    s32 unk00;
    s32 paths[8];            
    s32 count;               
} CamList;

typedef struct CourseCam {
    MCamera cam;             

    struct SnowBoarder *rider;  
    SnowChaseActorCam *eyeChase;  
    CamList *lists[30];      
    s32 numLists;            
    CamPath *paths[30];      
    s32 numPaths;            
    s32 view;                
    s32 listPos;             
    s32 path;                
    s32 key;                 
    s32 frame;               
    s32 lastResult;          
    s32 freeRot;             
    s32 chaseMode;           


    s32 savedChaseMode;      
    struct RiderInput *pad;  
    s32 unk278;
} CourseCam;                 



typedef char cam_assert_CamMNode_0x30[(int)&((CamMNode *)0)-> local == ( 0x30) ? 1 : -1] ;
typedef char cam_assert_CamMNode_0x70[(int)&((CamMNode *)0)-> world == ( 0x70) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActorCam_0x2C[(int)&((SnowChaseActorCam *)0)-> eyeOffset == ( 0x2C) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActorCam_0x40[(int)&((SnowChaseActorCam *)0)-> mode == ( 0x40) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActorCam_0x44[(int)&((SnowChaseActorCam *)0)-> parms == ( 0x44) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActorCam_0x5C[(int)&((SnowChaseActorCam *)0)-> parms.cof.value == ( 0x5C) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActorCam_0x7C[(int)&((SnowChaseActorCam *)0)-> parms.mxz.value == ( 0x7C) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActorCam_0x10C[(int)&((SnowChaseActorCam *)0)-> parms.chy.value == ( 0x10C) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActorLook_0x5C[(int)&((SnowChaseActorLook *)0)-> parms.ch0.value == ( 0x5C) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActor_0x3C[(int)&((SnowChaseActor *)0)-> toGoal == ( 0x3C) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActor_0x48[(int)&((SnowChaseActor *)0)-> target == ( 0x48) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActor_0x68[(int)&((SnowChaseActor *)0)-> parms.off.value == ( 0x68) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActor_0x88[(int)&((SnowChaseActor *)0)-> parms.xxz.value == ( 0x88) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActor_0x118[(int)&((SnowChaseActor *)0)-> parms.cxz.value == ( 0x118) ? 1 : -1] ;
typedef char cam_assert_SnowChaseActor_0x130[(int)&((SnowChaseActor *)0)-> parms.chy.value == ( 0x130) ? 1 : -1] ;
typedef char cam_assert_MCamera_0xB4[(int)&((MCamera *)0)-> view == ( 0xB4) ? 1 : -1] ;
typedef char cam_assert_MCamera_0xF4[(int)&((MCamera *)0)-> target == ( 0xF4) ? 1 : -1] ;
typedef char cam_assert_MCamera_0x104[(int)&((MCamera *)0)-> lookDir == ( 0x104) ? 1 : -1] ;
typedef char cam_assert_MCamera_0x130[(int)&((MCamera *)0)-> rotEnable == ( 0x130) ? 1 : -1] ;
typedef char cam_assert_MCamera_0x140[(int)&((MCamera *)0)-> up == ( 0x140) ? 1 : -1] ;
typedef char cam_assert_MCamera_0x14C[(int)&((MCamera *)0)-> fov == ( 0x14C) ? 1 : -1] ;
typedef char cam_assert_RiderCam_0x154[(int)&((RiderCam *)0)-> rider == ( 0x154) ? 1 : -1] ;
typedef char cam_assert_CamDirector_0x2C[(int)&((CamDirector *)0)-> window == ( 0x2C) ? 1 : -1] ;
typedef char cam_assert_CamDirector_0x38[(int)&((CamDirector *)0)-> pad == ( 0x38) ? 1 : -1] ;
typedef char cam_assert_CamDirector_0x4C[(int)&((CamDirector *)0)-> manual == ( 0x4C) ? 1 : -1] ;
typedef char cam_assert_FreeCam_0x40[(int)&((FreeCam *)0)-> pos == ( 0x40) ? 1 : -1] ;
typedef char cam_assert_CamFollow_0x38[(int)&((CamFollow *)0)-> owner == ( 0x38) ? 1 : -1] ;
typedef char cam_assert_mnode_size[sizeof(CamMNode) == 0xB4 ? 1 : -1];
typedef char cam_assert_mcamera_size[sizeof(MCamera) == 0x150 ? 1 : -1];
typedef char cam_assert_ridercam_size[sizeof(RiderCam) == 0x15C ? 1 : -1];
typedef char cam_assert_director_size[sizeof(CamDirector) == 0x50 ? 1 : -1];
typedef char cam_assert_freecam_size[sizeof(FreeCam) == 0x50 ? 1 : -1];
typedef char cam_assert_follow_size[sizeof(CamFollow) == 0x3C ? 1 : -1];
typedef char cam_assert_cam_size[sizeof(SnowChaseActorCam) == 0x124 ? 1 : -1];
typedef char cam_assert_look_size[sizeof(SnowChaseActorLook) == 0x64 ? 1 : -1];
typedef char cam_assert_actor_size[sizeof(SnowChaseActor) == 0x138 ? 1 : -1];
typedef char cam_assert_CamKey_0x28[(int)&((CamKey *)0)-> frames == ( 0x28) ? 1 : -1] ;
typedef char cam_assert_CamPath_0x34[(int)&((CamPath *)0)-> numKeys == ( 0x34) ? 1 : -1] ;
typedef char cam_assert_CamList_0x24[(int)&((CamList *)0)-> count == ( 0x24) ? 1 : -1] ;
typedef char cam_assert_CourseCam_0x150[(int)&((CourseCam *)0)-> rider == ( 0x150) ? 1 : -1] ;
typedef char cam_assert_CourseCam_0x158[(int)&((CourseCam *)0)-> lists == ( 0x158) ? 1 : -1] ;
typedef char cam_assert_CourseCam_0x1D0[(int)&((CourseCam *)0)-> numLists == ( 0x1D0) ? 1 : -1] ;
typedef char cam_assert_CourseCam_0x1D4[(int)&((CourseCam *)0)-> paths == ( 0x1D4) ? 1 : -1] ;
typedef char cam_assert_CourseCam_0x24C[(int)&((CourseCam *)0)-> numPaths == ( 0x24C) ? 1 : -1] ;
typedef char cam_assert_CourseCam_0x264[(int)&((CourseCam *)0)-> lastResult == ( 0x264) ? 1 : -1] ;
typedef char cam_assert_CourseCam_0x274[(int)&((CourseCam *)0)-> pad == ( 0x274) ? 1 : -1] ;
typedef char cam_assert_camkey_size[sizeof(CamKey) == 0x38 ? 1 : -1];
typedef char cam_assert_campath_size[sizeof(CamPath) == 0x7C ? 1 : -1];
typedef char cam_assert_coursecam_size[sizeof(CourseCam) == 0x27C ? 1 : -1];
typedef char cam_assert_camparms_size[sizeof(SnowChaseActorCamParms) == 0xD0 ? 1 : -1];











 










typedef struct TextWinRow {
      char *text;
      s32 len;
} TextWinRow;

typedef struct TextWin {
      TextWinRow *rows;   
      char *buf;           
      s32 maxCols;         
      s32 nRows;           
      s32 hScroll;         
      s32 visRows;         
      s32 top;             
      s32 cols;            
      s32 cur;             
      s32 cw;              
      s32 ch;              
      s32 x;               
      s32 y;               
      s32 muted;           
      struct TextWin *next;  
      struct TextWin *prev;
      char *title;         
      void *owner;         
      u8 colour[16];       

} TextWin;

 


typedef struct ConsoleMgr {
      Node node;
      TextWin *curWin;     
      TextWin *winList;    
      s32 input;           
      s32 unk38;           
} ConsoleMgr;

typedef char TextWinRow_size_check[sizeof(TextWinRow) == 0x8 ? 1 : -1];
typedef char TextWin_size_check[sizeof(TextWin) == 0x58 ? 1 : -1];
typedef char TextWin_cur_check[(int)&((TextWin *)0)->cur == 0x20 ? 1 : -1];
typedef char TextWin_next_check[(int)&((TextWin *)0)->next == 0x38 ? 1 : -1];
typedef char TextWin_colour_check[(int)&((TextWin *)0)->colour == 0x48 ? 1 : -1];
typedef char ConsoleMgr_size_check[sizeof(ConsoleMgr) == 0x3C ? 1 : -1];
typedef char ConsoleMgr_unk38_check[(int)&((ConsoleMgr *)0)->unk38 == 0x38 ? 1 : -1];









 





































 


 

typedef struct InputFrame {
      signed char stickX;
      signed char stickY;
      short buttons;
} InputFrame;





 
typedef struct PadContData {
      unsigned short button;
      signed char stickX;
      signed char stickY;
      unsigned char errNo;
} PadContData;

typedef struct PadContStatus {
      unsigned short type;
      unsigned char status;
      unsigned char errNo;                      
} PadContStatus;

 
typedef struct PadDev {
      char stack[0x1000];         
      char thread[0x1B0];         
      char mq[0x18];              
      char msgs[4][4];            
      char pad11D8[0x1200 - 0x11D8];
      PadContData conts[4];       
      PadContStatus status[4];    
      char pfs[4][0x68];          
      int pakState[4];            

      unsigned char motorOn[4];              



      unsigned char hasMotor[4];             
      short motorValue[4];          

      int readDone;               

      unsigned char present;                 
    char pad13ED[0x13F0 - 0x13ED];
      int motorRetry;             
    char pad13F4[0x13F8 - 0x13F4];
} PadDev;

 
typedef struct PadCtl {
      float stickX;                   
      float stickY;
      signed char rawStickX;
      signed char rawStickY;
    char pad0A[0x10 - 0x0A];
      int held;                     
      int prevHeld;
      int pressed;
      int released;
      int doubleTap;                
      int lastPressed;
      int unk28;                    
      int unk2C;                    
      int unk30;                    
      int port;                     
      int tapTimer;                 
      int injectPending;            
      int injectButtons;
      float injectStickX;
      float injectStickY;
      int replayMode;               
      int replayFrame;
      int replayLen;
      int *replayLenOut;
      InputFrame *replayFrames;
    char pad60[0x64 - 0x60];
      int unk64;                    
      int paused;                   
      int recordMask;               
      int mirrorX;
      short rumblePos;                
      short rumblePrio;               
      unsigned char *rumble;                   
      short dirIndex;
    char pad7E[0x80 - 0x7E];
} PadCtl;


typedef char PadContData_size_check[sizeof(PadContData) == 6 ? 1 : -1];
typedef char PadDev_size_check[sizeof(PadDev) == 0x13F8 ? 1 : -1];
typedef char PadDev_pakState_check[(int)&((PadDev *)0)->pakState == 0x13C8 ? 1 : -1];
typedef char PadCtl_size_check[sizeof(PadCtl) == 0x80 ? 1 : -1];
typedef char PadCtl_port_check[(int)&((PadCtl *)0)->port == 0x34 ? 1 : -1];
typedef char PadCtl_rumble_check[(int)&((PadCtl *)0)->rumble == 0x78 ? 1 : -1];
typedef char InputFrame_size_check[sizeof(InputFrame) == 4 ? 1 : -1];





 



typedef struct GdlInput {
      char pad00[0xB4];
      PadCtl *pad;                 
      int unkB8;
      float prevPoint[3];          
      char padC8[0xD4 - 0xC8];
      float pan[3];                
      char padE0[0xF8 - 0xE0];
      float curPoint[3];           
      int unk104;
      int enable;                  
      int unk10C;
      void *window;                
} GdlInput;


typedef char GdlInput_pad_check[(int)&((GdlInput *)0)->pad == 0xB4 ? 1 : -1];
typedef char GdlInput_window_check[(int)&((GdlInput *)0)->window == 0x110 ? 1 : -1];









 










struct ScreenWindow;
struct DLContext;
struct RcpMgr;

 
typedef struct GfxMorphList {
      void **items;
      int unk04;
      int capacity;             
      int count;
      int unk10;
      char *vptr;               
} GfxMorphList;

 







typedef struct GfxDdmState {          
      int unk0;
      int flags;
} GfxDdmState;

typedef struct GfxDdm {
      int dlIndex;               
      GfxDdmState state;
} GfxDdm;

 

typedef struct FogParms {
      float colour[4];          
      int min;                  
      int max;                  
} FogParms;

typedef struct GfxLib {
      int every4thFrame;       
      int unk004[23];
      float proj[4][4];        
      float modelView[4][4];   
      float (*curMtx)[4];      
      float (*extraMtx)[4];    

      float worldMtx[4][4];  
      float worldScale[3];     

      int unk134;
      int unk138;              
      int renderFlags;         

      int unk140[2];           
      void *frameStartCbs[5];   

      int nFrameStartCbs;
      int unk160[10];          
      int viewStage;           
      void *lights;            
      void *shadowLight;       
      int unk194;
      void *drawUpdates[10];   

      int nDrawUpdates;        
      int flags;               

      void *unk1C8;
      int unk1CC[5];
      int stageIsProj;         
      int unk1E4[4];
      int mtxMode;             
      signed char dir[4];      
      unsigned short colour[3];  
      unsigned short pad202;
      int fbIndex;             
      unsigned short perspNorm;  
      unsigned short pad20A;
      unsigned int frameTime;  
      int unk210;              
      struct DLContext *staticDL;  
      struct RcpMgr *rcp;      
      int textX;               
      int textY;               
      int charW;               
      int charH;               
      struct GfxMorphList *morphs;  

      int unk230;              
      int unk234[3];
      struct ScreenWindow *mainWindow;  
      int unk244;              
      int unk248;              
      float unk24C;            
      int unk250;              
      struct ScreenWindow *curWindow;  
      int nWindows;            
      struct ScreenWindow *windows[8];  
      int unk27C;
      struct DLContext *oneFrameDL[2];  

      int unk288;
      int cpuDraw;             
      int unk290;
      FogParms fog;            

      int ddm[51];             
      GfxDdm ddmPool[50];     
      int nDdms;               
      int unk5D4;
} GfxLib;


 





 


typedef char FogParms_size_check[sizeof(FogParms) == 0x18 ? 1 : -1];
typedef char GfxDdm_size_check[sizeof(GfxDdm) == 0xC ? 1 : -1];
typedef char GfxLib_size_check[sizeof(GfxLib) == 0x5D8 ? 1 : -1];

typedef char GfxLib_extraMtx_check[(int)&((GfxLib *)0)->extraMtx == 0xE4 ? 1 : -1];
typedef char GfxLib_worldScale_check[(int)&((GfxLib *)0)->worldScale == 0x128 ? 1 : -1];
typedef char GfxLib_flags_check[(int)&((GfxLib *)0)->flags == 0x1C4 ? 1 : -1];
typedef char GfxLib_fbIndex_check[(int)&((GfxLib *)0)->fbIndex == 0x204 ? 1 : -1];
typedef char GfxLib_staticDL_check[(int)&((GfxLib *)0)->staticDL == 0x214 ? 1 : -1];
typedef char GfxLib_textX_check[(int)&((GfxLib *)0)->textX == 0x21C ? 1 : -1];
typedef char GfxLib_mainWindow_check[(int)&((GfxLib *)0)->mainWindow == 0x240 ? 1 : -1];
typedef char GfxLib_curWindow_check[(int)&((GfxLib *)0)->curWindow == 0x254 ? 1 : -1];
typedef char GfxLib_cpuDraw_check[(int)&((GfxLib *)0)->cpuDraw == 0x28C ? 1 : -1];
typedef char GfxLib_nFrameStartCbs_check[(int)&((GfxLib *)0)->nFrameStartCbs == 0x15C ? 1 : -1];
typedef char GfxLib_drawUpdates_check[(int)&((GfxLib *)0)->drawUpdates == 0x198 ? 1 : -1];
typedef char GfxLib_nDrawUpdates_check[(int)&((GfxLib *)0)->nDrawUpdates == 0x1C0 ? 1 : -1];
typedef char GfxLib_morphs_check[(int)&((GfxLib *)0)->morphs == 0x22C ? 1 : -1];
typedef char GfxLib_windows_check[(int)&((GfxLib *)0)->windows == 0x25C ? 1 : -1];
typedef char GfxLib_oneFrameDL_check[(int)&((GfxLib *)0)->oneFrameDL == 0x280 ? 1 : -1];
typedef char GfxLib_ddm_check[(int)&((GfxLib *)0)->ddm == 0x2AC ? 1 : -1];
typedef char GfxLib_ddmPool_check[(int)&((GfxLib *)0)->ddmPool == 0x378 ? 1 : -1];
typedef char GfxLib_nDdms_check[(int)&((GfxLib *)0)->nDdms == 0x5D0 ? 1 : -1];







 


















































 







typedef struct {
      u32 type;
      u32 flags;
      u64 *ucode_boot;
      u32 ucode_boot_size;
      u64 *ucode;
      u32 ucode_size;
      u64 *ucode_data;
      u32 ucode_data_size;
      u64 *dram_stack;
      u32 dram_stack_size;
      u64 *output_buff;
      u64 *output_buff_size;
      u64 *data_ptr;
      u32 data_size;
      u64 *yield_data_ptr;
      u32 yield_data_size;
} OSTask_t;


typedef char OSTask_t_size_check[sizeof(OSTask_t) == 0x40 ? 1 : -1];
typedef char OSTask_t_data_ptr_check[(int)&((OSTask_t *)0)->data_ptr == 0x30 ? 1 : -1];







 








 



































typedef s32 OSPri;
typedef s32 OSId;
typedef union { struct { f32 f_odd; f32 f_even; } f; f64 d; } __OSfp;

typedef struct {
    u64 at, v0, v1, a0, a1, a2, a3;            
    u64 t0, t1, t2, t3, t4, t5, t6, t7;        
    u64 s0, s1, s2, s3, s4, s5, s6, s7;        
    u64 t8, t9, gp, sp, s8, ra;                
    u64 lo, hi;                                
    u32 sr, pc, cause, badvaddr, rcp;          
    u32 fpcsr;                                 
    __OSfp fp0, fp2, fp4, fp6, fp8, fp10, fp12, fp14;
    __OSfp fp16, fp18, fp20, fp22, fp24, fp26, fp28, fp30;
} __OSThreadContext;  

typedef struct OSThread_s {
      struct OSThread_s *next;
      OSPri priority;
      struct OSThread_s **queue;
      struct OSThread_s *tlnext;
      u16 state;
      u16 flags;
      OSId id;
      int fp;
      __OSThreadContext context;
} OSThread;  






 




 

 
typedef char os_thread_assert_0x38[(int)&((OSThread *)0)->context.a0 == ( 0x38) ? 1 : -1] ;
typedef char os_thread_assert_0xF0[(int)&((OSThread *)0)->context.sp == ( 0xF0) ? 1 : -1] ;
typedef char os_thread_assert_0x100[(int)&((OSThread *)0)->context.ra == ( 0x100) ? 1 : -1] ;
typedef char os_thread_assert_0x118[(int)&((OSThread *)0)->context.sr == ( 0x118) ? 1 : -1] ;
typedef char os_thread_assert_0x11C[(int)&((OSThread *)0)->context.pc == ( 0x11C) ? 1 : -1] ;
typedef char os_thread_assert_0x128[(int)&((OSThread *)0)->context.rcp == ( 0x128) ? 1 : -1] ;
typedef char os_thread_assert_0x12C[(int)&((OSThread *)0)->context.fpcsr == ( 0x12C) ? 1 : -1] ;





typedef u32 OSEvent;
typedef void *OSMesg;

typedef struct OSMesgQueue_s {
      OSThread *mtqueue;    
      OSThread *fullqueue;  
      s32 validCount;
      s32 first;
      s32 msgCount;
      OSMesg *msg;
} OSMesgQueue;  





 

 
typedef char os_mesg_assert_0x04[(int)&((OSMesgQueue *)0)->fullqueue == ( 0x04) ? 1 : -1] ;
typedef char os_mesg_assert_0x08[(int)&((OSMesgQueue *)0)->validCount == ( 0x08) ? 1 : -1] ;
typedef char os_mesg_assert_0x0C[(int)&((OSMesgQueue *)0)->first == ( 0x0C) ? 1 : -1] ;
typedef char os_mesg_assert_0x10[(int)&((OSMesgQueue *)0)->msgCount == ( 0x10) ? 1 : -1] ;
typedef char os_mesg_assert_0x14[(int)&((OSMesgQueue *)0)->msg == ( 0x14) ? 1 : -1] ;
typedef char os_mesg_assert_size[sizeof(OSMesgQueue) == 0x18 ? 1 : -1];





 

typedef struct AudioTask {
      OSTask_t task;
      void *taskQueue;           
      void *unk_44;
      char unk_48[0x8];
} AudioTask;  

 
typedef struct AudioAllocPool {
      u8 *startRamAddr;
      u8 *curRamAddr;
      s32 size;
      s32 numEntries;
} AudioAllocPool;  

 
typedef struct AudioAsyncLoad { u8 data[0x54]; } AudioAsyncLoad;    

 




typedef struct AudioCacheEntry {
      u8 *ramAddr;
      u32 size;
      s16 tableType;
      s16 id;
} AudioCacheEntry;  

 



typedef struct SampleCacheEntry {
      s8 inUse;
      s8 origMedium;
      s8 sampleBankId;
      u8 unk_03[5];
      u8 *allocatedAddr;
      void *sampleAddr;
      u32 size;
} SampleCacheEntry;  

 
typedef struct AudioSampleCache {
      AudioAllocPool pool;
      SampleCacheEntry entries[32];
      s32 numEntries;
} AudioSampleCache;  

typedef struct AudioPersistentCache {
      u32 numEntries;
      AudioAllocPool pool;
      AudioCacheEntry entries[16];
} AudioPersistentCache;  

 

typedef struct AudioTemporaryCache {
      u32 nextSide;
      AudioAllocPool pool;
      AudioCacheEntry entries[2];
} AudioTemporaryCache;  

typedef struct AudioCache {
      AudioPersistentCache persistent;
      AudioTemporaryCache temporary;
      u8 unk_100[0x10];
} AudioCache;  

 
typedef struct AudioSessionPoolSplit {
      u32 miscPoolSize;
      u32 unkSizes[2];
      u32 cachePoolSize;
} AudioSessionPoolSplit;  

typedef struct AudioCachePoolSplit {
      u32 persistentCommonPoolSize;
      u32 temporaryCommonPoolSize;
} AudioCachePoolSplit;  

typedef struct AudioCommonPoolSplit {
      u32 seqCacheSize;
      u32 fontCacheSize;
      u32 sampleBankCacheSize;
} AudioCommonPoolSplit;  

 


typedef struct AdpcmLoop {
      u32 start;
      u32 end;
      u32 count;
      char unk_0C[4];
      s16 predictorState[16];
} AdpcmLoop;  

typedef struct AdpcmBook {
      s32 order;
      s32 numPredictors;
      s16 book[1];
} AdpcmBook;

typedef struct Sample {
      u32 codec : 4;
      u32 medium : 2;
      u32 unk_bit26 : 1;
      u32 isRelocated : 1;
      u32 size : 24;
      u8 *sampleAddr;
      AdpcmLoop *loop;
      AdpcmBook *book;
} Sample;  

 

typedef struct AudioPreloadReq {
      u32 endAndMediumKey;
      Sample *sample;
      u8 *ramAddr;
      u32 encodedInfo;
      s32 isFree;
} AudioPreloadReq;  

 



typedef struct AudioSlowLoad {
      u8 medium;
      u8 seqOrFontId;
      u8 instId;
      u8 unk_03;
      s32 unkMediumParam;
      s32 curDevAddr;
      u8 *curRamAddr;
      u8 *ramAddr;
      s32 state;
      s32 bytesRemaining;
      s8 *isDone;
      Sample sample;
      OSMesgQueue msgQueue;
      void *msg;
      u8 ioMesg[0x18];              
} AudioSlowLoad;  

typedef struct TunedSample {
      Sample *sample;
      f32 tuning;
} TunedSample;  

 

typedef TunedSample SoundFontSound;

 

typedef struct AdsrEnvelope {
      s16 delay;
      s16 arg;
} AdsrEnvelope;  

 





typedef struct Instrument {
      u8 isRelocated;
      u8 normalRangeLo;
      u8 normalRangeHi;
      u8 adsrDecayIndex;
      AdsrEnvelope *envelope;
      TunedSample lowPitchTunedSample;
      TunedSample normalPitchTunedSample;
      TunedSample highPitchTunedSample;
} Instrument;  

typedef struct Drum {
      u8 adsrDecayIndex;
      u8 pan;
      u8 isRelocated;
      TunedSample tunedSample;
      AdsrEnvelope *envelope;
} Drum;  

typedef struct SoundEffect {
      TunedSample tunedSample;
} SoundEffect;  

 
typedef struct SoundFont {
      u8 numInstruments;
      u8 numDrums;
      u8 sampleBankId1;
      u8 sampleBankId2;
      u16 numSfx;
      Instrument **instruments;
      Drum **drums;
      SoundEffect *soundEffects;
} SoundFont;  

 

 

typedef struct SampleBankRelocInfo {
      s32 sampleBankId1;
      s32 sampleBankId2;
      u32 baseAddr1;
      u32 baseAddr2;
      u32 medium1;
      u32 medium2;
} SampleBankRelocInfo;  

typedef struct AudioTableHeader {
      s16 numEntries;
      s16 unkMediumParam;
      u32 romAddr;
      char pad[0x8];
} AudioTableHeader;  

typedef struct AudioTableEntry {
      u32 romAddr;
      u32 size;
      s8 medium;
      s8 cachePolicy;
      s16 shortData1;
      s16 shortData2;
      s16 shortData3;
} AudioTableEntry;  

typedef struct AudioTable {
      AudioTableHeader header;
      AudioTableEntry entries[1];
} AudioTable;  

 



typedef struct ReverbRingBufferItem {
      s16 numSamplesAfterDownsampling;
      s16 chunkLen;
      s16 *toDownsampleLeft;
      s16 *toDownsampleRight;
      s32 startPos;
      s16 lengthA;
      s16 lengthB;
} ReverbRingBufferItem;  

 















typedef struct SynthesisReverb {
      u8 resampleFlags;
      u8 useReverb;
      u8 framesToIgnore;
      u8 curFrame;
      u8 downsampleRate;
      s8 unk_05;
      u16 windowSize;
      u16 unk_08;
      s16 volume;
      u16 decayRatio;
      u16 unk_0E;
      u16 leakRtl;
      u16 leakLtr;
      s32 nextRingBufPos;
      s32 unk_18;             
      s32 bufSizePerChan;
      s16 *leftRingBuf;
      s16 *rightRingBuf;
      void *unk_28;           
      void *unk_2C;
      void *unk_30;
      void *unk_34;
      ReverbRingBufferItem items[2][5];
      s16 *filterLeft;
      s16 *filterRight;
      s16 *filterLeftState;
      s16 *filterRightState;
      TunedSample tunedSample;
      Sample sample;
      AdpcmLoop loop;
} SynthesisReverb;  

 

typedef struct AudioListItem {
      struct AudioListItem *prev;
      struct AudioListItem *next;
      union { void *value; s32 count; } u;
      struct NotePool *pool;
} AudioListItem;  

 

typedef struct NotePool {
      AudioListItem disabled;
      AudioListItem decaying;
      AudioListItem releasing;
      AudioListItem active;
} NotePool;  

 
typedef struct SeqScriptState {
      u8 *pc;
      u8 *stack[4];
      u8 remLoopIters[4];
      u8 depth;            
      s8 value;
} SeqScriptState;  

 

typedef struct AdsrSettings {
      u8 decayIndex;
      u8 sustain;
      AdsrEnvelope *envelope;
} AdsrSettings;  

 




typedef union AudioCmdArg {
    void *data;
    f32 asFloat;
    s32 asInt;
    u32 asUInt;
    u16 asUShort;
    s8 asSbyte;
    u8 asUbyte;
} AudioCmdArg;  

typedef struct AudioCmd {
      u8 op;
      u8 arg0;
      u8 arg1;
      u8 arg2;
      AudioCmdArg arg;
} AudioCmd;  

 
typedef union Stereo {
    struct {
        u8 unused : 2;
        u8 bit2 : 2;
        u8 strongRight : 1;
        u8 strongLeft : 1;
        u8 stereoHeadsetEffects : 1;
        u8 usesHeadsetPanEffects : 1;
    } s;
    u8 asByte;
} Stereo;  

struct SequenceChannel;
struct SequenceLayer;

 










typedef struct SequencePlayer {
      u32 enabled : 1;
      u32 finished : 1;
      u32 muted : 1;
      u32 seqDmaInProgress : 1;
      u32 fontDmaInProgress : 1;
      u32 recalculateVolume : 1;
      u32 stopScript : 1;
      u32 applyBend : 1;
      u8 state;
      u8 noteAllocPolicy;
      u8 muteBehavior;
      u8 seqId;
      u8 defaultFont;
      u8 unk_06;
      s8 playerIdx;
      u16 tempo;
      u16 tempoAcc;
      s16 tempoChange;
      s16 transposition;
      u16 delay;
      u16 fadeTimer;
      u16 fadeTimerUnkEu;
      char unk_16[2];
      u8 *seqData;
      f32 fadeVolume;
      f32 fadeVelocity;
      f32 volume;
      f32 muteVolumeScale;
      f32 fadeVolumeScale;
      f32 appliedFadeVolume;
      f32 bend;
      struct SequenceChannel *channels[16];
      SeqScriptState scriptState;
      u8 *shortNoteVelocityTable;
      u8 *shortNoteGateTimeTable;
      NotePool notePool;
      s32 skipTicks;
      u32 scriptCounter;
      char unk_E4[0x158 - 0xE4];
      s8 seqScriptIO[8];
} SequencePlayer;  

 









typedef struct SequenceChannel {
      u32 enabled : 1;
      u32 finished : 1;
      u32 stopScript : 1;
      u32 stopSomething2 : 1;
      u32 hasInstrument : 1;
      u32 stereoHeadsetEffects : 1;
      u32 largeNotes : 1;
      u32 unused : 1;
      u32 changesFreqScale : 1;
      u32 changesVolume : 1;
      u32 changesPan : 1;
      u32 changesRest : 5;
      u8 noteAllocPolicy;
      u8 muteBehavior;
      u8 targetReverbVol;
      u8 notePriority;
      u8 someOtherPriority;
      u8 fontId;
      u8 reverbIndex;
      u8 bookOffset;
      u8 newPan;
      u8 panChannelWeight;
      u8 gain;
      u8 velocityRandomVariance;
      u8 gateTimeRandomVariance;
      u8 combFilterSize;
      u16 vibratoRateStart;
      u16 vibratoDepthStart;
      u16 vibratoRateTarget;
      u16 vibratoDepthTarget;
      u16 vibratoRateChangeDelay;
      u16 vibratoDepthChangeDelay;
      u16 vibratoDelay;
      u16 delay;
      u16 combFilterGain;
      u16 unk_22;
      s16 instOrWave;
      s16 transposition;
      f32 volumeScale;
      f32 volume;
      s32 pan;
      f32 appliedVolume;
      f32 freqScale;
      u8 (*dynTable)[][2];
      void *noteUnused;
      void *layerUnused;
      void *instrument;
      SequencePlayer *seqPlayer;
      struct SequenceLayer *layers[8];
      SeqScriptState scriptState;
      AdsrSettings adsr;
      NotePool notePool;
      s8 seqScriptIO[8];
      s16 *filter;
      Stereo stereo;
      char unk_E1[3];
} SequenceChannel;  

 

typedef struct Portamento {
      u8 mode;
      u16 cur;
      u16 speed;
      f32 extent;
} Portamento;  

 






typedef struct SequenceLayer {
      u32 enabled : 1;
      u32 finished : 1;
      u32 stopSomething : 1;           
      u32 continuousNotes : 1;
      u32 bit3 : 1;                    
      u32 ignoreDrumPan : 1;
      u32 bit1 : 1;
      u32 notePropertiesNeedInit : 1;  
      u8 unk_01;
      u8 instOrWave;                   

      u8 unk_03;
      char unk_04;
      u8 pan;                          
      s8 notePan;                      
      char unk_07[0x18 - 0x07];
      AdsrSettings adsr;
      Portamento portamento;           
      struct Note *note;               
      f32 freqScale;                   
      char unk_34[0x38 - 0x34];
      f32 velocitySquare;              
      char unk_3C[0x40 - 0x3C];
      f32 noteVelocity;                
      f32 noteFreqScale;
      char unk_48[0x4C - 0x48];
      TunedSample *tunedSample;        
      SequenceChannel *channel;
      SeqScriptState scriptState;
      AudioListItem listItem;
} SequenceLayer;  

 













 
typedef struct NoteSynthesisState {
      u8 restart;
      u8 sampleDmaIndex;
      u8 prevHaasEffectLeftDelaySize;
      u8 prevHaasEffectRightDelaySize;
      u8 reverbVol;
      u8 numParts;
      u16 samplePosFrac;
      s32 samplePosInt;
      void *synthesisBuffers;
      s16 curVolLeft;
      s16 curVolRight;
      char unk_14[6];
      u8 combFilterNeedsInit;
      char unk_1B[5];
} NoteSynthesisState;  

 

typedef struct NoteAttributes {
      u8 reverb;
      u8 gain;
      u8 pan;
      Stereo stereo;
      u8 combFilterGain;
      char unk_05;
      u16 combFilterSize;
      f32 freqScale;
      f32 velocity;
      s16 *filter;
} NoteAttributes;  

 


typedef struct AdsrState {
      union {
        struct {
            u8 unk_bit0 : 1;
            u8 hang : 1;
            u8 decay : 1;
            u8 release : 1;
            u8 state : 4;
        } s;
        u8 asByte;
    } action;
      u8 envIndex;
      s16 delay;
      f32 sustain;
      f32 velocity;
      f32 fadeOutVel;
      f32 current;
      f32 target;
      char unk_18[4];
      AdsrEnvelope *envelope;
} AdsrState;  

 

typedef struct VibratoState {
      SequenceChannel *channel;
      u32 time;
      s16 *curve;
      f32 depth;
      f32 rate;
      u8 active;
      u16 rateChangeTimer;
      u16 depthChangeTimer;
      u16 delay;
} VibratoState;  

typedef struct NotePlaybackState {
      u8 priority;
      u8 waveId;
      u8 harmonicIndex;
      u8 fontId;
      u8 unk_04;
      u8 stereoHeadsetEffects;
      s16 adsrVolScaleUnused;
      f32 portamentoFreqScale;
      f32 vibratoFreqScale;
      SequenceLayer *prevParentLayer;
      SequenceLayer *parentLayer;
      SequenceLayer *wantedParentLayer;
      NoteAttributes attributes;
      AdsrState adsr;
      Portamento portamento;
      VibratoState vibratoState;
      char unk_78[8];
} NotePlaybackState;  

 





typedef struct NoteSampleState {
      u32 enabled : 1;
      u32 needsInit : 1;
      u32 finished : 1;
      u32 unused : 1;
      u32 stereoStrongRight : 1;
      u32 stereoStrongLeft : 1;
      u32 stereoHeadsetEffects : 1;
      u32 usesHeadsetPanEffects : 1;
      u32 reverbIndex : 3;
      u32 bookOffset : 2;
      u32 isSyntheticWave : 1;
      u32 hasTwoParts : 1;
      u32 useHaasEffect : 1;
      u8 gain;
      u8 haasEffectLeftDelaySize;
      u8 haasEffectRightDelaySize;
      u8 reverbVol;
      u8 harmonicIndexCurAndPrev;
      u8 combFilterSize;
      u16 targetVolLeft;
      u16 targetVolRight;
      u16 resamplingRateFixedPoint;
      u16 combFilterGain;
      TunedSample *tunedSample;
      s16 *filter;
      char unk_18[8];
} NoteSampleState;  

typedef struct Note {
      AudioListItem listItem;
      NoteSynthesisState synthesisState;
      NotePlaybackState playbackState;
      NoteSampleState sampleState;
} Note;  

 


typedef struct AudioHeapInitSizes {
      s16 unk0;              
      s16 tatumsPerBeat;     
      s32 heapSize;
      s32 initPoolSize;
      s32 permanentPoolSize;
} AudioHeapInitSizes;  

typedef struct AudioContext {
      char unk_0000;
      s8 numSynthesisReverbs;               
      char unk_0002[0x0010 - 0x0002];
      s16 *curLoadedBook;                   
      void *sampleStates;                   
      SynthesisReverb synthesisReverbs[3];  
      char unk_0420[0x0430 - 0x0420];
      Sample *usedSamples[0x80];                 
      AudioPreloadReq preloadSampleStack[0x80];  
      s32 numUsedSamples;
      s32 preloadSampleStackTop;
      AudioAsyncLoad asyncLoads[16];
      char unk_1578[0x157C - 0x1578];
      AudioSlowLoad slowLoads[2];         
      void *cartHandle;                     
      void *driveHandle;                    
      u8 externalLoadQueue[0x18];           
      void *externalLoadMsgBuf[8];
      u8 preloadSampleQueue[0x18];          
      void *preloadSampleMsgBuf[8];
      OSMesgQueue curAudioFrameDmaQueue;    
      void *curAudioFrameDmaMsgBuf[0x40];
      u8 curAudioFrameDmaIoMsgBuf[0x40][0x18];  
      u8 syncDmaQueue[0x18];                
      void *syncDmaMesg;
      u8 syncDmaIoMesg[0x18];               
      void *sampleDmas;                     
      u32 sampleDmaCount;
      u32 sampleDmaListSize1;
      s32 unused1E14;                      
      u8 sampleDmaReuseQueue1[0x100];
      u8 sampleDmaReuseQueue2[0x100];
      u8 sampleDmaReuseQueue1RdPos;
      u8 sampleDmaReuseQueue2RdPos;
      u8 sampleDmaReuseQueue1WrPos;
      u8 sampleDmaReuseQueue2WrPos;
      AudioTable *sequenceTable;                 
      AudioTable *soundFontTable;                
      AudioTable *sampleBankTable;               
      u8 *sequenceFontTable;                
      s16 numSequences;                     
      char unk_202E[2];
      SoundFont *soundFontList;                 
      s16 specUnk4;                         
      char unk_2036[0x203A - 0x2036];
      s16 samplesPerFrameTarget;            
      s16 maxAiBufferLength;
      s16 minAiBufferLength;
      s16 ticksPerUpdate;                   
      char unk_2042[0x2048 - 0x2042];
      s16 numSequencePlayers;               
      char unk_204A[0x204C - 0x204A];
      f32 resampleRate;
      f32 ticksPerUpdateInv;
      f32 ticksPerUpdateInvScaled;          
      char unk_2058[0x2060 - 0x2058];
      s32 sampleDmaBufSize1;                
      s32 sampleDmaBufSize2;
      s32 sampleDmaBufSize;
      char unk_206C[4];
      s32 numNotes;
      s16 tempoInternalToExternal;          
      s8 soundOutputMode;                   
      char unk_2077;
      s32 totalTaskCount;                   
      s32 curAudioFrameDmaCount;
      s32 rspTaskIndex;
      s32 curAiBufIndex;
      u64 *abiCmdBufs[2];
      u64 *curAbiCmdBuf;
      AudioTask *curTask;
      AudioTask rspTask[2];
      f32 maxTempoTvTypeFactors;            
      s32 refreshRate;                      
      s16 *aiBuffers[3];
      s16 aiBufLengths[3];
      char unk_2152[2];
      u32 audioRandom;                      
      char unk_2158[4];
      volatile u32 resetTimer;              
      char unk_2160[0x2168 - 0x2160];
      AudioAllocPool sessionPool;           
      AudioAllocPool externalPool;          
      AudioAllocPool initPool;              
      AudioAllocPool miscPool;              
      char unk_21A8[0x21C8 - 0x21A8];       
      AudioAllocPool cachePool;             
      AudioAllocPool persistentCommonPool;  
      AudioAllocPool temporaryCommonPool;   
      AudioCache seqCache;                  
      AudioCache fontCache;
      AudioCache sampleBankCache;
      AudioAllocPool permanentPool;         
      AudioCacheEntry permanentCache[32];   
      AudioSampleCache persistentSampleCache;  
      AudioSampleCache temporarySampleCache;   
      AudioSessionPoolSplit sessionPoolSplit;
      AudioCachePoolSplit cachePoolSplit;
      AudioCommonPoolSplit persistentCommonPoolSplit;
      AudioCommonPoolSplit temporaryCommonPoolSplit;
      u8 sampleFontLoadStatus[0x30];        
      u8 fontLoadStatus[0x30];
      u8 seqLoadStatus[0x80];
      volatile u8 resetStatus;              
      u8 specId;
      char unk_2CF2[2];
      s32 audioResetFadeOutFramesLeft;
      f32 *adsrDecayTable;
      Note *notes;                          
      SequencePlayer seqPlayers[4];
      SequenceLayer sequenceLayers[64];    
      SequenceChannel sequenceChannelNone;  
      s32 noteSubEuOffset;                  
      AudioListItem layerFreeList;          
      NotePool noteFreeLists;               
      u8 threadCmdWritePos;                 
      u8 threadCmdReadPos;
      u8 threadCmdQueueFinished;
      char unk_53BB;
      u16 threadCmdChannelMask[4];          
      void *audioResetQueueP;               
      void *taskStartQueueP;
      void *threadCmdProcQueueP;            
      OSMesgQueue taskStartQueue;           
      OSMesgQueue threadCmdProcQueue;
      OSMesgQueue audioResetQueue;
      OSMesg taskStartMsgBuf[1];
      OSMesg audioResetMesgBuf[1];
      OSMesg threadCmdProcMsgBuf[4];
      AudioCmd threadCmdBuf[0x100];         
} AudioContext;  



 
typedef char audio_ctx_assert_0x0010[(int)&((AudioContext *)0)->curLoadedBook == ( 0x0010) ? 1 : -1] ;
typedef char audio_ctx_assert_0x0018[(int)&((AudioContext *)0)->synthesisReverbs == ( 0x0018) ? 1 : -1] ;
typedef char audio_ctx_assert_0x0430[(int)&((AudioContext *)0)->usedSamples == ( 0x0430) ? 1 : -1] ;
typedef char audio_ctx_assert_0x1030[(int)&((AudioContext *)0)->numUsedSamples == ( 0x1030) ? 1 : -1] ;
typedef char audio_ctx_assert_0x1038[(int)&((AudioContext *)0)->asyncLoads == ( 0x1038) ? 1 : -1] ;
typedef char audio_ctx_assert_0x1644[(int)&((AudioContext *)0)->cartHandle == ( 0x1644) ? 1 : -1] ;
typedef char audio_ctx_assert_0x1684[(int)&((AudioContext *)0)->preloadSampleQueue == ( 0x1684) ? 1 : -1] ;
typedef char audio_ctx_assert_0x16BC[(int)&((AudioContext *)0)->curAudioFrameDmaQueue == ( 0x16BC) ? 1 : -1] ;
typedef char audio_ctx_assert_0x1DD4[(int)&((AudioContext *)0)->syncDmaQueue == ( 0x1DD4) ? 1 : -1] ;
typedef char audio_ctx_assert_0x1DF0[(int)&((AudioContext *)0)->syncDmaIoMesg == ( 0x1DF0) ? 1 : -1] ;
typedef char audio_ctx_assert_0x1E08[(int)&((AudioContext *)0)->sampleDmas == ( 0x1E08) ? 1 : -1] ;
typedef char audio_ctx_assert_0x201A[(int)&((AudioContext *)0)->sampleDmaReuseQueue1WrPos == ( 0x201A) ? 1 : -1] ;
typedef char audio_ctx_assert_0x201C[(int)&((AudioContext *)0)->sequenceTable == ( 0x201C) ? 1 : -1] ;
typedef char audio_ctx_assert_0x157C[(int)&((AudioContext *)0)->slowLoads == ( 0x157C) ? 1 : -1] ;
typedef char AudioSlowLoad_size_check[sizeof(AudioSlowLoad) == 0x64 ? 1 : -1];
typedef char audio_ctx_assert_0x2028[(int)&((AudioContext *)0)->sequenceFontTable == ( 0x2028) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2030[(int)&((AudioContext *)0)->soundFontList == ( 0x2030) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2034[(int)&((AudioContext *)0)->specUnk4 == ( 0x2034) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2048[(int)&((AudioContext *)0)->numSequencePlayers == ( 0x2048) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2050[(int)&((AudioContext *)0)->ticksPerUpdateInv == ( 0x2050) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2070[(int)&((AudioContext *)0)->numNotes == ( 0x2070) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2076[(int)&((AudioContext *)0)->soundOutputMode == ( 0x2076) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2098[(int)&((AudioContext *)0)->rspTask == ( 0x2098) ? 1 : -1] ;
typedef char audio_ctx_assert_0x211C[(int)&((AudioContext *)0)->rspTask[1].task.data_size == ( 0x211C) ? 1 : -1] ;
typedef char audio_ctx_assert_0x213C[(int)&((AudioContext *)0)->refreshRate == ( 0x213C) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2140[(int)&((AudioContext *)0)->aiBuffers == ( 0x2140) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2154[(int)&((AudioContext *)0)->audioRandom == ( 0x2154) ? 1 : -1] ;
typedef char audio_ctx_assert_0x215C[(int)&((AudioContext *)0)->resetTimer == ( 0x215C) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2178[(int)&((AudioContext *)0)->externalPool == ( 0x2178) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2198[(int)&((AudioContext *)0)->miscPool == ( 0x2198) ? 1 : -1] ;
typedef char audio_ctx_assert_0x21C8[(int)&((AudioContext *)0)->cachePool == ( 0x21C8) ? 1 : -1] ;
typedef char audio_ctx_assert_0x21F8[(int)&((AudioContext *)0)->seqCache == ( 0x21F8) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2308[(int)&((AudioContext *)0)->fontCache == ( 0x2308) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2418[(int)&((AudioContext *)0)->sampleBankCache == ( 0x2418) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2528[(int)&((AudioContext *)0)->permanentPool == ( 0x2528) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2538[(int)&((AudioContext *)0)->permanentCache == ( 0x2538) ? 1 : -1] ;
typedef char audio_ctx_assert_0x26B8[(int)&((AudioContext *)0)->persistentSampleCache == ( 0x26B8) ? 1 : -1] ;
typedef char audio_ctx_assert_0x294C[(int)&((AudioContext *)0)->temporarySampleCache == ( 0x294C) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2BE0[(int)&((AudioContext *)0)->sessionPoolSplit == ( 0x2BE0) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2C04[(int)&((AudioContext *)0)->temporaryCommonPoolSplit == ( 0x2C04) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2C10[(int)&((AudioContext *)0)->sampleFontLoadStatus == ( 0x2C10) ? 1 : -1] ;
typedef char audio_cache_size_assert[sizeof(AudioCache) == 0x110 ? 1 : -1];
typedef char audio_samplecache_size_assert[sizeof(AudioSampleCache) == 0x294 ? 1 : -1];
typedef char audio_cacheentry_size_assert[sizeof(AudioCacheEntry) == 0xC ? 1 : -1];
typedef char audio_ctx_assert_0x2CF0[(int)&((AudioContext *)0)->resetStatus == ( 0x2CF0) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2CFC[(int)&((AudioContext *)0)->notes == ( 0x2CFC) ? 1 : -1] ;
typedef char audio_ctx_assert_0x2D00[(int)&((AudioContext *)0)->seqPlayers == ( 0x2D00) ? 1 : -1] ;
typedef char audio_ctx_assert_0x3280[(int)&((AudioContext *)0)->sequenceLayers == ( 0x3280) ? 1 : -1] ;
typedef char audio_ctx_assert_0x5280[(int)&((AudioContext *)0)->sequenceChannelNone == ( 0x5280) ? 1 : -1] ;
typedef char audio_ctx_assert_0x5364[(int)&((AudioContext *)0)->noteSubEuOffset == ( 0x5364) ? 1 : -1] ;
typedef char audio_ctx_assert_0x5368[(int)&((AudioContext *)0)->layerFreeList == ( 0x5368) ? 1 : -1] ;
typedef char audio_ctx_assert_0x5378[(int)&((AudioContext *)0)->noteFreeLists == ( 0x5378) ? 1 : -1] ;
typedef char audio_ctx_assert_0x53BC[(int)&((AudioContext *)0)->threadCmdChannelMask == ( 0x53BC) ? 1 : -1] ;
typedef char audio_ctx_assert_0x53CC[(int)&((AudioContext *)0)->threadCmdProcQueueP == ( 0x53CC) ? 1 : -1] ;
typedef char audio_ctx_assert_0x53D0[(int)&((AudioContext *)0)->taskStartQueue == ( 0x53D0) ? 1 : -1] ;
typedef char audio_ctx_assert_0x5400[(int)&((AudioContext *)0)->audioResetQueue == ( 0x5400) ? 1 : -1] ;
typedef char audio_ctx_assert_0x5420[(int)&((AudioContext *)0)->threadCmdProcMsgBuf == ( 0x5420) ? 1 : -1] ;
typedef char audio_ctx_assert_0x5430[(int)&((AudioContext *)0)->threadCmdBuf == ( 0x5430) ? 1 : -1] ;
typedef char audio_ctx_size_assert[sizeof(AudioContext) == 0x5C30 ? 1 : -1];
typedef char audio_pool_size_assert[sizeof(AudioAllocPool) == 0x10 ? 1 : -1];
typedef char audio_reverb_size_assert[sizeof(SynthesisReverb) == 0x158 ? 1 : -1];
typedef char audio_seqplayer_size_assert[sizeof(SequencePlayer) == 0x160 ? 1 : -1];
typedef char audio_listitem_size_assert[sizeof(AudioListItem) == 0x10 ? 1 : -1];
typedef char audio_notepool_size_assert[sizeof(NotePool) == 0x40 ? 1 : -1];
typedef char audio_scriptstate_size_assert[sizeof(SeqScriptState) == 0x1C ? 1 : -1];
typedef char audio_channel_size_assert[sizeof(SequenceChannel) == 0xE4 ? 1 : -1];
typedef char audio_layer_size_assert[sizeof(SequenceLayer) == 0x80 ? 1 : -1];
typedef char audio_ringitem_size_assert[sizeof(ReverbRingBufferItem) == 0x14 ? 1 : -1];
typedef char audio_sample_size_assert[sizeof(Sample) == 0x10 ? 1 : -1];
typedef char audio_adpcmloop_size_assert[sizeof(AdpcmLoop) == 0x30 ? 1 : -1];
typedef char audio_synthstate_size_assert[sizeof(NoteSynthesisState) == 0x20 ? 1 : -1];
typedef char audio_attrs_size_assert[sizeof(NoteAttributes) == 0x14 ? 1 : -1];
typedef char audio_adsrstate_size_assert[sizeof(AdsrState) == 0x20 ? 1 : -1];
typedef char audio_portamento_size_assert[sizeof(Portamento) == 0xC ? 1 : -1];
typedef char audio_vibrato_size_assert[sizeof(VibratoState) == 0x1C ? 1 : -1];
typedef char audio_playback_size_assert[sizeof(NotePlaybackState) == 0x80 ? 1 : -1];
typedef char audio_samplestate_size_assert[sizeof(NoteSampleState) == 0x20 ? 1 : -1];
typedef char audio_note_size_assert[sizeof(Note) == 0xD0 ? 1 : -1];

 
typedef char audio_SequencePlayer_tempo_assert[(int)&((SequencePlayer *)0)-> tempo == ( 0x008) ? 1 : -1] ;
typedef char audio_SequencePlayer_seqData_assert[(int)&((SequencePlayer *)0)-> seqData == ( 0x018) ? 1 : -1] ;
typedef char audio_SequencePlayer_bend_assert[(int)&((SequencePlayer *)0)-> bend == ( 0x034) ? 1 : -1] ;
typedef char audio_SequencePlayer_channels_assert[(int)&((SequencePlayer *)0)-> channels == ( 0x038) ? 1 : -1] ;
typedef char audio_SequencePlayer_scriptState_assert[(int)&((SequencePlayer *)0)-> scriptState == ( 0x078) ? 1 : -1] ;
typedef char audio_SequencePlayer_shortNoteVelocityTable_assert[(int)&((SequencePlayer *)0)-> shortNoteVelocityTable == ( 0x094) ? 1 : -1] ;
typedef char audio_SequencePlayer_notePool_assert[(int)&((SequencePlayer *)0)-> notePool == ( 0x09C) ? 1 : -1] ;
typedef char audio_SequencePlayer_skipTicks_assert[(int)&((SequencePlayer *)0)-> skipTicks == ( 0x0DC) ? 1 : -1] ;
typedef char audio_SequencePlayer_scriptCounter_assert[(int)&((SequencePlayer *)0)-> scriptCounter == ( 0x0E0) ? 1 : -1] ;
typedef char audio_SequencePlayer_seqScriptIO_assert[(int)&((SequencePlayer *)0)-> seqScriptIO == ( 0x158) ? 1 : -1] ;
typedef char audio_SequenceChannel_noteAllocPolicy_assert[(int)&((SequenceChannel *)0)-> noteAllocPolicy == ( 0x02) ? 1 : -1] ;
typedef char audio_SequenceChannel_vibratoRateStart_assert[(int)&((SequenceChannel *)0)-> vibratoRateStart == ( 0x10) ? 1 : -1] ;
typedef char audio_SequenceChannel_transposition_assert[(int)&((SequenceChannel *)0)-> transposition == ( 0x26) ? 1 : -1] ;
typedef char audio_SequenceChannel_freqScale_assert[(int)&((SequenceChannel *)0)-> freqScale == ( 0x38) ? 1 : -1] ;
typedef char audio_SequenceChannel_seqPlayer_assert[(int)&((SequenceChannel *)0)-> seqPlayer == ( 0x4C) ? 1 : -1] ;
typedef char audio_SequenceChannel_layers_assert[(int)&((SequenceChannel *)0)-> layers == ( 0x50) ? 1 : -1] ;
typedef char audio_SequenceChannel_scriptState_assert[(int)&((SequenceChannel *)0)-> scriptState == ( 0x70) ? 1 : -1] ;
typedef char audio_SequenceChannel_adsr_assert[(int)&((SequenceChannel *)0)-> adsr == ( 0x8C) ? 1 : -1] ;
typedef char audio_SequenceChannel_notePool_assert[(int)&((SequenceChannel *)0)-> notePool == ( 0x94) ? 1 : -1] ;
typedef char audio_SequenceChannel_seqScriptIO_assert[(int)&((SequenceChannel *)0)-> seqScriptIO == ( 0xD4) ? 1 : -1] ;
typedef char audio_SequenceChannel_filter_assert[(int)&((SequenceChannel *)0)-> filter == ( 0xDC) ? 1 : -1] ;
typedef char audio_SequenceChannel_stereo_assert[(int)&((SequenceChannel *)0)-> stereo == ( 0xE0) ? 1 : -1] ;
typedef char audio_SequenceLayer_instOrWave_assert[(int)&((SequenceLayer *)0)-> instOrWave == ( 0x02) ? 1 : -1] ;
typedef char audio_SequenceLayer_adsr_assert[(int)&((SequenceLayer *)0)-> adsr == ( 0x18) ? 1 : -1] ;
typedef char audio_SequenceLayer_portamento_assert[(int)&((SequenceLayer *)0)-> portamento == ( 0x20) ? 1 : -1] ;
typedef char audio_SequenceLayer_note_assert[(int)&((SequenceLayer *)0)-> note == ( 0x2C) ? 1 : -1] ;
typedef char audio_SequenceLayer_noteVelocity_assert[(int)&((SequenceLayer *)0)-> noteVelocity == ( 0x40) ? 1 : -1] ;
typedef char audio_SequenceLayer_tunedSample_assert[(int)&((SequenceLayer *)0)-> tunedSample == ( 0x4C) ? 1 : -1] ;
typedef char audio_SequenceLayer_channel_assert[(int)&((SequenceLayer *)0)-> channel == ( 0x50) ? 1 : -1] ;
typedef char audio_SequenceLayer_scriptState_assert[(int)&((SequenceLayer *)0)-> scriptState == ( 0x54) ? 1 : -1] ;
typedef char audio_SequenceLayer_listItem_assert[(int)&((SequenceLayer *)0)-> listItem == ( 0x70) ? 1 : -1] ;
typedef char audio_SynthesisReverb_windowSize_assert[(int)&((SynthesisReverb *)0)-> windowSize == ( 0x006) ? 1 : -1] ;
typedef char audio_SynthesisReverb_leakRtl_assert[(int)&((SynthesisReverb *)0)-> leakRtl == ( 0x010) ? 1 : -1] ;
typedef char audio_SynthesisReverb_nextRingBufPos_assert[(int)&((SynthesisReverb *)0)-> nextRingBufPos == ( 0x014) ? 1 : -1] ;
typedef char audio_SynthesisReverb_leftRingBuf_assert[(int)&((SynthesisReverb *)0)-> leftRingBuf == ( 0x020) ? 1 : -1] ;
typedef char audio_SynthesisReverb_items_assert[(int)&((SynthesisReverb *)0)-> items == ( 0x038) ? 1 : -1] ;
typedef char audio_SynthesisReverb_filterLeft_assert[(int)&((SynthesisReverb *)0)-> filterLeft == ( 0x100) ? 1 : -1] ;
typedef char audio_SynthesisReverb_tunedSample_assert[(int)&((SynthesisReverb *)0)-> tunedSample == ( 0x110) ? 1 : -1] ;
typedef char audio_SynthesisReverb_sample_assert[(int)&((SynthesisReverb *)0)-> sample == ( 0x118) ? 1 : -1] ;
typedef char audio_SynthesisReverb_loop_assert[(int)&((SynthesisReverb *)0)-> loop == ( 0x128) ? 1 : -1] ;
typedef char audio_NoteSynthesisState_curVolLeft_assert[(int)&((NoteSynthesisState *)0)-> curVolLeft == ( 0x10) ? 1 : -1] ;
typedef char audio_NoteSynthesisState_combFilterNeedsInit_assert[(int)&((NoteSynthesisState *)0)-> combFilterNeedsInit == ( 0x1A) ? 1 : -1] ;
typedef char audio_NotePlaybackState_adsrVolScaleUnused_assert[(int)&((NotePlaybackState *)0)-> adsrVolScaleUnused == ( 0x06) ? 1 : -1] ;
typedef char audio_NotePlaybackState_prevParentLayer_assert[(int)&((NotePlaybackState *)0)-> prevParentLayer == ( 0x10) ? 1 : -1] ;
typedef char audio_NotePlaybackState_attributes_assert[(int)&((NotePlaybackState *)0)-> attributes == ( 0x1C) ? 1 : -1] ;
typedef char audio_NotePlaybackState_adsr_assert[(int)&((NotePlaybackState *)0)-> adsr == ( 0x30) ? 1 : -1] ;
typedef char audio_NotePlaybackState_portamento_assert[(int)&((NotePlaybackState *)0)-> portamento == ( 0x50) ? 1 : -1] ;
typedef char audio_NotePlaybackState_vibratoState_assert[(int)&((NotePlaybackState *)0)-> vibratoState == ( 0x5C) ? 1 : -1] ;
typedef char audio_AdsrState_fadeOutVel_assert[(int)&((AdsrState *)0)-> fadeOutVel == ( 0x0C) ? 1 : -1] ;
typedef char audio_AdsrState_envelope_assert[(int)&((AdsrState *)0)-> envelope == ( 0x1C) ? 1 : -1] ;
typedef char audio_VibratoState_active_assert[(int)&((VibratoState *)0)-> active == ( 0x14) ? 1 : -1] ;
typedef char audio_VibratoState_delay_assert[(int)&((VibratoState *)0)-> delay == ( 0x1A) ? 1 : -1] ;
typedef char audio_NoteSampleState_gain_assert[(int)&((NoteSampleState *)0)-> gain == ( 0x02) ? 1 : -1] ;
typedef char audio_NoteSampleState_resamplingRateFixedPoint_assert[(int)&((NoteSampleState *)0)-> resamplingRateFixedPoint == ( 0x0C) ? 1 : -1] ;
typedef char audio_NoteSampleState_tunedSample_assert[(int)&((NoteSampleState *)0)-> tunedSample == ( 0x10) ? 1 : -1] ;
typedef char audio_Note_synthesisState_assert[(int)&((Note *)0)-> synthesisState == ( 0x10) ? 1 : -1] ;
typedef char audio_Note_playbackState_assert[(int)&((Note *)0)-> playbackState == ( 0x30) ? 1 : -1] ;
typedef char audio_Note_sampleState_assert[(int)&((Note *)0)-> sampleState == ( 0xB0) ? 1 : -1] ;
typedef char audio_Instrument_envelope_assert[(int)&((Instrument *)0)-> envelope == ( 0x04) ? 1 : -1] ;
typedef char audio_Instrument_highPitchTunedSample_assert[(int)&((Instrument *)0)-> highPitchTunedSample == ( 0x18) ? 1 : -1] ;
typedef char audio_Drum_tunedSample_assert[(int)&((Drum *)0)-> tunedSample == ( 0x04) ? 1 : -1] ;
typedef char audio_Drum_envelope_assert[(int)&((Drum *)0)-> envelope == ( 0x0C) ? 1 : -1] ;
typedef char audio_SoundFont_numSfx_assert[(int)&((SoundFont *)0)-> numSfx == ( 0x04) ? 1 : -1] ;
typedef char audio_SoundFont_soundEffects_assert[(int)&((SoundFont *)0)-> soundEffects == ( 0x10) ? 1 : -1] ;
typedef char audio_AudioTableEntry_shortData3_assert[(int)&((AudioTableEntry *)0)-> shortData3 == ( 0x0E) ? 1 : -1] ;
typedef char audio_AudioTable_entries_assert[(int)&((AudioTable *)0)-> entries == ( 0x10) ? 1 : -1] ;
typedef char audio_instrument_size_assert[sizeof(Instrument) == 0x20 ? 1 : -1];
typedef char audio_drum_size_assert[sizeof(Drum) == 0x10 ? 1 : -1];
typedef char audio_soundfont_size_assert[sizeof(SoundFont) == 0x14 ? 1 : -1];
typedef char audio_envelope_size_assert[sizeof(AdsrEnvelope) == 0x4 ? 1 : -1];


 







 

 



typedef struct SndLevelRamp {
      s32 target;
      s32 current;
      s32 count;
      s32 frac;
      s32 mode;
} SndLevelRamp;  

typedef struct SoundVoice {
    f32 volScale;            
    f32 turnAtten;           
    f32 angle;               
    u8 pan[4];               
} SoundVoice;

typedef struct SoundObj {
    f32 speed;               
    f32 unk04;               
    f32 unk08;               
    f32 unk0C;               
    f32 unk10;               
    u8 unk14;                
    u8 unk15;                
    u8 flags;                
    u8 unk17;                
    s8 unk18;                
    u8 pad19;
    s16 unk1A;               
    u8 flags1C;              
    u8 reverbOn;             


    u8 unk1E;                
    u8 unk1F;                
    u8 fired;                
    u8 kind;                 
    u8 surface;              
    u8 unk23;                
    u8 pad24[2];
    u8 unk26;                
    u8 pad27;
    u8 unk28;                
    u8 level;                
    u8 unk2A;                
    u8 unk2B;                
    u8 unk2C;                
    u8 lastLevel;            
    u8 eventArg;             
    u8 pad2F;
    u16 eventType;           
    u8 scaleIdx;             
    u8 unk33;                
    u8 reverbOnSent;         
    u8 pad35[3];
    s32 unk38;               
    u8 pad3C[8];
    f32 unk44;               
    s32 unk48;               
    u8 pad4C[4];
    f32 unk50;               
    SoundVoice voice;        
} SoundObj;


typedef char audio_SoundObj_flags_assert[(int)&((SoundObj *)0)-> flags == ( 0x16) ? 1 : -1] ;
typedef char audio_SoundObj_kind_assert[(int)&((SoundObj *)0)-> kind == ( 0x21) ? 1 : -1] ;
typedef char audio_SoundObj_eventType_assert[(int)&((SoundObj *)0)-> eventType == ( 0x30) ? 1 : -1] ;
typedef char audio_SoundObj_unk48_assert[(int)&((SoundObj *)0)-> unk48 == ( 0x48) ? 1 : -1] ;
typedef char audio_SoundObj_voice_assert[(int)&((SoundObj *)0)-> voice == ( 0x54) ? 1 : -1] ;
typedef char audio_soundobj_voice_pan_assert[(int)&((SoundObj *)0)->voice.pan == 0x60 ? 1 : -1];
typedef char audio_soundvoice_size_assert[sizeof(SoundVoice) == 0x10 ? 1 : -1];
typedef char audio_soundobj_size_assert[sizeof(SoundObj) == 0x64 ? 1 : -1];


 
typedef struct SndHandle {
    SoundObj *obj;           
    s32 unk04;               
    s32 contactSurface;      


} SndHandle;

 









typedef struct SndCueQueue {
    s32 ring[16];            
    s32 wr;                  
    s32 rd;                  
    s32 timer;               
    s32 unk4C;               
    s32 script;              
    s32 mode;                
    s32 limit;               
    s32 pending;             
    u16 cmd;                 
    s16 cue;                 

} SndCueQueue;               

typedef struct SndCueQueues {
     
      s32 mode;           
      s32 cue;            
      s32 fadeInFrames;   
      s32 holdFrames;     
      f32 level;          
      f32 floor;          
      f32 upStep;         
      f32 downStep;
      f32 rampBase;       
      f32 rampValue;      

      f32 rampStep;       
    char pad2C[0x30 - 0x2C];
      SndCueQueue queue[3];  
    char pad15C[0x160 - 0x15C];
} SndCueQueues;

typedef char audio_SndCueQueue_pending_assert[(int)&((SndCueQueue *)0)-> pending == ( 0x5C) ? 1 : -1] ;
typedef char audio_SndCueQueue_cue_assert[(int)&((SndCueQueue *)0)-> cue == ( 0x62) ? 1 : -1] ;
typedef char audio_SndCueQueues_downStep_assert[(int)&((SndCueQueues *)0)-> downStep == ( 0x1C) ? 1 : -1] ;
typedef char audio_SndCueQueues_queue_assert[(int)&((SndCueQueues *)0)-> queue == ( 0x30) ? 1 : -1] ;
typedef char audio_sndcuequeues_size_assert[sizeof(SndCueQueues) == 0x160 ? 1 : -1];




 



typedef struct SndTimers {
      s32 seqDelay;     
      s32 timer04;
      s32 timer08;
      s32 ramp;         

      s32 timer10;
      s32 unk14;        
      s32 fade;         
} SndTimers;

typedef char audio_SndTimers_ramp_assert[(int)&((SndTimers *)0)-> ramp == ( 0xC) ? 1 : -1] ;
typedef char audio_sndtimers_size_assert[sizeof(SndTimers) == 0x1C ? 1 : -1];



 




















 






















































 


















































 






















































extern int D_00000000;
typedef struct { int w; } SC4_;  


 







typedef struct { int a, b, c, d; } Quad4;
typedef struct { int a, b, c; } Tri3i;
typedef struct { int a, b; } Pair2;
typedef struct { float x, y, z; } Vec3;

 












typedef struct { s16 f0; s16 f2; s16 *p4; s16 *p8; s32 offC; s16 n10; s16 n12; } VbElem;
typedef struct {
    u8 pad0[2]; u8 f2; u8 f3; u8 f4; u8 pad5[0xF];
    s32 f14; s32 f18; s32 f1C; s16 *p20; s16 *p24; u8 pad28[0x10];
    VbElem e[2][5]; u8 rest[64];
} VbSub;
typedef struct { u8 pad[0x18]; VbSub sub; } VbRec;
extern int gl_func_00000000();
void AudioSynth_InitNextRingBuf(int n, int j, int k) {
    VbElem *e;
    VbRec *r = &((VbRec *)&D_00000000 )[k];
    VbSub *s;
    int pad[2];
    int i, idx, q, rem;
    s = &r->sub;
    if (s->f4 >= 3 && s->f2 == 0) {
        e = &s->e[s->f3][j];
        gl_func_00000000 (e->p4, 0x340);
        idx = 0;
        for (i = 0; i < e->n10 / 2; i++) {
            s->p20[e->offC + i] = e->p4[idx];
            s->p24[e->offC + i] = e->p8[idx];
            idx += s->f4;
        }
        for (i = 0; i < e->n12 / 2; i++) {
            s->p20[i] = e->p4[idx];
            s->p24[i] = e->p8[idx];
            idx += s->f4;
        }
    }
    e = &s->e[s->f3][j];
    q = n / s->f4;
    rem = s->f14 + q - s->f1C;
    if (rem < 0) {
        e->n10 = q * 2;
        e->n12 = 0;
        e->offC = s->f14;
        s->f14 += q;
    } else {
        e->n10 = (q - rem) * 2;
        e->n12 = rem * 2;
        e->offC = s->f14;
        s->f14 = rem;
    }
    e->f0 = q;
    e->f2 = n;
}

 











typedef struct { unsigned flag:1, live:1, rest:30; char p4[2]; unsigned char b6; char p7; int w[6]; } gl_1CC98_Elem;
typedef struct {
    char p0[0x1C];
    int w1C;
    char p20[0x30 - 0x20];
    unsigned char b30;
    unsigned char b31;
    char p32[1];
    unsigned char b33;
    unsigned char b34;
    unsigned char b35;
    short h36;
    char p38[0x40 - 0x38];
    int w40;
    gl_1CC98_Elem *elem;
    int w48;
    char p4C[0x58 - 0x4C];
    float f58;
    char p5C[0x60 - 0x5C];
    unsigned char b60;
    char p61[0x82 - 0x61];
    short h82;
    short h84;
    char p86[0xA0 - 0x86];
    unsigned char bA0;
    char pA1[0xB0 - 0xA1];
    gl_1CC98_Elem e;
} gl_1CC98_Rec;
typedef struct { short active; short key; char p4[8]; } gl_260B4_Ent;
typedef struct { char p0[2]; unsigned char sel0; unsigned char sel1; char p4[0x10]; } gl_260B4_Reg;
typedef struct { char p0; unsigned char b1; unsigned char b2; unsigned char b3; char p4[0x158 - 4]; } gl_1CD64_Slot;
typedef struct {
    char p0[1];
    signed char nslots;
    char p2_[0x10 - 2];
    int w10;
    gl_1CC98_Elem *elems;
    gl_1CD64_Slot slots[23];
    char p1[0x2030 - 0x18 - 23 * 0x158];
    gl_260B4_Reg *regs;
    char p1b[0x2040 - 0x2034];
    short n2040;
    short h2042;
    short h2044;
    short h2046;
    char p1c[0x2070 - 0x2048];
    int count;
    char p2[0x2198 - 0x2074];
    char tbl2198[4];
    char p2c[0x2534 - 0x219C];
    int nents;
    char p2b[0x2540 - 0x2538];
    gl_260B4_Ent ents[(0x2CFC - 0x2540) / 0xC];
    gl_1CC98_Rec *recs;
    char p3[0x5378 - 0x2D00];
    char tbl5378[4];
} gl_1CC98_GS;
extern gl_1CC98_GS gAudioContext_345c0_1CC98;
void AudioSynth_SyncSampleStates(int arg0) {
    int i;
    gl_1CC98_Elem *s;
    gl_1CC98_Elem *d;
    for (i = 0; i < gAudioContext_345c0_1CC98.count; i++) {
        s = &gAudioContext_345c0_1CC98.recs[i].e;
        d = &gAudioContext_345c0_1CC98.elems[gAudioContext_345c0_1CC98.count * arg0 + i];
        if (s->flag) {
            *d = *s;
            s->live = 0;
        } else {
            d->flag = 0;
        }
        s->b6 = 0;
    }
}

 














typedef struct { int w0; int w1; } gl_1CD64_Gfx;
extern int gl_func_00000000();
extern void gl_ref_00031304();
extern void gl_ref_00031050();
extern gl_1CD64_Gfx *gl_ref_00032320();
gl_1CD64_Gfx *AudioSynth_Update(gl_1CD64_Gfx *gfx, int *outLen, int *src, int budget) {
    gl_1CD64_Gfx *p;
    int *cur;
    int n;
    int i;
    int total;
    int portion;
    int v;
    gl_1CC98_Elem buf[128];

    gAudioContext_345c0_1CC98.elems = buf;
    p = gfx;
    for (n = gAudioContext_345c0_1CC98.n2040; n > 0; n--) {
        gl_func_00000000 (n - 1);
        gl_ref_00031304(gAudioContext_345c0_1CC98.n2040 - n);
    }
    cur = src;
    gAudioContext_345c0_1CC98.w10 = 0;
    for (n = gAudioContext_345c0_1CC98.n2040; n > 0; n--) {
        total = gAudioContext_345c0_1CC98.n2040;
        if (n == 1) {
            portion = budget;
        } else {
            v = budget / n;
            if (v >= gAudioContext_345c0_1CC98.h2044) {
                portion = gAudioContext_345c0_1CC98.h2044;
            } else if (v <= gAudioContext_345c0_1CC98.h2046) {
                portion = gAudioContext_345c0_1CC98.h2046;
            } else {
                portion = gAudioContext_345c0_1CC98.h2042;
            }
        }
        for (i = 0; i < gAudioContext_345c0_1CC98.nslots; i++) {
            if (gAudioContext_345c0_1CC98.slots[i].b1) {
                gl_ref_00031050(portion, total - n, i);
                total = gAudioContext_345c0_1CC98.n2040;
            }
        }
        p = gl_ref_00032320(cur, portion, p, total - n);
        budget -= portion;
        cur += portion;
    }
    for (i = 0; i < gAudioContext_345c0_1CC98.nslots; i++) {
        if (gAudioContext_345c0_1CC98.slots[i].b2) {
            gAudioContext_345c0_1CC98.slots[i].b2--;
        }
        gAudioContext_345c0_1CC98.slots[i].b3 ^= 1;
    }
    *outLen = p - gfx;
    return p;
}

 














typedef struct { unsigned b0:1, b1:1, rest:30; } ElemFlags1CF68;
void AudioSynth_DisableSampleStates(int a0, int a1) {
    int v0 = a0 + 1;
    int v1 = a1 << 5;

    while (v0 < *(short *)((char *)&D_00000000 + 0x2040)) {
        char *elem = (char *)((*(unsigned int *)((char *)&D_00000000 + 0x2070) * v0) * 32
            + *(int *)((char *)&D_00000000 + 0x14) + v1);
        if (((ElemFlags1CF68 *)elem)->b1) {
            break;
        }



        *(unsigned char *)elem = *(unsigned char *)elem & 0xFF7F;

        v0++;
    }
}


                                                                                    
                                                               
                
  
                                                                
  
                                                                                           
                         
                                                                          
                                                                      
                                                                          
                                                                             
                                                                          
                      
        
                                                                       
      
  
                           
                                                                  
                                                              
                                                                
                                                                
                                                                  
                                                                       
                                                                  
                                                                   
                                                              
                                                           
                                                                    
                                                            
                                                                 
                                                              
                                                                
                                                          
                                      
 




extern int gl_ref_00031FB0();  
typedef struct { short h0, h1, h2, h3; } Spec8_1CFDC;



typedef struct { char p[0xE]; unsigned short w; short h; short n; } Ent_1CFDC;

typedef struct { Ent_1CFDC ent[5]; } Grp_1CFDC;
typedef struct { char p[0x1B]; unsigned char attr; char p2[0x50 - 0x1C]; Grp_1CFDC grp[2]; char p3[0x40]; } Rec_1CFDC;














int AudioSynth_LoadRingBuffer1AtTemp(int code, Spec8_1CFDC spec ) {
     
    Ent_1CFDC *e;
    Rec_1CFDC *rec;
    int r;
    rec = &((Rec_1CFDC *)&D_00000000 )[spec.h1];
    e = &rec->grp[rec->attr].ent[spec.h3];
    r = gl_ref_00031FB0(code, 0x3E0, e->w, e->h, spec.h1);
    if (e->n != 0) {
        r = gl_ref_00031FB0(r, (e->h + 0x3E0) & 0xFFFF, 0, e->n, spec.h1);
    }
    return r;
}

                                                                                     
                                                                 
                                                                   
                                                                                    
                                                              
  
                                                                                           
                                                                          
                                         
                                                                          
                                                                          
                                                          
                      
        
                                                                       
      
  
                                                                                  
                                                                    
                                                               
                                                                
                                                                  
                                                                                   
                                     
                                                                 
                                                                     
                                                                                    
                                                                      
                                                                   
                                                               
                                                                
                                                                
                                                                
 

extern int gl_ref_0003204C();  
int AudioSynth_SaveRingBuffer1AtTemp(int code, Spec8_1CFDC spec ) {
     
    Ent_1CFDC *e;
    Rec_1CFDC *rec;
    int r;
    rec = &((Rec_1CFDC *)&D_00000000 )[spec.h1];
    e = &rec->grp[rec->attr].ent[spec.h3];
    r = gl_ref_0003204C(code, 0x3E0, e->w, e->h, spec.h1);
    if (e->n != 0) {
        r = gl_ref_0003204C(r, (e->h + 0x3E0) & 0xFFFF, 0, e->n, spec.h1);
    }
    return r;
}

 




typedef struct { u32 w0; u32 w1; } gl_1D17C_Awords;
typedef union { gl_1D17C_Awords words; long long force_structure_alignment; } gl_1D17C_Acmd;











gl_1D17C_Acmd *AudioSynth_LeakReverb(gl_1D17C_Acmd *cmd, s32 reverbIndex) {
    { gl_1D17C_Acmd *_a = (gl_1D17C_Acmd *)cmd++; _a->words.w0 = ((u32)(((u32)(10) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( 0xC80) & ((0x01 << ( 24)) - 1)) << ( 0))) ; _a->words.w1 = ((u32)(((u32)( 0x3E0) & ((0x01 << ( 16)) - 1)) << ( 16)))  | ((u32)(((u32)( 0x1A0) & ((0x01 << ( 16)) - 1)) << ( 0))) ; } ;
    { gl_1D17C_Acmd *_a = (gl_1D17C_Acmd *)cmd++; _a->words.w0 = (((u32)(((u32)(12) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( 0x1A0 >> 4) & ((0x01 << ( 8)) - 1)) << ( 16)))  | ((u32)(((u32)( (((AudioContext *)&D_00000000)->synthesisReverbs)[reverbIndex].leakRtl) & ((0x01 << ( 16)) - 1)) << ( 0))) ); _a->words.w1 = ((u32)(((u32)( 0xE20) & ((0x01 << ( 16)) - 1)) << ( 16)))  | ((u32)(((u32)( 0xC80) & ((0x01 << ( 16)) - 1)) << ( 0))) ; } ;
    { gl_1D17C_Acmd *_a = (gl_1D17C_Acmd *)cmd++; _a->words.w0 = (((u32)(((u32)(12) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( 0x1A0 >> 4) & ((0x01 << ( 8)) - 1)) << ( 16)))  | ((u32)(((u32)( (((AudioContext *)&D_00000000)->synthesisReverbs)[reverbIndex].leakLtr) & ((0x01 << ( 16)) - 1)) << ( 0))) ); _a->words.w1 = ((u32)(((u32)( 0x3E0) & ((0x01 << ( 16)) - 1)) << ( 16)))  | ((u32)(((u32)( 0xE20) & ((0x01 << ( 16)) - 1)) << ( 0))) ; } ;
    return cmd;
}











                                                                               
                                                                 
                                                                      
                                                                                                      
                                                                       
                                                  
  
                                                                                  
                                                                        
                          
                                                                          
                                                                           
                                                                        
                                                                          
                                                        
                                                                     
                                        
                                                                   
                                                                        
      
  
                                                                                    
                                                                    
                                                                      
                                                             
                                                                      
                                                                   
                                                                    
                                                                     
                                                                 
                                                                                   
                                                                    
                                                                 
                                                                 
                                                                   
                                                                   
                                                         
                                                                
                                                                   
                                                
 
extern int gl_func_00000000();
extern int D_00000000;
extern int gl_func_00031FB0();
 







 


typedef struct { unsigned int w0, w1; } G1D200;
 






unsigned int *AudioSynth_LoadAuxBufferC(G1D200 *gfx, unsigned int a1, short a2, short a3) {
    ReverbRingBufferItem *e;  
    short w2;
    short wr;

    e = (ReverbRingBufferItem *)(((char *)&D_00000000  + a2 * 0x158)  + ((SynthesisReverb *)((char *)(((char *)&D_00000000 + a2 * 0x158)) + 0x18)) ->curFrame * 100 + a3 * 0x14 + 0x50);
    w2 = ((unsigned int)e->startPos & 7) * 2;
    wr = (w2 + e->lengthA + 0xF) & ~0xF;
    gfx = (G1D200 *)gl_ref_00031FB0(gfx, 0x3E0, ((unsigned int)e->startPos - w2 / 2) & 0xFFFF, 0x1A0, a2);
    if (e->lengthB != 0) {
        gfx = (G1D200 *)gl_ref_00031FB0(gfx, (wr + 0x3E0) & 0xFFFF, 0, 0x1A0 - wr, a2);
    }
    { G1D200 *_g = gfx++; _g->w0 = ((w2 + 0x3E0) & 0xFFFF) | 0x08000000; _g->w1 = ((a1 << 1) & 0xFFFF) | 0x0C800000; }
    { G1D200 *_g = gfx++; _g->w0 = 0x05000000 | ((*(unsigned char *)&((SynthesisReverb *)((char *)(((char *)&D_00000000 + a2 * 0x158)) + 0x18)) ->resampleFlags & 0xFF) << 16) | (*(unsigned short *)&((SynthesisReverb *)((char *)(((char *)&D_00000000 + a2 * 0x158)) + 0x18)) ->unk_0E & 0xFFFF); _g->w1 = (int)((SynthesisReverb *)((char *)(((char *)&D_00000000 + a2 * 0x158)) + 0x18)) ->unk_28 + 0x80000000; }
    { G1D200 *_g = gfx++; _g->w0 = ((w2 + 0x580) & 0xFFFF) | 0x08000000; _g->w1 = ((a1 << 1) & 0xFFFF) | 0x0E200000; }
    { G1D200 *_g = gfx++; _g->w0 = 0x05000000 | ((*(unsigned char *)&((SynthesisReverb *)((char *)(((char *)&D_00000000 + a2 * 0x158)) + 0x18)) ->resampleFlags & 0xFF) << 16) | (*(unsigned short *)&((SynthesisReverb *)((char *)(((char *)&D_00000000 + a2 * 0x158)) + 0x18)) ->unk_0E & 0xFFFF); _g->w1 = (int)((SynthesisReverb *)((char *)(((char *)&D_00000000 + a2 * 0x158)) + 0x18)) ->unk_2C + 0x80000000; }
    return (unsigned int *)gfx;

}

 









extern int gAudioContext_345c0;
typedef struct { unsigned int w0, w1; } gl_1D3E0_Gfx;

gl_1D3E0_Gfx *AudioSynth_FilterReverb(gl_1D3E0_Gfx *gfx, int a1, int a2) {
    char *rec = (char *)&gAudioContext_345c0 + a2 * 0x158;  
    if (((SynthesisReverb *)((char *)(rec) + 0x18)) ->filterLeft != 0) {
        { gl_1D3E0_Gfx *_g = gfx++; _g->w0 = ((((unsigned int)(0x07)) & ((1 << ( 8)) - 1)) << ( 24))  | ((((unsigned int)(2)) & ((1 << ( 8)) - 1)) << ( 16))  | ((((unsigned int)(a1)) & ((1 << ( 16)) - 1)) << ( 0)) ; _g->w1 = (int)((SynthesisReverb *)((char *)(rec) + 0x18)) ->filterLeft; }
        { gl_1D3E0_Gfx *_g = gfx++; _g->w0 = ((((unsigned int)(0x07)) & ((1 << ( 8)) - 1)) << ( 24))  | ((((unsigned int)(((SynthesisReverb *)((char *)(rec) + 0x18))->resampleFlags)) & ((1 << ( 8)) - 1)) << ( 16))  | ((((unsigned int)(0xC80)) & ((1 << ( 16)) - 1)) << ( 0)) ; _g->w1 = (int)((SynthesisReverb *)((char *)(rec) + 0x18)) ->filterLeftState; }
    }
    if (((SynthesisReverb *)((char *)(rec) + 0x18)) ->filterRight != 0) {
        { gl_1D3E0_Gfx *_g = gfx++; _g->w0 = ((((unsigned int)(0x07)) & ((1 << ( 8)) - 1)) << ( 24))  | ((((unsigned int)(2)) & ((1 << ( 8)) - 1)) << ( 16))  | ((((unsigned int)(a1)) & ((1 << ( 16)) - 1)) << ( 0)) ; _g->w1 = (int)((SynthesisReverb *)((char *)(rec) + 0x18)) ->filterRight; }
        { gl_1D3E0_Gfx *_g = gfx++; _g->w0 = ((((unsigned int)(0x07)) & ((1 << ( 8)) - 1)) << ( 24))  | ((((unsigned int)(((SynthesisReverb *)((char *)(rec) + 0x18))->resampleFlags)) & ((1 << ( 8)) - 1)) << ( 16))  | ((((unsigned int)(0xE20)) & ((1 << ( 16)) - 1)) << ( 0)) ; _g->w1 = (int)((SynthesisReverb *)((char *)(rec) + 0x18)) ->filterRightState; }
    }
    return gfx;
}


                                                                                   
                                                                                    
                                                                                     
                                                                                  
                                                                                            
                                      
  
                                                                                       
                                                                                  
                                                                                                    
                                                                                                
                                                                                      
                                                                                
  
                                                                                
                                                                                     
                                                                                   
                                                                                                              
                                                                                   
                                                                                  
                                                                                        
                                                                                   
                      
                                                                                     
                                                                           
                                                                                    
                                                                                   
                                                                            
                                                                                   
                                                                                   
                                                                                     
                                                                                  
                                                                                  
                                                                                      
                                                                          
 
typedef struct {
    char pad0[0x1C];
    unsigned char flag;    
    signed char k;         
    char pad1[2];
    unsigned short w20;    
    char pad2[0x158 - 0x22];
} GlyphRec1D4B0;

extern int *gl_ref_00031648();  
extern int gl_ref_00031718();   
int AudioSynth_MaybeMixRingBuffer1(int dl, int a1, int a2) {

    if (((GlyphRec1D4B0 *)&D_00000000) [(&((GlyphRec1D4B0 *)&D_00000000) [a1]) ->k].flag == 1) {
        int k = (&((GlyphRec1D4B0 *)&D_00000000) [a1]) ->k;
        dl = (int)gl_ref_00031648(dl, (short)k, (short)a2);
        ((int *)dl)[0] = ((&((GlyphRec1D4B0 *)&D_00000000) [a1]) ->w20 & 0xFFFF) | 0x0C340000;
        ((int *)dl)[1] = 0x0C8003E0;
        dl = gl_ref_00031718((int *)dl + 2, (&((GlyphRec1D4B0 *)&D_00000000) [a1]) ->k, (short)a2);
    }
    return dl;

}

void AudioSynth_Stub_800DBB94(void) {}

void AudioSynth_ClearBuffer(int *a0, int a1, int a2) { a0[0] = (a1 & 0x00FFFFFF) | 0x02000000; a0[1] = a2; }

void AudioSynth_Stub_800DBBBC(void) {}

void AudioSynth_Stub_800DBBC4(void) {}

void AudioSynth_Stub_800DBBCC(void) {}

 




                                                                        
                                                                      
void AudioSynth_Mix(int *a0, int a1, int a2, int a3, int a4) {
    a0[0] = (((a1 & 0xFF) << 16) | 0x0C000000) | (a2 & 0xFFFF);
    a0[1] = ((a3 << 15) << 1) | (a4 & 0xFFFF);
}

void AudioSynth_Stub_800DBC08(void) {}

void AudioSynth_Stub_800DBC10(void) {}

void AudioSynth_Stub_800DBC18(void) {}

 

                                                                        
                                                                      
void AudioSynth_SetBuffer(int *a0, int a1, int a2, int a3, int a4) {
    a0[0] = (((a1 & 0xFF) << 16) | 0x08000000) | (a2 & 0xFFFF);
    a0[1] = ((a3 << 15) << 1) | (a4 & 0xFFFF);
}

void AudioSynth_Stub_800DBC54(void) {}

void AudioSynth_Stub_800DBC5C(void) {}

void AudioSynth_DMemMove(int *a0, int a1, int a2, int a3)
{
 if (0) { }
  a0[0] = (a1 & 0xFFFFFF) | 0x0A000000;
  a0[1] = (a2 << 15) << 1;
  a0[1] = a0[1] | (a3 & 0xFFFF);
}


void AudioSynth_Stub_800DBC90(void) {}

void AudioSynth_Stub_800DBC98(void) {}

void AudioSynth_Stub_800DBCA0(void) {}

void AudioSynth_Stub_800DBCA8(void) {}

void AudioSynth_InterL(int *a0, int a1, int a2, int a3) {
    a0[0] = (a3 & 0xFFFF) | 0x11000000;
    a0[1] = ((a1 << 15) << 1) | (a2 & 0xFFFF);
}


 

                                                                        
                                                                      
void AudioSynth_EnvSetup1(int *a0, int a1, int a2, int a3, int a4) {
    a0[0] = (((a1 & 0xFF) << 16) | 0x12000000) | (a2 & 0xFFFF);
    a0[1] = ((a3 << 15) << 1) | (a4 & 0xFFFF);
}

void AudioSynth_Stub_800DBD08(void) {}

void AudioSynth_LoadBuffer(int *a0, int a1, int a2, int a3) { a0[0] = ((((a2 >> 4) & 0xFF) << 16) | 0x14000000) | (a1 & 0xFFFF); a0[1] = a3; }

void AudioSynth_SaveBuffer(int *a0, int a1, int a2, int a3) { a0[0] = ((((a2 >> 4) & 0xFF) << 16) | 0x15000000) | (a1 & 0xFFFF); a0[1] = a3; }

void AudioSynth_EnvSetup2(int *a0, int a1, int a2) {
    a0[0] = 0x16000000;
    a0[1] = ((a1 << 15) << 1) | (a2 & 0xFFFF);
}


void AudioSynth_Stub_800DBD7C(void) {}

void AudioSynth_Stub_800DBD84(void) {}

void AudioSynth_Stub_800DBD8C(void) {}

void AudioSynth_S8Dec(int *a0, int a1, int a2) {
    a0[0] = ((a1 & 0xFF) << 16) | 0x17000000;
    a0[1] = a2;
}

                                                                        
                                                                              
                                                                                  
void AudioSynth_HiLoGain(int *a0, int a1, int a2, int a3, int arg4)
{
  a0[0] = (((a1 & 0xFF) << 16) | 0x0E000000) | (arg4 & 0xFFFF);
  a0[1] = ((a2 << 15) << 1) | (a3 & 0xFFFF);
}

                                                                   
                                                                       
                                                                          
                                                                          
                                                                         
void AudioSynth_UnkCmd19(int *a0, int a1, int a2, int a3, int arg4)
{
  long long new_var;
  new_var = 16;
  a0[0] = (((arg4 & 0xFF) << new_var) | 0x19000000) | (a3 & 0xFFFF);
  ;
  a0[1] = ((a1 & 0xFFFF) << 16) | (a2 & 0xFFFF);
}


void AudioSynth_Stub_800DBE18(void) {}

void AudioSynth_Stub_800DBE20(void) {}

void AudioSynth_Stub_800DBE28(void) {}

void AudioSynth_Stub_800DBE30(void) {}

void AudioSynth_UnkCmd3(int *a0, int a1, int a2, int a3) {
    a0[0] = (a3 & 0xFFFF) | 0x03000000;
    a0[1] = ((a1 << 15) << 1) | (a2 & 0xFFFF);
}


void AudioSynth_Stub_800DBE5C(void) {}

void AudioSynth_Stub_800DBE64(void) {}

void AudioSynth_Stub_800DBE6C(void) {}

void AudioSynth_LoadFilterBuffer(int *a0, int a1, int a2, int a3) {
    a0[0] = (((a1 & 0xFF) << 16) | 0x07000000) | (a2 & 0xFFFF);
    a0[1] = a3;
}

void AudioSynth_LoadFilterSize(int *a0, int a1, int a2) {
    a0[0] = (a1 & 0xFFFF) | 0x07020000;
    a0[1] = a2;
}

                                                                                
                                                                 
                                                               
                                                                                                   
                                                               
  
                                                                                   
                                                                          
                                         
                                                                          
                                                                      
                                                           
                      
        
                                                                        
      
  
                                                                                    
                                                                  
                                                                
                                                                    
                                                                     
                                                                  
                 
                                                                     
                                                              
                             
                                                                              
                                                                           
                                                                            
                               
                                                                           
                                                                  
                                                                    
                              
                                                                           
                                                                    
                                                                             
                                                                          
                                                                        
                                                                            
                                                                       
                                                                             
                                                                                 
typedef struct { short h0, h1, h2, h3, h4, h5; } Spec12_1D870;
 




extern int gl_ref_00031FB0();








int AudioSynth_LoadRingBuffer1(int code, Spec12_1D870 spec) {

    Ent_1CFDC *e;
    Rec_1CFDC *rec;
    int r;
    rec = &((Rec_1CFDC *)&D_00000000 )[spec.h3];
    e = &rec->grp[rec->attr].ent[spec.h5];
    r = gl_ref_00031FB0(code, 0xC80, e->w, e->h, spec.h3);
    if (e->n != 0) {
        r = gl_ref_00031FB0(r, (e->h + 0xC80) & 0xFFFF, 0, e->n, spec.h3);
    }
    return r;



}

 


















extern int D_00000000;
typedef struct { unsigned int w0, w1; } G1D944;
int AudioSynth_LoadRingBufferPart(gfx, a1, a2, a3, idx)
G1D944 *gfx;
unsigned short a1;
unsigned short a2;
int a3;
int idx;
{

    char *rec;
    { G1D944 *_g = gfx++; _g->w0 = ((((a3 >> 4) & 0xFF) << 16) | 0x14000000)  | (a1 & 0xFFFF); rec = (char *)&D_00000000 + idx * 0x158; _g->w1 = (int)((SynthesisReverb *)((char *)(rec) + 0x18)) ->leftRingBuf + (a2 << 1) + 0x80000000; }
    {
        G1D944 *_g = gfx++;
        a1++; a1--;
        _g->w0 = ((((a3 >> 4) & 0xFF) << 16) | 0x14000000)  | ((a1 + 0x1A0) & 0xFFFF);
        _g->w1 = (int)((SynthesisReverb *)((char *)(rec) + 0x18)) ->rightRingBuf + (a2 << 1) + 0x80000000;
    }
    return (int)gfx;

}

 






typedef struct { unsigned int w0, w1; } G1D9E0;
int AudioSynth_SaveRingBufferPart(gfx, a1, a2, a3, idx)
G1D9E0 *gfx;
unsigned short a1;
unsigned short a2;
int a3;
int idx;
{

    char *rec;
    { G1D9E0 *_g = gfx++; _g->w0 = ((((a3 >> 4) & 0xFF) << 16) | 0x15000000)  | (a1 & 0xFFFF); rec = (char *)&D_00000000 + idx * 0x158; _g->w1 = (int)((SynthesisReverb *)((char *)(rec) + 0x18)) ->leftRingBuf + (a2 << 1) + 0x80000000; }
    {
        G1D9E0 *_g = gfx++;
        a1++; a1--;
        _g->w0 = ((((a3 >> 4) & 0xFF) << 16) | 0x15000000)  | ((a1 + 0x1A0) & 0xFFFF);
        _g->w1 = (int)((SynthesisReverb *)((char *)(rec) + 0x18)) ->rightRingBuf + (a2 << 1) + 0x80000000;
    }
    return (int)gfx;

}

                                                                                 
                                                                  
                                                                    
                       
  
                                                                  
                                                                       
                           
             
                       
                                                                      
               
                                                                      
        
                                                                    
                                                             
                                                              
                                                                       
          
      
  
                                                                
                                                                     
                                                                      
                                                                       
                                                                    
                                                                      
                                                              
                                                
                                                                 
                                                                 
                                                               
                                                           
                                                                    
                                                       
                                                                
                                                                 
                                                                  
                                                          
                                                                    
                                                                     
 
extern void *gl_ref_00031EDC();  
extern void *gl_ref_0003186C();
extern void *gl_ref_000317E8();
typedef struct { unsigned int w0, w1; } Gfx1DA7C;

Gfx1DA7C *AudioSynth_LoadReverbSamples(Gfx1DA7C *dl, int a1, short a2, short a3) {
    int pad[1];
    char *rec = (char *)&D_00000000  + a2 * 0x158;
    if (((SynthesisReverb *)((char *)(rec) + 0x18)) ->downsampleRate == 1) {
        dl = gl_ref_00031EDC(dl, a1, a2, a3);
    } else {
        dl = gl_ref_0003186C(dl, a1, a2, a3);
    }
    { Gfx1DA7C *_g = (Gfx1DA7C *)(dl++); _g->w0 = ( (*(u16 *)&((SynthesisReverb *)((char *)(rec) + 0x18))->volume & 0xFFFF) | 0x0C340000); _g->w1 = ( 0x0C800940); } ;
    { Gfx1DA7C *_g = (Gfx1DA7C *)(dl++); _g->w0 = ( ((((SynthesisReverb *)((char *)(rec) + 0x18))->decayRatio + 0x8000) & 0xFFFF) | 0x0C340000); _g->w1 = ( 0x0C800C80); } ;
    if (((SynthesisReverb *)((char *)(rec) + 0x18)) ->leakRtl != 0 || ((SynthesisReverb *)((char *)(rec) + 0x18)) ->leakLtr != 0) {
        dl = gl_ref_000317E8(dl, a2);
    }
    return dl;
}

                                                                                 
                                                                  
                                                                                    
                                    
  
                                                          
                                                                    
                            
                                                                
                          
                                                                   
                                           
                                                                     
            
        
          
      
  
                                                                                   
                                                               
                                                                     
                                                                     
                                                                    
                                                            
                                                                                     
                                              
                                                                     
                                                                        
                                                   
                                                                  
                                                                     
                                                                    
                                                     
                                                                  
                                                                   
                                                                 
                                                            
                                                                 
                                  
                                                              
                                                                      
                                                                      
                                                                    
                                                                        
                                                                
                                                                    
                                                                     
                                                                   
                                                                     
                                                                     
                                                                
                                                                      
                                                                   
                                                                     
                                                                      
                                                               
                                                           
                                               
 







typedef struct { u32 w0; u32 w1; } gl_1DB88_Awords;
typedef union { gl_1DB88_Awords words; long long force_structure_alignment; } gl_1DB88_Acmd;

extern gl_1DB88_Acmd *gl_1db88_saveRingBufferPart(gl_1DB88_Acmd *cmd, u16 dmem, u16 startPos, s32 size, s16 reverbIndex);
extern void gl_1db88_saveBuffer(gl_1DB88_Acmd *cmd, s32 dmemSrc, s32 size, u32 addrDest);
gl_1DB88_Acmd *AudioSynth_SaveReverbSamples(gl_1DB88_Acmd *cmd, s16 reverbIndex, s16 updateIndex) {
    ReverbRingBufferItem *bufItem = &(((AudioContext *)&D_00000000)->synthesisReverbs) [reverbIndex].items[(((AudioContext *)&D_00000000)->synthesisReverbs) [reverbIndex].curFrame][updateIndex];

    switch ((((AudioContext *)&D_00000000)->synthesisReverbs) [reverbIndex].downsampleRate) {
    case 1:
        cmd = gl_1db88_saveRingBufferPart(cmd, 0xC80, bufItem->startPos, bufItem->lengthA, reverbIndex);
        if (bufItem->lengthB != 0) {
            cmd = gl_1db88_saveRingBufferPart(cmd, 0xC80 + bufItem->lengthA, 0, bufItem->lengthB, reverbIndex);
        }
        break;
    default:
        gl_1db88_saveBuffer(cmd++, 0xC80, 0x340, (u32)((char *)(((AudioContext *)&D_00000000)->synthesisReverbs) [reverbIndex].items[(((AudioContext *)&D_00000000)->synthesisReverbs) [reverbIndex].curFrame][updateIndex].toDownsampleLeft - 0x80000000));
        break;
    }
    (((AudioContext *)&D_00000000)->synthesisReverbs) [reverbIndex].resampleFlags = 0;
    return cmd;
}


                                                                                 
                                                                  
                                                                   
                                                                                       
  
                                                      
                                                                       
                                                                  
                                                                 
                            
                                                                     
                                                                        
               
                                                                  
                             
                                                                      
                                                                    
                
                           
          
        
                                                                    
                                                                    
      
  
                                                                     
                                                                 
                                                                      
                                                                   
                                                                      
                                                                      
                                                                   
                                                                   
                                                                                       
                                                                      
                                                                              
                                                                       
                                                                      
                                                                    
                                                                     
                                                                      
                                                                
                                                            
                                                                                                                               
                                                                                                    
                                                                                                    
                                                                                            
                                                                                            
                                                                                            
                                                                                                
                                                                                              
                                                                                            
                                                                                         
                                                                                      
                                                                                        
                                                                                      
                                                                                      
                                                                                     
                                                                                   
                                                   
                                                             
                                                                                
                                                                               
                                                                            
                                                                                
                                                                             
                                                                        
                                                 
 


typedef struct { u32 w0; u32 w1; } gl_dcb4_Awords;
typedef union { gl_dcb4_Awords words; long long force_structure_alignment; } gl_dcb4_Acmd;










typedef struct {
    volatile u32 enabled : 1; u32 needsInit : 1; u32 finished : 1; u32 unused : 1;
    u32 stereoStrongRight : 1; u32 stereoStrongLeft : 1; u32 stereoHeadsetEffects : 1; u32 usesHeadsetPanEffects : 1;
    u32 reverbIndex : 3; u32 bookOffset : 2; u32 isSyntheticWave : 1; u32 hasTwoParts : 1; u32 useHaasEffect : 1;
    char pad[0x1C];
} gl_dcb4_SampleState;
typedef struct { char pad[0x20]; } gl_dcb4_SynthState;
typedef struct { char pad0[0x10]; gl_dcb4_SynthState synthesisState; char pad30[0xD0 - 0x30]; } gl_dcb4_Note;
typedef struct {
    char unk_0; s8 numSynthesisReverbs; char pad2[0x12]; gl_dcb4_SampleState *sampleStates;
    SynthesisReverb synthesisReverbs[4]; char pad578[0x2070 - 0x578]; s32 numNotes; char pad2074[0x2CFC - 0x2074]; gl_dcb4_Note *notes;
} gl_dcb4_Ctx;
extern gl_dcb4_Ctx gAudioContext_dcb4;

extern gl_dcb4_Acmd *gl_1dcb4_f1(gl_dcb4_Acmd *, s32, s16, s16);
extern gl_dcb4_Acmd *gl_1dcb4_f2(s32, gl_dcb4_SampleState *, gl_dcb4_SynthState *, s16 *, s32, gl_dcb4_Acmd *, s32);
extern gl_dcb4_Acmd *gl_1dcb4_f3(gl_dcb4_Acmd *, s32, s32);
extern gl_dcb4_Acmd *gl_1dcb4_f4(gl_dcb4_Acmd *, s16, s16);
extern gl_dcb4_Acmd *gl_1dcb4_f5(gl_dcb4_Acmd *, s32, s32);






gl_dcb4_Acmd *AudioSynth_DoOneAudioUpdate(s16 *aiBuf, s32 aiBufLen, gl_dcb4_Acmd *cmd, s32 updateIndex) {
    gl_dcb4_SampleState *sampleState;
    u8 noteIndices[56];
    s16 count;
    s16 reverbIndex;
    s32 i;
    s32 useReverb;

    count = 0;
    if (gAudioContext_dcb4 .numSynthesisReverbs == 0) {
        for (i = 0; i < gAudioContext_dcb4 .numNotes; i++) {
            if (gAudioContext_dcb4 .sampleStates[gAudioContext_dcb4 .numNotes * updateIndex + i].enabled) {
                noteIndices[count++] = i;
            }
        }
    } else {
        for (reverbIndex = 0; reverbIndex < gAudioContext_dcb4 .numSynthesisReverbs; reverbIndex++) {
            for (i = 0; i < gAudioContext_dcb4 .numNotes; i++) {
                sampleState = &gAudioContext_dcb4 .sampleStates[gAudioContext_dcb4 .numNotes * updateIndex + i];
                if (sampleState->enabled && (s32)sampleState->reverbIndex == reverbIndex) {
                    noteIndices[count++] = i;
                }
            }
        }

        for (i = 0; i < gAudioContext_dcb4 .numNotes; i++) {
            sampleState = &gAudioContext_dcb4 .sampleStates[gAudioContext_dcb4 .numNotes * updateIndex + i];
            if (sampleState->enabled && (s32)sampleState->reverbIndex >= gAudioContext_dcb4 .numSynthesisReverbs) {
                noteIndices[count++] = i;
            }
        }
    }

    { gl_dcb4_Acmd *_a = (gl_dcb4_Acmd *)cmd++; _a->words.w0 = ((u32)(((u32)(2) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( 0x940) & ((0x01 << ( 24)) - 1)) << ( 0))) ; _a->words.w1 = (u32)( 0x340); } ;

    i = 0;
    for (reverbIndex = 0; reverbIndex < gAudioContext_dcb4 .numSynthesisReverbs; reverbIndex++) {
        useReverb = gAudioContext_dcb4 .synthesisReverbs[reverbIndex].useReverb;
        if (useReverb) {
            cmd = gl_1dcb4_f1 (cmd, aiBufLen, reverbIndex, updateIndex);
        }

        for (; i < count; i++) {
            if (reverbIndex == (s32)gAudioContext_dcb4 .sampleStates[updateIndex * gAudioContext_dcb4 .numNotes + noteIndices[i]].reverbIndex) {
                cmd = gl_1dcb4_f2 (noteIndices[i], &gAudioContext_dcb4 .sampleStates[updateIndex * gAudioContext_dcb4 .numNotes + noteIndices[i]],
                                             &gAudioContext_dcb4 .notes[noteIndices[i]].synthesisState, aiBuf, aiBufLen, cmd,
                                             updateIndex);
                continue;
            } else {
                break;
            }
        }

        if (useReverb) {
            if (gAudioContext_dcb4 .synthesisReverbs[reverbIndex].filterLeft != ((void*)0)  || gAudioContext_dcb4 .synthesisReverbs[reverbIndex].filterRight != ((void*)0) ) {
                cmd = gl_1dcb4_f3 (cmd, aiBufLen * sizeof(s16) , reverbIndex);
            }
            cmd = gl_1dcb4_f4 (cmd, reverbIndex, updateIndex);
            if (gAudioContext_dcb4 .synthesisReverbs[reverbIndex].unk_05 != -1) {
                cmd = gl_1dcb4_f5 (cmd, reverbIndex, updateIndex);
            }
        }
    }

    for (; i < count; i++) {
        cmd = gl_1dcb4_f2 (noteIndices[i], &gAudioContext_dcb4 .sampleStates[updateIndex * gAudioContext_dcb4 .numNotes + noteIndices[i]],
                                     &gAudioContext_dcb4 .notes[noteIndices[i]].synthesisState, aiBuf, aiBufLen, cmd, updateIndex);
    }

    { gl_dcb4_Acmd *_a = (gl_dcb4_Acmd *)cmd++; _a->words.w0 = (((u32)(((u32)(13) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)(( 2 * aiBufLen) >> 4) & ((0x01 << ( 8)) - 1)) << ( 16)))  | ((u32)(((u32)( 0x3C0) & ((0x01 << ( 16)) - 1)) << ( 0))) ); _a->words.w1 = ((u32)(((u32)( 0x940) & ((0x01 << ( 16)) - 1)) << ( 16)))  | ((u32)(((u32)( 0xAE0) & ((0x01 << ( 16)) - 1)) << ( 0))) ; } ;
    { gl_dcb4_Acmd *_a = (gl_dcb4_Acmd *)cmd++; _a->words.w0 = (((u32)(((u32)(21) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)(( 2 * (aiBufLen * (s32)sizeof(s16))) >> 4) & ((0x01 << ( 8)) - 1)) << ( 16)))  | ((u32)(((u32)( 0x3C0) & ((0x01 << ( 16)) - 1)) << ( 0))) ); _a->words.w1 = (u32)(((char *)( aiBuf)-0x80000000)) ; } ;

    return cmd;
}



























 












typedef struct { u32 w0; u32 w1; } gl_e134_Awords;
typedef union { gl_e134_Awords words; long long force_structure_alignment; } gl_e134_Acmd;































 
typedef struct { s16 adpcmdecState[0x20]; s16 mixEnvelopeState[0x40]; s16 combFilterState[1]; } gl_e134_SynthBufs;
typedef struct {
    u8 restart; u8 sampleDmaIndex; u8 prevHaasEffectLeftDelaySize; u8 prevHaasEffectRightDelaySize; u8 reverbVol; u8 numParts;
    u16 samplePosFrac; s32 samplePosInt; gl_e134_SynthBufs *synthesisBuffers; s16 curVolLeft; s16 curVolRight;
    char pad14[6]; u8 combFilterNeedsInit;
} gl_e134_SynthState;
extern AudioContext gAudioContext_e134;

extern s16 gl_e134_D_8012FBA8[];

extern gl_e134_Acmd *gl_e134_LoadWaveSamples(gl_e134_Acmd *, NoteSampleState *, gl_e134_SynthState *, s32);
extern void *gl_e134_DmaSampleData(u32, u32, s32, u8 *, s32);
extern void gl_e134_ClearBuffer(gl_e134_Acmd *, s32, s32);
extern void gl_e134_func_800DB2C0(s32, s32);
extern void gl_e134_SetBuffer(gl_e134_Acmd *, s32, s32, s32, u32);
extern void gl_e134_S8Dec(gl_e134_Acmd *, s32, s16 *);
extern void gl_e134_InterL(gl_e134_Acmd *, s32, s32, s32);
extern gl_e134_Acmd *gl_e134_FinalResample(gl_e134_Acmd *, gl_e134_SynthState *, s32, u16, u16, s32);
extern void gl_e134_UnkCmd19(gl_e134_Acmd *, s32, s32, s32, s32);
extern void gl_e134_UnkCmd3(gl_e134_Acmd *, s32, s32, s32);
extern void gl_e134_HiLoGain(gl_e134_Acmd *, s32, s32, s32, s32);
extern void gl_e134_LoadFilterSize(gl_e134_Acmd *, s32, void *);
extern void gl_e134_LoadFilterBuffer(gl_e134_Acmd *, s32, s32, void *);
extern void gl_e134_DMemMove(gl_e134_Acmd *, s32, s32, u32);
extern void gl_e134_LoadBuffer(gl_e134_Acmd *, s32, s32, void *);
extern void gl_e134_SaveBuffer(gl_e134_Acmd *, s32, s32, void *);
extern void gl_e134_Mix(gl_e134_Acmd *, s32, s32, s32, s32);
extern gl_e134_Acmd *gl_e134_ProcessEnvelope(gl_e134_Acmd *, NoteSampleState *, gl_e134_SynthState *, s32, u16, s32, s32);
extern gl_e134_Acmd *gl_e134_ApplyHaasEffect(gl_e134_Acmd *, NoteSampleState *, gl_e134_SynthState *, s32, s32, s32);






















gl_e134_Acmd *AudioSynth_ProcessNote(s32 noteIndex, NoteSampleState *sampleState, gl_e134_SynthState  *synthState, s16 *aiBuf,
                       s32 aiBufLen, gl_e134_Acmd *cmd, s32 updateIndex) {
    s32 pad1[3];
    Sample *sample;
    AdpcmLoop *loopInfo;
    s32 nSamplesUntilLoopEnd;
    s32 nSamplesInThisIteration;
    s32 noteFinished;
    s32 restart;
    s32 flags;
    u16 resamplingRateFixedPoint;
    s32 nSamplesInFirstFrame;
    s32 temp_t1;
    s32 gain;
    s32 frameIndex;
    s32 skipBytes;
    s32 temp_v1_6;
    s16 *combFilterState;
    s32 nSamplesToDecode;
    u32 sampleAddr;
    u32 samplesLenFixedPoint;
    s32 samplesLenAdjusted;
    s32 nSamplesProcessed;
    s32 loopEndPos;
    s32 nSamplesToProcess;
    s32 phi_s4;
    s32 nFirstFrameSamplesToIgnore;
    s32 pad2a[3];
    s32 nTrailingSamplesToIgnore;
    s32 pad2b[3];
    s32 frameSize;
    s32 nFramesToDecode;
    s32 skipInitialSamples;
    s32 sampleDataStart;
    u8 *sampleData;
    s32 nParts;
    s32 curPart;
    s32 sampleDataStartPad;
    s32 haasEffectDelaySide;
    s32 resampledTempLen;
    u16 sampleDmemBeforeResampling;
    s32 sampleDataOffset;
    s32 combFilterDmem;
    s32 s5;
    Note *note;
    u32 numSamplesToLoad;
    u16 combFilterSize;
    u16 combFilterGain;
    s16 *filter;
    s32 bookOffset;
    s32 finished;
    s32 aligned;
    s16 addr;
    u16 unused;

    bookOffset = sampleState->bookOffset;
    finished = sampleState->finished;
    note = &gAudioContext_e134 .notes[noteIndex];
    flags = 0 ;

    if ((s32)sampleState->needsInit == 1) {
        flags = 1 ;
        synthState->restart = 0;
        synthState->samplePosInt = 0;
        synthState->samplePosFrac = 0;
        synthState->curVolLeft = 0;
        synthState->curVolRight = 0;
        synthState->prevHaasEffectLeftDelaySize = 0;
        synthState->prevHaasEffectRightDelaySize = 0;
        synthState->reverbVol = sampleState->reverbVol;
        synthState->numParts = 0;
        synthState->combFilterNeedsInit = 1;
        note->sampleState.finished = 0;
        finished = 0;
    }

    resamplingRateFixedPoint = sampleState->resamplingRateFixedPoint;
    nParts = sampleState->hasTwoParts + 1;
    samplesLenFixedPoint = (resamplingRateFixedPoint * aiBufLen * 2) + synthState->samplePosFrac;
    numSamplesToLoad = samplesLenFixedPoint >> 16;
    synthState->samplePosFrac = samplesLenFixedPoint & 0xFFFF;

    if (synthState->numParts == 1 && nParts == 2) {
    } else if (synthState->numParts == 2 && nParts == 1) {
    } else {
    }

    synthState->numParts = nParts;

    if (sampleState->isSyntheticWave) {
        cmd = gl_e134_LoadWaveSamples (cmd, sampleState, synthState, numSamplesToLoad);
        sampleDmemBeforeResampling = 0x580  + (synthState->samplePosInt * (s32)sizeof(s16) );
        synthState->samplePosInt += numSamplesToLoad;
    } else {
        sample = sampleState->tunedSample->sample;
        loopInfo = sample->loop;
        loopEndPos = loopInfo->end;
        sampleAddr = (u32)sample->sampleAddr;
        resampledTempLen = 0;

        for (curPart = 0; curPart < nParts; curPart++) {
            nSamplesProcessed = 0;
            s5 = 0;

            if (nParts == 1) {
                samplesLenAdjusted = numSamplesToLoad;
            } else if (numSamplesToLoad & 1) {
                samplesLenAdjusted = (numSamplesToLoad & ~1) + (curPart * 2);
            } else {
                samplesLenAdjusted = numSamplesToLoad;
            }

            if (sample->codec == 0  || sample->codec == 3 ) {
                if (gAudioContext_e134 .curLoadedBook != sample->book->book) {
                    u32 nEntries;

                    switch (bookOffset) {
                        case 1:
                            gAudioContext_e134 .curLoadedBook = &gl_e134_D_8012FBA8 [1];
                            break;
                        case 2:
                        case 3:
                        default:
                            gAudioContext_e134 .curLoadedBook = sample->book->book;
                            break;
                    }
                    if (1) {}
                    if (1) {}
                    if (1) {}
                    nEntries = 16  * sample->book->order * sample->book->numPredictors;
                    { gl_e134_Acmd *_a = (gl_e134_Acmd *)cmd++; _a->words.w0 = ((u32)(((u32)(11) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( nEntries) & ((0x01 << ( 24)) - 1)) << ( 0))) ; _a->words.w1 = (u32)(((char *)( gAudioContext_e134.curLoadedBook)-0x80000000)) ; } ;
                }
            }

            while (nSamplesProcessed != samplesLenAdjusted) {
                noteFinished = 0;
                restart = 0;
                phi_s4 = 0;

                nFirstFrameSamplesToIgnore = synthState->samplePosInt & 0xF;
                nSamplesUntilLoopEnd = loopEndPos - synthState->samplePosInt;
                nSamplesToProcess = samplesLenAdjusted - nSamplesProcessed;

                if (nFirstFrameSamplesToIgnore == 0 && !synthState->restart) {
                    nFirstFrameSamplesToIgnore = 16 ;
                }
                nSamplesInFirstFrame = 16  - nFirstFrameSamplesToIgnore;

                if (nSamplesToProcess < nSamplesUntilLoopEnd) {
                    nFramesToDecode =
                        (s32)(nSamplesToProcess - nSamplesInFirstFrame + 16  - 1) / 16 ;
                    nSamplesToDecode = nFramesToDecode * 16 ;
                    nTrailingSamplesToIgnore = nSamplesInFirstFrame + nSamplesToDecode - nSamplesToProcess;
                } else {
                    nSamplesToDecode = nSamplesUntilLoopEnd - nSamplesInFirstFrame;
                    nTrailingSamplesToIgnore = 0;
                    if (nSamplesToDecode <= 0) {
                        nSamplesToDecode = 0;
                        nSamplesInFirstFrame = nSamplesUntilLoopEnd;
                    }
                    nFramesToDecode = (nSamplesToDecode + 16  - 1) / 16 ;
                    if (loopInfo->count != 0) {
                        restart = 1;
                    } else {
                        noteFinished = 1;
                    }
                }

                switch (sample->codec) {
                    case 0 :
                        frameSize = 9;
                        skipInitialSamples = 16 ;
                        sampleDataStart = 0;
                        break;

                    case 3 :
                        frameSize = 5;
                        skipInitialSamples = 16 ;
                        sampleDataStart = 0;
                        break;

                    case 1 :
                        frameSize = 16;
                        skipInitialSamples = 16 ;
                        sampleDataStart = 0;
                        break;

                    case 2 :
                        goto skip;
                }

                if (nFramesToDecode != 0) {
                    frameIndex = (synthState->samplePosInt + skipInitialSamples - nFirstFrameSamplesToIgnore) /
                                 16 ;
                    sampleDataOffset = frameIndex * frameSize;
                    if (sample->medium == 0 ) {
                        sampleData = (u8 *)(sampleDataStart + sampleDataOffset + sampleAddr);
                    } else {
                        sampleData = gl_e134_DmaSampleData (sampleDataStart + sampleDataOffset + sampleAddr,
                                                             ((((nFramesToDecode * frameSize) + 16) + 0xF) & ~0xF) ,
                                                             flags, &synthState->sampleDmaIndex, sample->medium);
                    }

                    sampleDataStartPad = (u32)sampleData & 0xF;
                    aligned = ((((nFramesToDecode * frameSize) + 16) + 0xF) & ~0xF) ;
                    addr = 0x940  - aligned;
                    { gl_e134_Acmd *_a = (gl_e134_Acmd *)cmd++; _a->words.w0 = (((u32)(((u32)(20) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)(( aligned) >> 4) & ((0x01 << ( 8)) - 1)) << ( 16)))  | ((u32)(((u32)( addr) & ((0x01 << ( 16)) - 1)) << ( 0))) ); _a->words.w1 = (u32)(((char *)( sampleData - sampleDataStartPad)-0x80000000)) ; } ;
                } else {
                    nSamplesToDecode = 0;
                    sampleDataStartPad = 0;
                }

                if (synthState->restart) {
                    { gl_e134_Acmd *_a = (gl_e134_Acmd *)cmd++; _a->words.w0 = ((u32)(((u32)(15) & ((0x01 << ( 8)) - 1)) << ( 24))) ; _a->words.w1 = (u32)(((char *)( sample->loop->predictorState)-0x80000000)) ; } ;
                    flags = 2 ;
                    synthState->restart = 0;
                }

                nSamplesInThisIteration = nSamplesToDecode + nSamplesInFirstFrame - nTrailingSamplesToIgnore;
                if (nSamplesProcessed == 0) {
                    if (1) {}
                    skipBytes = nFirstFrameSamplesToIgnore * sizeof(s16) ;
                } else {
                    phi_s4 = (((s5 + 8 * sizeof(s16)) + 0xF) & ~0xF) ;
                }

                switch (sample->codec) {
                    case 0 :
                        aligned = ((((nFramesToDecode * frameSize) + 16) + 0xF) & ~0xF) ;
                        addr = 0x940  - aligned;
                        { gl_e134_Acmd *_a = (gl_e134_Acmd *)cmd++; _a->words.w0 = (((u32)(((u32)(8) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( 0) & ((0x01 << ( 8)) - 1)) << ( 16)))  | ((u32)(((u32)( addr + sampleDataStartPad) & ((0x01 << ( 16)) - 1)) << ( 0))) ); _a->words.w1 = ((u32)(((u32)( 0x580 + phi_s4) & ((0x01 << ( 16)) - 1)) << ( 16)))  | ((u32)(((u32)(                                    nSamplesToDecode * sizeof(s16)) & ((0x01 << ( 16)) - 1)) << ( 0))) ; } ;

                        { gl_e134_Acmd *_a = (gl_e134_Acmd *)cmd++; _a->words.w0 = ((u32)(((u32)(1) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( flags) & ((0x01 << ( 8)) - 1)) << ( 16))) ; _a->words.w1 = (u32)(((char *)( synthState->synthesisBuffers->adpcmdecState)-0x80000000)) ; } ;
                        break;

                    case 3 :
                        aligned = ((((nFramesToDecode * frameSize) + 16) + 0xF) & ~0xF) ;
                        addr = 0x940  - aligned;
                        { gl_e134_Acmd *_a = (gl_e134_Acmd *)cmd++; _a->words.w0 = (((u32)(((u32)(8) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( 0) & ((0x01 << ( 8)) - 1)) << ( 16)))  | ((u32)(((u32)( addr + sampleDataStartPad) & ((0x01 << ( 16)) - 1)) << ( 0))) ); _a->words.w1 = ((u32)(((u32)( 0x580 + phi_s4) & ((0x01 << ( 16)) - 1)) << ( 16)))  | ((u32)(((u32)(                                    nSamplesToDecode * sizeof(s16)) & ((0x01 << ( 16)) - 1)) << ( 0))) ; } ;

                        { gl_e134_Acmd *_a = (gl_e134_Acmd *)cmd++; _a->words.w0 = ((u32)(((u32)(1) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( flags | 4) & ((0x01 << ( 8)) - 1)) << ( 16))) ; _a->words.w1 = (u32)(((char *)( synthState->synthesisBuffers->adpcmdecState)-0x80000000)) ; } ;
                        break;

                    case 1 :
                        aligned = ((((nFramesToDecode * frameSize) + 16) + 0xF) & ~0xF) ;
                        addr = 0x940  - aligned;
                        gl_e134_SetBuffer (cmd++, 0, addr + sampleDataStartPad, 0x580  + phi_s4,
                                             nSamplesToDecode * sizeof(s16) );
                        gl_e134_S8Dec (cmd++, flags, (s16 *)(u32)(((char *)(synthState->synthesisBuffers->adpcmdecState)-0x80000000)) );
                        break;
                }

                if (nSamplesProcessed != 0) {
                    { gl_e134_Acmd *_a = (gl_e134_Acmd *)cmd++; _a->words.w0 = ((u32)(((u32)(10) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( 0x580 + phi_s4 + (nFirstFrameSamplesToIgnore * sizeof(s16))) & ((0x01 << ( 24)) - 1)) << ( 0))) ; _a->words.w1 = ((u32)(((u32)(                               0x580 + s5) & ((0x01 << ( 16)) - 1)) << ( 16)))  | ((u32)(((u32)( nSamplesInThisIteration * sizeof(s16)) & ((0x01 << ( 16)) - 1)) << ( 0))) ; } ;

                }

                nSamplesProcessed += nSamplesInThisIteration;

                switch (flags) {
                    case 1 :
                        skipBytes = 16  * sizeof(s16) ;
                        s5 = (nSamplesToDecode + 16 ) * sizeof(s16) ;
                        break;

                    case 2 :
                        s5 = nSamplesInThisIteration * sizeof(s16)  + s5;
                        break;

                    default:
                        if (s5 != 0) {
                            s5 = nSamplesInThisIteration * sizeof(s16)  + s5;
                        } else {
                            s5 = (nFirstFrameSamplesToIgnore + nSamplesInThisIteration) * sizeof(s16) ;
                        }
                        break;
                }

                flags = 0 ;

            skip:
                if (noteFinished) {
                    gl_e134_ClearBuffer (cmd++, 0x580  + s5,
                                           (samplesLenAdjusted - nSamplesProcessed) * sizeof(s16) );
                    finished = 1;
                    note->sampleState.finished = 1;
                    gl_e134_func_800DB2C0 (updateIndex, noteIndex);
                    break;
                } else {
                    if (restart) {
                        synthState->restart = 1;
                        synthState->samplePosInt = loopInfo->start;
                    } else {
                        synthState->samplePosInt += nSamplesToProcess;
                    }
                }
            }

            switch (nParts) {
                case 1:
                    sampleDmemBeforeResampling = 0x580  + skipBytes;
                    break;

                case 2:
                    switch (curPart) {
                        case 0:
                            gl_e134_InterL (cmd++, 0x580  + skipBytes,
                                              0x3C0  + (16  * sizeof(s16) ),
                                              (((samplesLenAdjusted / 2) + 7) & ~7) );
                            resampledTempLen = samplesLenAdjusted;
                            sampleDmemBeforeResampling = 0x3C0  + (16  * sizeof(s16) );
                            if (finished) {
                                gl_e134_ClearBuffer (cmd++, sampleDmemBeforeResampling + resampledTempLen,
                                                       samplesLenAdjusted + 16 );
                            }
                            break;

                        case 1:
                            gl_e134_InterL (cmd++, 0x580  + skipBytes,
                                              0x3C0  + (16  * sizeof(s16) ) + resampledTempLen,
                                              (((samplesLenAdjusted / 2) + 7) & ~7) );
                            break;
                    }
            }
            if (finished) {
                break;
            }
        }
    }

    flags = 0 ;
    if ((s32)sampleState->needsInit == 1) {
        sampleState->needsInit = 0;
        flags = 1 ;
    }

    cmd = gl_e134_FinalResample (cmd, synthState, aiBufLen * (s32)sizeof(s16) , resamplingRateFixedPoint,
                                   sampleDmemBeforeResampling, flags);
    if (bookOffset == 3) {
        gl_e134_UnkCmd19 (cmd++, 0x3C0 , 0x3C0 , aiBufLen * sizeof(s16) , 0);
    }

    if (bookOffset == 2) {
        gl_e134_UnkCmd3 (cmd++, 0x3C0 , 0x3C0 , aiBufLen * sizeof(s16) );
    }

    gain = sampleState->gain;
    if (gain != 0) {
        if (gain < 0x10) {
            gain = 0x10;
        }
        gl_e134_HiLoGain (cmd++, gain, 0x3C0 , 0, (aiBufLen + 16 ) * sizeof(s16) );
    }

    filter = sampleState->filter;
    if (filter != ((void*)0) ) {
        gl_e134_LoadFilterSize (cmd++, aiBufLen * sizeof(s16) , filter);
        gl_e134_LoadFilterBuffer (cmd++, flags, 0x3C0 , synthState->synthesisBuffers->mixEnvelopeState);
    }

    combFilterSize = sampleState->combFilterSize;
    combFilterGain = sampleState->combFilterGain;
    combFilterState = (s16 *)(u32)(((char *)(synthState->synthesisBuffers->combFilterState)-0x80000000)) ;
    if ((combFilterSize != 0) && (sampleState->combFilterGain != 0)) {
        gl_e134_DMemMove (cmd++, 0x3C0 , 0x760 , aiBufLen * sizeof(s16) );
        combFilterDmem = 0x760  - combFilterSize;
        if (synthState->combFilterNeedsInit) {
            gl_e134_ClearBuffer (cmd++, combFilterDmem, combFilterSize);
            synthState->combFilterNeedsInit = 0;
        } else {
            gl_e134_LoadBuffer (cmd++, combFilterDmem, combFilterSize, combFilterState);
        }
        gl_e134_SaveBuffer (cmd++, 0x3C0  + (aiBufLen * sizeof(s16) ) - combFilterSize, combFilterSize,
                              combFilterState);
        gl_e134_Mix (cmd++, (aiBufLen * (s32)sizeof(s16) ) >> 4, combFilterGain, 0x760 , combFilterDmem);
        gl_e134_DMemMove (cmd++, combFilterDmem, 0x3C0 , aiBufLen * sizeof(s16) );
    } else {
        synthState->combFilterNeedsInit = 1;
    }

    if ((sampleState->haasEffectLeftDelaySize != 0) || (synthState->prevHaasEffectLeftDelaySize != 0)) {
        haasEffectDelaySide = 1;
    } else if ((sampleState->haasEffectRightDelaySize != 0) || (synthState->prevHaasEffectRightDelaySize != 0)) {
        haasEffectDelaySide = 2;
    } else {
        haasEffectDelaySide = 0;
    }

    cmd = gl_e134_ProcessEnvelope (cmd, sampleState, synthState, aiBufLen, 0x3C0 , haasEffectDelaySide, flags);

    if (sampleState->useHaasEffect) {
        if (!(flags & 1 )) {
            flags = 0 ;
        }
        cmd = gl_e134_ApplyHaasEffect (cmd, sampleState, synthState, aiBufLen * (s32)sizeof(s16) , flags,
                                         haasEffectDelaySide);
    }

    return cmd;
}





















































                                                                            
                                                                  
                                                                  
                             
  
                                                         
                    
                     
                                                              
                                                                      
        
                                        
                                                                    
                                              
               
                                        
                                                                    
                                                                    
                                                                       
      
  
                                                                 
                                                                  
                                                               
                                                                  
                                                                
                                                                  
                                                             
                                                                        
                                                             
                                                                    
                                                                   
                                                                  
                                                       
                                                             
                                                                  
                                                                       
                                                                       
                                                                 
                                                                        
                                                                      
                                                                       
                                                                       
                                                                        
                                                                       
                                                                    
                                                                 
                                                                   
                                                                 
                                                                     
                                                               
                                                                  
                                                                          
                                                                     
                                                                       
                                                                      
                                                                        
                                                                      
                                                                      
                                                                   
                                                                          
                                                                                   
typedef struct { int w0, w1; } GfxPair1EE78;
extern int gl_ref_00031BC8();  
int AudioSynth_FinalResample(dl, a1, a2, a3, arg4, arg5)
GfxPair1EE78 *dl;
int *a1;
int a2;
u16 a3;
u16 arg4;
int arg5;
{
    GfxPair1EE78 *p;
    GfxPair1EE78 *r;

    if (!a3) {
        gl_ref_00031BC8(dl++, 0x3C0);
    } else {
        p = dl++; p->w0 = (arg4 & 0xFFFF) | 0x08000000; p->w1 = (a2 & 0xFFFF) | 0x03C00000;
        r = dl++; r->w0 = ((arg5 & 0xFF) << 16) | 0x05000000 | (a3 & 0xFFFF); r->w1 = a1[3] + 0x80000020;
    }
    return (int)dl;
}

 






typedef struct { u32 w0; u32 w1; } gl_aud_Awords;
typedef union { gl_aud_Awords words; long long force_structure_alignment; } gl_aud_Acmd;






























typedef struct {
    u32 enabled : 1; u32 needsInit : 1; u32 finished : 1; u32 unused : 1;
    u32 stereoStrongRight : 1; u32 stereoStrongLeft : 1; u32 stereoHeadsetEffects : 1; u32 usesHeadsetPanEffects : 1;
    u32 reverbIndex : 3; u32 bookOffset : 2; u32 isSyntheticWave : 1; u32 hasTwoParts : 1; u32 useHaasEffect : 1;
    u8 gain; u8 haasEffectLeftDelaySize; u8 haasEffectRightDelaySize; u8 reverbVol; u8 harmonicIndexCurAndPrev; u8 combFilterSize;
    u16 targetVolLeft; u16 targetVolRight; u16 frequencyFixedPoint; u16 combFilterGain;
    s16 *waveSampleAddr;
} gl_aud_SampleState;
typedef struct { char pad[0x80]; s32 haasEffectDelayState[1]; } gl_aud_SynthBufs;
typedef struct {
    u8 restart; u8 sampleDmaIndex; u8 prevHaasEffectLeftDelaySize; u8 prevHaasEffectRightDelaySize; u8 reverbVol; u8 numParts;
    u16 samplePosFrac; s32 samplePosInt; gl_aud_SynthBufs *synthesisBuffers; s16 curVolLeft; s16 curVolRight;
} gl_aud_SynthState;
extern int gl_ref_00031BC8();
extern int gl_ref_00031D00();
extern int gl_ref_00031D8C();
extern u32 gl_aud_sEnvMixerOp;                   
extern u32 gl_aud_sEnvMixerLeftHaasDmemDests;    
extern u32 gl_aud_sEnvMixerRightHaasDmemDests;   
extern u32 gl_aud_sEnvMixerDefaultDmemDests;     




 



gl_aud_Acmd *AudioSynth_ProcessEnvelope(gl_aud_Acmd *cmd, gl_aud_SampleState *sampleState, gl_aud_SynthState *synthState, s32 aiBufLen,
                                 u16 dmemSrc, s32 haasEffectDelaySide, s32 flags) {
    u32 dmemDests;
    u16 curVolLeft;
    u16 targetVolLeft;
    s32 phi_t1;
    s16 reverbVol;
    u16 curVolRight;
    s16 rampLeft;
    s16 rampRight;
    s16 rampReverb;
    s16 sourceReverbVol;
    u16 targetVolRight;
    s32 pad;

    curVolLeft = synthState->curVolLeft;
    targetVolLeft = sampleState->targetVolLeft;
    targetVolLeft <<= 4;
    reverbVol = sampleState->reverbVol;
    curVolRight = synthState->curVolRight;
    targetVolRight = sampleState->targetVolRight;
    targetVolRight <<= 4;

    if (targetVolLeft != curVolLeft) {
        rampLeft = (targetVolLeft - curVolLeft) / (aiBufLen >> 3);
    } else {
        rampLeft = 0;
    }
    if (targetVolRight != curVolRight) {
        rampRight = (targetVolRight - curVolRight) / (aiBufLen >> 3);
    } else {
        rampRight = 0;
    }

    sourceReverbVol = synthState->reverbVol;
    phi_t1 = sourceReverbVol & 0x7F;

    if (sourceReverbVol != reverbVol) {
        rampReverb = (((reverbVol & 0x7F) - phi_t1) << 9) / (aiBufLen >> 3);
        synthState->reverbVol = reverbVol;
    } else {
        rampReverb = 0;
    }

    synthState->curVolLeft = curVolLeft + (rampLeft * (aiBufLen >> 3));
    synthState->curVolRight = curVolRight + (rampRight * (aiBufLen >> 3));

    if (sampleState->useHaasEffect) {
        gl_ref_00031BC8 (cmd++, 0x5C0 , 0x1A0 );
        gl_ref_00031D00 (cmd++, phi_t1 * 2, rampReverb, rampLeft, rampRight);
        gl_ref_00031D8C (cmd++, curVolLeft, curVolRight);

        switch (haasEffectDelaySide) {
            case 1:
                dmemDests = gl_aud_sEnvMixerLeftHaasDmemDests;
                break;
            case 2:
                dmemDests = gl_aud_sEnvMixerRightHaasDmemDests;
                break;
            default:
                dmemDests = gl_aud_sEnvMixerDefaultDmemDests;
                break;
        }
    } else {
        { gl_aud_Acmd *_a = (gl_aud_Acmd *)cmd++; _a->words.w0 = (((u32)(((u32)(18) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( phi_t1 * 2) & ((0x01 << ( 8)) - 1)) << ( 16)))  | ((u32)(((u32)( rampReverb) & ((0x01 << ( 16)) - 1)) << ( 0))) ); _a->words.w1 = ((u32)(((u32)( rampLeft) & ((0x01 << ( 16)) - 1)) << ( 16)))  | ((u32)(((u32)( rampRight) & ((0x01 << ( 16)) - 1)) << ( 0))) ; } ;
        { gl_aud_Acmd *_a = (gl_aud_Acmd *)cmd++; _a->words.w0 = ((u32)(((u32)(22) & ((0x01 << ( 8)) - 1)) << ( 24))) ; _a->words.w1 = (((u32)(((u32)( curVolLeft) & ((0x01 << ( 16)) - 1)) << ( 16)))  | ((u32)(((u32)( curVolRight) & ((0x01 << ( 16)) - 1)) << ( 0))) ); } ;
        dmemDests = gl_aud_sEnvMixerDefaultDmemDests;
    }

    { gl_aud_Acmd *_a = (gl_aud_Acmd *)cmd++; _a->words.w0 = ( gl_aud_sEnvMixerOp | ((u32)(((u32)( dmemSrc >> 4) & ((0x01 << ( 8)) - 1)) << ( 16)))  | ((u32)(((u32)( aiBufLen) & ((0x01 << ( 8)) - 1)) << ( 8)))  | ((u32)(((u32)( (sourceReverbVol & 0x80) >> 7) & ((0x01 << ( 1)) - 1)) << ( 4)))  | ((u32)(((u32)( sampleState->stereoHeadsetEffects) & ((0x01 << ( 1)) - 1)) << ( 3)))  | ((u32)(((u32)(               sampleState->usesHeadsetPanEffects) & ((0x01 << ( 1)) - 1)) << ( 2)))  | ((u32)(((u32)( sampleState->stereoStrongRight) & ((0x01 << ( 1)) - 1)) << ( 1)))  | ((u32)(((u32)(               sampleState->stereoStrongLeft) & ((0x01 << ( 1)) - 1)) << ( 0))) ); _a->words.w1 = (u32)( dmemDests); } ;



    return cmd;
}


                                                                               
                                                                  
                                                                      
                                                       
  
                                                                      
                         
                           
                                                                    
                      
                                                                  
                             
                                                                    
                  
                                                                       
                                                                      
                  
                                                   
        
                                                                      
      
  
                                                                 
                                                                 
                                                                  
                                                                   
                                                                    
                                                                     
                                                                 
                                                                                         
                        
                                                              
                                                                          
                                                        
                                                            
                                                          
                                                            
                                                                     
                                                        
                                                                
 




 






extern int D_00000000;
extern int D_1F248_dp;
extern int gl_ref_00031D3C();

extern s16 *gl_1F248_gWaveSamples[];







gl_aud_Acmd *AudioSynth_LoadWaveSamples(gl_aud_Acmd *cmd, gl_aud_SampleState *sampleState, gl_aud_SynthState *synthState,
                                 s32 numSamplesToLoad) {
    s32 numSamplesAvail;
    s32 harmonicIndexCurAndPrev = sampleState->harmonicIndexCurAndPrev;
    s32 samplePosInt = synthState->samplePosInt;
    s32 numDuplicates;

    if (sampleState->bookOffset != 0) {
        gl_ref_00031D3C (cmd++, 0x580 , (((numSamplesToLoad * 2) + 0xF) & ~0xF) , (u32)(((char *)(gl_1F248_gWaveSamples[8])-0x80000000)) );
        gl_1F248_gWaveSamples [8] += numSamplesToLoad * 2 ;
        return cmd;
    } else {
        { gl_aud_Acmd *_a = (gl_aud_Acmd *)cmd++; _a->words.w0 = (((u32)(((u32)(20) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)(( 64 * 2) >> 4) & ((0x01 << ( 8)) - 1)) << ( 16)))  | ((u32)(((u32)( 0x580) & ((0x01 << ( 16)) - 1)) << ( 0))) ); _a->words.w1 = (u32)(((char *)( sampleState->waveSampleAddr)-0x80000000)) ; } ;
        if (harmonicIndexCurAndPrev != 0) {
            samplePosInt = samplePosInt * ((u8 *)&D_00000000) [harmonicIndexCurAndPrev >> 2] /
                           ((u8 *)&D_00000000) [harmonicIndexCurAndPrev & 3];
        }
        samplePosInt = (u32)samplePosInt % 64 ;
        numSamplesAvail = 64  - samplePosInt;
        if (numSamplesToLoad > numSamplesAvail) {
            numDuplicates = ((numSamplesToLoad - numSamplesAvail + 64  - 1) / 64 );
            if (numDuplicates != 0) {
                { gl_aud_Acmd *_a = (gl_aud_Acmd *)cmd++; _a->words.w0 = (((u32)(((u32)(9) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( numDuplicates) & ((0x01 << ( 8)) - 1)) << ( 16)))  | ((u32)(((u32)( 0x580) & ((0x01 << ( 16)) - 1)) << ( 0))) ); _a->words.w1 = ((u32)(((u32)(                            0x580 + (64 * 2)) & ((0x01 << ( 16)) - 1)) << ( 16)))  | ((u32)(((u32)(0x80) & ((0x01 << ( 16)) - 1)) << ( 0))) ; } ;

            }
        }
        synthState->samplePosInt = samplePosInt;
    }
    return cmd;
}









 









gl_aud_Acmd *AudioSynth_ApplyHaasEffect(gl_aud_Acmd *cmd, gl_aud_SampleState *sampleState, gl_aud_SynthState *synthState, s32 size, s32 flags, s32 haasEffectDelaySide) {
    u16 dmemDest;
    u16 pitch;
    u8 prevHaasEffectDelaySize;
    u8 haasEffectDelaySize;

    switch (haasEffectDelaySide) {
        case 1:
            dmemDest = 0x940 ;
            haasEffectDelaySize = sampleState->haasEffectLeftDelaySize;
            prevHaasEffectDelaySize = synthState->prevHaasEffectLeftDelaySize;
            synthState->prevHaasEffectRightDelaySize = 0;
            synthState->prevHaasEffectLeftDelaySize = haasEffectDelaySize;
            break;
        case 2:
            dmemDest = 0xAE0 ;
            haasEffectDelaySize = sampleState->haasEffectRightDelaySize;
            prevHaasEffectDelaySize = synthState->prevHaasEffectRightDelaySize;
            synthState->prevHaasEffectRightDelaySize = haasEffectDelaySize;
            synthState->prevHaasEffectLeftDelaySize = 0;
            break;
        default:
            return cmd;
    }

    if (flags != 1 ) {
        if (haasEffectDelaySize != prevHaasEffectDelaySize) {
            pitch = (((size << 0xF) / 2) - 1) / ((size + haasEffectDelaySize - prevHaasEffectDelaySize - 2) / 2);
            { gl_aud_Acmd *_a = (gl_aud_Acmd *)cmd++; _a->words.w0 = (((u32)(((u32)(8) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( 0) & ((0x01 << ( 8)) - 1)) << ( 16)))  | ((u32)(((u32)( 0x5C0) & ((0x01 << ( 16)) - 1)) << ( 0))) ); _a->words.w1 = ((u32)(((u32)( 0x3C0) & ((0x01 << ( 16)) - 1)) << ( 16)))  | ((u32)(((u32)( size + haasEffectDelaySize - prevHaasEffectDelaySize) & ((0x01 << ( 16)) - 1)) << ( 0))) ; } ;
            { gl_aud_Acmd *_a = (gl_aud_Acmd *)cmd++; _a->words.w0 = (((u32)(((u32)(6) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( pitch) & ((0x01 << ( 16)) - 1)) << ( 0))) ); _a->words.w1 = ((u32)(((u32)( 0) & ((0x01 << ( 16)) - 1)) << ( 0))) ; } ;
        } else {
            { gl_aud_Acmd *_a = (gl_aud_Acmd *)cmd++; _a->words.w0 = ((u32)(((u32)(10) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( 0x5C0) & ((0x01 << ( 24)) - 1)) << ( 0))) ; _a->words.w1 = ((u32)(((u32)( 0x3C0) & ((0x01 << ( 16)) - 1)) << ( 16)))  | ((u32)(((u32)( size) & ((0x01 << ( 16)) - 1)) << ( 0))) ; } ;
        }

        if (prevHaasEffectDelaySize != 0) {
            { gl_aud_Acmd *_a = (gl_aud_Acmd *)cmd++; _a->words.w0 = (((u32)(((u32)(20) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)((                         (((prevHaasEffectDelaySize) + 0xF) & ~0xF)) >> 4) & ((0x01 << ( 8)) - 1)) << ( 16)))  | ((u32)(((u32)( 0x5C0) & ((0x01 << ( 16)) - 1)) << ( 0))) ); _a->words.w1 = (u32)(((char *)( synthState->synthesisBuffers->haasEffectDelayState)-0x80000000)) ; } ;

            { gl_aud_Acmd *_a = (gl_aud_Acmd *)cmd++; _a->words.w0 = ((u32)(((u32)(10) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( 0x3C0) & ((0x01 << ( 24)) - 1)) << ( 0))) ; _a->words.w1 = ((u32)(((u32)( 0x5C0 + prevHaasEffectDelaySize) & ((0x01 << ( 16)) - 1)) << ( 16)))  | ((u32)(((u32)(                       size + haasEffectDelaySize - prevHaasEffectDelaySize) & ((0x01 << ( 16)) - 1)) << ( 0))) ; } ;

        } else {
            { gl_aud_Acmd *_a = (gl_aud_Acmd *)cmd++; _a->words.w0 = ((u32)(((u32)(10) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( 0x3C0) & ((0x01 << ( 24)) - 1)) << ( 0))) ; _a->words.w1 = ((u32)(((u32)( 0x5C0) & ((0x01 << ( 16)) - 1)) << ( 16)))  | ((u32)(((u32)( size + haasEffectDelaySize) & ((0x01 << ( 16)) - 1)) << ( 0))) ; } ;
        }
    } else {
        { gl_aud_Acmd *_a = (gl_aud_Acmd *)cmd++; _a->words.w0 = ((u32)(((u32)(10) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( 0x5C0) & ((0x01 << ( 24)) - 1)) << ( 0))) ; _a->words.w1 = ((u32)(((u32)( 0x3C0) & ((0x01 << ( 16)) - 1)) << ( 16)))  | ((u32)(((u32)( size) & ((0x01 << ( 16)) - 1)) << ( 0))) ; } ;
        { gl_aud_Acmd *_a = (gl_aud_Acmd *)cmd++; _a->words.w0 = ((u32)(((u32)(2) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( 0x5C0) & ((0x01 << ( 24)) - 1)) << ( 0))) ; _a->words.w1 = (u32)( haasEffectDelaySize); } ;
        { gl_aud_Acmd *_a = (gl_aud_Acmd *)cmd++; _a->words.w0 = ((u32)(((u32)(10) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( 0x3C0) & ((0x01 << ( 24)) - 1)) << ( 0))) ; _a->words.w1 = ((u32)(((u32)( 0x5C0 + haasEffectDelaySize) & ((0x01 << ( 16)) - 1)) << ( 16)))  | ((u32)(((u32)( size) & ((0x01 << ( 16)) - 1)) << ( 0))) ; } ;
    }

    if ((u32)haasEffectDelaySize != 0) {
        { gl_aud_Acmd *_a = (gl_aud_Acmd *)cmd++; _a->words.w0 = (((u32)(((u32)(21) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)((                     (((haasEffectDelaySize) + 0xF) & ~0xF)) >> 4) & ((0x01 << ( 8)) - 1)) << ( 16)))  | ((u32)(((u32)( 0x5C0 + size) & ((0x01 << ( 16)) - 1)) << ( 0))) ); _a->words.w1 = (u32)(((char *)( synthState->synthesisBuffers->haasEffectDelayState)-0x80000000)) ; } ;

    }

    { gl_aud_Acmd *_a = (gl_aud_Acmd *)cmd++; _a->words.w0 = (((u32)(((u32)(4) & ((0x01 << ( 8)) - 1)) << ( 24)))  | ((u32)(((u32)( (((size) + 0x3F) & ~0x3F) >> 4) & ((0x01 << ( 8)) - 1)) << ( 16)))  | ((u32)(((u32)( 0x7FFF) & ((0x01 << ( 16)) - 1)) << ( 0))) ); _a->words.w1 = ((u32)(((u32)( 0x5C0) & ((0x01 << ( 16)) - 1)) << ( 16)))  | ((u32)(((u32)( dmemDest) & ((0x01 << ( 16)) - 1)) << ( 0))) ; } ;

    return cmd;
}



































 











extern f32 kRo_AudioHeap_InitAdsrDecayTable_E70, kRo_AudioHeap_InitAdsrDecayTable_E74;   


void AudioHeap_InitAdsrDecayTable(void) {
    s32 i;

    (*(f32 **)((char *)&D_00000000 + 0x2CF8)) [0xFF] = ((*(f32 *)((char *)&D_00000000 + 0x2054))  * (0, 256.0f)) / 0.25f;
    (*(f32 **)((char *)&D_00000000 + 0x2CF8)) [0xFE] = ((*(f32 *)((char *)&D_00000000 + 0x2054))  * (0, 256.0f)) / kRo_AudioHeap_InitAdsrDecayTable_E70;
    (*(f32 **)((char *)&D_00000000 + 0x2CF8)) [0xFD] = ((*(f32 *)((char *)&D_00000000 + 0x2054))  * (0, 256.0f)) / 0.5f;
    (*(f32 **)((char *)&D_00000000 + 0x2CF8)) [0xFC] = ((*(f32 *)((char *)&D_00000000 + 0x2054))  * (0, 256.0f)) / kRo_AudioHeap_InitAdsrDecayTable_E74;
    (*(f32 **)((char *)&D_00000000 + 0x2CF8)) [0xFB] = ((*(f32 *)((char *)&D_00000000 + 0x2054))  * (0, 256.0f)) / 0.75f;
    for (i = 0x80; i < 0xFB; i++) {
        (*(f32 **)((char *)&D_00000000 + 0x2CF8)) [i] = ((*(f32 *)((char *)&D_00000000 + 0x2054))  * (0, 256.0f)) / (f32)(0xFB - i);
    }
    for (i = 0x10; i < 0x80; i++) {
        (*(f32 **)((char *)&D_00000000 + 0x2CF8)) [i] = ((*(f32 *)((char *)&D_00000000 + 0x2054))  * (0, 256.0f)) / ((f32)60 + (f32)(0x80 - i) * 4.0f);
    }
    for (i = 1; i < 0x10; i++) {
        (*(f32 **)((char *)&D_00000000 + 0x2CF8)) [i] = ((*(f32 *)((char *)&D_00000000 + 0x2054))  * (0, 256.0f)) / (480.0f + (f32)(0xF - i) * 60.0f);
    }
    (*(f32 **)((char *)&D_00000000 + 0x2CF8)) [0] = 0.0f;
}

 












extern u8 gAudioContext_1fa20_a[];
extern u8 gAudioContext_1fa20_b[];
extern u8 gAudioContext_1fa20_c[];
void AudioHeap_ResetLoadStatus(void) {
    unsigned char *e;
    unsigned char *p;

    while (0) { e = gAudioContext_1fa20_a + 0x30; }
    for (p = gAudioContext_1fa20_a, e = gAudioContext_1fa20_a + 0x30; p < e; p++) {
        if (5 != p[0x2C40]) {
            p[0x2C40] = 0;
        }
    }
    while (0) { e = gAudioContext_1fa20_b + 0x30; }
    for (p = gAudioContext_1fa20_b, e = gAudioContext_1fa20_b + 0x30; p < e; p++) {
        if (5 != p[0x2C10]) {
            p[0x2C10] = 0;
        }
    }
    {
        int i;
        for (i = 0; i != 0x80; i++) {
            if (5 != gAudioContext_1fa20_c[i + 0x2C70]) {
                gAudioContext_1fa20_c[i + 0x2C70] = 0;
            }
        }
    }
}

 











void AudioHeap_DiscardFont(int a0) {
    int i;
    gl_1CC98_Rec *r;
    for (i = 0; i < gAudioContext_345c0_1CC98.count; i++) {
        r = &gAudioContext_345c0_1CC98.recs[i];
        if (r->b33 == a0) {
            if (r->b34 == 0 && r->b30 != 0) {
                r->elem->flag = 0;
                r->elem->live = 1;
            }
            gl_func_00000000 (r);
            gl_func_00000000 (r);
            gl_func_00000000 (gAudioContext_345c0_1CC98.tbl5378, r);
        }
    }
}


                                                                                     
                                                                          
                                                                        
                                                                        
                                                                    
                                                                              
                                                                      
                                                           
extern int gl_func_00000000();
extern int D_00000000;
extern u8 gAudioContext_1fbcc[];
 





void AudioHeap_DiscardSequence(int key) {
    char *p;
    int i;
    i = 0;
     

    if (((AudioContext *)&D_00000000 )->numSequencePlayers > 0) {
        p = (char *)gAudioContext_1fbcc;
        do {
            if ((((AudioContext *)(p))->seqPlayers[0]) .enabled) {
                if ((((AudioContext *)(p))->seqPlayers[0]) .seqId == key) {
                    gl_func_00000000 (&(((AudioContext *)(p))->seqPlayers[0]) );
                }
            }
            i++;
            p += sizeof(SequencePlayer);
        } while (i < ((AudioContext *)&D_00000000 )->numSequencePlayers);

    }
}

void AudioHeap_WritebackDCache(void   ) {
    gl_func_00000000 (   );
}
 

 
 



 


int AudioHeap_AllocZeroedAttemptExternal(int a0, int a1) {
    int v1 = 0;
    if ((*(AudioContext *)&D_00000000 ) .externalPool.startRamAddr != 0) {
        v1 = gl_func_00000000 (&(*(AudioContext *)&D_00000000 ) .externalPool  );
    }
    if (v1 == 0) {
        v1 = gl_func_00000000 (a0, a1);
    }
    return v1;
}

extern int gl_func_00000000();

 





int AudioHeap_AllocAttemptExternal(int a0, int a1) {
    int v1 = 0;
    if ((*(AudioContext *)&D_00000000 ) .externalPool.startRamAddr != 0) {
        v1 = gl_func_00000000 (&(*(AudioContext *)&D_00000000 ) .externalPool  );
    }
    if (v1 == 0) {
        v1 = gl_func_00000000 (a0, a1);
    }
    return v1;
}

int AudioHeap_AllocDmaMemory(int a0, int a1) {
    int v = gl_func_00000000 (a0  );
    if (v != 0) {
        gl_func_00000000 (v, a1);
    }
    return v;
}

int AudioHeap_AllocDmaMemoryZeroed(int a0, int a1) {
    int v = gl_func_00000000 (a0  );
    if (v != 0) {
        gl_func_00000000 (v, a1);
    }
    return v;
}

                                                                          
                                                                 
                                                                    
                                                                 
                     
  
                                         
                                                                       
                            
                                                                      
                                                            
                
      
  
                                                                     
                                                                   
                                                                     
                                                                  
                                                                   
                                                            
                                                                    
                                          
                                                                   
                                                                     
                                                                   
                                                                  
                                                                
                                                                   
                                                                   
                                                     
 







extern int gl_func_00000000();
void *AudioHeap_AllocZeroed(AudioAllocPool *pool  ) {
    char *p = (char *)gl_func_00000000 (pool  );
    char *c;
    if (p == 0) goto out;
    for (c = p; c < (char *)pool->curRamAddr; c++) {
        *c = 0;
    }
out:
    return p;
}

 





















 















void *AudioHeap_Alloc(AudioAllocPool *pool, unsigned int n) {
  unsigned int aligned = (n + 15) & (~15);
  void *new_var;
  unsigned int cur = (unsigned int)pool->curRamAddr;
  new_var = (void *) cur;
  if ((unsigned int)(pool->startRamAddr + pool->size) >= (unsigned int)(pool->curRamAddr + aligned))
  {
    pool->curRamAddr = (u8 *)(cur + aligned);
    goto success;
    if (!cur)
    {
    }
  }
  return 0;
  success:
  pool->numEntries += 1;
  return new_var;
}

 





void AudioHeap_InitPool(AudioAllocPool *pool, int a1, int a2) {
    int up = (a1 + 0xF) & ~0xF;
    pool->startRamAddr = (u8 *)up;
    pool->curRamAddr = (u8 *)up;
    pool->size = a2 - (a1 & 0xF);
    pool->numEntries = 0;
}

void AudioHeap_InitPersistentCache(AudioPersistentCache *cache) {
    cache->pool.numEntries = 0;
    cache->numEntries = 0;
    cache->pool.curRamAddr = cache->pool.startRamAddr;
}

 










 











void AudioHeap_InitTemporaryCache(AudioTemporaryCache *cache) {
    u8 *v = cache->pool.startRamAddr;
    cache->pool.numEntries = 0;
    cache->nextSide = 0;
    cache->entries[1].ramAddr = v;
    cache->entries[1].ramAddr += cache->pool.size;
    cache->entries[0].id = -1;
    cache->entries[1].id = -1;
    cache->pool.curRamAddr = v;
    cache->entries[0].ramAddr = v;
}

void AudioHeap_ResetPool(AudioAllocPool *pool) {
    pool->curRamAddr = pool->startRamAddr;
    pool->numEntries = 0;
}

                                                                           
                                                                  
                                                         
  
                                            
                                                               
                                                                 
                                                                
                                                                 
      
  
                                                         
                                                                     
                                                                    
                                                                
                                                                   
                                                                      
                                                               
                                                                  
                                                     
                                                        
                                                                       
                                                                    
                                                              
                                                                
                                                            
                                                                 
                                                   
extern int gl_func_00000000();
extern int D_00000000;
 


void AudioHeap_InitMainPools(int arg) {
     



    AudioContext *ctx = (AudioContext *)&D_00000000 ;
    char *heap = (char *)&D_00000000 ;
    char *sizes = (char *)&D_00000000 ;
    gl_func_00000000 (&ctx->initPool, heap, arg);
    gl_func_00000000 (&ctx->sessionPool, heap + arg, ((AudioHeapInitSizes *)sizes)->heapSize - arg);

    ctx->externalPool.startRamAddr = 0;
}

                                                                     
                                                                                  
                                                                     
                                                                             
                                                                            
                                                                  
                                                                            
extern int gl_func_00000000();
extern int D_00000000;
 


void AudioHeap_InitSessionPools(AudioSessionPoolSplit *split) {
    AudioContext *ctx = (AudioContext *)&D_00000000 ;
    int r;
    ctx->sessionPool.curRamAddr = ctx->sessionPool.startRamAddr;
    r = gl_func_00000000 (&ctx->sessionPool, split->miscPoolSize);
    r = gl_func_00000000 (&ctx->miscPool, r, split->miscPoolSize);
    r = gl_func_00000000 (&ctx->sessionPool, split->cachePoolSize);
    gl_func_00000000 (&ctx->cachePool, r, split->cachePoolSize);
}


                                                                              
                                                                            
                                                                       
                                        
                                                                         
                                                                              
                                                                            
                                                
extern int gl_func_0001CA10_1FFAC();
void AudioHeap_InitCachePools(AudioCachePoolSplit *split) {
    AudioContext *ctx = (AudioContext *)&D_00000000 ;
    int v;
    ctx->cachePool.curRamAddr = ctx->cachePool.startRamAddr;
    v = gl_func_0001CA10_1FFAC (&ctx->cachePool, split->persistentCommonPoolSize);
    v = gl_func_0001CA10_1FFAC (&ctx->persistentCommonPool, v, split->persistentCommonPoolSize);
    v = gl_func_0001CA10_1FFAC (&ctx->cachePool, split->temporaryCommonPoolSize);
    gl_func_0001CA10_1FFAC (&ctx->temporaryCommonPool, v, split->temporaryCommonPoolSize);
}


                                                                                      
                                                                             
                                                                            
                                                                             
                                                                              
                                                                              
                                                                  
                               
extern int gl_func_00000000();
extern int D_00000000;
 



void AudioHeap_InitPersistentPoolsAndCaches(AudioCommonPoolSplit *split) {
    AudioContext *ctx = (AudioContext *)&D_00000000 ;
    int r;
    ctx->persistentCommonPool.curRamAddr = ctx->persistentCommonPool.startRamAddr;
    r = gl_func_00000000 (&ctx->persistentCommonPool, split->seqCacheSize);
    r = gl_func_00000000 (&ctx->seqCache.persistent.pool, r, split->seqCacheSize);
    r = gl_func_00000000 (&ctx->persistentCommonPool, split->fontCacheSize);
    r = gl_func_00000000 (&ctx->fontCache.persistent.pool, r, split->fontCacheSize);
    r = gl_func_00000000 (&ctx->persistentCommonPool, split->sampleBankCacheSize);
    r = gl_func_00000000 (&ctx->sampleBankCache.persistent.pool, r, split->sampleBankCacheSize);
    gl_func_00000000 (&ctx->seqCache.persistent);
    gl_func_00000000 (&ctx->fontCache.persistent);
    gl_func_00000000 (&ctx->sampleBankCache.persistent);
}


                                                                                                       
                                                                            
                                                                             
                                                                          
                                                                  
                               
extern int gl_func_00000000();
extern int D_00000000;
 

void AudioHeap_InitTemporaryPoolsAndCaches(AudioCommonPoolSplit *split) {
    AudioContext *ctx = (AudioContext *)&D_00000000 ;
    int r;
    ctx->temporaryCommonPool.curRamAddr = ctx->temporaryCommonPool.startRamAddr;
    r = gl_func_00000000 (&ctx->temporaryCommonPool, split->seqCacheSize);
    r = gl_func_00000000 (&ctx->seqCache.temporary.pool, r, split->seqCacheSize);
    r = gl_func_00000000 (&ctx->temporaryCommonPool, split->fontCacheSize);
    r = gl_func_00000000 (&ctx->fontCache.temporary.pool, r, split->fontCacheSize);
    r = gl_func_00000000 (&ctx->temporaryCommonPool, split->sampleBankCacheSize);
    r = gl_func_00000000 (&ctx->sampleBankCache.temporary.pool, r, split->sampleBankCacheSize);
    gl_func_00000000 (&ctx->seqCache.temporary);
    gl_func_00000000 (&ctx->fontCache.temporary);
    gl_func_00000000 (&ctx->sampleBankCache.temporary);
}

                                                                                                              
                                                                                     
                                                                                   
                                                                                      
                                                                               
                                                                                      
                                                                                        
                                                                                   
                                                                                       
                              
                                                                                                
                                                                                         
                                                                                    
                                                                                 
                                                                                  
                                                                                       
                                                                                         
                                                                 
                                                                                         
                                                                                           
                                                                                
                                                                                     
                                                                                      
                                                                                      
                                                                                                            
                                                                                                      
                                                                                       
                                                                             
                                                                                                               
                                                                                                            
                                                                                                        
                                                                                                         
                                                                                                  
                                                                                                     
typedef struct { u8 *ramAddr; u32 size; s16 tableType; s16 id; } gl_201B8_Ent;
typedef struct { u8 *start; u8 *cur; s32 size; s32 numEntries; } gl_201B8_APool;
typedef struct { u32 nextSide; gl_201B8_APool pool; gl_201B8_Ent entries[2]; } gl_201B8_TCache;
typedef struct { u32 numEntries; gl_201B8_APool pool; gl_201B8_Ent entries[16]; } gl_201B8_PCache;
typedef struct { gl_201B8_PCache persistent; gl_201B8_TCache temporary; u8 pad[16]; } gl_201B8_Cache;
typedef struct { unsigned flag:1, rest:31; unsigned char b4; char p5[0x160 - 5]; } gl_201B8_Obj;
typedef struct {
    char p0[0x2048];
    short n2048;
    char p204A[0x2070 - 0x204A];
    int count;
    char p2074[0x21F8 - 0x2074];
    gl_201B8_Cache seqCache;
    gl_201B8_Cache fontCache;
    gl_201B8_Cache sampleCache;
    char p2528[0x2C10 - 0x2528];
    u8 sampleLS[0x30];
    u8 fontLS[0x30];
    u8 seqLS[0x30];
    char p2CA0[0x2CFC - 0x2CA0];
    gl_1CC98_Rec *recs;
    gl_201B8_Obj objs[8];
} gl_201B8_GS;
extern gl_201B8_GS gAudioContext_345c0_201B8;

extern void gl_ref_00034238();
extern void gl_func_00000000_201B8v();

int AudioHeap_AllocCached(s32 tableType, s32 size, s32 cache, s32 id) {
    gl_201B8_Cache *loadedCache;
    gl_201B8_TCache *temporaryCache;
    gl_201B8_APool *temporaryPool;
    void *persistentRamAddr;
    void *temporaryRamAddr;
    u8 loadStatusEntry0;
    u8 loadStatusEntry1;
    s32 i;
    u8 *loadStatus;
    

    switch (tableType) {
        case 0:
            loadedCache = &gAudioContext_345c0_201B8 .seqCache;
            loadStatus = gAudioContext_345c0_201B8 .seqLS;
            break;
        case 1:
            loadedCache = &gAudioContext_345c0_201B8 .fontCache;
            loadStatus = gAudioContext_345c0_201B8 .fontLS;
            break;
        case 2:
            loadedCache = &gAudioContext_345c0_201B8 .sampleCache;
            loadStatus = gAudioContext_345c0_201B8 .sampleLS;
            break;
    }

    if (cache == 0) {
        temporaryCache = &loadedCache->temporary;
        temporaryPool = &temporaryCache->pool;

        loadStatusEntry0 = 0;
        if (temporaryCache->entries[0].id == -1) {
        } else {
            loadStatusEntry0 = loadStatus[temporaryCache->entries[0].id];
        }
        loadStatusEntry1 =
            (temporaryCache->entries[1].id == -1) ? 0 : loadStatus[temporaryCache->entries[1].id];

        if (tableType == 1) {
            if (loadStatusEntry0 == 4) {
                for (i = 0; i < gAudioContext_345c0_201B8 .count; i++) {
                    if (gAudioContext_345c0_201B8 .recs[i].b33 == temporaryCache->entries[0].id && gAudioContext_345c0_201B8 .recs[i].e.flag) {
                        break;
                    }
                }
                if (i == gAudioContext_345c0_201B8 .count) {
                    gl_func_00000000 (temporaryCache->entries[0].id, 3);
                    loadStatusEntry0 = 3;
                }
            }
            if (loadStatusEntry1 == 4) {
                for (i = 0; i < gAudioContext_345c0_201B8 .count; i++) {
                    if (gAudioContext_345c0_201B8 .recs[i].b33 == temporaryCache->entries[1].id && gAudioContext_345c0_201B8 .recs[i].e.flag) {
                        break;
                    }
                }
                if (i == gAudioContext_345c0_201B8 .count) {
                    gl_func_00000000 (temporaryCache->entries[1].id, 3);
                    loadStatusEntry1 = 3;
                }
            }
        }

        if (loadStatusEntry0 == 0) {
            temporaryCache->nextSide = 0;
        } else if (loadStatusEntry1 == 0) {
            temporaryCache->nextSide = 1;
        } else if (loadStatusEntry0 == 3 && loadStatusEntry1 == 3) {
        } else if (loadStatusEntry0 == 3) {
            temporaryCache->nextSide = 0;
        } else if (loadStatusEntry1 == 3) {
            temporaryCache->nextSide = 1;
        } else {
            if (tableType == 0) {
                if (loadStatusEntry0 == 2) {
                    for (i = 0; i < gAudioContext_345c0_201B8 .n2048; i++) {
                        if (gAudioContext_345c0_201B8 .objs[i].flag && gAudioContext_345c0_201B8 .objs[i].b4 == temporaryCache->entries[0].id) {
                            break;
                        }
                    }
                    if (i == gAudioContext_345c0_201B8 .n2048) {
                        temporaryCache->nextSide = 0;
                        goto done;
                    }
                }
                if (loadStatusEntry1 == 2) {
                    for (i = 0; i < gAudioContext_345c0_201B8 .n2048; i++) {
                        if (gAudioContext_345c0_201B8 .objs[i].flag && gAudioContext_345c0_201B8 .objs[i].b4 == temporaryCache->entries[1].id) {
                            break;
                        }
                    }
                    if (i == gAudioContext_345c0_201B8 .n2048) {
                        temporaryCache->nextSide = 1;
                        goto done;
                    }
                }
            } else if (tableType == 1) {
                if (loadStatusEntry0 == 2) {
                    for (i = 0; i < gAudioContext_345c0_201B8 .count; i++) {
                        if (gAudioContext_345c0_201B8 .recs[i].b33 == temporaryCache->entries[0].id && gAudioContext_345c0_201B8 .recs[i].e.flag) {
                            break;
                        }
                    }
                    if (i == gAudioContext_345c0_201B8 .count) {
                        temporaryCache->nextSide = 0;
                        goto done;
                    }
                }
                if (loadStatusEntry1 == 2) {
                    for (i = 0; i < gAudioContext_345c0_201B8 .count; i++) {
                        if (gAudioContext_345c0_201B8 .recs[i].b33 == temporaryCache->entries[1].id && gAudioContext_345c0_201B8 .recs[i].e.flag) {
                            break;
                        }
                    }
                    if (i == gAudioContext_345c0_201B8 .count) {
                        temporaryCache->nextSide = 1;
                        goto done;
                    }
                }
            }

            if (temporaryCache->nextSide == 0) {
                if (loadStatusEntry0 == 1) {
                    if (loadStatusEntry1 == 1) {
                        goto fail;
                    }
                    temporaryCache->nextSide = 1;
                }
            } else {
                if (loadStatusEntry1 == 1) {
                    if (loadStatusEntry0 == 1) {
                        goto fail;
                    }
                    temporaryCache->nextSide = 0;
                }
            }

            if (0) {
            fail:
                return 0;
            }
        }
    done:
        if (temporaryCache->entries[temporaryCache->nextSide].id != -1) {
            loadStatus[temporaryCache->entries[temporaryCache->nextSide].id] = 0;
            if (tableType == 1) {
                gl_func_00000000 (temporaryCache->entries[temporaryCache->nextSide].id);
            }
        }
        switch (temporaryCache->nextSide) {
            case 0:
                temporaryCache->entries[0].ramAddr = temporaryPool->start;
                temporaryCache->entries[0].id = id;
                temporaryCache->entries[0].size = size;
                temporaryPool->cur = temporaryPool->start + size;

                if (temporaryCache->entries[1].id != -1 &&
                    temporaryCache->entries[1].ramAddr < temporaryPool->cur) {
                    loadStatus[temporaryCache->entries[1].id] = 0;
                    switch (tableType) {
                        case 0:
                            gl_ref_00034238((s32)temporaryCache->entries[1].id);
                            break;
                        case 1:
                            gl_func_00000000_201B8v ((s32)temporaryCache->entries[1].id);
                            break;
                    }
                    temporaryCache->entries[1].id = -1;
                    temporaryCache->entries[1].ramAddr = temporaryPool->start + temporaryPool->size;
                }
                temporaryRamAddr = temporaryCache->entries[0].ramAddr;
                break;

            case 1:
                temporaryCache->entries[1].ramAddr =
                    (u8 *)((u32)(temporaryPool->start + temporaryPool->size - size) & ~0xF);
                temporaryCache->entries[1].id = id;
                temporaryCache->entries[1].size = size;
                if (temporaryCache->entries[0].id != -1 &&
                    temporaryCache->entries[1].ramAddr < temporaryPool->cur) {
                    loadStatus[temporaryCache->entries[0].id] = 0;
                    switch (tableType) {
                        case 0:
                            gl_ref_00034238(temporaryCache->entries[0].id);
                            break;
                        case 1:
                            gl_func_00000000_201B8v (temporaryCache->entries[0].id);
                            break;
                    }
                    temporaryCache->entries[0].id = -1;
                    temporaryPool->cur = temporaryPool->start;
                }
                temporaryRamAddr = temporaryCache->entries[1].ramAddr;
                break;

            default:
                return 0;
        }

        temporaryCache->nextSide ^= 1;
        return (int)temporaryRamAddr;
    }

    persistentRamAddr = (void *)gl_func_00000000 (&loadedCache->persistent.pool, size);
    loadedCache->persistent.entries[loadedCache->persistent.numEntries].ramAddr = persistentRamAddr;

    if (persistentRamAddr == ((void*)0) ) {
        switch (cache) {
            case 2:
                return AudioHeap_AllocCached(tableType, size, 0, id);
            case 0:
            case 1:
                return 0;
        }
    }

    loadedCache->persistent.entries[loadedCache->persistent.numEntries].id = id;
    loadedCache->persistent.entries[loadedCache->persistent.numEntries].size = size;

    return (int)loadedCache->persistent.entries[loadedCache->persistent.numEntries++].ramAddr;
}


 





extern int gl_func_00000000();
extern int gl_func_00034F80();
int AudioHeap_SearchCaches(int a0, int a1, int a2) {
    int r = gl_func_00000000 (a0, a2);
    if (r != 0) {
        return r;
    }
    if (a1 == 3) {
        return 0;
    }
    return gl_func_00034F80(a0, a1, a2);
}

 















typedef struct { int count; } Gl20914Tbl;
int AudioHeap_SearchRegularCaches(int mode, int flag, int key) {
    int i;
    char *base;
    char *v1;
    AudioPersistentCache *t;

    switch (mode) {
    case 0:  base = (char *)&((AudioContext *)&D_00000000 )->seqCache; break;
    case 1:  base = (char *)&((AudioContext *)&D_00000000 )->fontCache; break;
    case 2:  base = (char *)&((AudioContext *)&D_00000000 )->sampleBankCache; break;
    }

    v1 = (char *)&((AudioCache *)base)->temporary;
    if (flag == 0) {
        if (key == ((AudioTemporaryCache *)v1) ->entries[0].id) {
            ((AudioTemporaryCache *)v1) ->nextSide = 1;
            return *(int *)&((AudioTemporaryCache *)v1) ->entries[0].ramAddr;
        }
        if (key == ((AudioTemporaryCache *)v1) ->entries[1].id) {
            ((AudioTemporaryCache *)v1) ->nextSide = 0;
            return *(int *)&((AudioTemporaryCache *)v1) ->entries[1].ramAddr;
        }
        return 0;
    }

    t = (AudioPersistentCache *)base;
    i = 0;
    if (t->numEntries != 0) {
         
        v1 = base;
        do {
            if (key == ((AudioPersistentCache *)v1)->entries[0].id) {
                return *(int *)&((AudioPersistentCache *)v1)->entries[0].ramAddr;
            }
            i++;
            v1 += sizeof(AudioCacheEntry);
        } while ((unsigned)i < t->numEntries);
    }
    if (flag == 2) {
        return gl_func_00000000 (mode, 0, key);    
    }
    return 0;
}


 




























void AudioHeap_CalcFilterCoefs(float x, float y, u16 *out) {
    float k;
    float v[16];
    int i;

    k = *(float *)(((char *)&D_00000000 + (0xE78)) );
    v[0] = y * k;
    v[8] = x * k;
    v[1] = y * x * k;
    v[9] = (x * x + y) * k;
    for (i = 2; i < 8; i++) {
        out[i] = (u32)(y * v[i - 2] + v[i - 1] * x);
        out[i + 8] = (u32)(y * v[i + 6] + v[i + 7] * x);
    }
    for (i = 0; i < 16; i++) {
        out[i] = (u32)v[i];
    }
}

 




void AudioHeap_ClearFilter(short *a0) {
 do { int i = 0; short *p = a0; do {
      i += 4;
      p[1] = 0;
      p[2] = 0;
      p[3] = 0;
      p += 4;
      p[-4] = 0;
    }
    while (i != 8);
  }
  while (0);
}

 












void AudioHeap_LoadLowPassFilter(short *a0, int a1) {
    int i = 0; short *p = a0; short *s = (short *)&D_00000000 + (a1 << 3); do {
        i += 4;
        p[0] = s[0];
        p[1] = s[1];
        p[2] = s[2];
        p[3] = s[3];
        p += 4;
        s += 4;
    } while (i != 8);
}


 







void AudioHeap_LoadHighPassFilter(short *dst, int a1) {
    int i = 0; short *p = dst; short *s = (short *)&D_00000000 + (a1 << 3) - 8; do {
        i += 4;
        p[0] = s[0];
        p[1] = s[1];
        p[2] = s[2];
        p[3] = s[3];
        p += 4;
        s += 4;
    } while (i != 8);
}

 

























extern int gl_func_00000000();
extern int D_20ED0_a, D_20ED0_b;  
void AudioHeap_LoadFilter(d, x, y)
short *d;
int x;
int y;
{
    int j;

    if (x == 0 && y == 0) {
        gl_func_00000000 (d, 0);           
        return;
    }
    if (y == 0) {
        gl_func_00000000 (d  );    
        return;
    }
    if (x == 0) {
        gl_func_00000000 (d, y);           
        return;
    }
    for (j = 0; j != 8; j++) {
        d[j] = (((short *)&D_20ED0_a)[y * 8 + j] + ((short *)&D_20ED0_b)[y * 8 + j]) / 2;
    }
}





typedef char *(*GP_00020FFC)();

 














void AudioHeap_UpdateReverbs(void) {
    s32 var_v0;
    s32 var_v1;
    s32 var_a1;
    char *rec;

     


    var_v0 = ((*(AudioContext *)&D_00000000 ) .specUnk4 == 2) ? 2 : 1;
    var_v1 = 0;
    if ((*(AudioContext *)&D_00000000 ) .numSynthesisReverbs > 0) {
        do {
            if (var_v0 > 0) {
                rec = (char *)&D_00000000  + var_v1 * 0x158;
                var_a1 = 0;
                do {
                    s32 f = ((SynthesisReverb *)(rec + 0x18))->decayRatio;
                    ((SynthesisReverb *)(rec + 0x18))->decayRatio = f - f / 4;
                    var_a1 += 1;
                } while (var_a1 != var_v0);
            }
            var_v1 += 1;
        } while (var_v1 < (*(AudioContext *)&D_00000000 ) .numSynthesisReverbs);
    }
}

 





typedef struct {
    char pad0[0x203E];
    short val;             
    char pad1[0x2084 - 0x2040];
    int idx;               
    char pad2[0x2140 - 0x2088];
    short *ptrs[3];        
    short shorts[4];       
} Gl21130State;

void AudioHeap_ClearCurrentAiBuffer(void) {
  int idx = (*(Gl21130State *)&D_00000000) .idx;
  int i;
  (*(Gl21130State *)&D_00000000) .shorts[idx] = (*(Gl21130State *)&D_00000000) .val;
  for (i = 0; i < 0x580; i++) (*(Gl21130State *)&D_00000000) .ptrs[idx][i] = 0;
}


                                                                         
                                                                  
                                                                   
                                                              
                  
  
                                     
                    
                                                                       
                                                                         
                                                                       
                                                                   
                                                      
                                                                     
                                                                      
                                    
                                                                         
                                                                      
                                                                       
        
                                 
      
  
                                                           
                                                                  
                                                             
                                                                
                                                                     
                                                                    
                                                                    
                                                                   
                                                                     
                                                                           
                                     
                                                                
                                                                  
                                                                    
                                                                     
                                                                     
                                                                
                                                                   
                                                                  
                                                         
                                                                    
                                                               
 







int AudioHeap_ResetStep(void) {
    volatile int ret = 0;
    return ret;
}

                                                                         
                                                                                             
                                                                                
                                                                                   
                                                                               
                                                                                   
                                                                                        
                                                                                   
                                                                                 
                                                                                   
                                                                                      
                                                                                  
                                                                                                 
typedef struct { int a; int b; char p8[0xC]; } gl_21498_Buf;
typedef struct { unsigned a:4, b:2, c:2, len:24; } gl_21498_Bits;
typedef struct {
    unsigned char b0, b1, b2, b3, b4;
    signed char b5;
    unsigned short h6;
    short h8, hA, hC, hE, h10, h12;
    int w14, w18, w1C, w20, w24;
    int w28, w2C, w30, w34;
    char p38[4];
    gl_21498_Buf sub[5];
    gl_21498_Buf sub2[4];
    char pF0[0x10];
    int w100, w104, w108, w10C;
    gl_21498_Bits *p110;
    float f114;
    gl_21498_Bits bits;
    int w11C;
    int *p120;
    char p124[4];
    int w128, w12C, w130;
    char p134[0x158 - 0x134];
} gl_21498_Slot;
typedef struct {
    unsigned char b0, b1;
    unsigned short h2, h4, h6, h8;
    signed char bA;
    char pB;
    unsigned short hC;
    short hE, h10;
} gl_21498_Src;
typedef struct {
    int w0;
    unsigned char b4, b5, b6, b7;
    gl_21498_Src *src;
    int wC, w10;
    unsigned short h14;
    char p16[2];
    int w18, w1C, w20, w24, w28, w2C, w30, w34;
} gl_21498_Rec;
typedef struct {
    char p0;
    signed char nslots;
    unsigned short h2;
    unsigned short h4;
    char p6[0x18 - 6];
    gl_21498_Slot slots[11];
    char p1F50[0x1034 - 0x18 - 11 * 0x158];
    int w1034;
    char p1038[0x1E0C - 0x1038];
    int w1E0C;
    char p1E10[0x2034 - 0x1E10];
    short h2034;
    unsigned short h2036;
    unsigned short h2038;
    short h203A, h203C, h203E, n2040, h2042, h2044, h2046, n2048;
    char p204A[2];
    float f204C, f2050, f2054, f2058, f205C;
    int w2060, w2064;
    char p2068[4];
    int w206C;
    int count;
    short h2074;
    char p2076[0x2088 - 0x2076];
    int a2088[2];
    char p2090[0x2138 - 0x2090];
    float f2138;
    int w213C;
    char p2140[0x2170 - 0x2140];
    int w2170;
    char p2174[4];
    int w2178, w217C;
    char p2180[0x2198 - 0x2180];
    char tbl2198[4];
    char p219C[0x2BE0 - 0x219C];
    int g2BE0[4];
    int g2BF0[2];
    int g2BF8[3];
    int g2C04[3];
    char p2C10[0x2CF1 - 0x2C10];
    unsigned char b2CF1;
    char p2CF2[0x2CF8 - 0x2CF2];
    int w2CF8, w2CFC;
    char recs2D00[8][0x160];
} gl_21498_GS;
extern gl_21498_GS gAudioContext_345c0_21498;
extern gl_21498_Rec D_1cc10_21498[];
extern char gAudioHeapInitSizes_1cdd0_21498[];
extern char D_sym1_21498[];

extern void gl_ref_0003408C();
extern void gl_ref_00033D20();
extern void gl_func_00000000_21498v();

void AudioHeap_Init(void) {
    int v;
    int ret;
    gl_21498_Src *src;
    gl_21498_Slot *r;
    int sum0, sum1, sum;
    int v1, t1, a2;
    int i;
    int j, n;
    gl_21498_Rec *rec;
    int a1, a3;
    int na;

    rec = &D_1cc10_21498[gAudioContext_345c0_21498 .b2CF1];
    gAudioContext_345c0_21498 .w1E0C = 0;
    gAudioContext_345c0_21498 .h2036 = rec->w0;
    ret = gl_func_00000000 (gAudioContext_345c0_21498 .h2036);
    gAudioContext_345c0_21498 .h2038 = ret;
    v1 = gAudioContext_345c0_21498 .h2036;
    t1 = gAudioContext_345c0_21498 .w213C;
    gAudioContext_345c0_21498 .h203A = (v1 / t1 + 15) & 0xFFF0;
    a2 = gAudioContext_345c0_21498 .h203A;
    gAudioContext_345c0_21498 .h203E = a2 - 16;
    gAudioContext_345c0_21498 .n2040 = (a2 + 16) / 208 + 1;
    a3 = gAudioContext_345c0_21498 .n2040;
    gAudioContext_345c0_21498 .h203C = a2 + 16;
    gAudioContext_345c0_21498 .h2042 = (a2 / a3) & ~7;
    a1 = gAudioContext_345c0_21498 .h2042;
    gAudioContext_345c0_21498 .h2044 = a1 + 8;
    gAudioContext_345c0_21498 .h2046 = a1 - 8;
    gAudioContext_345c0_21498 .f204C = 32000.0f / (float)v1;
    gAudioContext_345c0_21498 .f2054 = 0.00390625f / (float)a3;
    gAudioContext_345c0_21498 .f2058 = (float)a3 * 0.25f;
    gAudioContext_345c0_21498 .f2050 = 1.0f / (float)a3;
    gAudioContext_345c0_21498 .w2060 = rec->wC;
    gAudioContext_345c0_21498 .w2064 = rec->w10;
    gAudioContext_345c0_21498 .count = rec->b5;
    gAudioContext_345c0_21498 .n2048 = rec->b6;
    if (gAudioContext_345c0_21498 .n2048 >= 5) {
        gAudioContext_345c0_21498 .n2048 = 4;
    }
    gAudioContext_345c0_21498 .h2 = rec->h14;
    gAudioContext_345c0_21498 .h2074 = (unsigned int)((float)a3 * *(float *)(D_sym1_21498 + 0xE90 ) / *(short *)&((AudioHeapInitSizes *)gAudioHeapInitSizes_1cdd0_21498)->tatumsPerBeat / gAudioContext_345c0_21498 .f2138);  
    gAudioContext_345c0_21498 .f205C = (float)t1 * (float)a3 / (float)(unsigned int)gAudioContext_345c0_21498 .h2038 / gAudioContext_345c0_21498 .h2074;
    gAudioContext_345c0_21498 .h2034 = rec->b4;
    n = gAudioContext_345c0_21498 .h2034;
    gAudioContext_345c0_21498 .h203A = a2 * n;
    gAudioContext_345c0_21498 .h203C = gAudioContext_345c0_21498 .h203C * n;
    gAudioContext_345c0_21498 .h203E = gAudioContext_345c0_21498 .h203E * n;
    gAudioContext_345c0_21498 .n2040 = a3 * n;
    if (n >= 2) {
        gAudioContext_345c0_21498 .h203C -= 16;
    }
    gAudioContext_345c0_21498 .w206C = gAudioContext_345c0_21498 .count * 16 * gAudioContext_345c0_21498 .n2040 + rec->b7 * 24 + 320;
    sum0 = rec->w18 + rec->w1C + rec->w20 + 16;
    sum1 = rec->w24 + rec->w28 + rec->w2C + 16;
    sum = sum0 + sum1;
    gAudioContext_345c0_21498 .g2BE0[0] = ret = gAudioContext_345c0_21498 .w2170 - sum - 256;
    gAudioContext_345c0_21498 .g2BE0[3] = sum;
    gl_func_00000000_21498v (gAudioContext_345c0_21498 .g2BE0);
    gAudioContext_345c0_21498 .g2BF0[0] = sum0;
    gAudioContext_345c0_21498 .g2BF0[1] = sum1;
    gl_func_00000000_21498v (gAudioContext_345c0_21498 .g2BF0);
    gAudioContext_345c0_21498 .g2BF8[0] = rec->w18;
    gAudioContext_345c0_21498 .g2BF8[1] = rec->w1C;
    gAudioContext_345c0_21498 .g2BF8[2] = rec->w20;
    gl_func_00000000_21498v (gAudioContext_345c0_21498 .g2BF8);
    gAudioContext_345c0_21498 .g2C04[0] = rec->w24;
    gAudioContext_345c0_21498 .g2C04[1] = rec->w28;
    gAudioContext_345c0_21498 .g2C04[2] = rec->w2C;
    gl_func_00000000_21498v (gAudioContext_345c0_21498 .g2C04);
    if (gAudioContext_345c0_21498 .w2178 != 0) {
        gAudioContext_345c0_21498 .w217C = gAudioContext_345c0_21498 .w2178;
    }
    gl_ref_0003408C();
    gAudioContext_345c0_21498 .w2CFC = gl_func_00000000 (gAudioContext_345c0_21498 .tbl2198, gAudioContext_345c0_21498 .count * 208u);
    gl_func_00000000_21498v ();
    gl_func_00000000_21498v ();
    for (i = 0; i != 2; i++) {
        gAudioContext_345c0_21498 .a2088[i] = gl_func_00000000 (gAudioContext_345c0_21498 .tbl2198, gAudioContext_345c0_21498 .w206C * 8);
    }
    gAudioContext_345c0_21498 .w2CF8 = gl_func_00000000 (gAudioContext_345c0_21498 .tbl2198, 1024);
    gl_ref_00033D20();
    for (i = 0; i < 3; i++) {
        gAudioContext_345c0_21498 .slots[i].b1 = 0;
    }
    gAudioContext_345c0_21498 .nslots = rec->b7;
    for (i = 0; i < gAudioContext_345c0_21498 .nslots; i++) {
        src = &rec->src[i];
        r = &gAudioContext_345c0_21498 .slots[i];
        gAudioContext_345c0_21498 .slots[i].b4 = src->b0;
        gAudioContext_345c0_21498 .slots[i].h6 = src->b1 << 6;
        gAudioContext_345c0_21498 .slots[i].h6 /= gAudioContext_345c0_21498 .slots[i].b4;
        gAudioContext_345c0_21498 .slots[i].hC = src->h2;
        gAudioContext_345c0_21498 .slots[i].hA = src->h4;
        gAudioContext_345c0_21498 .slots[i].h10 = src->h6;
        gAudioContext_345c0_21498 .slots[i].h12 = src->h8;
        gAudioContext_345c0_21498 .slots[i].b5 = src->bA;
        gAudioContext_345c0_21498 .slots[i].h8 = src->hC;
        gAudioContext_345c0_21498 .slots[i].b1 = 8;
        r->w20 = gl_func_00000000 (gAudioContext_345c0_21498 .tbl2198, gAudioContext_345c0_21498 .slots[i].h6 * 2);
        r->w24 = gl_func_00000000 (gAudioContext_345c0_21498 .tbl2198, r->h6 * 2);
        na = r->h6;
        r->w14 = 0;
        r->w18 = 0;
        r->b3 = 0;
        r->b2 = 2;
        r->b0 = 1;
        r->p110 = &gAudioContext_345c0_21498 .slots[i].bits;
        r->w1C = na;
        r->p120 = &gAudioContext_345c0_21498 .slots[i].w128;
        r->f114 = 1.0f;
        r->bits.a = 4;
        r->bits.b = 0;
        r->bits.len = na * 2;
        r->w128 = 0;
        r->w12C = r->h6;
        r->w11C = r->w20;
        r->w130 = 1;
        if (r->b4 != 1) {
            r->hE = 0x8000 / r->b4;
            r->w28 = gl_func_00000000 (gAudioContext_345c0_21498 .tbl2198, 32);
            r->w2C = gl_func_00000000 (gAudioContext_345c0_21498 .tbl2198, 32);
            r->w30 = gl_func_00000000 (gAudioContext_345c0_21498 .tbl2198, 32);
            r->w34 = gl_func_00000000 (gAudioContext_345c0_21498 .tbl2198, 32);
            for (j = 0; j < gAudioContext_345c0_21498 .n2040; j++) {
                v = gl_func_00000000 (gAudioContext_345c0_21498 .tbl2198, 832);
                r->sub[j].a = v;
                r->sub[j].b = v + 416;
                v = gl_func_00000000 (gAudioContext_345c0_21498 .tbl2198, 832);
                r->sub2[j].a = v;
                r->sub2[j].b = v + 416;
            }
        }
        if (src->hE != 0) {
            r->w108 = gl_func_00000000 (gAudioContext_345c0_21498 .tbl2198, 32);
            r->w100 = v = gl_func_00000000 (gAudioContext_345c0_21498 .tbl2198, 16);
            gl_func_00000000_21498v (v, src->hE);
        } else {
            r->w100 = 0;
        }
        if (src->h10 != 0) {
            r->w10C = gl_func_00000000 (gAudioContext_345c0_21498 .tbl2198, 32);
            r->w104 = v = gl_func_00000000 (gAudioContext_345c0_21498 .tbl2198, 16);
            gl_func_00000000_21498v (v, src->h10);
        } else {
            r->w104 = 0;
        }
    }
    gl_func_00000000_21498v ();
    for (j = 0; j < gAudioContext_345c0_21498 .n2048; j++) {
        gl_func_00000000_21498v (j);
        gl_func_00000000_21498v (gAudioContext_345c0_21498 .recs2D00[j]);
    }
    gl_func_00000000_21498v (rec->w30, rec->w34);
    gl_func_00000000_21498v (gAudioContext_345c0_21498 .count);
    gAudioContext_345c0_21498 .w1034 = 0;
    gl_func_00000000_21498v ();
    gAudioContext_345c0_21498 .h4 = 0x1000;
    gl_func_00000000_21498v ();
    v = gl_func_00000000 (1);  
    gl_func_00000000_21498v ();  
    gl_func_00000000_21498v (v);  
}


 























extern char gAudioContext_21d2c_tbl[];
extern char gAudioContext_21d2c_n[];

int AudioHeap_SearchPermanentCache(int a0, int a1) {  
    int i = 0;
    int n = ((AudioContext *)gAudioContext_21d2c_n)->permanentPool.numEntries;
    char *cursor;  
    int b = a1;
    a1 = 0;
    while (0) { a0 += 1; }
    if (n > 0) {
        cursor = (i = 0) + gAudioContext_21d2c_tbl;
        do {
            i++;
            if (a0 == (&((AudioContext *)cursor)->permanentCache[0]) ->tableType && b == (&((AudioContext *)cursor)->permanentCache[0]) ->id) {
                return *(int *)&(&((AudioContext *)cursor)->permanentCache[0]) ->ramAddr;
            }
            n = ((AudioContext *)gAudioContext_21d2c_n)->permanentPool.numEntries;
            cursor += sizeof(AudioCacheEntry);
        } while (i < n);
    }
    return 0;
}


 













extern int func_00000000();
 


int AudioHeap_AllocPermanent(int a0, int a1, int a2) {
    AudioContext *base = (AudioContext *)&D_00000000 ;
    int count = (*(AudioContext *)&D_00000000 ) .permanentPool.numEntries;
    int v0 = func_00000000 (&base->permanentPool, a2);
    base->permanentCache[count].ramAddr = (u8 *)v0;
    if (v0 == 0) {
        return 0;
    }
    base->permanentCache[count].tableType = (short)a0;
    base->permanentCache[count].id = (short)a1;
    base->permanentCache[count].size = a2;



}

 








extern void *gl_func_000365AC();
void *aud_AllocSampleCacheTemporary(int a0, int a1, int a2, signed char a3) {
    char *v0 = (char *)gl_func_000365AC(a0);
    if (v0 == 0) goto end_zero;
    ((SampleCacheEntry *)v0)->sampleBankId = a1;
    ((SampleCacheEntry *)v0)->sampleAddr = (void *)a2;
    ((SampleCacheEntry *)v0)->origMedium = a3;
    return ((SampleCacheEntry *)v0)->allocatedAddr;
end_zero:
    return 0;
}

 

extern int gl_ref_00036A48();
int *aud_AllocSampleCachePersistent(int a0, int a1, int a2, signed char a3) {
    int *v0 = (int*)gl_ref_00036A48(a0);
    if (v0 == 0) goto end_zero;
    ((SampleCacheEntry *)v0)->sampleBankId = a1;
    ((SampleCacheEntry *)v0)->sampleAddr = (void *)a2;
    ((SampleCacheEntry *)v0)->origMedium = a3;
    return (int *)((SampleCacheEntry *)v0)->allocatedAddr;
end_zero:
    return 0;
}

 











extern int func_00000000();
void AudioHeap_InitSampleCaches(int a0, int a1) {
    int r0 = func_00000000 (&(*(AudioContext *)&D_00000000 ) .miscPool, a0);
    if (r0 == 0) {
        (*(AudioContext *)&D_00000000 ) .persistentSampleCache.pool.size = 0;
    } else {
        func_00000000 (&(*(AudioContext *)&D_00000000 ) .persistentSampleCache.pool, r0, a0);
    }
    {
        int r1 = func_00000000 (&(*(AudioContext *)&D_00000000 ) .miscPool, a1);
        if (r1 == 0) {
            (*(AudioContext *)&D_00000000 ) .temporarySampleCache.pool.size = 0;
        } else {
            func_00000000 (&(*(AudioContext *)&D_00000000 ) .temporarySampleCache.pool, r1, a1);
        }
    }
    (*(AudioContext *)&D_00000000 ) .persistentSampleCache.numEntries = 0;
    (*(AudioContext *)&D_00000000 ) .temporarySampleCache.numEntries = 0;
}

                                                                                              
                                                                  
                                                         
  
                                                              
                         
                                                                   
                                                                       
                                                                      
                              
                                                                        
                                                                        
                     
                                                                        
                    
        
                                          
      
  
                                                                   
                                                                 
                                                                    
                                                                  
                                                              
                                                              
                                                                   
                                                                          
                                                       
                                                               
                                                                         
                                                                            
                                                                     
                                                                    
                                                                    
                                                       
                                                                 
                                     
 



extern int gl_func_00000000();
extern int D_00000000;
 










 





 

extern AudioContext gAudioContext_21F40;

extern int gl_func_00036844();



SampleCacheEntry *AudioHeap_AllocTemporarySampleCacheEntry(u32 size) {
    u8 *allocAfter;
    u8 *allocBefore;
    void *ramAddr;
    s32 index;
    s32 i;
    SampleCacheEntry *entry;
    AudioPreloadReq *preload;
    AudioSampleCache *cache;
    u8 *startRamAddr;
    u8 *endRamAddr;

    cache = &gAudioContext_21F40 .temporarySampleCache;
    allocBefore = cache->pool.curRamAddr;
    ramAddr = (void *)gl_func_00000000  (&cache->pool, size);
    if (ramAddr == ((void*)0) ) {
        u8 *old = cache->pool.curRamAddr;

        cache->pool.curRamAddr = cache->pool.startRamAddr;
        ramAddr = (void *)gl_func_00000000  (&cache->pool, size);
        if (ramAddr == ((void*)0) ) {
            cache->pool.curRamAddr = old;
            return ((void*)0) ;
        }
        allocBefore = cache->pool.startRamAddr;
    }

    allocAfter = cache->pool.curRamAddr;

    index = -1;
    for (i = 0; i < gAudioContext_21F40 .preloadSampleStackTop; i++) {
        preload = &gAudioContext_21F40 .preloadSampleStack[i];
        if (!preload->isFree) {
            startRamAddr = preload->ramAddr;
            endRamAddr = preload->ramAddr + preload->sample->size - 1;

            if (endRamAddr < allocBefore && startRamAddr < allocBefore) {
                continue;
            }
            if (endRamAddr >= allocAfter && startRamAddr >= allocAfter) {
                continue;
            }

            preload->isFree = 1;
        }
    }

    for (i = 0; i < cache->numEntries; i++) {
        if (!cache->entries[i].inUse) {
            continue;
        }

        startRamAddr = cache->entries[i].allocatedAddr;
        endRamAddr = startRamAddr + cache->entries[i].size - 1;

        if (endRamAddr < allocBefore && startRamAddr < allocBefore) {
            continue;
        }
        if (endRamAddr >= allocAfter && startRamAddr >= allocAfter) {
            continue;
        }

        gl_func_00036844 (&cache->entries[i]);
        if (index == -1) {
            index = i;
        }
    }

    if (index == -1) {
        index = cache->numEntries++;
    }

    entry = &cache->entries[index];
    entry->inUse = 1;
    entry->allocatedAddr = ramAddr;
    entry->size = size;

    return entry;
}




                                                                                       
                                                                 
                                                                    
                                                 
  
                                                    
                       
                                                                     
                            
                                                                      
                              
                          
           
                           
                                       
                                              
                                              
                                             
                       
                                                                     
      
  
                                                                     
                                                                     
                                                                     
                                                                    
                                                                      
                                                                   
                                                                    
                                                                      
                                                                   
                                                                  
                                                                    
                                                                                            
                                                                 
                                                               
                                                                  
                                                        
 


 




extern int gl_func_00036A04();
 

extern AudioContext gAudioContext_221D8;

void AudioHeap_DiscardSampleCacheEntry(SampleCacheEntry *entry) {
    s32 fontId;
    s32 numFonts;
    s32 sampleBankId1;
    s32 sampleBankId2;

    numFonts = gAudioContext_221D8.soundFontTable->header.numEntries;
    for (fontId = 0; fontId < numFonts; fontId++) {
        sampleBankId1 = gAudioContext_221D8.soundFontList[fontId].sampleBankId1;
        sampleBankId2 = gAudioContext_221D8.soundFontList[fontId].sampleBankId2;
        if (!(((sampleBankId1 != 0xFF) && (entry->sampleBankId == sampleBankId1)) ||
              ((sampleBankId2 != 0xFF) && (entry->sampleBankId == sampleBankId2)) || entry->sampleBankId == 0)) {
            continue;
        }
        {
            if (gl_func_00000000 (1, 2, fontId) != 0) {
                if (gl_func_00000000 (fontId) != 0) {
                    Drum *drum;
                    Instrument *inst;
                    s32 instId;
                    s32 drumId;

                    for (instId = 0; instId < gAudioContext_221D8.soundFontList[fontId].numInstruments; instId++) {
                        inst = (Instrument *)gl_func_00000000 (fontId, instId);
                        if (inst != ((void*)0) ) {
                            if (inst->normalRangeLo != 0) {
                                gl_func_00036A04(entry, inst->lowPitchTunedSample.sample);
                            }
                            if (inst->normalRangeHi != 0x7F) {
                                gl_func_00036A04(entry, inst->highPitchTunedSample.sample);
                            }
                            gl_func_00036A04(entry, inst->normalPitchTunedSample.sample);
                        }
                    }

                    for (drumId = 0; drumId < gAudioContext_221D8.soundFontList[fontId].numDrums; drumId++) {
                        drum = (Drum *)gl_func_00000000 (fontId, drumId);
                        if (drum != ((void*)0) ) {
                            gl_func_00036A04(entry, drum->tunedSample.sample);
                        }
                    }
                }
            }
        }
    }
}

 




typedef struct {
    unsigned char hi : 4;
    unsigned char f : 2;
    unsigned char lo : 2;
} B22398;
void AudioHeap_UnapplySampleCache(SampleCacheEntry *entry, Sample *sample) {
    if (sample != ((void*)0) ) {
        if (sample->sampleAddr == entry->allocatedAddr) {
            sample->sampleAddr = entry->sampleAddr;
            ((B22398 *)sample)->f = entry->origMedium;  
        }
    }
}

                                                                                             
                                                                  
                                                                   
                                                                                                       
  
                                                               
                                                                       
                                                                   
                                                                       
                                                                      
                                                                       
                                                                     
                                                                      
                                                                   
                   
      
  
                                                                  
                                                                    
                                                                    
                                                                     
                                                                     
                                                                
                                                                    
                                                      
                                                                                                        
                                                                   
                                                                                                      
                                                                   
                                                                 
                                                               
                                                                  
                                                                  
                                                                  
                                                                
extern int gl_func_00000000();
void *AudioHeap_AllocPersistentSampleCacheEntry(int arg) {
    AudioContext *D = (AudioContext *)&D_00000000 ;  
    AudioSampleCache *cache = &D->persistentSampleCache;
    int r = gl_func_00000000 (&cache->pool, arg);
    if (r == 0) {
        return 0;
    }
    {
        SampleCacheEntry *e = &cache->entries[D->persistentSampleCache.numEntries];
        e->inUse = 1;
        e->allocatedAddr = (u8 *)r;
        e->size = arg;
        D->persistentSampleCache.numEntries = D->persistentSampleCache.numEntries + 1;
        return e;
    }
}

                                                                               
                                                                   
                                                                  
                                                                               
                                                                     
                                                                
                                                                  
                                                                    
                                                                   
                                                                    
                                                                 
 




 

extern AudioContext gAudioContext_22464T;

extern int gl_func_00036A04();







 
 
 
 
 
 
 
 
 
 
 
 

void AudioHeap_DiscardSampleCaches(void) {
    s32 fontId;
    s32 j;
    s32 numFonts;
    Drum *drum;
    Instrument *inst;
    s32 instId;
    s32 drumId;
    SampleCacheEntry *entry;
    s32 sampleBankId1;
    s32 sampleBankId2;

    numFonts = gAudioContext_22464T .soundFontTable->header.numEntries;
    for (fontId = 0; fontId < numFonts; fontId++) {
        sampleBankId1 = gAudioContext_22464T .soundFontList[fontId].sampleBankId1;
        sampleBankId2 = gAudioContext_22464T .soundFontList[fontId].sampleBankId2;
        if ((((u32)sampleBankId1 != 0xFF) || (sampleBankId2 != 0xFF)) &&
            ((void *)gl_func_00000000  (1, 3, fontId) != ((void*)0) ) && gl_func_00000000  (fontId)) {
            for (j = 0; j < gAudioContext_22464T .persistentSampleCache.numEntries; j++) {
                entry = &gAudioContext_22464T .persistentSampleCache.entries[j];
                if ((entry->sampleBankId != sampleBankId1) && (entry->sampleBankId != sampleBankId2) &&
                    (entry->sampleBankId != 0)) {
                    break;
                }
                for (instId = 0; instId < gAudioContext_22464T .soundFontList[ fontId].numInstruments; instId++) {         inst = (Instrument *)gl_func_00000000  ( fontId, instId);         if (inst != ((void*)0) ) {             if (inst->normalRangeLo != 0) { gl_func_00036A04 (entry, inst->lowPitchTunedSample.sample); }             if (inst->normalRangeHi != 0x7F) { gl_func_00036A04 (entry, inst->highPitchTunedSample.sample); }             gl_func_00036A04 (entry, inst->normalPitchTunedSample.sample);         }     }     for (drumId = 0; drumId < gAudioContext_22464T .soundFontList[ fontId].numDrums; drumId++) {         drum = (Drum *)gl_func_00000000  ( fontId, drumId);         if (drum != ((void*)0) ) { gl_func_00036A04 (entry, drum->tunedSample.sample); }     } 
            }
        }
    }
}









 


 


 














extern int gAudioContext_345c0;

void AudioLoad_DecreaseSampleDmaTtls(void) {
    unsigned int i;
    unsigned int cd;
    unsigned char *rec;

    for (i = 0; i < (*(AudioContext *)&gAudioContext_345c0) .sampleDmaListSize1; i++) {
        rec = (unsigned char *)(i * 16); rec += (unsigned int)(*(AudioContext *)&gAudioContext_345c0) .sampleDmas;
        cd = rec[14];
        if (cd != 0) {
            rec[14] = cd - 1;
            if (rec[14] == 0) {
                rec[13] = (*(AudioContext *)&gAudioContext_345c0) .sampleDmaReuseQueue1WrPos;
                (*(AudioContext *)&gAudioContext_345c0) .sampleDmaReuseQueue1[(*(AudioContext *)&gAudioContext_345c0) .sampleDmaReuseQueue1WrPos] = i;
                (*(AudioContext *)&gAudioContext_345c0) .sampleDmaReuseQueue1WrPos += 1;
            }
        }
    }
    for (i = (*(AudioContext *)&gAudioContext_345c0) .sampleDmaListSize1; i < (*(AudioContext *)&gAudioContext_345c0) .sampleDmaCount; i++) {
        rec = (unsigned char *)(i * 16); rec += (unsigned int)(*(AudioContext *)&gAudioContext_345c0) .sampleDmas;
        cd = rec[14];
        if (cd != 0) {
            rec[14] = cd - 1;
            if (rec[14] == 0) {
                rec[13] = (*(AudioContext *)&gAudioContext_345c0) .sampleDmaReuseQueue2WrPos;
                (*(AudioContext *)&gAudioContext_345c0) .sampleDmaReuseQueue2[(*(AudioContext *)&gAudioContext_345c0) .sampleDmaReuseQueue2WrPos] = i;
                (*(AudioContext *)&gAudioContext_345c0) .sampleDmaReuseQueue2WrPos += 1;
            }
        }
    }
    (*(AudioContext *)&gAudioContext_345c0) .unused1E14 = 0;
}


                                                                             
                                                                  
                                                                 
                                                           
  
                                                                               
                   
                                                                      
                                
                                         
        
                                                                       
                              
                                                                        
                                   
                                                                      
                          
                                                                    
                              
                                                                        
          
                                       
        
      
  
                                                                   
                                                                   
                                                                     
                                                                
                                                                                   
                                                                 
                                                                 
                                                                    
                                                                           
                                                              
                                                              
                                                                     
                                                                                           
                                                                  
                                                                  
                                                                
                                                               
                                                            
                                                   
                                                                                      
                                                                            
                                                                         
                                                                         
                                                                          
                                                                     
                                                                            
                                                                            
                                                                              
                                                                            
                                                                               
                                                                            
                                                                                
                                                                              
                                                                                
                                                                       
 








typedef struct { u8 *ramAddr; u32 devAddr; u16 sizeUnused; u16 size; u8 unused; u8 reuseIndex; u8 ttl; } gl_22760_SampleDma;
typedef struct { char pad[0x18]; } gl_22760_MQ;
typedef struct { char pad[0x18]; } gl_22760_IoMesg;
typedef struct {
    char pad0[0x16BC]; gl_22760_MQ curAudioFrameDmaQueue; char pad16d4[0x17D4 - 0x16D4]; gl_22760_IoMesg curAudioFrameDmaIoMsgBuf[64];
    char pad1dd4[0x1E08 - 0x17D4 - 64 * 0x18]; gl_22760_SampleDma *sampleDmas; u32 sampleDmaCount; u32 sampleDmaListSize1; char pad1e14[4];
    u8 sampleDmaReuseQueue1[0x100]; u8 sampleDmaReuseQueue2[0x100];
    u8 sampleDmaReuseQueue1RdPos; u8 sampleDmaReuseQueue2RdPos; u8 sampleDmaReuseQueue1WrPos; u8 sampleDmaReuseQueue2WrPos;
    char pad201c[0x207C - 0x201C]; s32 curAudioFrameDmaCount;
} gl_22760_Ctx;
extern gl_22760_Ctx gAudioContext_22760T;

extern char sStr_SUPERDMA_1AA84[];
extern int gl_ref_00038604();


void *AudioLoad_DmaSampleData(u32 devAddr, u32 size, s32 arg2, u8 *dmaIndexRef, s32 medium) {
    s32 pad1;
    gl_22760_SampleDma *dma;
    s32 hasDma = 0;
    u32 dmaDevAddr;
    u32 pad2;
    u32 dmaIndex;
    u32 transfer;
    s32 bufferPos;
    u32 i;

    if (arg2 != 0 || *dmaIndexRef >= gAudioContext_22760T .sampleDmaListSize1) {
        for (i = gAudioContext_22760T .sampleDmaListSize1; i < gAudioContext_22760T .sampleDmaCount; i++) {
            dma = &gAudioContext_22760T .sampleDmas[i];
            bufferPos = devAddr - dma->devAddr;
            if (0 <= bufferPos && (u32)bufferPos <= dma->size - size) {
                if (dma->ttl == 0 && gAudioContext_22760T .sampleDmaReuseQueue2RdPos != gAudioContext_22760T .sampleDmaReuseQueue2WrPos) {
                    if (dma->reuseIndex != gAudioContext_22760T .sampleDmaReuseQueue2RdPos) {
                        gAudioContext_22760T .sampleDmaReuseQueue2[dma->reuseIndex] =
                            gAudioContext_22760T .sampleDmaReuseQueue2[gAudioContext_22760T .sampleDmaReuseQueue2RdPos];
                        gAudioContext_22760T .sampleDmas[gAudioContext_22760T .sampleDmaReuseQueue2[gAudioContext_22760T .sampleDmaReuseQueue2RdPos]]
                            .reuseIndex = dma->reuseIndex;
                    }
                    gAudioContext_22760T .sampleDmaReuseQueue2RdPos++;
                }
                dma->ttl = 32;
                *dmaIndexRef = (u8)i;
                return &dma->ramAddr[devAddr - dma->devAddr];
            }
        }

        if (arg2 == 0) {
            goto search_short_lived;
        }

        if (gAudioContext_22760T .sampleDmaReuseQueue2RdPos != gAudioContext_22760T .sampleDmaReuseQueue2WrPos && arg2 != 0) {
            dmaIndex = gAudioContext_22760T .sampleDmaReuseQueue2[gAudioContext_22760T .sampleDmaReuseQueue2RdPos];
            gAudioContext_22760T .sampleDmaReuseQueue2RdPos++;
            dma = gAudioContext_22760T .sampleDmas + dmaIndex;
            hasDma = 1;
        }
    } else {
    search_short_lived:
        dma = gAudioContext_22760T .sampleDmas + *dmaIndexRef;
        i = 0;
    again:
        bufferPos = devAddr - dma->devAddr;
        if (0 <= bufferPos && (u32)bufferPos <= dma->size - size) {
            if (dma->ttl == 0) {
                if (dma->reuseIndex != gAudioContext_22760T .sampleDmaReuseQueue1RdPos) {
                    gAudioContext_22760T .sampleDmaReuseQueue1[dma->reuseIndex] =
                        gAudioContext_22760T .sampleDmaReuseQueue1[gAudioContext_22760T .sampleDmaReuseQueue1RdPos];
                    gAudioContext_22760T .sampleDmas[gAudioContext_22760T .sampleDmaReuseQueue1[gAudioContext_22760T .sampleDmaReuseQueue1RdPos]]
                        .reuseIndex = dma->reuseIndex;
                }
                gAudioContext_22760T .sampleDmaReuseQueue1RdPos++;
            }
            dma->ttl = 2;
            return dma->ramAddr + (devAddr - dma->devAddr);
        }
        dma = gAudioContext_22760T .sampleDmas + i++;
        if (i <= gAudioContext_22760T .sampleDmaListSize1) {
            goto again;
        }
    }

    if (!hasDma) {
        if (gAudioContext_22760T .sampleDmaReuseQueue1RdPos == gAudioContext_22760T .sampleDmaReuseQueue1WrPos) {
            return ((void*)0) ;
        }
        dmaIndex = gAudioContext_22760T .sampleDmaReuseQueue1[gAudioContext_22760T .sampleDmaReuseQueue1RdPos++];
        dma = gAudioContext_22760T .sampleDmas + dmaIndex;
        hasDma = 1;
    }

    transfer = dma->size;
    dmaDevAddr = devAddr & ~0xF;
    dma->ttl = 3;
    dma->devAddr = dmaDevAddr;
    dma->sizeUnused = transfer;
    gl_ref_00038604 (&gAudioContext_22760T .curAudioFrameDmaIoMsgBuf[gAudioContext_22760T .curAudioFrameDmaCount++], 0, 0,
                  dmaDevAddr, dma->ramAddr, transfer, &gAudioContext_22760T .curAudioFrameDmaQueue, medium, sStr_SUPERDMA_1AA84);
    *dmaIndexRef = dmaIndex;
    return (devAddr - dmaDevAddr) + dma->ramAddr;
}



 







typedef struct { u8 *ramAddr; u32 devAddr; u16 sizeUnused; u16 size; u8 unused; u8 reuseIndex; u8 ttl; } gl_22A9C_SampleDma;
typedef struct { char pad[0x10]; } gl_22A9C_Pool;
typedef struct {
    char pad0[0x1E08]; gl_22A9C_SampleDma *sampleDmas; u32 sampleDmaCount; u32 sampleDmaListSize1; char pad1e14[4];
    u8 sampleDmaReuseQueue1[0x100]; u8 sampleDmaReuseQueue2[0x100];
    u8 sampleDmaReuseQueue1RdPos; u8 sampleDmaReuseQueue2RdPos; u8 sampleDmaReuseQueue1WrPos; u8 sampleDmaReuseQueue2WrPos;
    char pad201c[0x2034 - 0x201C]; s16 specUnk4; char pad2036[0x2060 - 0x2036];
    s32 sampleDmaBufSize1; s32 sampleDmaBufSize2; s32 sampleDmaBufSize; char pad206c[4]; s32 numNotes;
    char pad2074[0x2198 - 0x2074]; gl_22A9C_Pool miscPool;
} gl_22A9C_Ctx;





void AudioLoad_InitSampleDmaBuffers(s32 numNotes) {
    gl_22A9C_SampleDma *dma;
    s32 i;
    s32 t2;
    s32 j;

    (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaBufSize = (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaBufSize1;
    (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmas = (void *)gl_func_00000000  (&(*(gl_22A9C_Ctx *)&D_00000000 ) .miscPool, (*(gl_22A9C_Ctx *)&D_00000000 ) .specUnk4 * ((*(gl_22A9C_Ctx *)&D_00000000 ) .numNotes * 4 * sizeof(gl_22A9C_SampleDma)));
    for (i = 0; i < (*(gl_22A9C_Ctx *)&D_00000000 ) .specUnk4 * ((*(gl_22A9C_Ctx *)&D_00000000 ) .numNotes * 3); i++) {
        dma = &(*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmas[(*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaCount];
        dma->ramAddr = (u8 *)gl_func_00000000  (&(*(gl_22A9C_Ctx *)&D_00000000 ) .miscPool, (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaBufSize);
        if (dma->ramAddr == ((void*)0) ) {
            break;
        } else {
            gl_func_00000000  (dma->ramAddr, (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaBufSize);
            dma->size = (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaBufSize;
            dma->devAddr = 0;
            dma->sizeUnused = 0;
            dma->unused = 0;
            dma->ttl = 0;
            (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaCount++;
        }
    }

    for (i = 0; (u32)i < (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaCount; i++) {
        (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaReuseQueue1[i] = i;
        (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmas[i].reuseIndex = i;
    }

    for (i = (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaCount; i < 0x100; i++) {
        (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaReuseQueue1[i] = 0;
    }

    (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaReuseQueue1RdPos = 0;
    (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaReuseQueue1WrPos = (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaCount;
    (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaListSize1 = (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaCount;
    (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaBufSize = (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaBufSize2;

    for (j = 0; j < (*(gl_22A9C_Ctx *)&D_00000000 ) .numNotes; j++) {
        dma = &(*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmas[(*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaCount];
        dma->ramAddr = (u8 *)gl_func_00000000  (&(*(gl_22A9C_Ctx *)&D_00000000 ) .miscPool, (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaBufSize);
        if (dma->ramAddr == ((void*)0) ) {
            break;
        } else {
            gl_func_00000000  (dma->ramAddr, (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaBufSize);
            dma->size = (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaBufSize;
            dma->devAddr = 0U;
            dma->sizeUnused = 0;
            dma->unused = 0;
            dma->ttl = 0;
            (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaCount++;
        }
    }

    for (i = (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaListSize1; (u32)i < (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaCount; i++) {
        (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaReuseQueue2[i - (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaListSize1] = i;
        (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmas[i].reuseIndex = i - (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaListSize1;
    }

    for (i = (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaCount; i < 0x100; i++) {
        (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaReuseQueue2[i] = (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaListSize1;
    }

    (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaReuseQueue2RdPos = 0;
    (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaReuseQueue2WrPos = (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaCount - (*(gl_22A9C_Ctx *)&D_00000000 ) .sampleDmaListSize1;
}





                                                                                
                                                                  
                                                             
                                             
  
                                                
                         
                                                                      
                                                                  
                                                                       
                                                
                                
                                                                       
        
                                                                           
      
  
                                                                    
                                                                      
                                                                      
                                                            
                                                                     
                                                                   
                                                                     
                                                                   
                                                         
                                           
                                                                   
                                                                 
                                                                     
                                                             
                                                                
                                                                    
                                                                
                                                                     
                                                                 
                                  
                                                                        
                                                                        
                                                                         
                                                                      
extern int D_00000000;
extern int gl_ref_00038174();
int AudioLoad_IsFontLoadComplete(int a0) {
    char *st = (char *)&D_00000000  + 0x2C40;
    int r;
    if (a0 == 0xFF) {
        return 1;
    }
    if (*(unsigned char *)(st + a0) >= 2) {
        return 1;
    }
    r = gl_ref_00038174(1, a0);
    if (*(unsigned char *)(st + r) >= 2) {
        return 1;
    }
    return 0;
}

                                                                               
                                                                  
                                                                         
                                                        
  
                                               
                         
                                                                      
                                                                  
                                                                       
                                                
                                
                                                                       
        
                                                                           
      
  
                                                                                  
                                                                     
                                                             
                                                                      
                                                           
                                                                                  
                                                                  
                                                                   
                                                                       
                                                                              
                                                                 
                                                                
                                                                     
                                                                     
                                                                
                                                                                       
                                                                           
                                             
extern int D_00000000;
extern int gl_ref_00038174();
int AudioLoad_IsSeqLoadComplete(int a0) {
    char *st = (char *)&D_00000000  + 0x2C70;
    int r;
    if (a0 == 0xFF) {
        return 1;
    }
    if (*(unsigned char *)(st + a0) >= 2) {
        return 1;
    }
    r = gl_ref_00038174(0, a0);
    if (*(unsigned char *)(st + r) >= 2) {
        return 1;
    }
    return 0;
}

                                                                                      
                                                                         
                                                                                             
                                            
                                                                                       
                                                                           
                                             
int AudioLoad_IsSampleLoadComplete(int a0) {
    char *st = (char *)&D_00000000  + 0x2C10;
    int r;
    if (a0 == 0xFF) {
        return 1;
    }
    if (*(unsigned char *)(st + a0) >= 2) {
        return 1;
    }
    r = gl_ref_00038174(2, a0);
    if (*(unsigned char *)(st + r) >= 2) {
        return 1;
    }
    return 0;
}

void AudioLoad_SetFontLoadStatus(int a0, int a1) {
    if (a0 != 0xFF) {
        if (((AudioContext *)&D_00000000 )->fontLoadStatus[a0] != 5) {
            ((AudioContext *)&D_00000000 )->fontLoadStatus[a0] = a1;
        }
    }
}

void AudioLoad_SetSeqLoadStatus(int a0, int a1) {
    if (a0 != 0xFF) {
        if (((AudioContext *)&D_00000000 )->seqLoadStatus[a0] != 5) {
            ((AudioContext *)&D_00000000 )->seqLoadStatus[a0] = a1;
        }
    }
}

void AudioLoad_SetSampleFontLoadStatus(int a0, int a1) {
    if (a0 != 0xFF) {
        if (((AudioContext *)&D_00000000 )->sampleFontLoadStatus[a0] != 5) {
            ((AudioContext *)&D_00000000 )->sampleFontLoadStatus[a0] = a1;
        }
    }
}

 









void AudioLoad_InitTable(AudioTable *a0, int a1, unsigned short a2) {
    int i = 0;
    short n = a0->header.numEntries;
    AudioTableEntry *cursor;  
    a0->header.unkMediumParam = a2;
    a0->header.romAddr = a1;
    if (n > 0) {
        i = 0;
        cursor = (AudioTableEntry *)a0;
        do {
            i++;
            if (cursor[1].size != 0 && cursor[1].medium == 2) {  
                cursor[1].romAddr += a1;
                n = a0->header.numEntries;
            }
            cursor++;
        } while (i < n);
    }
}

 











extern int gl_ref_00037EA4();
typedef struct { char p0[0x2028]; unsigned char *buf; unsigned short lim; } gl_22FC0_GS;
extern gl_22FC0_GS gAudioContext_22FC0;

int AudioLoad_SyncLoadSeqFonts(int idx, int *out) {
    int cur;
    int cnt;
    int last;
    int ret;

    if (idx >= gAudioContext_22FC0 .lim) {
        return 0;
    }
    last = 0xFF;
    cur = ((unsigned short *)gAudioContext_22FC0 .buf)[idx];
    cnt = *(cur + gAudioContext_22FC0 .buf);
    cur++;
    while (cnt > 0) {
        last = gAudioContext_22FC0 .buf[cur++];
        ret = gl_ref_00037EA4(last);
        cnt--;
    }
    *out = last;
    return ret;
}



 










extern int gl_func_00000000();
extern int gl_func_00037D98();
void AudioLoad_SyncLoadSeqParts(int a0, int a1) {
    int local[2];
    if (a0 < (int)*(unsigned short *)&((AudioContext *)&D_00000000 )->numSequences) {
        if (a1 & 2) {
            gl_func_00000000 (a0, local);
        }
        if (a1 & 1) {
            gl_func_00037D98(a0);
        }
    }
}

 





 

extern void *gl_230d0_allocSampleCache(u32 size, s32 fontId, void *sampleAddr, s8 medium);
extern void gl_230d0_syncDmaUnkMedium(u32 devAddr, u8 *addr, u32 size, s32 unkMediumParam);
extern void gl_230d0_syncDma(u32 devAddr, u8 *addr, u32 size, s32 medium);




s32 AudioLoad_SyncLoadSample(Sample *sample, s32 fontId) {
    void *sampleAddr;

    if (sample->isRelocated == 1) {
        if (sample->medium != 0) {
            sampleAddr = gl_230d0_allocSampleCache (sample->size, fontId, (void *)sample->sampleAddr, sample->medium);
            if (sampleAddr == ((void*)0) ) {
                return -1;
            }

            if (sample->medium == 1) {
                gl_230d0_syncDmaUnkMedium ((u32)sample->sampleAddr, sampleAddr, sample->size, (*(AudioContext *)&D_00000000 ) .sampleBankTable->header.unkMediumParam);
            } else {
                gl_230d0_syncDma ((u32)sample->sampleAddr, sampleAddr, sample->size, sample->medium);
            }
            sample->medium = 0;
            sample->sampleAddr = sampleAddr;
        }
    }
}





                                                                                
                                                                  
                                                
  
                                                              
                                                                     
                                                                      
                             
                        
                                                                      
                                                                        
                                      
               
                                                                       
        
                        
                        
                                                                        
        
          
      
  
                                                                   
                                                                       
                                                                   
                                                                     
                                                                                      
                                                                            
                                                                 
                                                                    
                                                                 
                                                                     
                                                                   
                                                                 
                                                                    
                                                               
                                                                 
                                                                 
                                                                  
                                                         
                                   
extern int gl_func_00000000();
 




 



extern int gl_ref_0003773C();
int AudioLoad_SyncLoadInstrument(int handle, int depth, int a2) {
    int *n;
    if (depth < 0x7F) {
        n = (int *)gl_func_00000000 (handle  );
        if (n == 0) {
            return -1;
        }
        if (*((unsigned char *)n + 1) != 0) {
            gl_ref_0003773C(n[8 / 4], handle);
        }
        gl_ref_0003773C(n[0x10 / 4], handle);
        if (*((unsigned char *)n + 2) != 0x7F) {
            gl_ref_0003773C(n[0x18 / 4], handle);
        }
    } else if (depth == 0x7F) {
        n = (int *)gl_func_00000000 (handle, a2);
        if (n == 0) {
            return -1;
        }
        gl_ref_0003773C(n[4 / 4], handle);
        return 0;
    }
}

 










extern int gl_ref_00038174();
extern int gl_ref_0003870C();
void AudioLoad_AsyncLoadSampleBank(int a0, int a1, int a2, int a3) {
    int v;
    v = gl_ref_00038174(2, a0);
    v = gl_ref_0003870C(2, v, a1, a2, a3);
    if (v == 0) {
        gl_func_00000000 (a3, 0, 0);
    }
}

 















extern int gl_ref_00038174();
extern int gl_ref_0003870C();
typedef struct { char p0[0x2028]; unsigned char *buf; } gl_232E8_GS;
extern gl_232E8_GS gAudioContext_232E8;

void AudioLoad_AsyncLoadFont(int idx, int a1, int a2, int a3) {
    int cur;
    int cnt;

    cur = ((unsigned short *)gAudioContext_232E8 .buf)[idx];
    cnt = *(cur + gAudioContext_232E8 .buf);
    cur++;
    while (cnt > 0) {
        gl_ref_0003870C(1, gl_ref_00038174(1, gAudioContext_232E8 .buf[cur++]), a1, a2, a3);
        cnt--;
    }
}


 

















extern char gAudioContext_233A0[];

u8 *AudioLoad_GetFontsForSequence(int a0, int *a1) {
    char *tbl = (char *)((AudioContext *)gAudioContext_233A0)->sequenceFontTable ;
    int off = ((unsigned short *)tbl)[a0];
    *a1 = *(unsigned char *)(off++ + (int)tbl);
    if (*a1 == 0) {
        return 0;
    }
    return ((AudioContext *)gAudioContext_233A0)->sequenceFontTable  + off;
}


 












extern int gl_ref_00037B00();

void AudioLoad_DiscardSeqFonts(int idx) {
    int cur;
    int cnt;
    int p;

    cur = ((unsigned short *)gAudioContext_232E8 .buf)[idx];
    cnt = *(cur + gAudioContext_232E8 .buf);
    cur++;
    while (cnt > 0) {
        cnt--;
        p = gl_ref_00038174(1, gAudioContext_232E8 .buf[cur++]);
        if (gl_func_00000000 (1, p) == 0) {
            gl_ref_00037B00(p);
            gl_func_00000000 (p, 0);
        }
    }
}



 



































extern int gAudioContext_23494_a;
extern int gAudioContext_23494_b;
extern int gAudioContext_23494_c;
extern int gAudioContext_23494_d;
 










void AudioLoad_DiscardFont(int id)
{
    AudioCache *cache;
    int i;
    unsigned neg = 0xFFFFFFFF;
    if (id == ((AudioContext *)&(D_00000000)) ->fontCache.temporary.entries[0].id) {
        ((AudioContext *)&(gAudioContext_23494_a)) ->fontCache.temporary.entries[0].id = -1;
    } else if (id == ((AudioContext *)&(gAudioContext_23494_b)) ->fontCache.temporary.entries[1].id) {
        ((AudioContext *)&(gAudioContext_23494_c)) ->fontCache.temporary.entries[1].id = -1;
    }
    cache = &((AudioContext *)&(gAudioContext_23494_d)) ->fontCache;
    for (i = 0; (unsigned)i < cache->persistent.numEntries; i++) {
        if (id == cache->persistent.entries[i].id) {
            cache->persistent.entries[i].id = neg;
        }
    }
    gl_func_00000000 (id);
}









 









extern int gl_func_00037C50();
int AudioLoad_SyncInitSeqPlayer(int a0) {
    if (*(int*)((char*)&D_00000000 + 0x215C) != 0) return 0;
    ((AudioContext *)&D_00000000 )->seqPlayers[a0].skipTicks = 0;
    return gl_func_00037C50(a0);
}


 








extern int gl_func_00037C50();
int AudioLoad_SyncInitSeqPlayerSkipTicks(int a0, int a1, int a2) {
    if (*(int*)((char*)&D_00000000 + 0x215C) != 0) return 0;
    ((AudioContext *)&D_00000000 )->seqPlayers[a0].skipTicks = a2;
    return gl_func_00037C50(a0, a1, 0);
}

 



















extern int gl_ref_00037D98();
typedef struct {
    unsigned char f7 : 1;
    unsigned char f6 : 1;
    unsigned char f0 : 6;
    char p1[3];
    unsigned char b4;
    unsigned char b5;
    char p6[0x10 - 6];
    short h10;
    char p12[0x18 - 0x12];
    int w18;
    char p1C[0x78 - 0x1C];
    int w78;
    char p7C[0x90 - 0x7C];
    unsigned char b90;
    char p91[0x160 - 0x91];
} gl_235E4_Rec;
typedef struct {
    char p0[0x2028];
    unsigned char *buf;
    unsigned short lim;
    char p202E[0x2D00 - 0x202E];
    gl_235E4_Rec recs[1];
} gl_235E4_GS;
extern gl_235E4_GS gAudioContext_235E4;

int AudioLoad_SyncInitSeqPlayerInternal(int recIdx, int bufIdx, int arg) {
    gl_235E4_Rec *rec;
    int cur;
    int cnt;
    int last;
    int p;
    int i;

    if (bufIdx >= gAudioContext_235E4 .lim) {
        return 0;
    }
    rec = &gAudioContext_235E4 .recs[recIdx];
    gl_func_00000000 (rec);
    if (1) {
    }
    last = 0xFF;
    cur = ((unsigned short *)gAudioContext_235E4 .buf)[bufIdx];
    cnt = *(cur + gAudioContext_235E4 .buf);
    cur++;
    while (cnt > 0) {
        last = gAudioContext_235E4 .buf[cur++];
        gl_ref_00037EA4(last);
        cnt--;
    }
    p = gl_ref_00037D98(bufIdx);
    if (p == 0) {
        return 0;
    }
    gl_func_00000000 (rec);
    rec->b4 = bufIdx;
    rec->b5 = last;
    rec->w18 = p;
    rec->f7 = 1;
    rec->w78 = p;
    rec->b90 = 0;
    rec->h10 = 0;
    rec->f6 = 0;
    gl_func_00000000 (rec);
    if (1) {
    }
    for (i = 0; i < 16; i++) {
    }
}


extern int gl_ref_00038174();
extern int gl_ref_00037F80();
 
void  AudioLoad_SyncLoadSeq(int a0) {
    int r = gl_ref_00038174(0, a0);
    int scratch;
      gl_ref_00037F80(0, r, &scratch);
}

                                                                           
                                                                  
                                                         
  
                                                  
                                                                      
                                                                       
                                                                       
                               
                                                                       
                                                                        
                                                                     
                          
                        
               
                         
            
        
      
  
                                                                   
                                                            
                                                                  
                                                                                   
                                                                 
                                                                    
                                                                     
                                                                   
                                                                
               
                                                                        
                                                                           
                                                                         
                                                                           
                                                                           
                                                                           
                                                                            
                                                                            
                                                                              
                                                                            
                                                                           
                                                                           
                                                                          
                                                                
 
extern int gl_func_00000000();
extern int gl_ref_00038204(), gl_ref_00038174(), gl_ref_000381B0(), gl_ref_00037F80();
int AudioLoad_GetSampleBank(int x, int *out) {
    int nv;
    int r0 = gl_ref_00038204(2);              
    int ok;
    x = gl_ref_00038174(2, x);                
    ok = gl_ref_000381B0(2, x);
    nv = ok;
    if (ok != 0) {
        gl_func_00000000 (x, 2);               
        *out = 0;
        return nv;
    }
    if ((ok = ((AudioTable *)r0)->entries[x].cachePolicy) == 4) {
        *out = ((AudioTable *)r0)->entries[x].medium;
        return ((AudioTable *)r0)->entries[x].romAddr;
    }
    {
        int local;
        if ((nv = gl_ref_00037F80(2, x, &local)) != 0) {
            *out = 0;
            return nv;
        }
    }
    *out = ((AudioTable *)r0)->entries[x].medium;
    return ((AudioTable *)r0)->entries[x].romAddr;
}

                                                                          
                                                                  
                                                                 
  
                                          
                                                                      
                                                                      
                           
                           
                         
                        
                                                                        
        
                        
                                                                        
        
                                                                        
      
  
                                                              
                                                                                                
                                                                     
                                                                      
                                                                 
                                                                    
                                                                 
                                                                  
                                                                
                                                                       
                                                                          
                                                                            
                                                                           
                                                                           
                                                                         
                                                                      
                                                                        
                                                                           
                                                                         
                                                                       
                                                                           
                                                                
                                                                
                                                                            
                                                                               
                                                                               
                                                                               
                                                                              
                                                                                  
                                                                          
extern int D_00000000;
extern int gl_ref_00038174();
extern int gl_ref_00037DCC();
extern int gl_ref_00037F80();
extern int gl_ref_00039B70();
int AudioLoad_SyncLoadFont(int a0) {
    int res;
    int c2;
    int c3;
    int buf[7];                                               
    SoundFont *rec;
    a0 = gl_ref_00038174(1, a0);
    rec = &((AudioContext *)&D_00000000 )->soundFontList[a0];
    c2 = rec->sampleBankId1;
    c3 = rec->sampleBankId2;
    buf[0] = c2;
    buf[1] = c3;
    if (c2 != 0xFF) {
        buf[2] = gl_ref_00037DCC(c2, &buf[4]);
    } else {
        buf[2] = 0;
    }
    if (c3 != 0xFF) {
        buf[3] = gl_ref_00037DCC(c3, &buf[5]);
    } else {
        buf[3] = 0;
    }
    res = gl_ref_00037F80(1, a0, &buf[6]);
    if (res == 0) {
        return 0;
    }
    if (buf[6] == 1) {
        gl_ref_00039B70(a0, res, &buf[0], 0);
    }
    return res;
}

                                                                        
                                                                  
                                                                      
                                               
  
                                         
                                                                      
                                                                      
                                                                       
                                                                       
                                                                     
                          
                                                                      
                          
                                                                     
                                                                        
                                        
      
  
                                                                  
                                                           
                                                                         
                                                                 
                                                                   
                                                                      
                                                                    
                                                                
                                                                     
                                            
                                                                    
                                                                      
                                                              
                                                                  
                                                                
                                                                
                                                                 
                                                                  
                                                                     
                                                        
                                                                
 





int AudioLoad_SyncLoad(int a0, int a1, int *a2) {
    volatile int ret = a0;
    return ret;
}

extern int gl_ref_00038204();

int AudioLoad_GetRealTableIndex(int a0, int a1) {
    int r = gl_ref_00038204(a0, a1);
    int offset = a1 << 4;
    int *p = (int*)(r + offset);
    if (!p[5]) a1 = p[4];
    return a1;
}

 




extern int gl_func_00000000();
int AudioLoad_SearchCaches(int a0, int a1) {
    int r = gl_func_00000000 (a0, a1);
    if (r != 0) {
        return r;
    }
    r = gl_func_00000000 (a0, 2, a1);
    if (r != 0) {
        return r;
    }
    return 0;
}

 











extern char gAudioContext_23B98[];
AudioTable *AudioLoad_GetLoadTable(int idx) {
    char *g = gAudioContext_23B98;
    AudioTable *r;
    switch (idx) {
    case 0:
        r = ((AudioContext *)g)->sequenceTable;
        break;
    case 1:
        r = ((AudioContext *)g)->soundFontTable;
        break;
    case 2:
        r = ((AudioContext *)g)->sampleBankTable;
        break;
    default:
        r = ((void*)0) ;
        break;
    }
    return r;
}

                                                                            
                                                                  
                                                            
                            
  
                                                                
                                                                   
                          
                          
                                                                   
                                                                       
                                                                   
                                                                       
                             
                                                                     
              
          
        
                                                                 
      
  
                                                                     
                                                                                         
                                                                    
                                                                 
                                                                   
                                                                      
                                                                      
                                                                      
                                                                                           
                                                                    
                                                                    
                                                                                            
                                                         
                                                               
                                                                  
                                                                 
                                                                    
                                                                    
                                               
                                                                          
                                                                             
                                                                         
                                                                          
                                                                       
                       
                                                                           
                                                                            
                                                                        
                                                                         
                                                                          
                                                                             
                                                                       
                                                                             
 


 





 

typedef u8 gl_23BDC_FontData;
typedef struct { s32 a; } gl_23BDC_RelocInfo;
extern char gl_23bdc_str[];
extern int gl_ref_00039A30();





void AudioLoad_RelocateFont(s32 fontId, gl_23BDC_FontData *fontDataStartAddr, gl_23BDC_RelocInfo *sampleBankReloc) {
    u32 soundOffset;
    u32 soundListOffset;
    Instrument *inst;
    Drum *drum;
    SoundEffect *soundEffect;
    s32 i;
    s32 numDrums = (*(AudioContext *)&D_00000000 ) .soundFontList[fontId].numDrums;
    s32 numInstruments = (*(AudioContext *)&D_00000000 ) .soundFontList[fontId].numInstruments;
    s32 numSfx = (*(AudioContext *)&D_00000000 ) .soundFontList[fontId].numSfx;
    u32 *fontData = (u32 *)fontDataStartAddr;









    soundListOffset = fontData[0];
    if ((soundListOffset != 0) && (numDrums != 0)) {
        fontData[0] = ((u32)(soundListOffset) + (u32)(fontDataStartAddr)) ;
        for (i = 0; i < numDrums; i++) {
            soundOffset = ((u32 *)fontData[0])[i];  
            if (soundOffset != 0) {
                soundOffset = ((u32)(soundOffset) + (u32)(fontDataStartAddr)) ;
                ((Drum **)fontData[0])[i] = drum = (Drum *)soundOffset;
                if (!drum->isRelocated) {
                    gl_ref_00039A30 (&drum->tunedSample, fontDataStartAddr, sampleBankReloc);
                    drum->isRelocated = 1;
                    soundOffset = (u32)drum->envelope;
                    drum->envelope = (AdsrEnvelope *)((u32)(soundOffset) + (u32)(fontDataStartAddr)) ;
                }
            }
        }
    }

     
    if ((fontData[1] != 0) && (numSfx != 0)) {
        fontData[1] = ((u32)(fontData[1]) + (u32)(fontDataStartAddr)) ;
        for (i = 0; i < numSfx; i++) {
            soundOffset = (u32)(((SoundEffect *)fontData[1]) + i);  
            soundEffect = (SoundEffect *)soundOffset;
            if ((soundEffect == ((void*)0) ) || ((u32)soundEffect->tunedSample.sample == 0)) {
                continue;
            }
            gl_ref_00039A30 (&soundEffect->tunedSample, fontDataStartAddr, sampleBankReloc);
        }
    }

    if (numInstruments > 126) {
        numInstruments = 126;
    }

    for (i = 2; i <= 2 + numInstruments - 1; i++) {
        if (fontData[i] != 0) {
            gl_func_00000000 (((char *)&D_00000000 + (0x1ACA4))  , i, fontData[i], fontDataStartAddr);
            fontData[i] = ((u32)(fontData[i]) + (u32)(fontDataStartAddr)) ;
            inst = (Instrument *)fontData[i];
            if (!inst->isRelocated) {
                if (inst->normalRangeLo != 0) {
                    gl_ref_00039A30 (&inst->lowPitchTunedSample, fontDataStartAddr, sampleBankReloc);
                }
                gl_ref_00039A30 (&inst->normalPitchTunedSample, fontDataStartAddr, sampleBankReloc);
                if (inst->normalRangeHi != 0x7F) {
                    gl_ref_00039A30 (&inst->highPitchTunedSample, fontDataStartAddr, sampleBankReloc);
                }
                soundOffset = (u32)inst->envelope;
                inst->envelope = (AdsrEnvelope *)((u32)(soundOffset) + (u32)(fontDataStartAddr)) ;
                inst->isRelocated = 1;
            }
        }
    }

    (*(AudioContext *)&D_00000000 ) .soundFontList[fontId].drums = (Drum **)fontData[0];
    (*(AudioContext *)&D_00000000 ) .soundFontList[fontId].soundEffects = (SoundEffect *)fontData[1];
    (*(AudioContext *)&D_00000000 ) .soundFontList[fontId].instruments = (Instrument **)(fontData + 2);
}




 





typedef struct { char pad[0x18]; } gl_23E60_MQ;
typedef struct { char pad[0x18]; } gl_23E60_IoMesg;
typedef struct { char pad0[0x1DD4]; gl_23E60_MQ syncDmaQueue; char pad1dec[4]; gl_23E60_IoMesg syncDmaIoMesg; } gl_23E60_Ctx;
extern char sStr_FastCopy_1ACC0[];   
extern char sStr_FastCopy_1ACCC[];   
extern int gl_func_00038604();
void AudioLoad_SyncDma(u32 devAddr, u8 *ramAddr, u32 size, s32 medium) {
    gl_23E60_MQ *msgQueue = &((gl_23E60_Ctx *)&D_00000000)->syncDmaQueue;
    gl_23E60_IoMesg *ioMesg = &((gl_23E60_Ctx *)&D_00000000)->syncDmaIoMesg;
    size = ((size) + 0xF) & ~0xF;

    gl_func_00000000 (ramAddr, size);

    while (1) {
        if (size < 0x400) {
            break;
        }
        gl_func_00038604(ioMesg, 1, 0, devAddr, ramAddr, 0x400, msgQueue, medium, sStr_FastCopy_1ACC0);
        gl_func_00000000 (msgQueue, ((void*)0) , 1);
        size -= 0x400;
        devAddr += 0x400;
        ramAddr += 0x400;
    }

    if (size != 0) {
        gl_func_00038604(ioMesg, 1, 0, devAddr, ramAddr, size, msgQueue, medium, sStr_FastCopy_1ACCC);
        gl_func_00000000 (msgQueue, ((void*)0) , 1);
    }
}

 


