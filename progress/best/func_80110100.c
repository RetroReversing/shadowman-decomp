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

void *__allocParam();                               /* extern */
M2C_UNK func_80110178(s32);                         /* extern */

void func_80110100(const void *arg0, const void *arg1, s32 arg2) {
    void * __repair_hoisted;

    s32 temp_a0;
    void *temp_a0_2;
    void *temp_v0;

    __repair_hoisted = M2C_FIELD(arg1, void **, 8);
    if ((M2C_FIELD(arg1, void **, 8) != NULL) && (temp_v0 = __allocParam(), (temp_v0 != NULL))) {
        temp_a0 = M2C_FIELD(__repair_hoisted, s32 *, 0xD8);
        M2C_FIELD(temp_v0, s16 *, 8) = 0x10;
        M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(arg0, const s32 *, 0x1C) + temp_a0);
        if (arg2 < 0) {
            func_80110178(temp_a0);
            return;
        }
        M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) (arg2 & 0xFF);
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        temp_a0_2 = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 0xC);
        M2C_FIELD(temp_a0_2, M2C_UNK (**)(void *, M2C_UNK, void *), 8)(temp_a0_2, 3, temp_v0);
    }
}
