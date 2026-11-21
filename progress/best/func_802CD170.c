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

M2C_UNK func_8023DF7C(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_80265348(void);                   /* extern */
s32 func_802654E8();                                /* extern */
M2C_UNK func_802C3934(f32);                         /* extern */
M2C_UNK func_802CC680();                            /* extern */
M2C_UNK func_802CD1D4(f32);                         /* extern */
M2C_UNK func_802CD234(M2C_UNK *);                   /* extern */
extern s32 D_8002D420;
extern M2C_UNK D_8002DBD0;
extern f32 D_8003AD20;
extern M2C_UNK D_80075518;
extern M2C_UNK D_80075568;
extern s32 D_80075580;

void func_802CD170(void) {
    M2C_UNK *__base_D_8002DBD0;
    func_802CC680();
    __base_D_8002DBD0 = &D_8002DBD0;
    if (M2C_FIELD(__base_D_8002DBD0, s32 *, 8) != 0) {
        if (M2C_FIELD(__base_D_8002DBD0, s32 *, 0x18) != 0) {
            func_802CD1D4(*(f32 *)0x2187C0);
            return;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        func_802CD1D4(*(f32 *)0x2187C4);
        return;
    }
    if (M2C_FIELD(__base_D_8002DBD0, s32 *, 0x18) != 0) {
        func_802CD1D4(*(f32 *)0x2187C4);
        return;
    }
    func_802C3934(*(f32 *)0x2187C8);
    D_80075580 = 0;
    if (M2C_FIELD(__base_D_8002DBD0, s32 *, 8) != 0) {
        if (M2C_FIELD(__base_D_8002DBD0, s32 *, 0x18) != 0) {
            func_802CD234(__base_D_8002DBD0);
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        func_802CD234(__base_D_8002DBD0);
        return;
    }
    if (M2C_FIELD(__base_D_8002DBD0, s32 *, 0x18) != 0) {
        func_802CD234(__base_D_8002DBD0);
        return;
    }
    D_8003AD20 = *(f32 *)0x2187D4;
    func_80265348();
    if (!(D_8002D420 & 2)) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x23, 0xA, 0x8C, 2);
    }
    if (func_802654E8() == 0) {
        func_8023DF7C(&D_80075568, &D_80075518, 0x31, 0xA, 0x28, 2);
    }
}
