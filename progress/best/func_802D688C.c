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

s32 func_8022DEA0();                                /* extern */
s32 func_802D5E30();                                /* extern */
s32 func_802D5E88();                                /* extern */
M2C_UNK func_802D6990();                            /* extern */
M2C_UNK func_802D69E0();                            /* extern */
extern M2C_UNK D_8007C2A0;

s32 func_802D688C(void) {
    M2C_UNK *__base_D_8007C2A0;
    s32 var_v1;

    func_802D69E0();
    func_802D6990();
    __base_D_8007C2A0 = &D_8007C2A0;
    if ((M2C_FIELD(__base_D_8007C2A0, s32 *, 0x14) == 1) && !(func_8022DEA0() & 0xFF)) {
        M2C_FIELD(__base_D_8007C2A0, s32 *, 0x14) = 0;
    }
    if ((M2C_FIELD(__base_D_8007C2A0, s32 *, 0x18) == 1) && (func_802D5E30() != 0)) {
        M2C_FIELD(__base_D_8007C2A0, s32 *, 0x18) = 0;
    }
    if ((M2C_FIELD(__base_D_8007C2A0, s32 *, 0x1C) == 1) && (func_802D5E88() != 0)) {
        M2C_FIELD(__base_D_8007C2A0, s32 *, 0x1C) = 0;
    }
    var_v1 = 0;
    if ((M2C_FIELD(__base_D_8007C2A0, s32 *, 0) == 0) && (M2C_FIELD(__base_D_8007C2A0, s32 *, 4) == 0) && (M2C_FIELD(__base_D_8007C2A0, s32 *, 8) == 0) && (M2C_FIELD(__base_D_8007C2A0, s32 *, 0xC) == 0) && (M2C_FIELD(__base_D_8007C2A0, s32 *, 0x14) == 0) && (M2C_FIELD(__base_D_8007C2A0, s32 *, 0x18) == 0) && (M2C_FIELD(__base_D_8007C2A0, s32 *, 0x1C) == 0) && (M2C_FIELD(__base_D_8007C2A0, s32 *, 0x20) == 0)) {
        var_v1 = M2C_FIELD(__base_D_8007C2A0, s32 *, 0x10) == 0;
    }
    M2C_FIELD(__base_D_8007C2A0, s32 *, 0xC) = 0;
    return var_v1;
}
