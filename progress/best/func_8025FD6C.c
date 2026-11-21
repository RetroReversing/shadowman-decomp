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

extern char D_20B3DC[];
extern char D_20B3F0[];
extern char D_800309F0[];
extern u8 D_8007DC06;

s32 *func_8025FD6C(u32 arg0) {
    char *__base_D_20B3DC;

    __base_D_20B3DC = D_20B3DC;
    if (arg0 < 0x14U) {
        return M2C_FIELD(((((*(arg0 + __base_D_20B3DC) * 7) + D_8007DC06) * 4) + D_800309F0), s32 **, 4);
    }
    return D_20B3F0;
}
