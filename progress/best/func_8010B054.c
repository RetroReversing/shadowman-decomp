/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 func_80108630();
s32 func_80108CDC();
s32 func_8010B164();
s32 func_8010B354();
s32 func_80110784();
s32 func_80113EA0();
s32 func_80116D80();
s32 func_80116EB0();
s32 func_801176C0();
s32 osWritebackDCacheAll();
extern s32 D_8001FE04;
extern char D_8004AECC[];
extern u16 D_8004E062;
extern char D_8004E070[];
extern char D_8004EB10[];

typedef struct { int field_0; unsigned short field_4; unsigned char pad_6[2]; void * field_8; unsigned char pad_C[12]; int field_18; } __repair_record_arg0;
s32 func_8010B054(void *arg0, void *arg1) {
    s32 sp10;
    s32 *temp_v0;
    s32 temp_a1;
    s32 temp_a2;
    void *temp_a0;
    char *__base_D_8004E070;

    __base_D_8004E070 = D_8004E070;

    func_80108630();
    if (arg1 != NULL) {
        func_80116D80(D_8004EB10, 0, 1);
        func_80113EA0(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s16 *, 4) * 4);
    }
    func_80108CDC();
    func_8010B354();
    temp_a2 = func_801176C0(((__repair_record_arg0*)arg0)->field_0);
    ((__repair_record_arg0*)arg0)->field_4 = (u16) D_8004E062;
    temp_a1 = func_80110784(*((D_8001FE04 * 4) + __base_D_8004E070), &sp10, temp_a2, (s16) D_8004E062);
    if (sp10 == 0) {
        return 0;
    }
    temp_a0 = ((__repair_record_arg0*)arg0)->field_8;
    temp_v0 = (D_8001FE04 * 4) + __base_D_8004E070;
    M2C_FIELD(temp_a0, s32 *, 0x30) = (s32) *temp_v0;
    M2C_FIELD(((__repair_record_arg0*)arg0)->field_8, s32 *, 0x34) = (s32) (((s32) (temp_a1 - *temp_v0) >> 3) * 8);
    ((__repair_record_arg0*)arg0)->field_18 = 1;
    osWritebackDCacheAll(temp_a0, temp_a1);
    func_80116EB0(D_8004AECC, arg0 + 8, 1);
    return func_8010B164();
}
