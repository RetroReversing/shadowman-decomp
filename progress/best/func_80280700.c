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

s32 func_80113AD0();                                /* extern */
M2C_UNK func_8027003C();                            /* extern */
M2C_UNK func_8027006C(void);                     /* extern */
M2C_UNK func_80270090(M2C_UNK); /* extern */
M2C_UNK func_802700F8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_8027206C(M2C_UNK, M2C_UNK);            /* extern */
extern void *D_8006A4FC;
extern void *D_8007AFF8;

void func_80280700(void) {
    void **__base_D_8006A4FC;
    u32 var_s0;
    void **var_a0;
    void *temp_s2;
    void *temp_s3;

    func_8027003C();
    func_8027206C(0, 0);
    __base_D_8006A4FC = &D_8006A4FC;
    M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x1C) = (f32) (func_80113AD0() % 360);
    M2C_FIELD(D_8007AFF8, s16 *, 0x9C) = 0xC;
    M2C_FIELD(D_8007AFF8, f32 *, 0xB0) = (f32) *(f32 *)0x214A2C;
    M2C_FIELD(D_8007AFF8, f32 *, 0xBC) = (f32) *(f32 *)0x214A30;
    M2C_FIELD(D_8007AFF8, s16 *, 0x90) = 0;
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x44) & ~2);
    M2C_FIELD(D_8007AFF8, s32 *, 0x48) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x48) & ~0x40);
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x44) | 0x20004);
    func_80270090(2);
    var_a0 = (void **)0xF7FFFFFF;
    M2C_FIELD(D_8007AFF8, s32 *, 0x44) = (s32) (M2C_FIELD(D_8007AFF8, s32 *, 0x44) & 0xF7FFFFFF);
    if (M2C_FIELD(D_8007AFF8, u8 *, 0x38) != 0) {
        temp_s3 = D_8007AFF8;
        var_s0 = 0;
        temp_s2 = (*__base_D_8006A4FC);
        __repair_rows: {
            func_802700F8(0, 0, 0, 1, 0);
            var_s0 += 1;
        }
if ((u8) M2C_FIELD(D_8007AFF8, u8 *, 0x38) >= var_s0) goto __repair_rows;
        var_a0 = &D_8007AFF8;
        M2C_FIELD(D_8007AFF8, u8 *, 0x38) = 1U;
        (*__base_D_8006A4FC) = temp_s2;
        D_8007AFF8 = temp_s3;
    }
    func_8027006C();
}
