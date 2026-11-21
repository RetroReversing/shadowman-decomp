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

M2C_UNK func_80236A18(M2C_UNK *, s32, s32);         /* extern */
extern M2C_UNK D_80075198;
extern s32 D_800753E0;

void func_8026304C(void *arg0) {
    M2C_UNK *__base_D_80075198;
    __base_D_80075198 = &D_80075198;
    /*__repair_pointer_balance*/if ((unsigned long)__base_D_80075198 & 0x100) {
func_80236A18(__base_D_80075198, D_800753E0, arg0 + 0x18);
} else {
func_80236A18(__base_D_80075198, D_800753E0, arg0 + 0x18);
}
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) -M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) -M2C_FIELD(arg0, f32 *, 0x1C);
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(__base_D_80075198, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(__base_D_80075198, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(__base_D_80075198, f32 *, 8);
}
