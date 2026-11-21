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

s8 func_8023646C(s32);                         /* extern */
s16 func_8023648C(s32);                             /* extern */
extern u32 D_80074CF0;
extern M2C_UNK D_80074E18;

void func_802621D0(s32 arg0, u32 arg1) {
    M2C_UNK *__base_D_80074E18;
    u32 *__base_D_80074CF0;
    u32 temp_v0;

    __base_D_80074CF0 = &D_80074CF0;
    (*(&D_80074CF0)) = 0;
    if (arg1 != 0) {
        do {
            __base_D_80074E18 = &D_80074E18;
            *(((*(&D_80074CF0)) * 6) + __base_D_80074E18) = func_8023648C(arg0);
            M2C_FIELD((((*(&D_80074CF0)) * 6) + __base_D_80074E18), s8 *, 2) = func_8023646C(arg0);
            M2C_FIELD((((*(&D_80074CF0)) * 6) + __base_D_80074E18), s8 *, 3) = func_8023646C(arg0);
            M2C_FIELD((((*(&D_80074CF0)) * 6) + __base_D_80074E18), s8 *, 4) = func_8023646C(arg0);
            temp_v0 = (*(&D_80074CF0)) + 1;
            (*(&D_80074CF0)) = temp_v0;
        } while (temp_v0 < arg1);
    }
}
