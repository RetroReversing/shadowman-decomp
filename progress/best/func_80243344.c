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

s32 func_8024319C();                                /* extern */
s32 func_80243438(s32 *);                           /* extern */
extern s32 D_8002D420;
extern s32 D_8002D424;
extern s32 D_8002D488;
extern s32 D_800458F0;
extern s32 D_80045C40;
extern s32 D_800753E4;
extern void *D_80075510;
extern M2C_UNK D_80075518;
extern s32 D_800755F8;
extern u8 D_8007DB9B;

s32 func_80243344(void) {
    M2C_UNK *__base_D_80075518;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    temp_v0 = func_8024319C();
    var_v0 = 0;
    if (temp_v0 == 1) {
        if (D_800458F0 != 0) {
            if (D_80045C40 & 0x400) {
                return func_80243438(&D_80045C40);
            }
            goto block_15;
        }
        var_v0 = 0;
        if (D_8007DB9B == 0) {
            var_v0 = 0;
            if (D_800755F8 == 0) {
                if (D_800753E4 != 6) {
                    var_v0 = 0;
                    __base_D_80075518 = &D_80075518;
                    if (!(M2C_FIELD(__base_D_80075518, u16 *, 0x1C) & 4)) {
                        var_v0 = 0;
                        if (D_8002D488 == 0) {
                            var_v0 = 0;
                            if (!(D_8002D420 & 0x8000)) {
                                if (M2C_FIELD(D_80075510, s16 *, 0x16) != temp_v0) {
                                    var_v0 = 0;
                                    if (D_8002D424 & 0x400) {
                                        var_v0 = 0;
                                        if ((u32) (M2C_FIELD(__base_D_80075518, u16 *, 4) - 0x76) >= 3U) {
                                            var_s0 = 1;
                                            goto block_15;
                                        }
                                    }
                                } else {
                                    goto block_15;
                                }
                            }
                        }
                    }
                } else {
block_15:
                    var_v0 = var_s0;
                }
            }
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return var_s0;
    }
    return var_v0;
}
