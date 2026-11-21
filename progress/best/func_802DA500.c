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

extern unsigned short D_800596E4;
s32 func_80221EF0();
s32 func_80229470();
s32 func_802DA2BC();
s32 func_802DA594();
s32 osCreateMesgQueue();
extern u8 D_8001E400;
extern s32 D_800590B0;
extern char D_800596B0[];
extern void *D_8007DB68;
extern char D_8007DC30[];

void func_802DA500(void) {
    u8 *__base_D_8001E400;
    s32 temp_v0;
    unsigned short *__base_D_800596E4;

    __base_D_800596E4 = &D_800596E4;

    __base_D_8001E400 = &D_8001E400;
    if ((*__base_D_8001E400) != 0) {
        osCreateMesgQueue(D_8007DC30, D_8007DC30 + 0x18, 2);
        func_80221EF0();
        if (D_800590B0 & 0x1000) {
            func_80229470(M2C_FIELD(D_8007DB68, s32 *, 8) + 0x500);
            temp_v0 = (*__base_D_800596E4) << 0x10;
            (*__base_D_800596E4) = (u16) ((*__base_D_800596E4) + 1);
            func_802DA594();
            return;
        }
        func_802DA2BC(D_800596B0);
        (*__base_D_8001E400) = 0;
    }
}
