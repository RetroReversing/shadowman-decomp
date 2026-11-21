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

M2C_UNK func_8010E590(M2C_UNK *, s32 *);            /* extern */
f32 func_80236880(void *, void *, s32, f32);        /* extern */
M2C_UNK func_80283AB8(M2C_UNK *);                   /* extern */
extern M2C_UNK D_80033784;
extern M2C_UNK D_800337BC;
extern void *D_8006A4FC;
extern M2C_UNK D_80075568;
extern void *D_8007B1A0;

typedef struct { unsigned char pad_0[28]; float field_1C; unsigned char pad_20[81]; signed char field_71; } __repair_record_D_8006A4FC;
void func_80283A14(void) {
    s32 sp10;
    f32 sp14;
    s32 sp18;

    if (((__repair_record_D_8006A4FC*)D_8006A4FC)->field_71 == M2C_FIELD(&D_80075568, s8 *, 0x71)) {
        sp10 = M2C_FIELD(&D_80075568, s32 *, 0x24);
        sp14 = M2C_FIELD(&D_80075568, f32 *, 0x28);
        sp18 = M2C_FIELD(&D_80075568, s32 *, 0x2C);
        sp14 += *(f32 *)0x214CE8;
        ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_1C = (f32) (func_80236880(D_8006A4FC + 0x24, &D_80075568 + 0x24, M2C_FIELD(&D_80075568, s32 *, 0x24), M2C_FIELD(&D_80075568, f32 *, 0x28)) + *(f32 *)0x214CEC);
        if (M2C_FIELD(D_8007B1A0, u8 *, 0x142) == 0) {
            func_80283AB8(&D_80033784);
            return;
        }
        func_8010E590(&D_800337BC, &sp10);
    }
}
