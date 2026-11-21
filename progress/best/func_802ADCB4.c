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

f32 func_8022EBE8(f32);                             /* extern */
s32 func_80240418(s32 *, s32 *, M2C_UNK);  /* extern */
void *func_802A5EC4(void *, f32 *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_217A0C;
extern s32 D_8006A5B4;
extern void *D_8007AFF8;
extern void *D_8007BD4C;
extern u32 D_8007BD68;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x48, 0x4c, 0x50, 0x54, 0x60, 0x64], gap at: 0x58. */
void func_802ADCB4(s32 arg0, void *arg1) {
    u32 *__base_D_8007BD68;
    void **__base_D_8007BD4C;
    f32 sp18[3];
    s32 sp28;
    f32 sp2C;
    s32 sp30;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    f32 temp_fs0;
    f32 temp_fs0f;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;

    __base_D_8007BD68 = &D_8007BD68;
    if ((u32) (*__base_D_8007BD68) < 5U) {
        temp_a0 = M2C_FIELD(arg1, void **, 0x6C);
        D_8007AFF8 = temp_a0;
        if ((M2C_FIELD(temp_a0, s32 *, 0x44) & 0x08000000) && (M2C_FIELD(temp_a0, f32 *, 0x80) < *(f32 *)0x2166B0)) {
            temp_fs0f = *(f32 *)0x2166B4;
            __base_D_8007BD4C = &D_8007BD4C;
            sp28 = M2C_FIELD((*__base_D_8007BD4C), s32 *, 0x54);
            sp2C = M2C_FIELD((*__base_D_8007BD4C), f32 *, 0x58);
            sp30 = M2C_FIELD((*__base_D_8007BD4C), s32 *, 0x5C);
            D_8006A5B4 = 3;
            sp2C += temp_fs0f;
            sp38 = M2C_FIELD(arg1, s32 *, 0);
            sp3C = M2C_FIELD(arg1, s32 *, 4);
            sp40 = M2C_FIELD(arg1, s32 *, 8);
            if (func_80240418(&sp28, &sp38, 0x3F800000) == 0) {
                temp_fs0 = *(f32 *)0x2166B8;
                sp18[0] = func_8022EBE8(temp_fs0);
                sp18[2] = func_8022EBE8(temp_fs0);
                sp18[1] = temp_fs0f;
                temp_v0 = func_802A5EC4((*__base_D_8007BD4C) + 0x54, sp18, &D_217A0C, 0, 0, 0);
                if (temp_v0 != NULL) {
                    temp_v0_2 = M2C_FIELD(temp_v0, void **, 0xC);
                    if (temp_v0_2 != NULL) {
                        M2C_FIELD(temp_v0_2, s32 *, 0x98) = arg0;
                    }
                    (*__base_D_8007BD68) += 1;
                }
            }
        }
    }
}
