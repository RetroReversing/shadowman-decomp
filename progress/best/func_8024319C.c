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

s32 func_802456B4(s32, s32);                        /* extern */
extern f32 D_80075580;
extern f32 D_80075584;

s32 func_8024319C(void *arg0) {
    s32 var_v0;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x10);
    if ((!(M2C_FIELD(temp_s0, s32 *, 0) & 8) || (var_v0 = 0, ((func_802456B4((s32) D_80075580, M2C_FIELD(temp_s0, s32 *, 0x3C)) < 0x29) != 0))) && (!(M2C_FIELD(temp_s0, s32 *, 0) & 0x10) || (var_v0 = 0, ((func_802456B4((s32) D_80075584, 0x168 - M2C_FIELD(temp_s0, s32 *, 0x38)) < 0x29) != 0)))) {
        return 1;
    }
    return var_v0;
}
