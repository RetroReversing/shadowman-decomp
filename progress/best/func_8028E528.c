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
M2C_UNK func_8023A0DC(M2C_UNK, M2C_UNK, M2C_UNK, f32 *, void *); /* extern */
f32 func_802759C4(f32, void *);                     /* extern */
M2C_UNK func_802A5EC4(f32 *, f32 *, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK D_217B0C;
extern void *D_8006A4FC;
extern M2C_UNK D_80075568;
extern void *D_8007AFF8;

void func_8028E528(void) {
    void **__base_D_8006A4FC;
    f32 sp18[3];
    f32 sp28[3];
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fv1;
    s32 temp_v1;

    __base_D_8006A4FC = &D_8006A4FC;
    func_8023A0DC(0, 0, 0x42B40000, sp18, (*__base_D_8006A4FC) + 0x34);
    sp18[0] += M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x24);
    sp18[1] += M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x28) + *(f32 *)0x215528;
    sp18[2] += M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x2C);
    temp_fs0 = (f32) ((func_80113AD0() % 60) + 1);
    temp_v1 = func_80113AD0() % 60;
    temp_fv1 = *(f32 *)0x21552C;
    temp_fs0_2 = temp_fs0 - temp_fv1;
    sp28[0] = (M2C_FIELD(&D_80075568, f32 *, 0x24) - M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x24)) + temp_fs0_2;
    temp_fa0 = ((M2C_FIELD(&D_80075568, f32 *, 0x28) - M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x28)) - *(f32 *)0x215530) + ((f32) (temp_v1 + 1) - temp_fv1);
    sp28[1] = temp_fa0;
    sp28[2] = (M2C_FIELD(&D_80075568, f32 *, 0x2C) - M2C_FIELD((*__base_D_8006A4FC), f32 *, 0x2C)) - temp_fs0_2;
    sp28[1] = func_802759C4(temp_fa0, (*__base_D_8006A4FC));
    /*__repair_pointer_balance*/if ((unsigned long)__base_D_8006A4FC & 0x100) {
func_802A5EC4(sp18, sp28, &D_217B0C, 0, 1, (s32) M2C_FIELD(D_8007AFF8, u8 *, 0x40));
} else {
func_802A5EC4(sp18, sp28, &D_217B0C, 0, 1, (s32) M2C_FIELD(D_8007AFF8, u8 *, 0x40));
}
}
