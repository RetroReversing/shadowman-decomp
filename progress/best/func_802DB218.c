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

extern int D_8006A4D0;
extern int D_8006A4D4;
extern int D_8006A4D8;
extern int D_8006A4DC;
extern int D_8006A4E0;
extern int D_8006A4E4;
extern int D_8006A4E8;
extern short D_8006A4EC;
extern char D_202520[];

void func_802DB218(f32 arg0) {
    void *temp_v0;

    temp_v0 = ((s32) arg0 * 0x1E) + D_202520;
    D_8006A4D0 = M2C_UNALIGNED32(M2C_FIELD(temp_v0, s32 *, 0));
    D_8006A4D4 = M2C_UNALIGNED32(M2C_FIELD(temp_v0, s32 *, 4));
    D_8006A4D8 = M2C_UNALIGNED32(M2C_FIELD(temp_v0, s32 *, 8));
    D_8006A4DC = M2C_UNALIGNED32(M2C_FIELD(temp_v0, s32 *, 0xC));
    D_8006A4E0 = M2C_UNALIGNED32(M2C_FIELD(temp_v0, s32 *, 0x10));
    D_8006A4E4 = M2C_UNALIGNED32(M2C_FIELD(temp_v0, s32 *, 0x14));
    D_8006A4E8 = M2C_UNALIGNED32(M2C_FIELD(temp_v0, s32 *, 0x18));
    D_8006A4EC = (s16) M2C_FIELD(temp_v0, s16 *, 0x1C);
}
