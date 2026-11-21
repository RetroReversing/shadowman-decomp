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

M2C_UNK func_80109318(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_8025BF10(void *);                      /* extern */
M2C_UNK func_80268E6C(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_8026E4CC(s32, M2C_UNK);                /* extern */
s32 func_8026E67C(s32);                             /* extern */
extern u16 D_80075534;
extern M2C_UNK D_8007558C;

void func_802607CC(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 8);
    if (!(D_80075534 & 4) && (func_8026E67C(temp_s0) == -1)) {
        func_80109318(0xEC, &D_8007558C, 0);
        func_8025BF10(arg0);
        func_80268E6C(8, 1);
        do { func_8026E4CC(temp_s0, 0); } while (0);
    }
}
