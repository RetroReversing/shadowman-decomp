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

M2C_UNK func_8010E590(M2C_UNK *, s32 *, s32, f32);  /* extern */
f32 func_80236880(void *, void *);                  /* extern */
extern M2C_UNK D_8003374C;
extern void *D_8006A4FC;
extern u8 D_80075568[];

void func_80283AD0(void) {
    u8 *__base_D_80075568;
    void **__base_D_8006A4FC;
    s32 sp10;
    f32 sp14;
    s32 sp18;
    M2C_UNK *__base_D_8003374C;

    __base_D_8003374C = &D_8003374C;

    __base_D_8006A4FC = &D_8006A4FC;
    __base_D_80075568 = D_80075568;
    if (M2C_FIELD((*__base_D_8006A4FC), s8 *, 0x71) == M2C_FIELD(__base_D_80075568, s8 *, 0x71)) {
        sp10 = M2C_FIELD(__base_D_80075568, s32 *, 0x24);
        sp14 = M2C_FIELD(__base_D_80075568, f32 *, 0x28);
        sp18 = M2C_FIELD(__base_D_80075568, s32 *, 0x2C);
        sp14 += *(f32 *)0x214CF0;
        func_8010E590(__base_D_8003374C, &sp10, M2C_FIELD(__base_D_80075568, s32 *, 0x24), M2C_FIELD(__base_D_80075568, f32 *, 0x28));
        M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x1C) = (f32) (func_80236880((*__base_D_8006A4FC) + 0x24, __base_D_80075568 + 0x24) + *(f32 *)0x214CF4);
    }
}
