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

M2C_UNK func_8021E990(f32, f32, s32 *, u8, s32, M2C_UNK32, s32); /* extern */
s32 func_80296738(s32);                             /* extern */
M2C_UNK func_802AD54C(s32 *, u8, s32 *);            /* extern */
extern s32 D_8002C1B0;
extern M2C_UNK D_800619F0;

void func_802AD4A4(void *arg0) {
    M2C_UNK *__base_D_800619F0;
    s32 *__base_D_8002C1B0;
    f32 temp_fv0;
    f32 temp_fv0f;
    s32 temp_v0;

    temp_v0 = func_80296738(M2C_FIELD(arg0, s32 *, 0x40));
    __base_D_8002C1B0 = &D_8002C1B0;
    (*__base_D_8002C1B0) = temp_v0;
    if (temp_v0 != 0) {
        temp_fv0 = M2C_FIELD(arg0, f32 *, 0x34);
        temp_fv0f = *(f32 *)0x21666C;
        if (!(temp_fv0f <= temp_fv0)) {
            __base_D_800619F0 = &D_800619F0;
            func_802AD54C(__base_D_8002C1B0, M2C_FIELD(__base_D_800619F0, u8 *, 2), __base_D_8002C1B0);
            return;
        }
        func_8021E990(M2C_FIELD(arg0, f32 *, 0x54), M2C_FIELD(arg0, f32 *, 0x58), __base_D_8002C1B0, M2C_FIELD(__base_D_800619F0, u8 *, 2), M2C_FIELD(arg0, s32 *, 0x5C), M2C_FIELD(arg0, M2C_UNK32 *, 0x20), (*__base_D_8002C1B0) + (((s32) (temp_fv0 - temp_fv0f) | 0x80000000) * 0x10));
    }
}
