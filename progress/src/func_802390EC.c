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

M2C_UNK *func_802390CC();                           /* extern */

M2C_UNK *func_802390EC(M2C_UNK *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_UNK *temp_v0;

    temp_v0 = func_802390CC();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK **, 0) = arg0;
        M2C_FIELD(temp_v0, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(arg0, M2C_UNK **, 4);
        *M2C_FIELD(arg0, M2C_UNK **, 4) = temp_v0;
        M2C_FIELD(arg0, M2C_UNK **, 4) = temp_v0;
        M2C_FIELD(temp_v0, s16 *, 0x14) = arg2;
        M2C_FIELD(temp_v0, s32 *, 8) = arg1;
        M2C_FIELD(temp_v0, s32 *, 0x10) = arg3;
        M2C_FIELD(temp_v0, s16 *, 0x16) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x18) = arg4;
    }
    return temp_v0;
}
