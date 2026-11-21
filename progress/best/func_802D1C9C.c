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

M2C_UNK func_80107D8C(M2C_UNK, s16, M2C_UNK, M2C_UNK); /* extern */
s32 func_80108B80();                                /* extern */
M2C_UNK func_80109D88();                            /* extern */
M2C_UNK func_8022F360();                            /* extern */
M2C_UNK func_8022FE7C(s32);                         /* extern */
M2C_UNK func_8023040C(M2C_UNK);                     /* extern */
M2C_UNK func_80230A3C(s16);                         /* extern */
M2C_UNK func_802C074C(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_802D0B28(s32, s8);       /* extern */
M2C_UNK func_802D1F00();                            /* extern */
extern s8 D_8002C1BC;
extern M2C_UNK D_8002C2A0;
extern M2C_UNK D_8002DBD0;
extern s32 D_8002DBD4;
extern s32 D_800458F0;
extern s32 D_800458F4;
extern s32 D_80045C40;
extern s32 D_80052778;
extern s32 D_8005EA14;
extern s32 D_8006A504;
extern M2C_UNK D_80074F70;
extern s32 D_800753E4;
extern void *D_80075510;
extern s8 D_800755D9;
extern M2C_UNK D_80075F58;
extern M2C_UNK D_8007BF48;
extern s32 D_8007BF54;
extern s16 D_8007BF56;
extern M2C_UNK D_8007BF58;
extern s32 D_8007C440;
extern u8 D_8007DC04;

s32 func_802D1C9C(void) {
    M2C_UNK *__base_D_8002DBD0;
    M2C_UNK *__base_D_8002C2A0;
    M2C_UNK (*temp_v0)(s32);

    D_800458F0 = 0;
    D_8006A504 = 0;
    D_80045C40 = 0;
    D_8002C1BC = 1;
    M2C_FIELD(D_80075510, s16 *, 0x16) = 2;
    D_80052778 = M2C_FIELD(&D_8007BF48, s32 *, 0);
    D_800753E4 = M2C_FIELD(&D_8007BF48, s32 *, 4);
    func_802D0B28(D_8005EA14, D_800755D9);
    M2C_FIELD(&D_80074F70, f32 *, 0) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x1E8);
    M2C_FIELD(&D_80074F70, f32 *, 4) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x1EC);
    M2C_FIELD(&D_80074F70, f32 *, 8) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x1F0);
    M2C_FIELD(&D_80074F70, f32 *, 0xC) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x1F4);
    M2C_FIELD(&D_80074F70, f32 *, 0x10) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x1F8);
    M2C_FIELD(&D_80074F70, f32 *, 0x14) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x1FC);
    M2C_FIELD(&D_80074F70, f32 *, 0x18) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x200);
    M2C_FIELD(&D_80074F70, f32 *, 0x1C) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x204);
    M2C_FIELD(&D_80074F70, f32 *, 0x20) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x208);
    M2C_FIELD(&D_80074F70, f32 *, 0x24) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x20C);
    M2C_FIELD(&D_80074F70, f32 *, 0x28) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x210);
    M2C_FIELD(&D_80074F70, f32 *, 0x2C) = (f32) M2C_FIELD(&D_8007BF58, f32 *, 0x214);
    __base_D_8002DBD0 = &D_8002DBD0;
    func_802C074C(M2C_FIELD(__base_D_8002DBD0, s32 *, 4), 0, 0);
    func_802C074C(M2C_FIELD(__base_D_8002DBD0, s32 *, 0x14), 1, 0);
    func_80109D88();
    if ((M2C_FIELD(__base_D_8002DBD0, s32 *, 0x14) != -1) && (M2C_FIELD(&D_80075F58, s16 *, 8) == M2C_FIELD(__base_D_8002DBD0, s32 *, 0x14))) {
        M2C_FIELD(&D_80075F58, s16 *, 8) = -1;
    }
    if ((D_8002DBD4 != -1) && (M2C_FIELD(&D_80075F58, s16 *, 0xA) == D_8002DBD4)) {
        M2C_FIELD(&D_80075F58, s16 *, 0xA) = -1;
    }
    func_8022F360();
    func_802D1F00();
    if (M2C_FIELD(&D_8007BF58, s32 *, 0) != 0) {
        func_8022FE7C(M2C_FIELD(&D_8007BF58, s32 *, 0));
        M2C_FIELD(&D_8007BF58, s32 *, 0) = 0;
    }
    func_8023040C(1);
    if (func_80108B80() == 0) {
        func_80107D8C(0x32, D_8007BF56, 1, 0x7F);
    }
    D_8007BF54 = -1;
    if ((D_800458F4 >= 0) && (temp_v0 = M2C_FIELD(((D_800458F4 * 0x14) + D_8007C440), M2C_UNK (**)(s32), 8), (temp_v0 != NULL)) && (temp_v0(D_800458F4), (M2C_FIELD(&D_8007BF58, s32 *, 0) != 0))) {
        if ((u32) (D_8007DC04 - 4) < 2U) {
            func_8022FE7C(M2C_FIELD(&D_8007BF58, s32 *, 0));
            M2C_FIELD(&D_8007BF58, s32 *, 0) = 0;
        }
    }
    __base_D_8002C2A0 = &D_8002C2A0;
    if (M2C_FIELD(__base_D_8002C2A0, s16 *, 0x1A2) != 0x3F) {
        func_80230A3C(M2C_FIELD(__base_D_8002C2A0, s16 *, 0x1A2));
        M2C_FIELD(__base_D_8002C2A0, s16 *, 0x1A2) = 0x3F;
    }
    return 1;
}
