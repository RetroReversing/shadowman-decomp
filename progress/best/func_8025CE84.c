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

s32 func_80232908(void *);                          /* extern */
M2C_UNK func_8025CF70(void *, void *);              /* extern */
M2C_UNK func_802D0B28(s32, s32, M2C_UNK);           /* extern */
extern s32 D_8002D2B0;
extern s32 D_8002D2B4;
extern s32 D_8005E6F0;
extern void *D_8005E9F0;
extern s32 D_8005EA14;
extern void *D_8005EA2C;

void func_8025CE84(void) {
s32 __repair_operand;

    void **__base_D_8005EA2C;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    s32 temp_v0;
    void *temp_a1;

    func_802D0B28(D_8005EA14, D_8002D2B4, 0);
    __base_D_8005EA2C = &D_8005EA2C;
    temp_v0 = func_80232908((*__base_D_8005EA2C));
    __repair_operand = M2C_FIELD(D_8005E9F0, s32 *, 8);
    temp_a1 = __repair_operand + (temp_v0 * 0x28);
    temp_fv1 = (f32) M2C_FIELD(temp_a1, s16 *, 0x18) - M2C_FIELD((*__base_D_8005EA2C), f32 *, 0x30);
    temp_fv1f = (f32) M2C_FIELD(temp_a1, s16 *, 0x1A) - M2C_FIELD((*__base_D_8005EA2C), f32 *, 0x34);
    temp_fv0f = (f32) M2C_FIELD(temp_a1, s16 *, 0x1C) - M2C_FIELD((*__base_D_8005EA2C), f32 *, 0x38);
    temp_fv0 = (f32) M2C_FIELD(temp_a1, u16 *, 0x1E) + *(f32 *)0x20A194;
    D_8005E6F0 = temp_v0;
    if ((temp_fv0 * temp_fv0) < ((temp_fv1 * temp_fv1) + (temp_fv1f * temp_fv1f) + (temp_fv0f * temp_fv0f))) {
        func_8025CF70((*__base_D_8005EA2C), temp_a1);
        return;
    }
    D_8002D2B0 = M2C_FIELD(temp_a1, s32 *, 0x20);
}
